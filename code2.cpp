#include<bits/stdc++.h>
using namespace std;
#define int long long int
int M=1000000007;

int modInverse(int a,int n)
{
    int r1=n,r2=a;
    int t1=0,t2=1;
    int q,t,r;
    //int k3;
    while(r2>0)
    {
        q=r1/r2;
        r=r1%r2;
        t=t1-q*t2;
        r1=r2,r2=r;
        t1=t2,t2=t;
    }
    return (t1+n)%n;
}

bool issubstri(string s,string ss)
{
    int a = 0;
    for (int i = 0; i <(s.size()) && a<(ss.size()) ; ++i)
        if(s[i]==ss[a])
            a++;
    return a==m;
}

int binri(vector<int> v,int k)
{
    int r=0; int l=v.size();
    while(r<=l)
    {
        int mid = r+(l-r)/2;

        if(v[mid]>k)
            l=mid-1;
        else
            r=mid+1;
    }

    return l;
}

int stoii(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); ++i)
        ans = ans*10 + (s[i]-'0');

    return ans;
}


int fpower(int a,int n)
{
    int M = 1e9+7;
    int p=1;
    while(n>0)
    {
        if(n&1)
            p=((p%M)*(a%M))%M;
        a=((a%M)*(a%M))%M;
        n=n>>1;
    }
    return p;
}

int nfoc(int n)
{
    int ans = 1;
    for (int i = 0; i < n; ++i)
        ans = (ans*(i+1))%M;

    return ans;
}

int ncr(int n,int r)
{
    if(n-r<0)
        return 0;
    int ans = ((nfoc(n)*fpower(nfoc(r),M-2)%M)%M*fpower(nfoc(n-r),M-2)%M)%M;
    return ans;
}


int Ufun(vector<int> &v,int t)
{
    int a=-1;
    if(v.size()==0)
        return a;
    int l=0,r=v.size()-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(v[m]>t)
        {
            a=m;
            r=m-1;
        }
        else
            l=m+1;
    }
    return a;
}

int Lfun(vector<int> &v,int t)
{
    int a=-1;
    if(v.size()==0)
        return a;
    int l=0,r=v.size()-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(v[m]<t)
        {
            a=v[m];
            l=m+1;
        }
        else
            r=m-1;
    }
    return a;
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<setprecision(10)<<fixed;
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    return 0;
}



/*
#include<bits/stdc++.h>
#include <stdio.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#include "string.h"
using namespace std;
#define int long long 
#define ll long long 
#define endl '\n' 
#define pb push_back
#define all(x) x.begin(),x.end() 
#define con(s1,s2) strstr(s1.c_str(),s2.c_str())
#define foreach(x,y) for(auto &x:y)
#define allr(x) x.rbegin(),x.rend()
#define sum(a) accumulate(a.begin(), a.end(), (int)0)
#define ff first
#define ss second
#define vi vector<int> 
#define pi pair<int,int>
int M = 998244353;
int mxroot = 3037000499;
vector<int> hash = {146527, 19260817, 91815541};

// cout.precision(20);


// using namespace __gnu_pbds;
 
// typedef
// tree< pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// *ss.find_by_order(q[i].ff.ss-1);


// ll crossproduct(point p,point q,point o){
//     //opからoqを見る向き
//     ll x1=p[0]-o[0];
//     ll y1=p[1]-o[1];
//     ll x2=q[0]-o[0];
//     ll y2=q[1]-o[1];
//     return x1*y2-y1*x2;
// }
// ll innerproduct(point p,point q,point o){
//     //opとoq
//     ll x1=p[0]-o[0];
//     ll y1=p[1]-o[1];
//     ll x2=q[0]-o[0];
//     ll y2=q[1]-o[1];
//     return x1*x2+y1*y2;
// }


// function<int(int,int,int)> builtree = [&](int s,int e,int po)
// {
//     if(s==e)
//         return segtree[po] = v[s];

//     int mid = (s+e)/2;
//     segtree[po] = __gcd(builtree(s,mid,2*po+1),builtree(mid+1,e,2*po+2));
//     return segtree[po];
// };




// function<int(int,int,int,int,int)> getgcd = [&](int s,int e,int pr,int pl,int po)
// {
//     if(s>=pr && e<=pl)
//         return segtree[po];
//     if(e<pr || s>pl)
//         return 0ll;

//     int mid = (s+e)/2;

//     return __gcd(getgcd(s,mid,pr,pl,2*po+1),getgcd(mid+1,e,pr,pl,2*po+2));
// };



// ------------------------------------------------------------------------------
// ------------------------------------------------------------------------------

// centroid decomposition 
// function<int(int,int,int)> dfs1 = [&](int s,int pre=-1,int m)
// {
//     foreach(x,v[s])
//     {
//         if(x!=pre && vul[x]*2>m)
//         {
//             return dfs1(x,s,m);
//         }
//     }
//     return s;
// };

// --------------------------------------------

class op{
public:
    static vector<int> prime(int n)
    {   vector<int> v; vector<bool> b(n+1);
        for (int i=2;i*i<=n;++i){if(!b[i]){for(int j=i*i;j<n+1;j+=i){b[j]=1;};};};
        for (int i=2;i<n+1;++i){if(!b[i])v.push_back(i);};
        return v;
    }

    static vector<pair<int,int>> divison(int n)
    {   vector<pair<int,int>> v;
        for (int i=2;i*i<=n;++i){
            int com = 0;
            while(!(n%i))
            {
                com++;
                n/=i;
            }
            
            if(com>0){
                v.push_back({i,com});
            }
        }
        if(n>1){v.push_back({n,1});}; return v;
    }

};


class dsu{

public:
    vector<int> v;
    dsu(int n)
    {
        v = vector<int> (n+1,0);
        for (int i = 0; i < n+1; ++i)
            v[i]=i;
    }

    int root(int i)
    {
        if(i==v[i])
            return i;
        return v[i]=root(v[i]);
    }

    void up(int ix,int ixx)
    {
        v[root(ix)]=root(ixx);
    }

};

// vector<bool> b(n);
// vector<int> st;

// function<void(int)> dfs = [&](int s)
// {
//     b[s] = 1;
//     foreach(x,v[s])
//         if(!b[x])
//             dfs(x);
//     st.pb(s);
// };

// for (int i = 0; i < n; ++i){
//     if(b[i]==0){
//         dfs(i);
//         // print(st);
//     }
// }


// b = vector<bool> (n);

// vector<int> ans(n,-1);

// function<void(int,int)> dfs1 = [&](int s,int fi)
// {
//     b[s] = 1;
//     foreach(x,vv[s])
//     {   
//         if(b[x] && fi==x)
//             ans[s] = x;
//         if(!b[x]){
//             ans[s] = x;
//             dfs1(x,fi);
//         }
//     }
// };


// for(int i=n-1; i>=0; i--)
// {
//     if(!b[st[i]]){
//         dfs1(st[i],st[i]);
//     }
// }


class BIT{
public:
    vector<ll> v;
    BIT(ll n){
        v = vector<ll>(n+10,0);
    };

    void up(ll ix,ll vul)
    {
        for(ix++; ix<(ll)v.size(); ix+=(ix&-ix))
            v[ix]=(v[ix]+vul);
    }

    ll presum(ll ix)
    {
        ll ans =  0;
        for(ix++; ix>0; ix-=(ix&-ix))
            ans=(ans+v[ix]);
        return ans;
    }

    ll upmax(ll ix,ll val)
    {
        ll mx = -1e18;
        for(ix++; ix<(ll)v.size(); ix+=(ix&-ix))
            mx = max(mx,v[ix]);

        return mx;
    }
};

class Lowertcommmonancestor{
public:
    vector<vector<int>> sp;
    vector<int> euler,dep,noix;
    Lowertcommmonancestor(vector<vector<int>> v,int root=0)
    {
        noix = vector<int> (v.size());
        function<void(int,int,int)> dfs = [&](int s,int pre,int d)
        {
            noix[s] = euler.size();
            euler.pb(s);
            dep.pb(d);
            foreach(x,v[s])
            {
                if(pre!=x)
                {
                    dfs(x,s,d+1);
                    noix[s] = euler.size();  
                    euler.pb(s);
                    dep.pb(d);  
                }
            }
        };
        
        dfs(root,-1,0);
        sp = vector<vector<int>> ((int)log2(euler.size())+1,vector<int> (euler.size()));
        for(int i=0; i<euler.size(); ++i)
            sp[0][i] = i;

        for(int i=1; i<=log2(euler.size()); ++i)
        {
            for(int j=0; j+(1<<i)-1<euler.size(); ++j)
            {
                if(dep[sp[i-1][j]]<dep[sp[i-1][j+(1<<(i-1))]])
                    sp[i][j] = sp[i-1][j];
                else
                    sp[i][j] = sp[i-1][j+(1<<(i-1))];
            }
        }
    }

    int queries(int a,int b)
    {
        int ixa = min(noix[a],noix[b]);
        int ixb = max(noix[a],noix[b]);

        int l = log2(ixb-ixa+1);

        if(dep[sp[l][ixa]]<dep[sp[l][ixb-(1<<l)+1]])
            return euler[sp[l][ixa]];
        else
            return euler[sp[l][ixb+1-(1<<l)]];
    }

};

class segtre{
public:
    vector<int> segtree;
    int n;
    int base;

    segtre(vector<int> &v,int base)
    {
        this->base=base;
        n = v.size();
        segtree = vector<int> (4*n,base);

        function<int(int,int,int)> makeseg = [&](int s,int e,int po)
        {
            if(s==e)
                return segtree[po] = v[s];
            return segtree[po] = min(makeseg(s,(s+e)/2,2*po+1),makeseg((s+e)/2+1,e,2*po+2));
        };
     
        makeseg(0,n-1,0); 
    }
    

    int query(int r,int l)
    {
        function<int(int,int,int,int,int)> getmin = [&](int s,int e,int ps,int pe,int po)
        {    
            if(ps<=s && e<=pe){
                return segtree[po];
            }
            if(e<ps || s>pe)
                return (int)(base);
     
            int mid = (s+e)/2;
     
            return min(getmin(s,mid,ps,pe,2*po+1),getmin(mid+1,e,ps,pe,2*po+2));
     
        };
        return getmin(0,n-1,r,l,0);
    }


    void update(int index,int x)
    {
        function<void(int,int,int,int,int)> updat = [&](int s,int e,int ix,int val,int po)
        {
             if (e == s){
                    segtree[po] = val;
                return ;
             }
     
            int mid = 1ll*(s+e)/2;
            
            if(ix<=mid)
                updat(s,mid,ix,val,2*po+1);
            else
                updat(mid+1,e,ix,val,2*po+2);

            segtree[po] = min(segtree[2*po+1],segtree[2*po+2]);
     
        };

        updat(0ll,n-1,index,x,0ll);
    }

};






int fabbo(int a)
{
    int mat[2][2] = {{1,1},{1,0}};
    int p[2][2] = {{1,1},{1,0}};

    while(a!=0)
    {
        if(a&1)
        {
            int tem[2][2];
            tem[0][0] = (mat[0][0]%M*p[0][0]%M)%M + (mat[0][1]%M*p[1][0]%M)%M;
            tem[0][1] = (mat[0][0]%M*p[0][1]%M)%M + (mat[0][1]%M*p[1][1]%M)%M;
            tem[1][0] = (mat[1][0]%M*p[0][0]%M)%M + (mat[1][1]%M*p[1][0]%M)%M;
            tem[1][1] = (mat[1][0]%M*p[0][1]%M)%M + (mat[1][1]%M*p[1][1]%M)%M;
            mat[0][0] = tem[0][0];
            mat[0][1] = tem[0][1];
            mat[1][0] = tem[1][0];
            mat[1][1] = tem[1][1];
        }
        a = a/2;


        int tem[2][2];
        tem[0][0] = (p[0][0]%M*p[0][0]%M)%M + (p[0][1]%M*p[1][0]%M)%M;
        tem[0][1] = (p[0][0]%M*p[0][1]%M)%M + (p[0][1]%M*p[1][1]%M)%M;
        tem[1][0] = (p[1][0]%M*p[0][0]%M)%M + (p[1][1]%M*p[1][0]%M)%M;
        tem[1][1] = (p[1][0]%M*p[0][1]%M)%M + (p[1][1]%M*p[1][1]%M)%M;
        p[0][0] = tem[0][0];
        p[0][1] = tem[0][1];
        p[1][0] = tem[1][0];
        p[1][1] = tem[1][1];
        // cout<<p[0][0]<<" "<<p[0][1]<<endl<<p[1][0]<<" "<<p[1][1]<<endl<<endl;
    }

    return mat[0][1];

}

// bool lexical_compare(int a, int b) {
//     return to_string(a) < to_string(b);
// };
 
// set<int, decltype(&lexical_compare)> s(&lexical_compare);
 


 
// class cmp {  
// public:
//     bool operator()(const pi &p,const pi &pp)const{ 
//         if(p.ff==pp.ff)
//             return p.ss<pp.ss;
//         return p.ff>pp.ff;
//     }
// };
// set<pi,cmp> s;


// struct cmp2
// {
//     bool operator () (rocket x,rocket y)
//     {
//         return x.h>y.h;
//     }
// };




// cmp vector ect...
// bool operator<(const vector<int> &a,const vector<int> &b) 
// {
//     return a[0]==10;
// }




    

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<setprecision(0)<<fixed;



    int t; cin>>t;
    while(t--)
    {
        int k; cin>>k;
        vector<int> v;
        // k = 0;
        v = {3,3,3,3,1,1,1,1,1,0,0,0};
        // v={4,4,3,3,2,2,-10};

        // string v = ".......*****";
        int r=0; int l=(int)v.size()-1;
        while(r<=l)
        {
            int mid = r+(l-r)/2;
            if(v[mid]<k)
                l=mid-1;
            else
                r=mid+1;
        }

        // cout<<upper_bound(all(v),k)-v.begin()<<endl;
        cout<<k<<" "<<l<<endl;
    }
        
        

    return 0;
}



// vector<int> tem;
// string input1;
// getline(cin, input1);

// istringstream iss(input1);
// int temp;

// while(iss >> temp)
//     tem.pb(temp);




// -----------------segmenttree with [l,r] incresing and find min rang [l1,r1]---------------------

// int n; cin>>n;
//     vector<int> v(n);
 
//     for(int i=0; i<n; ++i)
//         cin>>v[i];
 
//     vector<int> segtree(4*n,1e18),lazy(4*n,0);
 
//     function<int(int,int,int)> makeseg = [&](int s,int e,int po)
//     {
 
//         if(s==e)
//             return segtree[po] = v[s];
//         return segtree[po] = min(makeseg(s,(s+e)/2,2*po+1),makeseg((s+e)/2+1,e,2*po+2));
//     };
 
//     makeseg(0,n-1,0);
 
//     function<void(int,int,int,int,int,int)> changelazy = [&](int s,int e,int ps,int pe,int val,int po)
//     {
//         if(e<s)
//             return ;
 
//         if(lazy[po]!=0)
//         {
//             segtree[po] += lazy[po];
//             if(s!=e)
//             {
//                 lazy[2*po + 1] += lazy[po];
//                 lazy[2*po + 2] += lazy[po];
//             }
 
//             lazy[po] = 0;
//         }
 
 
//         if(e<ps || s>pe){
//             return ;
//         }
 
//         if(ps<=s && e<=pe)  
//         {
//             segtree[po] += val;
//             if(s!=e)
//             {
//                 lazy[2*po+1] += val;
//                 lazy[2*po+2] += val;
//             }
 
//             return ;
//         }
 
//         int mid = (s+e)/2;
 
//         changelazy(s,mid,ps,pe,val,2*po+1);
//         changelazy(mid+1,e,ps,pe,val,2*po+2);
//         segtree[po] = min(segtree[2*po+1],segtree[2*po+2]);
 
//     };
 
 
 
//     function<int(int,int,int,int,int)> getmin = [&](int s,int e,int ps,int pe,int po=0)
//     {   
//         if(lazy[po]!=0)
//         {
//             segtree[po] += lazy[po];
//             if(s!=e)
//             {
//                 lazy[2*po + 1] += lazy[po];
//                 lazy[2*po + 2] += lazy[po];
//             }
 
//             lazy[po] = 0;
//         }
 
 
//         if(ps<=s && e<=pe){
//             return segtree[po];
//         }
//         if(e<ps || s>pe)
//             return (int)(1e18);
 
//         int mid = (s+e)/2;
 
//         return min(getmin(s,mid,ps,pe,2*po+1),getmin(mid+1,e,ps,pe,2*po+2));
 
//     };
 
//     int q; cin>>q;
//     while(q--)
//     {
//         vector<int> tem(3);
//         cin>>tem[0]>>tem[1];
 
//         if(cin.peek()!=' ')
//         {
//             if(tem[0]<=tem[1])
//             {
//                 cout<<getmin(0,n-1,tem[0],tem[1],0);
//             }
//             else
//             {
//                 cout<<min(getmin(0,n-1,tem[0],n-1,0),getmin(0,n-1,0,tem[1],0));
//             }
//             cout<<endl;
//         }
//         else 
//         {
//             cin>>tem[2];
//             if(tem[0]<=tem[1]){
//                 changelazy(0,n-1,tem[0],tem[1],tem[2],0);
//             }
//             else{
//                 changelazy(0,n-1,tem[0],n-1,tem[2],0);
//                 changelazy(0,n-1,0,tem[1],tem[2],0);
//             }
//         }
 
//     }






// vector<int> z_function(string s) {
//     int n = (int) s.length();
//     vector<int> z(n);
//     for (int i = 1, l = 0, r = 0; i < n; ++i) {
//         if (i <= r)
//             z[i] = min (r - i + 1, z[i - l]);
//         while (i + z[i] < n && s[z[i]] == s[i + z[i]])
//             ++z[i];
//         if (i + z[i] - 1 > r)
//             l = i, r = i + z[i] - 1;
//     }
//     return z;
// }


// vector<int> kpm(string s)
// {
//     vector<int> v(s.size());
//     int i = 1;
//     int len = 0;
//     while (i < (int)s.size()) {
//         if (s[i] == s[len]) {
//             len++;
//             v[i] = len;
//             i++;
//         }
//         else 
//         {
//             if (len != 0) {
//                 len = v[len - 1];

//             }
//             else 
//             {
//                 v[i] = 0;
//                 i++;
//             }
//         }
//     }
        
//     return v;
// }


// -----------------sparse table---------------

// int n = v.size();
// int k = log2(n)+1;
// int stmi[n+5][k+2];
// for (int i = 0; i < n; i++)
//     stmi[i][0] = v[i];

// for (int j = 1; j <= k; j++)
// {
//     for (int i = 0; i + (1 << j) <=n; i++)
//     {
//         stmi[i][j] = min(stmi[i][j-1], stmi[i + (1 << (j - 1))][j - 1]);   
//     }
// }


 // auto rangand = [&](int L,int R)
 //    {
 //        long long sum = powl(2,60)-1;
 //        for (int i = k; i >= 0; i--) {
 //            if ((1 << i) <= R - L + 1) {
 //                sum &= stmi[L][i];
 //                L += 1 << i;
 //            }
 //        }
 //        return sum;
 //    };


// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

// vector<vector<int>> sptable(vector<int> &v)
// {
//     int n = v.size();
//     int k = log2(n)+1;
//     vector<vector<int>> stmi(n+10,vector<int> (k+2,(int)1e9));
//     for (int i = 0; i < n; i++)
//         stmi[i][0] = v[i];

//     for (int j = 1; j <= k; j++)
//     {
//         for (int i = 0; i + (1 << j) <=n; i++)
//         {
//             stmi[i][j] = min(stmi[i][j-1], stmi[i + (1 << (j - 1))][j - 1]);   
//         }
//     }

//     return stmi;

// }

// int rangand(vector<vector<int>> &st,int L,int R)
// {
//     int i = log2(R - L + 1);
//     return min(st[L][i], st[R - (1 << i) + 1][i]);
// }



// --------------------------------------------------



// int com = 0;
// int t; cin>>t;
// for(int i=0; i<t; ++i)
// {
//     cout<<"Case #"<<i+1<<": ";
//     solve();
// }


// for(int i=2; i*i<=1e6; ++i)
// {
//     if(prime[i]!=-1)
//         continue;
//     prime[i] = -1;
//     for(int j=i*i; j<=1e6; j+=i)
//     {
//         if(prime[j]==-1)
//             prime[j] = i;
//     }
// }

// set<int> tem;
// while(prime[x]!=-1)
// {
//     tem.insert(prime[x]);
//     int y = prime[x];
//     while(x%y==0)
//         x = x/y;
    
// }

// if(x>1)
//     tem.insert(x);
*/

