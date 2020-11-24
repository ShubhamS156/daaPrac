#include<iostream>
#include<math.h>

#include<string>

using  namespace std;

void set(string str){
    int n=str.length(); //number of characters.
    int counter=pow(2,n);//number of subsets.
    for(int i=0;i<counter;i++){
	for(int j=0;j<n;j++){
	    if((i&(1<<j))!=0)
		cout<<str[j];
	}
	cout<<endl;
    } 

}
int main(){
    string str;
    cin>>str;
    set(str);
}
