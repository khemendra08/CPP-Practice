//Linear search in an array --> Linear search is an algorithm that helps us to find a particular element inside an array

#include<iostream>
using namespace std;
// bool find(int arr[], int size, int key) {

// 	//linear search

// 	for(int i=0; i<size; i++) {
// 		if(arr[i] == key) 
// 			return true;
// 	}

// 	//not present
// 	return false;
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

    // int a[1000];
    // for(int i=0; i<n; i++){
    //     cin>>a[i];
    // }
    // //Ask for the element we want to search
    // cout<<"Enter the element you want to search : ";
    // cin>>key;

    // //Find out the index of that element by traversing the array
    // //Linera Search Algorithm
    // for(int i=0; i<=n-1; i++){
    //     if(a[i]==key){
    //         cout<<key<<" found at "<<i<<"index ";
    //         break;
    //     }
    // }
    // int i;
    // if(i==n){
    //     cout<<key<<" is not present"<<endl;
    // }

    //Linear search method 2.
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

//linear search method 3: using function
// int arr[5] = {1,3,5,7,8};
// 	int size = 5;

// 	cout << "Enter the key to find " << endl;
// 	int key;
// 	cin  >> key;

// 	if(find(arr,size, key)) {
// 		cout << "Found " << endl;
// 	}
// 	else {
// 		cout << "not Found " << endl;
// 	}

//Question: Modify the linear search program to return the position of the key if found, or -1 if not found.
	// •	Add appropriate message output for both cases.

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