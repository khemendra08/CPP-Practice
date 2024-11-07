//Solid Diamond Pattern 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //full pyramid
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
    //inverted full pyramid
    for(int row=0; row<n; row+=1){
        //first inner loop --> printing spaces
        for(int col=0; col<row; col+=1){
            cout<<" ";
        }
        //second inner loop --> printing stars
        for(int col=0; col<n-row; col+=1){
            cout<<"* ";
        }
        cout<<endl;
    }
}