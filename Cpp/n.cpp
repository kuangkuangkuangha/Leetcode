#include <iostream>
using namespace std;

int rc(int n)
{
    if(n==1)
        return 1;

    return rc(n-1)*n;
}

int main()
{
    cout<<rc(5)<<endl;
}


