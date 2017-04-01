#include <iostream>
using namespace std;
int main()
{
    int a[10], i;
    for(i = 0; i < 10; i++)
        a[i] = 0;
    for(i = 0; i < 10; i++)
        if(i == 3)
            continue;
        else if(i == 8)
            break;
        else
            a[i] = 3 * ( i+1 );
    for(i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
        if(i % 3 == 0)
            cout << endl;
    }
    return 0;
}
