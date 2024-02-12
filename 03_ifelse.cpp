#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    cout<<"The largest Number is:-";

    if (a>b && a>c)
    {
        cout<<a;   
    }
    else if (c>a && c>b)
    {
        cout<<c;                
    }
    else
    {
        cout<<b;
    }
    return 0; 
}
