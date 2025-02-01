#include <iostream>
using namespace std ;

int main()
{
    int n, k ; // n the size of array and k the coloum where maximum sum possible 
    cin >> n >> k ;
    int l = 1, crazy[n][n], sum = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < k-1 ; j++ )
        {
            crazy[i][j] = l ;
            l++ ;
        }
    }
    
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = k-1 ; j < n ; j++ )
        {
            crazy[i][j] = l ;
            if ( j == ( k-1 ) )
            sum += l ;
            l++ ;
        }
    }
    cout << sum << endl ;
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            cout << crazy[i][j] << " " ;
        }
        cout << endl ;
    }

    return 0;
}