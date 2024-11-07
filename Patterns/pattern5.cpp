//Numeric hollow inverted half pyramid
// 1 2 3 4 5 
// 2 3 4 5 
// 3 4 5
// 4 5 
// 5 
//  #include<iostream>
//  using namespace std;
//  int main(){
//     int n; 
//     cin>>n;
//     for(int row=0; row<n; row+=1){
//         //col==row+1 -> starting condition of col
//         //col<=n --> ending condition of col
//         for(int col=row+1; col<=n; col+=1){
//             cout<< col;
//         }
//         cout<<endl;

//     }
//  }

// 1  2 3 4 5
// 2      5
// 3    5
// 4  5
// 5
// hollow condition
// (1).col==row+1
// (2).col==n
// (3).row==0

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //outer loop: row count 
    for(int row=0; row<n; row+=1){
        //inner loop: col count , inner loop started : row+1
        for(int col=row+1; col<=n; col+=1){
            //Hollow conditions
            if(col==row+1 || col==n || row==0){
                cout<< col;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}