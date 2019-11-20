#include<bits/stdc++.h>
using namespace std;


vector< pair<int,char> >edges[10];
int main()
{
   int e,n;
    cout<<"enter number of edges";
    cin>>e;

    for(int i=0;i<e;i++)
    {
        int x,y;
        char z;
        cin>>x>>y>>z;

        edges[x].push_back(make_pair(y,z));

    }


string s;
cin>>s;
int current_state=0;
for(int i=0;i<s.size();i++)
{
    for(int j=0;j<edges[current_state].size();j++)
    {
        if(edges[current_state][j].second==s[i])
        {
            current_state=edges[current_state][j].first;
        }


    }
}
if (current_state==2)
{
    cout<<"accepted";
}
else
{
    cout<<"rejected";
}

}
