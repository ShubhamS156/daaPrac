#include<iostream>
#include<string>
using namespace std;

void fill_lps(string &str,int lps[]){
    lps[0]=0;
    int i=1,len=0;
    while(i<str.length()){
        if(str[i] == str[len]){
            lps[i]=len+1;
            len++;
            i++;
        }
        else{
            if(len==0){
                lps[i]=0;
                i++;
            }
            else{
                len=lps[len-1];
            }
        }
    }
    cout<<"LPS formed"<<endl;
    for(int i=0; i<str.length(); i++){
        cout<<lps[i]<<" ";
    }
}
void kmp(string &str, string &pattern){
    int n = str.length(), m = pattern.length();
    int lps[m]; //lps array for pattern;
    fill_lps(pattern,lps);
    cout<<"LPS arr:"<<endl;
    int i=0,j=0;
    while(i<n){
        if(str[i] == pattern[j]){
            i++;
            j++;
        }
        if(j==m){
            cout<<"Found--> "<<(i-j)<<endl;
            cout<<lps[j-1]<<endl;
            j=lps[j-1];
        }
        else if(i<n && str[i] != pattern[j]){
            if(j==0){
                cout<<"2.a"<<endl;
                i++;
            }
            else{
                cout<<"2.b"<<endl;
                j=lps[j-1];
            }
        }
        cout<<"i: "<<i<<" j: "<<j<<endl;
    }
}
int main(){
    string str = "ababcababaad";
    string pattern = "abab";
    kmp(str,pattern);
}
