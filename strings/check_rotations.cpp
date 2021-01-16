#include<iostream>
#include<string>
using namespace std;
/*
 * Given two strings check if one can be formed from another by 
 * rotating it clockwise or acw
 */

bool check(string &str1,string &str2){
    //we concat one of the string to itself and search for the second
    //in the concactednated.
    if((str1+str1).find(str2)!=string::npos){
        return true;
    }
    else {
        return false;
    }
}
int main(){
    string str1="ashu";
    string str2="shua";
    cout<<"Rotation of each other? "<<check(str1,str2)<<endl;
}
