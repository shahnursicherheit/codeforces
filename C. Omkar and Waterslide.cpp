#include <iostream>
using namespace std ;
int main()
{
    
    int testcase ;
    cin >> testcase ;
    while ( testcase-- )
    {
        long long n ;
        cin >> n ;
        long long supports[n] ;
        for ( int i = 0 ; i < n ; i++ )
        {
            cin >> supports[i] ;
        }
        long long operation = 0 ;
        for ( int i = 1 ; i < n ; i++ )
        {
            if ( supports[i-1] > supports[i] )
            {
                operation += ( supports[i-1] - supports[i] ) ; 
            }
        }
        
        cout << operation << endl ;
    }

    return 0;
}