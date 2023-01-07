#include<bits\stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int sum=1;
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
                sum=sum+i;
        }

    }
    if(sum==x){
        cout<<"Perfect Number\n";
    }
    else{
         cout<<"Not A Perfect Number\n";
    }
    return 0;
}
