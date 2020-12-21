#include <iostream>
using namespace std;
int main() 
{
    int count, n, i, j, k;
    cin >> n;
    int Distance[n];
    int b[n];
    
    for ( i = 0; i < n; i++ ){
        cin >> Distance[i];
    }
    
    count = 0;
    
    for ( i = 0; i < n; i++ )
    {
        if ( Distance[i] < 100 )
        {
            b[count] = Distance[i];
            count ++;
        }
    }
    if(count == 0)
    {
        cout << 0;
    }
    else
    {
        for ( i = 0; i < count-1; i++ )
        {
            for ( j = count-2; j >= i ; j-- )
            if ( b[j] > b[j+1] ) 
            {
                k = b[j];
                b[j] = b[j+1];
                b[j+1] = k;
        }
        }  

        for ( i = 0; i < count; i++ )
        {
            cout << b[i] << " ";
        }
    }
}