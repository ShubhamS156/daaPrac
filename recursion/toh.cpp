#include<iostream>
using namespace std;

//Tower of Hanoi

void toh(int n,char start,char aux,char end,int *counter){
    if(n==0)
	return;
    toh(n-1,start,end,aux,counter);
    cout<<*counter<<". Move disc "<<n<<" from "<<start<<" to "<<end<<endl;
    (*counter)++;
    toh(n-1,aux,start,end,counter);
}
int main(){
    int n;
    char a='a',b='b',c='c';
    cout<<"Enter n"<<endl;
    cin>>n;
    int count=1;
    toh(n,a,b,c,&count);
}
