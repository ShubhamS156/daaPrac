#include<iostream>
#include<stack>
#include<string>
using namespace std;

int bracket(char a){
    if(a=='(' || a == '{' || a=='[' )
        return 1;
    else
     return 0;
}
bool check(string str){
    stack<char> st;
    for(int i=0;i<str.size();i++){
        if(bracket(str[i])){
            st.push(str[i]);
        }
        else{
            if(st.empty()){
                return false;
            }
            else if(matching(st.top(),str[i]) == false){
                return false;
            }
            else{
                st.pop();
            }
        }
    }
    if(st.empty())
        return true;
    return false;
}
