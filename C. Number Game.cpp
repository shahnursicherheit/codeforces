#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while ( t-- )
    {
        long long n ;
        cin >> n ;
        
        if (( n % 2 == 1 && n != 1 ) || n == 2 )
        {
            cout << "Ashishgup\n" ;
        }
        else if ( n == 1 )
        {
            cout << "FastestFinger\n" ;
        }
        else
        {
            int Ashishgup = 0;
            int target = sqrt(n) ;
            for ( int i = 3 ; i <= target  ; i++ )
            {
                if ( ( i%2 == 1 &&  n % i == 0 && (n/i) % 2 == 0 && (n/i) > 2 ) || ( i%2 == 0 &&  n % i == 0 && (n/i) % 2 == 1 && i > 2 && (n/i) > 1 ) )
                {
                    Ashishgup = 1 ;
                    //cout << " mar kha gia ma " << Ashishgup << " i -> " << i << " n/i > 2 " << n/i <<  endl;   
                    i = n ;
                }
               // i++ ;
                /*
                if ( i%2 == 1 && ( n / i ) % 2 == 1 )
                {
                    FastestFinger = 0 ;
                }
                */
            }
            
            if ( Ashishgup == 1 )
            {
                cout << "Ashishgup\n" ;
            }
            else 
            {
                cout << "FastestFinger\n" ;
            }
        }
    }
    return 0;
}