#include<stdio.h>
int main(){
    int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int b[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            b[i][j]=a[j][i];
        }
    }
    for(int c=0;c<4;c++){
        int r=0;
        int j=3;
        while(r<j){
            int t=b[r][c];
            b[r][c]=b[j][c];
            b[j][c]=t;
            j--;
            r++;
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}