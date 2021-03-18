#include<iostream>
#include<string>
using namespace std;

void construct(int* lps, string str){
    int s = 0;
    lps[0] = 0;
    for(int i = 1; i < str.size(); i++){
        if(lps[i-1]==0){
            cout<<"lps[i-1]=0"<<endl;
            if( str[i] == str[s] ){
                cout<<str[i]<<"="<<str[s]<<" ";
                lps[i] = 1;
                cout<<lps[i]<<endl;
            }
            else{
                cout<<str[i]<<"!="<<str[s]<<" ";
                lps[i] = 0;
                cout<<lps[i]<<endl;
            }
        }
        else{
            cout<<"lps[i-1] "<<lps[i-1]<<endl;
            s = lps[i-1];
            if( str[i] == str[s] ){
                cout<<str[i]<<"="<<str[s]<<" ";
                lps[i] = lps[i-1] + 1;
                cout<<lps[i]<<endl;
            }
            else{
                cout<<str[i]<<"!="<<str[s]<<" ";
                lps[i] = 0;
                cout<<"0"<<endl;              //galat
            }
        }
    }
}
int main(){
    string str = "aaabaaaac";
    int n = str.length();
    int lps[n];
    construct(lps,str);
    for(int i = 0; i < str.length(); i++){
        cout<<lps[i]<<" ";
    }
    cout<<endl;
}
