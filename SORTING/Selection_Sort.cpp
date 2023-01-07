#include<iostream>
using namespace std;
int selection_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int mid=i;
		for(int j=i+1;j<=n-1;j++){
			if(a[mid]>a[j]){
				int t=a[mid];
				a[mid]=a[j];
				a[j]=t;
			}
		}
	}
	return 0;
}
int main(){
	int a[6]={6,5,2,3,8,9};
	selection_sort(a,6);
	for(int i=0;i<6;i++){
		cout<<a[i]<<" ";
	}
    return 0;
}
