#include<iostream>
#include<vector>
#include<string>
using namespace std;

void util(string str,vector<string> &ans,int index,string curr){
    if(index==str.length()){
	ans.push_back(curr);
	return;
    }
    util(str,ans,index+1,curr);
    util(str,ans,index+1,curr+str[index]);
}
