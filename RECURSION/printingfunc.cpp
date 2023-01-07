#include <iostream>
using namespace std;

int print(int a[],int i,int high){
	if(i<high){
		cout<<a[i];
		print(a,i+1,high);
	}
	return 0;
}

int main() {
    int a[]={1,2,3,4,5};
    print(a,0,5);
    
	
	return 0;
}
