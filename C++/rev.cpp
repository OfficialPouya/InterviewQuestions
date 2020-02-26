#include <iostream>
#include <string>

using namespace std;


int main(){
	string str;
	bool b = true;
	while(b){
		cout << "Write Something:";
		// cin>>str;
		getline(cin, str);
		cout<<"Length of your string:"<<str.length()<<endl;
		for(int x=0; x<=str.length(); ++x){
			cout<<str[str.length()-x];
		}
		cout<<endl;
		string choice;
		cout<<"Do you want to go again (Y/N): ";
		getline(cin,choice);
		if(choice =="no" || choice =="NO" || choice == "n" || choice == "No" || choice == "N"){break;}	
	}
	return 0;
}

