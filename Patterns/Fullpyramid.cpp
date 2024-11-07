//full pyramid
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //outer loop --> row count 
    for(int row=0; row<n; row+=1){
        //inner loop --> col count
        //first inner loop for printing spaces
        for(int col=0; col<n-row-1; col+=1){
            cout<<" ";
        }
        //seconf inner loop is for printing stars
        for(int col=0; col<row+1; col+=1){
            cout<<"* ";
        }
        cout<<endl;
    }
}