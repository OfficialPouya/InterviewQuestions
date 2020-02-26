# Reverse a String
# Enter a string and the program will
# reverse it and print it out.
while(True):
	write = input("Write Something:")
	print("You wrote:", write)
	length=len(write)
	print("Number of characters you entered:", length)
	print("What you wrote backwards is:", end = "")
	for x in range(length):
		print(write[length-1-x], end = "")	
	print("\n")
	choice = input("Type Another one Y/N:")
	if(choice == "n" or choice == "no" or choice == "N" or choice == "No" or choice == "NO"):
		break
	x=0

