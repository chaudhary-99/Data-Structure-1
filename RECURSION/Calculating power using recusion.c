#include<stdio.h>

int powf(int num,int pown){
        if(pown==0){
        	return 1;
		}
		else{
	    	return num*powf(num,pown-1);
		}	
}
int main(){
	int num=4,pown=2;
	printf("%d  ",powf(num,pown));
	
	return 0;
}