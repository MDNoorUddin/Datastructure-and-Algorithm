#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[],int n);

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		cout<<"before selection sort\n";
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		selection_sort(a,n);	
		cout<<"after selection sort\n";
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

void selection_sort(int a[], int n){
	// selection sort
	// first smallest element and place it on first position, then find 2nd smallest element and vice versaq
	for(int i=0;i<n;i++){
		int mn = 100000;
		int k=0;
		for(int j=i;j<n;j++){
				if(a[j]<mn){
					mn=a[j];
					k=j;
				}
		}
		swap(a[i],a[k]);
	}
	return;
}
