#include<bits/stdc++.h>
using namespace std;

int m1 = 17, m2 = 37;
vector<int> hase(17),hase1(37);

void insert(int val) {
    int remdder1 = val%m1;
    int remdder2 = val%m2;

    while (hase[(remdder1%m1)] != 0){
        remdder1++;
    }
    hase[(remdder1%m1)] = val;

    while (hase1[(remdder2%m2)] != 0){
        remdder2++;
    }

    hase1[(remdder2%m2)] = val;
}

bool search(int val) {
    bool mila1 = false, mila2 = false;

    int remdder1 = val%m1, remdder2 = val%m2;

    int st1 = remdder1, st2 = remdder2;
    mila1 = (hase[st1] == val);
    mila2 = (hase1[st2] == val);

    if (!mila1)
    {
        while (hase[(st1)%m1] != 0)
        {
            if (hase[st1] == val)
            {
                mila1 = true;
                break;
            }
            st1 = (st1+1)%m1;
        }
    }

    if (!mila2)
    {
        while (hase1[(st2)%m2] != 0)
        {
            if (hase1[st2] == val)
            {
                mila2 = false;
                break;
            }
            st2 = (st2+1)%m2;
        }
    }
    
    return (mila1 && mila2);
}

int main(){

    vector<int> arr = {133, 88, 92, 221, 174};

    for (int i = 0; i<arr.size(); i++) {
        insert(arr[i]);
    }

    cout << search(100) << endl;
    cout << search(133) << endl;
    cout << search(174) << endl;

    return 0;
}
