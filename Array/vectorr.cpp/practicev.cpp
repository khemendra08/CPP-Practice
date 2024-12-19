#include<iostream>
#include<vector>
using namespace std;

int main(){
    //create vector
    vector<int>arr;

    // int ans = (sizeof(arr)/sizeof(int));
    // cout<< ans << endl;

    cout<< arr.size() << endl;
    cout<< arr.capacity() << endl;

    // insert an element in vector array
    arr.push_back(5);
    arr.push_back(6);

    // print elements in vector array

    for(int i=0; i<arr.size(); i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
    
    //remove / deleate an element from vector arry
    arr.pop_back();
    //print 
    for(int i=0; i<arr.size(); i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;

    int n;
    cout<<"Enter the value of n" << endl;
    cin>>n;

    vector<int>brr(n,-1);
    cout<<"Size of b"<< brr.size() << endl;
    cout<<"capacity of b"<< brr.capacity() << endl;

    for(int i=0; i<brr.size(); i++){
        cout<< brr[i] << " ";
    }
    cout<<endl;

    // //vector init
    // cout<<"Printing crr" << endl;
    // vector<int>crr{10,20,30,50};

    // //printing
    // for(int i=0; i<crr.size(); i++){
    //     cout<<crr[i]<<" ";
    // }
    // cout<<endl;

    //empty function in vector
    cout<<"vector brr is empty or not" << brr.empty() << endl;
    



    return 0;
}
