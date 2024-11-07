//fancy pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int row=0; row<n; row+=1){
        for(int col=0; col<row+1; col+=1){
            cout<<row+1;
            //If col is not equal to row, it means you’re not at the last number of the row, so you should print an asterisk (*) after the number.
            if(col!=row){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    for(int row=0; row<n; row+=1){
        for(int col=0; col<n-row; col+=1){
            cout<<n-row;
            if(col!=n-row-1){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}