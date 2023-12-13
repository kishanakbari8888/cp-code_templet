#include<bits/stdc++.h>
#include <stdio.h>
// #include "string.h"
using namespace std;
// #define int long long 
// #define ll long long 
#define endl '\n' 
#define pb push_back
#define all(x) x.begin(),x.end() 
#define con(s1,s2) strstr(s1.c_str(),s2.c_str())
#define foreach(x,y) for(auto &x:y)
#define allr(x) x.rbegin(),x.rend()
#define sum(a) accumulate(a.begin(), a.end(), (int)0)
#define ff first
#define ss second
#define pi pair<int,int>
// int M = 998244353;
#define mod 1000000007
#define ll long long
 
ll smallestString(string &s) { 
    long long M = s.size();
    int l = 0; 
    int lps[M];
    lps[0] = 0;  
  
    int i = 1; 
    while (i < M) { 
        if (s[i] == s[l]) { 
            l++; 
            lps[i] = l; 
            i++; 
        } 
        else 
        { 
            if (l != 0) { 
                l = lps[l - 1]; 
  
            } 
            else  
            { 
                lps[i] = 0; 
                i++; 
            } 
        } 
    } 

    long long t1 = lps[M-1];
    long long t2 = M-t1;

    if(t1 < t2) return M;
    else if(t1 % t2 != 0) return M;
    else return t2;
} 
int solve(vector<string> &A) {

    int l = 1,len=A.size(),h;
    vector<long long> v(len);
    
    for(int i=0;i<len;i++){
        long long n = smallestString(A[i]); 
        long long k = 1;
        int tem = 0;
        while(1){
          long long changes = 1ll*(k*(k+1))/2; 
            if(changes%n==0){
                v[i]=k;
                break;
            }
            k++;
        }
    }
    
    long long ans=1;

    for(int i=0;i<len;i++){

        for(int j=i+1;v[i]!=1 && j<len;j++){
            long long tem = v[j]/__gcd(v[j], v[i]);
            v[j] = tem;
        }


        ans = 1ll*(ans*(v[i]%mod));
        ans%=mod;
    }

    return ans%mod;
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    cout<<setprecision(10)<<fixed;

    
    vector<string> s{"a","ababa","aba"};

    cout<<solve(s);


    return 0;
}  
