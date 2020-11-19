#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t-->0){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int lp=0,rp=0;
	    while(rp<n){
	        if(a[rp]==0){
	            rp++;
	        }
	        else{
	            int temp=a[lp];
	            a[lp]=a[rp];
	            a[rp]=temp;
	            lp++;
	            rp++;
	        }
	    }
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
//Contributed by Harshavardhan Mudiminchi
