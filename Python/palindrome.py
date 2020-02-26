# Check if Palindrome
# https://www.dictionary.com/browse/nope?s=ts
import requests
from bs4 import BeautifulSoup


def reverse(write): 
  str = "" 
  for i in write: 
    str = i + str
  return str
  
write = input("Write Something:")
print("You wrote:", write)
print("What you wrote backwards is: ", end = "") 
back = (reverse(write)) 
print(back)

page_url="https://www.dictionary.com/browse/"+write+"?s=ts"
page = requests.get(page_url)
page_parse = BeautifulSoup(page.content, 'html.parser')
all_table = page_parse.find(class_="css-7ac8yh e16867sm0")
result = (all_table.get_text())
if("No results found for" in result):
	print("Your original input is not a valid word")
else:
	print(write,"is a valid word or statement")


page_url="https://www.dictionary.com/browse/"+back+"?s=ts"
page = requests.get(page_url)
page_parse = BeautifulSoup(page.content, 'html.parser')
all_table = page_parse.find(class_="css-7ac8yh e16867sm0")
result = (all_table.get_text())
if("No results found for" in result):
	print(write, "is not a Palindrome")
else:
	print(write,"is a Palindrome")
