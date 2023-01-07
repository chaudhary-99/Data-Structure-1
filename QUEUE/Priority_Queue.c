#include<stdio.h>
int n;
int array_insert(int *a,int i,int x){
   n++;
    for(int j=n-1;j>i;j--){
        *(a+j)=*(a+j-1);
    }
    *(a+i)=x;
}
int enqueue(int* a,int x){
    int i=0;
    
    printf("\n");
    while((i<n)&&(x>=*(a+i))){
        i++;
    }
    array_insert(a,i,x);
}
int dequeue(int* a){
    int x;
    x=*(a+0);
    for(int i=0;i<n;i++){
        *(a+i)=*(a+i+1);
    }
    n--;
    return x;

}

int main(){
    int x;
    int a[100]={1,3,5,7,10,15};
    n=6;
    enqueue(a,4);
    
    enqueue(a,6);
    enqueue(a,2);
    enqueue(a,3);
    enqueue(a,8);
    int del=dequeue(a);


    for(int i=0;i<n;i++){
        printf("%d ",*(a+i));
    }

    return 0;
}