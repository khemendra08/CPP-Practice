#include<iostream>
using namespace std;
int main(){
    // //declare 2D array
    // int arr[3][3];

    // //initialisation 
    // int brr[3][3] = {{1,2,3},{4,5,6},{2,5,8}};
    // cout<<brr[2][2]<<endl;

    // //row wise print
    // //outer loop
    // for(int i=0; i<3; i++){
    //     //for every row we need to print value in each column
    //     for(int j=0; j<3; j++){
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // //column wise printing
    // cout<<" Column wise printing "<<endl<<endl;

    // for(int i=0; i<3; i++){
    //     //for every row we need to print value in each column
    //     for(int j=0; j<3; j++){
    //         cout<<brr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

    int arr[3][3];
    int rows = 3;
    int cols = 3;

    // //row wise input
    // for(int i = 0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cin>>arr[i][j];
    //     }

    // }
    // cout<<"Printing row wise "<<endl;

    // for(int i = 0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cout<< arr[i][j]<<" ";
    //     }
    //     cout<<endl;


    // }

    //col wise input
    for(int i = 0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[j][i];
        }

    }
    cout<<"Printing col wise "<<endl;

    for(int i = 0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<< arr[j][i]<<" ";
        }
        cout<<endl;
        

    }






    return 0;
}