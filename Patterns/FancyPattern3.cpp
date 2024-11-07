#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    //outer loop for rows
    for(int row=0; row<n; row+=1){
        //first inner loop: prints letter in increasing order
        for(int col=0; col<row+1; col+=1){
            int ans = col+1;//ans is the currunt non in sequence
            char ch = ans+'A'-1;// convert a number into letter
            cout<< ch;
        }
        //second inner loop: print letter in decreasing order
        for(int col=row; col>=1; col-=1){
            int ans = col;// ans is thr currunt number in reverse sequence
            char ch = ans+'A'-1//       convert a number into a letter
            ;
            cout<<ch;
        }
        cout<<endl;
    }
    
}

