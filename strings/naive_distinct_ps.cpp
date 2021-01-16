#include<iostream>
#include<string>
using namespace std;

/*
 * Given that the pattern only has distinct characters.
 * Suppose str= a b b c d d 
 *         pat= a b c
 * Here the first 2 chars match then c doesnt match with b. As the chars in patt 
 * are different we can say start matching from the point of mismatch.
 */

void find(string &str, string &patt){
    int n=str.length();
    int m=patt.length();
    int i=0,j=0;
    while(i<(n-m+1)){
        for(j=0;j<m;j++){
            if(str[i+j]!=patt[j]){
                break;
            }
        }
        if(j==m){
            cout<<i<<" ";
        }

        if(j==0){
            i++;
        }
        else{
            i+=j;
        }
    }
}
int main(){
    string str="abcabcdabcd";
    string patt="abcd";
    find(str,patt);
}
