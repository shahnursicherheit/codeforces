#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int t ;
    cin >> t ;
    while ( t-- )
    {
        int n ;
        cin >> n ;
        int a[n], b[n] ;

        for ( int i = 0 ; i < n ; i++ )
        {
            cin >> a[i] ;
            b[i] = a[i] ;
        }
        sort(b,b+n); // 3 3 3 3 // 1 2 3 4 5 1 //
        vector<pair<int, int>> p ;
        int count = 1 ;
        for ( int i = 0 ; i < n ; i++ )
        {
            if (  b[i] == b[i+1] )
            {
                count++ ;
            }
            else
            {
                p.push_back({count,b[i]});
                count = 1 ;
            }

            if ( b[i] == b[i+1] && i == (n-1) )
            {
                p.push_back({count,b[i]});
                count = 1 ;
            }
        }

        sort( p.begin(),p.end());

        /*for (auto v : p) {
        cout << "(" << v.first << ", " << v.second << ") ";
        }

        cout << endl ;*/
        int pairsize = p.size() ;
        int nn = p[pairsize-2].first, mm = p[pairsize-1].second, domsize = n, count2 = 0, c = 0  ;

        //cout << " nn -- " << nn << " p-1 " << p[pairsize-1].first << endl;
        if ( p.size() == 1 && n > 1 )
        {
            cout << 2 << endl ;
        }
        else if ( n > 1 /*&& p[pairsize-1].first != nn*/ )
        {
            //if ( nn < 2  )
                nn = 2 ;
            for ( int i = 0 ; i < n ; i++ ) // 1 2 3 4 5 1
            {
                if ( mm == a[i] )
                {
                    for ( int j = i ; j < n ; j++ )
                    {
                        if ( mm == a[j] )
                        {
                            c++ ;
                        }
                        count2++ ;
                        if ( c == nn )
                            j = n ;
                    }
                    if ( domsize > count2 && c == nn )
                    {
                        domsize = count2 ;
                        count2 = 0 ;
                        c = 0 ;
                    }
                    else
                    {
                        count2 = 0 ;c = 0 ;
                    }
                }
            }
            cout << domsize << endl ;
        }
        else
        {
            cout << -1 << endl ;
        }



    }
}
