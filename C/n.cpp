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


        - name: CCNUBOX_CLASSROOM_DB_NAME
          value: "lesson_21_22_2"
        - name: CCNUBOX_CLASSROOM_DB_URL
          value: "mongodb://muxistudio:muxistudio3042020@10.43.190.54:27017/?authSource=admin"
        ports:
        - containerPort: 8080