#include<iostream>
#include<unordered_set>
using namespace std;

/*
 * To find union of arrays basically find the count of distinct elements in both arrays
 */

int union_count(int arr1[],int n,int arr2[],int m){
    unordered_set<int> o;
    for(int i=0;i<n;i++ ){
        o.insert(arr1[i]);
    }
    for(int j=0;j<m;j++){
        o.insert(arr2[j]);
    }
    return o.size();
}
