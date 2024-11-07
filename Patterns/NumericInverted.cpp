//numeric invrted half pyramid
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //outer loop --> row count 
    for(int row=0; row<n; row+=1){
        //inner loop --> col count 
        for(int col=0; col<n-row; col+=1){
            cout<< col+1;
        }
        cout<<endl;
    }
}