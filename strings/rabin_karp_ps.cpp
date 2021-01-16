#include<iostream>
#include<string>
#include<math.h>
using namespace std;

/* In this algo we use rolling hash to find out hash of each window and then
 * if the hash matches to that of pattern we start comparing.
 * str=a b d a b c b a b c , patt= a b c
 */
void find(string &str, string &patt){
    int n=str.length();
    int m=patt.length();
    int hash_patt=0,hash_t=0,d=5;
    int q=5,h;
    for(int i=1;i<=m;i++){
        h=(h*d)%q;
    }
    for(int i=0;i<m;i++){
        hash_patt = (hash_patt*d + patt[i]) % q;
        hash_t    = (hash_t*d + str[i]) % q;
    } 
    cout<<"Hash for patt==> "<<hash_patt<<endl;
    cout<<"Hash for first window==> "<<hash_t<<endl;
    for(int i=0;i<n-m+1;i++){
        int j;
        if(hash_t==hash_patt){ 
           //hash matched so begin comparision.
            for(j=0;j<m;j++){
                if(patt[j]!=str[i+j]){
                    break;
                }
            }
            if(j==m){
               cout<<"Found at index--> "<<i<<endl;
            }
        }
        hash_t = (d*(hash_t - h*str[i]) + str[i+m]) % q;

       if(hash_t<0)
           hash_t+=q;
    }
}
int main(){
    string str="geeksforgeeks";
    string patt="geeks";
    find(str,patt);
}
