#include<bits/stdc++.h>

using namespace std;


void insertion_sort(int a[],int n);

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		
		cout<<"before insertion\n";
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		insertion_sort(a,n);
		cout<<"after insertion sort\n";
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";	
		}
		cout<<endl;
	}
	
	return 0;
}

void insertion_sort(int a[],int n){
	// sort list from left to right 1 by 1
	for(int i=1;i<n;i++){
		for(int j=i-1;j>=0;j--){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			else{
				break;
			}
		}
	}
}
