#include<bits/stdc++.h>
#include<string>
using namespace std ;
int main()
{
    string first_genome, second_genome ;
    cin >> first_genome >> second_genome ;
    string str1 = first_genome, str2 = second_genome ;
    sort(str1.begin(), str1.end()) ;
    sort(str2.begin(),str2.end()) ;
    int count = 0, s1 = first_genome.size(), s2 = second_genome.size() ;
    if ( s1 == s2 && str1 == str2 )
    {
        for ( int i = 0 ; i < first_genome.size() ; i++ )
        {
            if ( first_genome[i] != second_genome[i] )
            {
                count++ ;
            }
        }
        if ( count == 2 )
        {
            cout << "YES\n" ;
        }
        else
        {
            cout << "NO\n" ;
        }
    }
    else
    {
        cout << "NO\n" ;
    }
}

