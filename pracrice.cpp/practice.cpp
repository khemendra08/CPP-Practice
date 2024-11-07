// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//     cin>>n;
//     // int k=n;
    // for(int row=0; row<n; row+=1){
    //     int c=1;
    //     for(int col=0; col<k; col++){
    //         if(col<n-row-1){
    //             cout<<" ";
    //         }
    //         else if(col<=n-1){ 
    //             cout<< c;
              
    //           c++;
    //         }
    //         else if(col==n){
    //             c=c-2;
    //             cout<< c;
    //             c--;
    //         }
    //         else{
    //             cout<< c;
    //             c--;
    //         }
    //     }
    //     k++;
    //     cout<<endl;
    // } 
    // 


    


    
// #include<iostream>
// using namespace std;
// int main(){
//     // int arr[500];
//     // int n;
//     // cout<<"How many number you want to add in array"<<endl;
//     // cin>>n;
//     // cout<<"Enter the number "<<endl;
//     // for(int i=0; i<n; i++){
//     //     cin>> arr[i];
//     // }
//     // cout<<"Double ";
//     // for(int i=0; i<n; i++){
//     //     cout<< 2*arr[i]<<" ";

//     // }
    
//     return 0;

// }int arr[5] = {1,3,5,7,9};
//     for(int i=0; i<5; i++){
//         arr[i]=1;
//     }
//     for(int i=0; i<5; i++){
//         cout<< arr[i]<<" ";
//     }


// #example(1)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//     int size=8;
//     int key=9;

//     bool flag=0;
//     // 0 -> not founf 
//     // 1 -> founf

//     // linear search
//     for(int i=0; i<size; i++){
//         if(arr[i]==key){
//             //founf 
//             flag = 1;
//             break;

//         }
//     }
//     if(flag){
//         cout<<"Present" << endl;
//     }
//     else{
//         cout<<"Absent" <<endl;
//     }
//     return 0;
// }

// example2 --> count 0's and 1's in array
#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,0,0,1,0,1,1,0,1,0,1,0,0,0,1};
    int size=16;
    int numZero=0;
    int numSize=1;
    for(int i=0; i<size; i++){
        
            numZero++;
        }
        if(arr[i]==1){
            numOne++;
        }

    }
    cout<<"Nuber of zeros "<<numZero<<endl;
    cout<<"Number of ones "<<numOne<<endl;


}