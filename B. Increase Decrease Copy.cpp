#include <bits/stdc++.h>
using namespace std ;
int main()
{
    long t ;
    cin >> t ;
    while ( t-- )
    {
        long long n ;
        cin >> n ;
        long long target[n], destination[n+1], temp = 0, count = 0 ;
        for ( int i = 0 ; i < n ; i++ )
        {
            cin >> target[i] ;
        }
        for ( int i = 0 ; i <= n ; i++ )
        {
            cin >> destination[i] ;
            if ( target[i] > destination[i] && i != n )
            {
                temp = ( target[i] - destination[i] ) ;
                count += temp ;
            }
            else if ( target[i] < destination[i] && i != n )
            {
                temp = ( destination[i] - target[i] ) ;
                count += temp ;
            }
        }

        long long count2 = 0 ;
        for ( int i = 0 ; i < n ; i++ )
        {
            if ( ( target[i] >= destination[n] && destination[i] <= destination[n] ) || ( target[i] <= destination[n] && destination[i] >= destination[n] ) )
            {
                count2 = 1 ;
                count++ ;
                break ;
            }
        }
        long long mini = LLONG_MAX ;
        if ( count2 == 0 )
        {
            sort(target,target+n) ;
            for ( int i = 0 ; i < n ; i++ )
            {
                long temp = target[i] - destination[n], temp1 =  destination[i] - destination[n], temp2  ;
                temp2 = min(abs(temp),abs(temp1)) ;
                if ( mini > temp2 )
                {
                    mini = temp2 ;
                }
            }
            count += ( 1 + mini ) ;
        }

        cout << count << endl ;
    }
}
