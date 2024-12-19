#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector <int>  d{1,3,5,10,13};
    //push back - 0(1) for most of the time
    d.push_back(16);

    //pop back - 0(1) for most of the time  - remove the last element
    d.pop_back(16);

    //insert some element in the middle - 0(N)

    d.insert(d.begin() +3,100);
    //erase some element in the middle
    d.erase(d.begin() +2);
    d.erase(d.begin() +2, d.begin()+5);

    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;
    //remoe all the element of the vector - this does not deleate the memory occupied by thr array

    d.clear();
    cout<<d.size()<<endl;

    //empty
    if(d.empty()){
        cout<<" This is an empty vector";
    }
    cout<<d.size()<<endl;




    for(int x:d){
        cout<<x<<",";
    }
    cout<<endl;
    d.push_back(10);
    d.push_back(11);
    d.push_back(12);
    cout<<d.front()<<endl;//this will gives us front element
    cout<<d.back()<<endl; // this will gives us last element of the array

    //reserve
    int n;
    cin n;
    vector<int>v;
    v.reserve(1000);
    //to avoid doubling we will use reserve function
    fot(int i;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
        cout<<"Changing capacity "<<v.capacity()<<endl;
    }
    cout<<"capacity "<<v.capacity()<<endl;

    fot(int x:v){
        cout<<x<<",";
    }
    

    return 0;
}




