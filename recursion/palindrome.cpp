#include<iostream>
#include<string>
using namespace std;

//check if a given string is palindrom or not.

bool check(string &s,int lo,int hi){
    if(lo>hi)
	return true;
    if(s[lo]!=s[hi])
	return false;
    else
	return check(s,++lo,--hi);
}
int main(){
    string str;
    puts("Enter string to check:");
    cin>>str;
    cout<<check(str,0,str.length()-1)<<endl;
}
