//Flipped solid diamond pattern 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //half pyramid
    for(int row=0; row<n; row+=1){
        for(int col=0; col<n-row; col+=1){
            cout<<"*";
        }
        //full pyramid with space 
        for(int col=0; col<2*row+1; col+=1){
            cout<<" ";
        }
        //half pyramid
         for(int col=0; col<n-row; col+=1){
            cout<<"*";
        }
        cout<<endl;

    }
    //inverted half pyramid
    for(int row=0; row<n; row+=1){
        for(int col=0; col<row+1; col+=1){
            cout<<"*";
        }
        //inverted full pyramid with spaces
        for(int col=0; col<2*n-2*row-1; col+=1){
            cout<<" ";
        }
        // inverted half pyramid
         for(int col=0; col<row+1; col+=1){
            cout<<"*";
        }
        cout<<endl;

    }

}