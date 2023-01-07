#include <iostream>
using namespace std;

int partition(int a[],int low,int high){
	srand(time(0));
	int r=rand()%10+
	int t=a[low];
	a[low]=a[r];
	a[r]=t;
	int i=low;
	int j=high+1;
	int pivot=a[low];
	do{
		do{
			i++;
		}while(a[i]<pivot);
		
		do{
		   j--;	
		}while(a[j]>pivot);
		if(i<j){
			
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		
	}while(i<j);
	
	int t;
	t=a[low];
	a[low]=a[j];
	a[j]=t;

	return j;
}
void quick_sort(int a[],int low,int high){
	if(low<high){
		int j=partition(a,low,high);
		quick_sort(a,low,j-1);
		quick_sort(a,j+1,high);
	}
	
}


int main() {
    int a[6]={5,3,6,2,9,1};
    quick_sort(a,0,5);
	for(int i=0;i<6;i++){
		cout<<a[i]<<endl;
	}
	
	return 0;
}
