// Fizz Buzz - Write a program that prints the numbers from 1 to 100. 
// But for multiples of three print “Fizz” instead of the number and 
// for the multiples of five print “Buzz”. For numbers which are multiples 
// of both three and five print “FizzBuzz”.

#include <iostream>
#include <string>

using namespace std;

int main(){

for(int x=1; x<101; ++x){
	if(x%3==0 && x%5==0){cout<<"FizzBuzz"<<endl;}
	else if(x%3==0){cout<<"Fizz"<<endl;}
	else if(x%5==0){cout<<"Buzz"<<endl;}
	else{cout<<x<<endl;}
}

return 0;
}