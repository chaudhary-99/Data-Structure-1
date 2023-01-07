#include<iostream>
using namespace std;
int bubble_sort(int a[],int n){
	for(int i=1;i<=n-1;i++){
		for(int j=0;j<=n-1-i;j++){
			if(a[j]>a[j+1]){
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	return 0;
}
int main(){
	int a[6]={6,5,2,3,8,9};
	bubble_sort(a,6);
	for(int i=0;i<6;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}