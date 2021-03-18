#include<iostream>
#include<vector>
using namespace std;

int longest(string str){
	vector<int> prevIndex(26,-1);
	int res = 1, i = 0, maxEnd = 1;
	prevIndex[str[0]-'a'] = 0;
	for(int j = 1; j < str.length(); j++){
		i = j - maxEnd;
		if(prevIndex[str[j]-'a']<i){
			maxEnd = maxEnd + 1;
		}
		else{
			maxEnd = j - prevIndex[str[j]-'a'];
		}
		cout<<"maxEnd: "<<maxEnd<<endl;
		prevIndex[str[j]-'a'] = j;
		res = max(res,maxEnd);
	}
	return res;
}

int main(){
	string str = "aghsa";
	cout<<longest(str)<<endl;
}
