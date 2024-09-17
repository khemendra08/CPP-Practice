#include<iostream>
using namespace std;
template<class T>
void logic(T x)
{
    cout<<"x->"<<x<<endl;
}
int main()
{
    logic('R');
    logic(786);
    logic(464.55);

    logic<char>('R');
    logic<int>(786);
    logic<double>(464.55);
    return 0;
}