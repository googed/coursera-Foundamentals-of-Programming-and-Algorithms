#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a[500];
    int n, m;
    
    cin >> n >> m;
    
    for ( int i = 0; i < n; i++ )
    {
        cin >> a[i];
    }
    
    for ( int i= 0; i < m; i++ )
    {
        int tmp = a[n - 1];
        for ( int j = n - 2; j >= 0; j-- )
        {
            a[j + 1] = a[j];
        }
        a[0] = tmp;
    }
    
    for ( int i = 0; i < n; i++ )
        cout << a[i] << " ";
    
    return 0;
}