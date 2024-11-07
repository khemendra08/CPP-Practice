//Numeric hollow half pyramid 
// 1
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5
//no printing condition 
// (1).col==0
// (2).col==row
// (3).row==n-1

#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    for(int row=0; row<n; row+=1){
        for(int col=0; col<row+1; col+=1){
            if(col==0 || col==row || row==n-1){
                cout<<col+1;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

        
    }
}