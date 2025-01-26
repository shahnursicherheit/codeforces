#include<bits/stdc++.h>
using namespace std ;
int main()
{

    int t ;
    cin >> t ;
    while ( t-- )
    {
        int n ;
        cin >> n ;
        int array[n], array2[n] ;
        for ( int i = 0 ; i < n ; i++ )
        {
            cin >> array[i] ;
        }
        int min = *min_element(array,array+n), j = 0, mere_array = 1 ;
        for ( int i = 0 ; i < n ; i++ )
        {
            if ( __gcd(array[i],min) == min )
            {
                array2[j] = array[i] ;
                array[i] = 0 ;
                j++ ;

            }
        }

        sort(array2,array2+j) ;
        int k = 0 ;
        for ( int i = 0 ; i < n ; i++ )
        {
            if ( array[i] == 0 )
            {
                array[i] = array2[k] ;
                k++ ;
            }
        }

        for ( int k = 0 ; k < n-1 ; k++ )
        {
            if ( array[k] <=  array[k+1] )
            {
                mere_array++ ;
            }
        }

        if ( mere_array == n )
        {
            cout << "YES\n" ;
        }
        else
        {
            cout << "NO\n" ;
        }
    }
}
