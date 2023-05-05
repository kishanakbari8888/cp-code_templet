#include<bits/stdc++.h>
using namespace std;


class Lifegrid{
public:
    vector<vector<int>> v;
    Lifegrid(int n,int m){
        v = vector<vector<int>> (n,vector<int> (m,0));
    }

    void configure(vector<vector<int>> v1)
    {
        for (int i = 0; i < v1.size(); ++i)
            v[v1[i][0]][v1[i][1]] = 1;
    }

    void clear(int x,int y){
        v[x][y] = 0;
    }

    void setcell(int x,int y){
        v[x][y] = 1;
    }

    bool islivevell(int x,int y){
        return v[x][y];
    }
    

    int numliveneighbors(int x,int y)
    {
        int ans = 0;

        if((x-1>=0 && v[x-1][y]))
            ans++;
        if((y-1>=0 && v[x][y-1]))
            ans++;
        if((x+1<v.size() && v[x+1][y]))
            ans++;
        if((y+1<v[0].size() && v[x][y+1]))
            ans++;

        return ans;
    }

};


int main()
{
    
    Lifegrid gridlife(5,5);

    gridlife.configure({{0,0},{1,0},{4,4},{3,4},{4,3}});
    gridlife.clear(0,0);
    gridlife.setcell(0,4);
    cout<<gridlife.numliveneighbors(4,4)<<endl;



    return 0;
}
