#include<iostream>
#include<vector>
using namespace std;
int main(){
    /*vector<int> v;
    for(int i=0;i<6;i++){
        int r;
        cin>>r;
        v.push_back(r);
    }
    for(auto i:v){
        cout<<i;
    }*/
    vector<int> v(5);
    for(auto i:v){
        cout<<i<<endl;
    }
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.size()<<" "<<v.capacity()<<endl;

}