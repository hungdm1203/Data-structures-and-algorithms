#include<bits/stdc++.h>
using namespace std;
int a[1001],b[1001],n;
void solve(){
	int check=1;
	for(int i=1;i<n;i++){
		if(abs(a[i]-a[i+1])==1){
			check=0;
			break;
		}
	}
	if(check){
		for(int i=1;i<=n;i++) cout<<a[i];
		cout<<endl;
	}
}
void Try(int i){
	for(int j=1;j<=n;j++){
		if(!b[j]){
			a[i]=j;
			b[j]=1;
			if(i==n) solve(); else Try(i+1);
			b[j]=0;
		}
	}
}
main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		memset(b,0,sizeof(b));
		Try(1);
	}
}
