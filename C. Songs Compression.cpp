#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m ;
    cin >> n >> m ;
    long long a[n], b[n], sum_of_a = 0, sum_of_b = 0, sub_of_ab[n] ;
    
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> a[i] >> b[i] ;
        sum_of_a += a[i] ;
        //sum_of_b += b[i] ;
        sub_of_ab[i] = a[i] - b[i] ;
        
    }
    
    if ( sum_of_a <= m )
    {
        cout << 0 << endl ;
    }
    else
    {
        sort(sub_of_ab,sub_of_ab+n);
        int j = n-1, k = 0 ;
        while ( sum_of_a > m && k <= (n+1) )
        {
            sum_of_a = sum_of_a - sub_of_ab[j] ;
            j-- ;
            k++ ;
        }
        if ( k > n )
        {
            cout << -1 << endl ;
        }
        else
        {
            cout << k << endl ;
        }
    }
    

    return 0;
}