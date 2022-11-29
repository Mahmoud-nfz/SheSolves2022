#include<bits/stdc++.h>

using namespace std;
char grid[3][3] ;


int verify(char c)
{
    if(grid[0][0]==c)
        if( (c==grid[0][1]&&c==grid[0][2]) || (c==grid[1][0]&&c==grid[2][0]) || (c==grid[1][1]&&c==grid[2][2]))
                return 1;
    if (grid[1][1]==c)
        if( (c==grid[0][2]&&c==grid[2][0]) || (c==grid[1][0]&&c==grid[1][2]) || (c==grid[0][1]&&c==grid[2][1]) )
                return 1;
    if (grid[2][2]==c)
            {
                if ( (c==grid[2][1]&& c==grid[2][0]) || (c==grid[1][2]&&c==grid[0][2]) )
                return 1;
            }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin>>n;
    while(n--)
    {
      int x=0;
      int o=0;
      for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                {
                    cin>>grid[i][j];
                    if(grid[i][j]=='O')
                        o++;
                    else if(grid[i][j]=='X' )
                        x++;
                }
         if(o>x || x-o>=2)
        {
            cout<<"no"<<"\n";
            continue;
        }
        else if(x==2)
        {
           cout<<"yes"<<"\n";
            continue;
        }
        else if(x==o)
        {
            if(verify('X'))
                cout<<"no"<<"\n";
            else
                cout<<"yes"<<"\n";
                continue;
        }
        else
        {
            if(verify('O'))
                cout<<"no"<<"\n";
            else
                cout<<"yes"<<"\n";
                continue;
        }
    }

}
