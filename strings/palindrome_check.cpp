#include<iostream>
#include<string>
using namespace std;

bool check(string str){
	int n=str.length();
	int i=0,j=n-1;
	while(i<=j){
		if(str[i]!=str[j]){
			return false;
		}
		else{
			i++;
			j--;
		}
	}
	return true;
}
int main(){
    string str="acecar";
    cout<<"Palindrome: "<<check(str)<<endl;
}
