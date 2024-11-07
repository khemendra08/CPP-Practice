//inverted full pyramid 
#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    //outer loop --> row  count 
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