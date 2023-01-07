#include<stdio.h>
int Index_Sequential_Search(int arr[],int m,int idx[],int n,int s){
    int i=0;
    while(i<n){
        if(arr[idx[i]]<s){
            i++;
        }
        else if(arr[idx[i]]==s){
            return idx[i];
        }
        else{
            for(int j=0;j<idx[i];j++){
                if(arr[j]==s){
                    return j;
                }
            }
        }
        i++;
    }
    printf("value not found\n");
}
int main(){
    int arr[10]={3,5,6,7,8,9,10,11,14,19};
    int max=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int idx[max];
    int i=0,c=4;
    while(c<max){
        if(c<=max){
            idx[i]=c;
            c=c+4;
        }
        else{
            break;
        }
        i++;
    }
    if(idx[i-1]!=max){
        idx[i]=max;
    }
    printf("Value to be searched\n");
    int s;
    scanf("%d",&s);
    int result=Index_Sequential_Search(arr,10,idx,i+1,s);
    printf("%d\n",result);
    return 0;
}