
#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin >> t ;
        int n ;
    while ( t-- )
    {
        cin >> n ;
        int mem[n] ;
        for ( int i = 0 ; i < n ; i++ )
        {
            cin >> mem[i] ;
        }
        sort(mem,mem+n) ;

        int count = 1, uniqearray[n], uniqe = 0, j = -1, sum = 0 ;
        for ( int i = 0 ; i < n-1 ; i++ )
        {
            if ( mem[i] == mem[i+1] )
            {
                count++ ;
            }
            else if ( mem[i] < mem[i+1] )
            {
                uniqe++ ;
                if ( count > 1 )
                {
                    j++ ;
                    sum += count ;
                    uniqearray[j] = count ;
                    count = 1;
                }
            }
        }
        if ( count > 1 )
        {
            j++ ;
            sum += count ;
            uniqearray[j] = count ;
            count = 1 ;
        }
        sort(uniqearray,uniqearray+(j+1));
        if ( n < 2 )
        {
            cout << 0 << endl ;
        }
        else if ( j < 0 )
        {
            cout << 1 << endl ;
        }
        else
        {
            int temp = n - sum + j  ;
            if ( temp >= uniqearray[j] )
            {
                cout << uniqearray[j] << endl ;
            }
            else if ( temp <= ( uniqearray[j] - 2 ))
            {
                cout << temp+1 << endl ;
            }
            else
            cout << temp << endl ;
        }

    }
    return 0;
}
