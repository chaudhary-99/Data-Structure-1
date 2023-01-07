#include<stdio.h>
int Binary_Search(int arr[],int low,int high,int s){
    int mid=(low+high)/2;
    if(arr[mid]==s){
        return mid;
    }
    else{
        if(arr[mid]>s){
           Binary_Search(arr,low,mid-1,s);
        }
        else{
           Binary_Search(arr,mid+1,high,s);
        }
    }
}
int main(){
       int arr[10]={3,5,6,7,8,9,10,11,14,60};  
       int s;
       scanf("%d",&s);
       int r=Binary_Search(arr,0,10,s);   
       printf("%d",r);       
    return 0;
}