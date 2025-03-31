#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    int a[n] ;
    int j = 0 , k = 0 ;
    int even[n] , odd[n] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] ;
        if ( a[i] % 2 == 0 )
        {
            even[j] = a[i] ;
            j++ ;
        }
        else
        {
            odd[k] = a[i] ;
            k++ ;
        }
    }
    int min_sum = 0 ;
    sort(even,even+j) ;
    sort(odd,odd+k) ;
    if ( j > k )
    {
        for ( int i = 0 ; i < j-k-1 ; i++ )
        {
            min_sum += even[i] ;
        }
    }
    else if ( j < k )
    {
        for ( int i = 0 ; i < k-j-1 ; i++ )
        {
            min_sum += odd[i] ;
        }
    }
    cout << min_sum << endl ;
    
    return 0;
}