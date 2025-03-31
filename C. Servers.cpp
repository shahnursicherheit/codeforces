#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,q ;
    cin >> n >> q ;
    int t[q], k[q], d[q] ;
    for ( int i = 0 ; i < q ; i++ )
    {

        cin >> t[i] >> k[i] >> d[i] ;
    }

    int start = 0, available1[1001], available2[n+1], server = n, s = 1 ;
    for ( int i = 0 ; i <= 1000 ; i++ )
    {
        available1[i] = 0 ;
    }

    /*for ( int i = 0 ; i < n ; i++ )
    {
        cout << available1[i] << " " ;
    }*/
    for ( int i = 0 ; i < q ; i++ )
    {
        if ( start <= t[i] )
        {
            start = t[i] ;
            for ( int l = 1 ; l <= start ; l++ )
            {
                if ( available1[l] > 0 )
                {
                    server += available1[l] ;
                    s -= available1[l] ;
                    cout << endl << " s - " << s << " avail - " << available1[l]  << endl ;
                    available1[l] = 0 ;
                    //l = start + 1 ;

                }
            }
            if ( k[i] <= server )
            {
                int sum = 0 ;
                for ( int j = 0 ; j < k[i] ; j++ )
                {
                    //s++ ;
                    sum += s ;
                    s++ ;
                }
                cout << sum << endl ;
                sum = 0 ;
                server -= k[i] ;
                int kk = d[i] + start ;
                if ( available1[kk] > 0 )
                    available1[kk] = available1[kk] + k[i] ;
                else
                    available1[kk] = k[i] ; //
            }
            else
                cout << -1 << endl ;
        }
        else
        {
            cout <<-1 << endl ;
        }
    }

}

