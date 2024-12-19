//practice array 
//1. init of an array
//2.update an array
//3.itrate over the array
//4.size of an array
//5.concept: whenever you pass an array in function  --> then it will be pass  by refrence always its means --> you have pased the 
//addresss of that array .
//pass by refrence mein aap actual array mein update kr rahe ho.
//concept: whenever you pass an array inside the function then you have to pass the size of array as well.
//function(arr,size);

#include<iostream>
using namespace std;

// void PrintArray(int arr[], int size){
//     for(int i=0;i<size; i++){
//         cout<<arr[i] <<" ";
//     }
//     cout<<endl;
// }

// void inc(int arr[], int size){
//     arr[0] = arr[0]+10;
//     PrintArray(arr,size);
// }

// bool find(arr[], size, key){
//     //Linear search Algorithm
//     for(int i=0; i<size; i++){
//         int arr[];
//         if(arr[i]==key)
//             return true;
//             break;
        
//     }
//     //not present 
//     return false;
// }




int main(){

    // int arr[] = {1,2};
    // int size = 2;
    // inc(arr,size);
    // PrintArray(arr,size);


    // // 1.init of an array
    // int a[10] = {1,2,3};

    // // 2.update an array

    // a[8] = 15;
    // cout<<a[8]<<endl;

    // // 3.size of an array
    // cout<<sizeof(a)<<endl;

    // int n = sizeof(a)/sizeof(int);

    // cout<< n <<endl;

    // // 4.taking input from user in an array
    // for(int i=0; i<3; i++){
    //     cin>>a[i];
    // }

    // // 5.print an array
    // for(int i=0; i<10; i++){
    //     cout<<a[i]<<endl;
    // }
    //Linear search in arrays
   //   int n, key;
   //   cin>>n;
   //  //init of an array with zeros
   //   int a[100] = {0};

   //   //taling input from the user 
   //   for(int i=0; i<n; i++){
   //      cin>>a[i];
   //   }
   //   cout<<"Enter the element you want to search :" ;
   //   cin>>key;

   //   //Linera search algorithm
   //   for(int i=0; i<=n-1; i++){
   //      if(a[i]==key){
   //          cout<< key<< "founf at "<<i<<endl;
   //          break;
   //      }
   //   }
   //   int i;
   //   if(a[i]==n){
   //      cout<<"not found";
   //   }
   //    //


   //array declear
   // int arr[10];
   // //showing base address in compailer 
   // cout<<arr<<endl;
   // cout<<&arr<<endl;

   
   // cout<<"Array created successfully "<<endl;

   //initilazitaion of an array
   //static array
   // int arr[] = {1,2,3,4,5};
   // int brr[5] = {23,45,67,98,21};
   // int crr[10] = {1,2,3,4,5};
   // cout<<"Array initialize successfully "<<endl;

   // int arr[] = {1,4,8,9,3};12

   // cout<<arr[4]<<endl;

   //Prinrting all values of ann array
   // for(int i= 0; i<5; i++){
   //    cout<<arr[i] <<", ";
   // }

   // int arr[10];
   // cout<<"enter the input values in an array " <<endl;

   // for(int i=0; i<10; i++){
   //    cin>>arr[i];

   // }
   // //printing all thr values in an array
   // cout<<"Printing values in an arrary "<<endl;
   // for(int i=0; i<10; i++){
   //    cout<<arr[i]<<", ";
   // }

   //Question: taling 5 element in the i/p and print theri double

   // int arr[5];
   // for(int i=0; i<5; i++){
   //    cin>>arr[i];
   // }

   // cout<<"printing the double array; "<<endl;


   // for(int i=0; i<5; i++){
   //    cout<<2* arr[i]<<endl;

   // }

   // int arr[5] = {1,3,5,7,9};

   // //traverse through the array
   // for(int i=0; i<5; i++){
   //    arr[i] = 1;
   // }
   // //print array
   // for(int i=0; i<5; i++){
   //    cout<<arr[i]<<", ";
   // }

   // int arr[10] = {1,2,3};

   // for(int i=0; i<10; i++){
   //    cout<< arr[i] <<" ";
   // }

   //this will gives the garbage value 
   // int arr[10];

   // for(int i=0; i<10; i++){
   //    cout<<arr[i] <<" ";
   // }
   
   //this will initialise all the array values with zero

   // int arr[10] = {0};

   // for(int i=0; i<10; i++){
   //    cout<<arr[i]<<" ";
   // }

   //Question : what is memset function

   //imp concept: linear search 
//    int arr[] = {21,44,56,71,23,89,98};
//    int size = 8;
//    int key;
//    cin>>key;

//    bool flag = 0;
//    // 0 ->not found 
//    // 1 -> found 

//    //Linear Search 
//    for(int i=0; i<8; i++){
//     if(arr[i]==key){
//         //found
//         flag = 1;
//         break;
//     }
//    }
//    if(flag)
//     cout<<"Present "<<endl;
//     else
//     cout<<"Absent "<<endl;

// int arr[] = {1,2,3,4,5};
// int size = 5;
// int key;
// cin>>key;

// if(find(arr,size,key)){
//     cout<<"Found "<<endl;
// }
// else{
//     cout<<"Not found "<<endl;
// }

//counting number od ones and zeros in an array
// int arr[] = {0,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,1,0,1};
// int size = 19;

// int numZero = 0;
// int numOne = 1;

// for(int i=0; i<size; i++){
//     //if zero found , increment numzero
//     if(arr[i]==0){
//         numZero++;
//     }
//     //if one  found , increment numone
//     if(arr[i]==1){
//         numOne++;
//     }
// }
// cout<<" number of zeros "<< numZero<<endl;
// cout<<" number of ones "<<numOne<<endl;

//count number of twos 

// int arr[] = {1,4,5,6,7,2,3,2,4,5,2,0,2,4,2,2,2,5,2};
// int size = 19;
// int count = 0;
// for(int i=0; i<size;i++){
//     if(arr[i]==2){
//         count++;
//     }
// }
// cout<<count<<endl;

//Question : find out maximum no in an array
// int arr[]= {1,5,9,45,67,897,33,56,99,100};
// int size = 10;

//initialise maxi variable with the  mimimum possible integer value 
// int maxi = INT_MIN; 
// int mini = INT_MAX;
// for(int i=0; i<size; i++){
//     if(arr[i]>maxi){
//         //found a number greater than maxi,  update the maxi   
//     maxi = arr[i];
//     }
  
// }

// for(int i=0; i<size; i++){
//     if(arr[i]<mini){
//         mini = arr[i];
//     }
// }
// cout<<" mminimum  no is "<< mini <<endl;
   
//Question : Extream Print in an Array--> Two pointers approach 
// 
    
    
// int arr[] = {10,20,30,40,50,60,70,80};

// int size = 8;

// int start = 0;
// int end = size -1;

// while(start<=end){
//     if(start>end)
//     break; 
//     //if(start==end )--> this will execute in the case of odd  
//     if(start==end){
//         cout<<arr[start]<<" ";
//     }
//     else{
//         cout<< arr[start] << " ";
//         cout<< arr[end] << " ";
//     }


//     start++;
//     end--;

//Question: Reverse an Array
// int arr[] = {10,20,30,40,50,60,70,80};
// int size = 8;

// int start = 0;
// int end = size-1;

// while(start<=end){

//     //step 1.
//     swap(arr[start],arr[end]);
//     //step 2.
//     start++;
//     //step 3. 
//     end--;
// }
// //printing an Array
// for(int i=0; i<size; i++){
//     cout<<arr[i]<<" ";
// }










    return 0;
}