//Question: Find unique element.
//every element occurs twice except one.
//i/p: {1,2,4,2,1,3,6,5,5,6,4}


#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int>arr){

    int ans=0;

    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }
    return ans;
}


int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the element"<<endl;

    //taking input
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    int uniqueElement = findUnique(arr);
    cout<<"Unique element is" << uniqueElement << endl;

    return 0;



}







