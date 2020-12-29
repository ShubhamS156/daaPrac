#include<iostream>
#include<utility>
#include<algorithm>
#include<fstream>
using namespace std;

/*
 * Merge various overlapping intervals.
 */
bool cmp(pair<int,int> p1,pair<int,int> p2){
    return p1.first<p2.first;
}
bool check_overlap(int fend,int sstart){
    if(fend>=sstart)
	return true;
    else 
	return false;
}
void merge_overlaps(pair<int,int> *arr,int n,pair<int,int> *res){
    sort(arr,arr+n,cmp);
    //sorting array according to start time.
    /* we'll maintain a pointer Last which points to the last 
     * interval which was discrete. That way after sorting the
     * intervals according to their start time the only possible 
     * interval for the current to merge with is the last discrete
     * interval.
     */
    res[0].first=arr[0].first;
    res[0].second=arr[0].second;
    pair<int,int> *last=res;
    for(int i=1;i<n;i++){
	if(check_overlap(last->second,arr[i].first)){
	    last->second=max(last->second,arr[i].second);
	}
	else{
	    last++;
	    last->first=arr[i].first;
	    last->second=arr[i].second;
	}
    }
}
int main(){
    ifstream in("in.txt");
    if(in.is_open()){
	int x,n;
	in>>x;
	n=x/2;
        pair<int,int> arr[n],res[n];
	for(int i=0;i<n;i++){
	    in>>arr[i].first;
	    in>>arr[i].second;
	}
	cout<<"Intervals are:"<<endl;
	for(int i=0;i<n;i++){
	    cout<<"{"<<arr[i].first<<","<<arr[i].second<<"}"<<" ";
	}
	cout<<endl;
	cout<<"After merging"<<endl;
	merge_overlaps(arr,n,res);
	for(int i=0;i<n;i++){
	    cout<<"{"<<res[i].first<<","<<res[i].second<<"}"<<" ";
    }
  }
}
