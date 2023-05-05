#include<bits/stdc++.h>
using namespace std;


class Array2Dspa{
public:
    vector<vector<int>> arr;
    int row,col;
    Array2Dspa(int n,int m)
    {
        row = n;
        col = m;
    } 

    int Row(){
        return row;
    }

    int Col(){
        return col;
    }

    void clear(){
        arr.clear();
    }

    int getit(int x,int y)
    {
        for (int i = 0; i < arr.size(); ++i)
        {
            if(arr[i][0]==x && arr[i][1]==y)
            {
                return arr[i][2];
            }
        }

        return -1;
    }

    void setit(int x1,int y1,int w1){
        arr.push_back({x1,y1,w1});
    }
};



int main()
{
	Array2Dspa sp(10,10);
    sp.setit(0,0,10);
    sp.setit(0,1,12);
    sp.setit(9,9,11);

    cout<<sp.getit(0,0)<<endl;
    cout<<sp.getit(0,1)<<endl;
    cout<<sp.getit(9,9)<<endl;


	return 0;
}
