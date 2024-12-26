#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> t ;
    while ( t-- )
    {
        cin >> n ;
        string s;
        cin >> s ;
        int count = 0, first = 0, second = 0, f = 0, se = 0, temp_f = 0, temp_s = 0 ;
        while ( count < n )
        {
            if ( s[count] == '(' && se == 0 )
            {
                temp_f++;
                f = 1 ;
            }
            else if ( s[count] == ')' && f == 0 )
            {
                temp_s++;
                se = 1 ;
            }
            else if ( s[count] == '(' && se == 1 )
            {
                temp_f++;
                f = 1 ;
            }
            else if ( s[count] == ')' && f == 1 )
            {
                if( temp_f > 0 )
                temp_f--;
                
                temp_s++;
                se = 1 ;
            }
            count++;
        }
        
        cout << temp_f << endl ;
    }

    return 0;
}