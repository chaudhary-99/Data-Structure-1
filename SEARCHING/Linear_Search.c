#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[5]={3,4,5,6,7};
    int flag=0;
    for(int i=0;i<5;i++){
        if(arr[i]==n){
            printf("Index of desired value is %d",i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Value not found");
    }
    return 0;
}