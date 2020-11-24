#include<iostream>
#include<string>
using namespace std;
//Given a string print all the subset of it using recursion.

void print(string str,string curr,int index){
    if(index==str.length()){
	cout<<curr<<" "<<endl;
	return;
    }
    print(str,curr,index+1);
    print(str,curr+str[index],index+1);
}
int main(){
    string str;
    cout<<"Enter String"<<endl;
    cin>>str;
    print(str,"",0);
}
