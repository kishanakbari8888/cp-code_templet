void debug_out(){cerr<<endl;} 
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T)
{cerr<<(H)<<" ";debug_out(T...);}

#ifdef LOCAL
#define debug(...) cerr<<"#"<<#__VA_ARGS__<<":\n",debug_out(__VA_ARGS__)
#else
#define debug(...) 24
#endif


/*---pair---*/
template<typename T1,typename T2>
void print(pair<T1,T2> p){
	cout<<"["; 
	cout<<p.first<<','<<p.second;
	cout<<"]"<<endl;
}
  
template<typename T1,typename T2,typename T3>
void print(pair< pair<T1,T2>, T3> p){
	cout<<"[";
	cout<<p.first.first<<','<<p.first.second<<','<<p.second;
	cout<<"]"<<endl;
}

template<typename T1,typename T2,typename T3>
void print(pair<T1,pair<T2,T3> > p){
	cout<<"[";
	cout<<p.first<<','<<p.second.first<<','<<p.second.second;
	cout<<"]"<<endl;
}

/*---vector----*/
template <typename T>
void print(vector<T>&a){
	cout<<"["<<" ";
	for(T &i:a)
		cout<<i<<" ";
	cout<<"]"<<endl;
}

template<typename T1,typename T2>
void print(vector< pair<T1,T2> >&a) {
	cout<<"["<<" ";
	for(pair<T1,T2>&i:a)
		cout<<'['<<i.first<<','<<i.second<<']'<<" ";
	cout<<']'<<endl;
}

template<typename T>
void print ( vector< vector<T> > &g) {
	for(int i=0;i<g.size();i++){
		cout<<i<<" -->";
		for(T &j:g[i])
			cout<<j<<" ,";
		cout<<endl;
	}
}

template<typename T1,typename T2>
void print( vector < vector < pair<T1,T2> > > &g) {
	for(int i=0;i<g.size();i++){
		cout<<i<<" -->";
		for(pair<T1,T2> &p:g[i])
			cout<<'['<<p.first<<','<<p.second<<']'<<" ,";
		cout<<endl;
	}	
}

/**----Array---- **/


template<typename T>
void print(T a){
	cout<<"["<<" ";
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" ";
	cout<<"]"<<endl;	
}

template<typename T>
void print(T a[],int n){
	cout<<"["<<" ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"]"<<endl;	
}


template<typename T1,typename T2>
void print(pair<T1,T2> a[],int n) {
	cout<<"["<<" ";
	for(int i=0;i<n;i++)
		cout<<'['<<a[i].first<<','<<a[i].second<<']'<<" ";
	cout<<']'<<endl;
}


template<typename T>
void print(T *a,int n,int m){
	for(int i=0;i<n;i++){
		cout<<"["<<" ";
		for(int j=0;j<m;j++)
			cout<<*((a+i*n)+j)<<" ";
		cout<<"]"<<endl;
	}
	cout<<endl;	
}

template<typename T1,typename T2>
void print(pair<T1,T2> *a,int n,int m) {
	for(int i=0;i<n;i++){
		cout<<"["<<" ";
		for(int j=0;j<m;j++){
			cout<<'['<<((a+i*n)+j)->first<<','<<((a+i*n)+j)->second<<']'<<" ";
		}
		cout<<']'<<endl;
	}
}

/*---set---*/
template<typename T>
void print(set<T> s) {
	cout<<'{'<<" ";
	for(T i:s)
		cout<<i<<" ";
	cout<<'}'<<endl;
}

template<typename T1,typename T2>
void print(set< pair<T1,T2> > s) {
	cout<<'{'<<" ";
	for(pair<T1,T2> i:s)
		cout<<'['<<i.first<<','<<i.second<<']'<<" ,";
	cout<<'}'<<endl;
}

template<typename T>
void print( set< set<T> > s){
	for(int i=0;i<s.size();i++){
		cout<<i<<"--> ";
		for(T j:s)
			cout<<j<<" ";
		cout<<endl;
	}
}

/*---multiset---*/
template<typename T>
void print(multiset<T> s) {
	cout<<'{'<<" ";
	for(T i:s)
		cout<<i<<" ";
	cout<<'}'<<endl;
}

template<typename T1,typename T2>
void print(multiset< pair<T1,T2> > s) {
	cout<<'{'<<" ";
	for(pair<T1,T2> i:s)
		cout<<'['<<i.first<<','<<i.second<<']'<<" ,";
	cout<<'}'<<endl;
}

template<typename T>
void print( multiset< multiset<T> > s){
	for(int i=0;i<s.size();i++){
		cout<<i<<"--> ";
		for(T j:s)
			cout<<j<<" ";
		cout<<endl;
	}
}

/*---map---*/
template<typename T1,typename T2>
void print(map<T1,T2> &m){
	cout<<"{ ";
	for(pair<T1,T2> p:m){
		cout<<'['<<p.first<<','<<p.second<<']'<<"  ,";
	}
	cout<<" }"<<endl;
}

template<typename T1,typename T2,typename T3>
void print(map<T1,pair<T2,T3> > &m){
	cout<<"{ ";
	for(pair<T1,pair<T2,T3>> p:m){
		cout<<'['<<p.first<<','<<p.second.first<<','<<p.second.second<<']'<<"  ,";
	}
	cout<<" }"<<endl;
}

template<typename T1,typename T2,typename T3>
void print(map<pair<T1,T2>,T3 > &m){
	cout<<"{ ";
	for(pair<pair<T1,T2>,T3> p:m){
		cout<<'['<<p.first.first<<','<<p.first.second<<','<<p.second<<']'<<"  ,";
	}
	cout<<" }"<<endl;
}

template<typename T1,typename T2,typename T3,typename T4>
void print(map<pair<T1,T2>,pair<T3,T4> > &m){
	cout<<"{ ";
	for(pair<pair<T1,T2>,pair<T3,T4> > p:m){
		cout<<'['<<p.first.first<<','<<p.first.second<<','<<p.second.first<<p.second.second<<']'<<"  ,";
	}
	cout<<" }"<<endl;
}

/*---unordered map---*/
template<typename T1,typename T2>
void print(unordered_map<T1,T2> &m){
	cout<<"{ ";
	for(pair<T1,T2> p:m){
		cout<<'['<<p.first<<','<<p.second<<']'<<"  ,";
	}
	cout<<" }"<<endl;
}

template<typename T1,typename T2,typename T3>
void print(unordered_map<T1,pair<T2,T3> > &m){
	cout<<"{ ";
	for(pair<T1,pair<T2,T3>> p:m){
		cout<<'['<<p.first<<','<<p.second.first<<','<<p.second.second<<']'<<"  ,";
	}
	cout<<" }"<<endl;
}

template<typename T1,typename T2,typename T3>
void print(unordered_map<pair<T1,T2>,T3 > &m){
	cout<<"{ ";
	for(pair<pair<T1,T2>,T3> p:m){
		cout<<'['<<p.first.first<<','<<p.first.second<<','<<p.second<<']'<<"  ,";
	}
	cout<<" }"<<endl;
}

template<typename T1,typename T2,typename T3,typename T4>
void print(unordered_map<pair<T1,T2>,pair<T3,T4> > &m){
	cout<<"{ ";
	for(pair<pair<T1,T2>,pair<T3,T4> > p:m){
		cout<<'['<<p.first.first<<','<<p.first.second<<','<<p.second.first<<p.second.second<<']'<<"  ,";
	}
	cout<<" }"<<endl;
}


/*------------------------- satck ---------------------------*/
template<typename T>
void print(stack<T>&s){
	vector<T>v;
	cout<<"[ ";
	while(!s.empty()){
		cout<<s.top()<<" ";
		v.push_back(s.top());
		s.pop();
	}
	cout<<']'<<endl;
	for(int i=v.size()-1;i>=0;i--)
		s.push(v[i]);
}


template<typename T1,typename T2>
void print(stack<pair<T1,T2>>&s){
	vector<pair<T1,T2>>v;
	cout<<"[ ";
	while(!s.empty()){
		print(s.top());
		v.push_back(s.top());
		s.pop();
	}
	cout<<']'<<endl;
	for(int i=v.size()-1;i>=0;i--)
		s.push(v[i]);
}


/*---------------------- queue --------------------------*/
template<typename T>
void print(queue<T>&q){
	vector<T>v;
	cout<<"[ ";
	while(!q.empty()){
		cout<<q.front()<<" ";
		v.push_back(q.front());
		q.pop();
	}
	cout<<']'<<endl;
	for(int i=0;i<v.size();i++)
		q.push(v[i]);
}


template<typename T1,typename T2>
void print(queue<pair<T1,T2>>&q){
	vector<pair<T1,T2>>v;
	cout<<"[ ";
	while(!q.empty()){
		print(q.front());
		v.push_back(q.front());
		q.pop();
	}
	cout<<']'<<endl;
	for(int i=0;i<v.size();i++)
		q.push(v[i]);
}


/*---------------------- priority-queue --------------------------*/
template<typename T>
void print(priority_queue<T>&pq){
	vector<T>v;
	cout<<"[ ";
	while(!pq.empty()){
		cout<<pq.top()<<" ";
		v.push_back(pq.top());
		pq.pop();
	}
	cout<<']'<<endl;
	for(int i=0;i<v.size();i++)
		pq.push(v[i]);
}


template<typename T1,typename T2>
void print(priority_queue<pair<T1,T2>>&pq){
	vector<pair<T1,T2>>v;
	cout<<"[ ";
	while(!pq.empty()){
		print(pq.top());
		v.push_back(pq.top());
		pq.pop();
	}
	cout<<']'<<endl;
	for(int i=0;i<v.size();i++)
		pq.push(v[i]);
}