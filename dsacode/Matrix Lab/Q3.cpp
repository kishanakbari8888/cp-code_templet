#include<bits/stdc++.h>
#include "string.h"
using namespace std;

class Matrix{
public:
    vector<vector<int>> v;
    Matrix(int n,int m)
    {
        v = vector<vector<int>> (n,vector<int> (m,0));
    }

    int Row()
    {
        return v.size();
    }

    int col()
    {
        return v[0].size();
    }

    int getitval(int x,int y)
    {
        return v[x][y];
    }

    void setitval(int x,int y,int w)
    {
        v[x][y] = w;
    }

    void scalbyw(int w)
    {
        for (int i = 0; i < v.size(); ++i)
            for(int j=0; j<v[0].size(); j++)
                v[i][j]*=w;
    }

    vector<vector<int>> Transpose(vector<vector<int>> &v)
    {
        vector<vector<int>> tem(v[0].size(),vector<int> (v.size()));
        for (int i = 0; i < v.size(); ++i)
            for(int j=0; j<v[0].size(); j++)
                tem[j][i] = v[i][j];

        return tem;
    }

    vector<vector<int>> addMatric(vector<vector<int>> mt)
    {
        for (int i = 0; i < v.size(); ++i)
            for(int j=0; j<v[0].size(); j++)
                mt[i][j]+=v[i][j];

        return  mt;
    }

    vector<vector<int>> subtractMatric(vector<vector<int>> mt)
    {
        for (int i = 0; i < v.size(); ++i)
            for(int j=0; j<v[0].size(); j++)
                mt[i][j]-=v[i][j];
        return  mt;
    }

    vector<vector<int>> multipMatric(vector<vector<int>> mt)
    {
        vector<vector<int>> ans(v.size(),vector<int> (v[0].size()));
        for (int i = 0; i <v.size(); ++i)
        {
            for(int j=0; j<v[0].size(); j++)
            {
                for(int k = 0; k<v[0].size(); k++)
                {
                    ans[i][j]+=v[i][k]*mt[k][j];
                }
            }
        }

        return ans;
    }

};

void print(vector<vector<int>> v)
{
    for(int i=0; i<v.size(); i++){

        for(int j=0; j<v[i].size(); j++){

            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
}

int32_t main()
{
    Matrix mx(3,3);
    mx.setitval(0,0,1);
    mx.setitval(0,1,2);
    mx.setitval(0,2,3);
    mx.setitval(1,0,4);
    mx.setitval(1,1,5);
    mx.setitval(1,2,6);
    mx.setitval(2,0,1);
    mx.setitval(2,1,1);
    mx.setitval(2,2,1);

    mx.scalbyw(10);

    vector<vector<int>> tem = mx.addMatric(mx.v);

    vector<vector<int>> mu = mx.multipMatric(mx.v);

    return 0;

}