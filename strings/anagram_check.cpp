#include<iostream>
#include<string>
using namespace std;

/*
 * Alternate:
 * int count[26]={0};
 * for(int i=0;i<str.length();i++){
 *    count[str[i]-97]++;
 *    count[str2[i]-97]--;
 * }
 *check if count[i] = 0 for i in (0,25);
 */
bool check(string str,string str2){
    if(str.length()!=str2.length())
        return false;
    int arr1[26]={0},counter=str.length();
    for(int i=0;i<counter;i++){
        arr1[str[i]-97]++;
    }
    cout<<"Printing arr1:"<<endl;
    for(int i=0;i<26;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<str2.length();i++){
        arr1[str2[i]-97]--;
        if(arr1[str2[i]-97]==0){
            counter--;
        }
    }
    cout<<"Anagram: ";
    if(counter==0)
        return true;
    else{
        cout<<"Counter: "<<counter<<endl;
        return false;
    }
        return false;
}
int main(){
    string str1="ashu";
    string str2="ushs";
    cout<<check(str1,str2)<<endl;
}
