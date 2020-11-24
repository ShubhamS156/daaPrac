#include<iostream>
using namespace std;

//if threre is a rod given of size n and 3 lengths a, b, c. Find the max
//number of pieces that rod can be cut into such that all pieces are in set
//a,b,c.
int max(int a,int b,int c){
    if(a>b && a>c)
	return c;
    else if(b>a && b>c)
	return b;
    else
	return c;
}
int cut(int n,int a,int b,int c){
    if(n==0)
	return 0;
    else if(n<0)
	return -1;

    int res=max(cut(n-a,a,b,c),cut(n-b,a,b,c),cut(n-c,a,b,c));
    if(res==-1)
	return -1;
    return res+1;
}
int main(){
    int n,a,b,c;
    cout<<"enter number n,a,b,c"<<endl;
    cin>>n>>a>>b>>c;
    cout<<cut(n,a,b,c)<<endl;
}
