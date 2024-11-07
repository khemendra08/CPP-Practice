//solid rectangle

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //outer loop --> Row count
    for(int row=0; row<n; row+=1){
        //Inner loop --> col count
        for(int col=0; col<n; col+=1){
            cout<<"* ";
        }
        cout<<endl;

    }
}