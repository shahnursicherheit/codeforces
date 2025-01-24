#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
    while ( t-- )
    {
        int n ;
        string x ;
        cin >> n >> x ;
        string z = x, y = x ;
        int pin = 0 ;
        for ( int i = 0 ; i < n; i++ )
        {
            //int div = x / pow(10,i) ;
            //x = x - ( pow(10,i)*div) ;

            if ( x[i] == '2' && pin == 0 )
            {
                y[i] =  '1' ;
                z[i] =  '1' ;
            }
            else if ( x[i] == '1' && pin == 0 )
            {
                y[i] =  '1' ;
                z[i] = '0' ;
                pin = 2 ;
            }
            else if ( pin == 2 )
            {
                y[i] = '0' ;
                z[i] =  x[i] ;
            }


        }

        cout << y << endl << z << endl ;


    }
    return 0;
}
