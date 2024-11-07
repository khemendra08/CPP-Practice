
//Pascal's Triangle Pattern

    //                     1
    //                 1        1
    //             1        2         1
    //         1       3         3         1
    //     1       4        6         4        1
    // 1       5       10        10        5       5           


    // pascal triangle --> Binomial coefficient
    // c = c*(i-j)/j
    // i = [1,N]
    // j = [1, i]


    #include<iostream>
    using namespace std;
    int main(){
        int n;
        cin>>n;
        for(int i=1; i<=n; i++){
            int c=1;
            for(int j=1; j<=i; j++){
                cout<<c<<" ";
                c=c*(i-j)/j;
            }
            cout<<endl;
        }
    }