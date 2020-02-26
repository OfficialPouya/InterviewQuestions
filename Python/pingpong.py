# Ping Pong - Write a program that prints the numbers from 1 to 100. 
# But for multiples of three print “Ping” instead of the number and 
# for the multiples of five print “Pong”. For numbers which are multiples 
# of both three and five print “PingPong”.

for x in range(1,101):
	if x%3==0 and x%5==0:
		print("PingPong")
	elif x%3==0:
		print("Ping")
	elif x%5==0:
		print("Pong")
	else:
		print(x)
print()