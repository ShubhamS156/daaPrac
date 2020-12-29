#include<iostream>
#include<cstring>
#include"printArr.h"
using namespace std;
/*------------------------*/
/* merge 2 sorted arr    */
/* to make one sorted arr*/
/*-----------------------*/
int *merge_sorted(int *arr1,int *arr2,int n,int m,int *res){
   memset(res,0,n+m);
   int i=0,j=0,k=0;
   while(i<n && j<m){
       if(arr1[i]<=arr2[j]){
	  res[k++]=arr1[i++]; 
       }
       else{
	   res[k++]=arr2[j++];
       }
   }
   while(i<n){
	res[k++]=arr1[i++];
   }
   while(j<m){
       res[k++]=arr2[j++];
   }
   return res;
}
int main(){
    int arr1[]={1,3,5,7,9};
    int arr2[]={0,2,4,6,8};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    int res[n+m];
    merge_sorted(arr1,arr2,n,m,res);
    cout<<"Res: "<<endl;
    printArr(res,n+m);
}
