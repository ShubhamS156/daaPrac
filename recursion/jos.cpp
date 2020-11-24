#include<iostream>
using namespace std;

//Josephus problem.
//When recursive call takes place the function counts again from zero
//instead of the next person holding gun.(Take e.x. where n is big k is small)
//so we add k to it ..and we take mod with n of whole to keep the answer 
//in  from 0,n-1

int jos(int n,int k){
    if(n==1)
	return 0;
    return (jos(n-1,k)+k)%n;
}
int main(){
    int n,k;
    cout<<"Enter n and k"<<endl;
    cin>>n>>k;
    cout<<jos(n,k);
}
