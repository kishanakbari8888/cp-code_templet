#include<bits/stdc++.h>
using namespace std;


class Array2D{

public:
    vector<vector<int>> arr;
    int row;
    int col;
    Array2D(int n1,int m1)
    {
        row = n1;
        col = m1;
        arr = vector<vector<int>> (n1,vector<int> (m1));
    }

    int Row()
        return row;

    int Col()
        return col;

    void clear()
        arr.clear();

    int getit(int x,int y)
        return arr[x][y];

    void setit(int x,int y,int it)
        arr[x][y] = it;
};


int main()
{
    
    Array2D arr(5,5);
    arr.setit(0,0,100);
    cout<<arr.getit(0,0)<<endl;

    return 0;
}