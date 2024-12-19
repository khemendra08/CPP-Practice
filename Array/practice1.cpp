//linear search in array

#include<iostream>
using namespace std;

// bool find(int arr[], int size, int key){
//     //linear search algo
//     for(int i; i<size; i++){
//         if(arr[i]==key)
//         return true;
//     }
//     //not present 
//     return false;
// }
//function to perform linear search 
int linearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
         if(arr[i]==key){
        return i;//return index of thee key
        }

    }
    return -1;//key not found

}


int main(){
    // int n, key;
    // cin>>n;

    // int arr[100];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // //ask for element you want to search 
    // cout<<"Enter the element you want to search:  ";
    // cin>>key;

    // //find out the index of that element by traversing the array
    // //Linear search algorithm 
    // for(int i=0; i<n-1; i++){
    //     if(arr[i]==key){
    //       cout<< key << " fount at "<<i<<"index: ";
    //       break;
    //     }
    // }
    // int i;
    // if(i==n){
    //     cout<<key<<"is not present "<<endl;
    // }

    //method 2;
    // int arr[] = {11,21,34,43,45,54,55,67,76,77};
    // int size = 10;
    // int key;
    // cin>>key;

    // bool flag = 0;
    //0->not found
    //1-> found

    //linear search algo
    // for(int i=0; i<10;i++){
    //     if(arr[i]==key){
    //         //found 
    //         flag = 1;
    //         break;

    //     }
    // }
    // if(flag)
    //     cout<<"present: "<<endl;
    //     else
    //     cout<<"Absent: "<<endl;

    //method 3; using function
    // int arr[5] = {1,12,34,54,56};
    // int size = 5;
    // cout<<" Enter the key to find: "<<endl;
    // int key;
    // cin>>key;
    // if(find(arr,size,key)){
    //     cout<<"Found: "<<endl;
    // }
    // else{
    //     cout<<"not found: "<<endl;
    // }
    

    int n,key;
    //input size of array
    cout<< " Enter the number of element in the array: ";
    cin>>n;
    int arr[n];
    //input element of the array
    cout<< "Enter the element of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //input the key to search for
    cout<< "Enter the element to search for: ";
    cin>>key;

    //perform linear search 
    int result = linearSearch(arr, n, key);//Call Linear Search Function
    //output the result
    if(result!= -1){
        cout<< "Element found at position: "<<result+1<<endl;

    }else{
        cout<< "Element not found in the array: "<<endl;
    }

    

    return 0;
}