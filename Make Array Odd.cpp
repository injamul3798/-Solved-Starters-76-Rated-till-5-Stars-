/* 

     ***************************
     *  author:Injamul         *
     *(..01-02-2023...)*
     ***************************

*/



#include<bits/stdc++.h>
#define ll long long
 
#define set    set<int> s(n)
#define map    map<int,int> m;
#define e4 int main()
using namespace std;

void run_code(){
	#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
   #endif  
}


//Lets begin the code
e4{
	run_code();
	int t;                         cin>>t;
	while(t--){
		int n,x;                      cin>>n>>x;
		ll v[n];
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
          ll evn_count=0;
          ll odd=0;
		for(int i=0;i<n;i++){
			if(v[i]%2==0)   evn_count++;
			else            odd++;
		}

          if(odd==n)           cout<<"0"<<endl;
          else if(x%2==1)      cout<<(evn_count+1)/2<<endl;
          else if(odd==0)      cout<<"-1"<<endl;
          else{
          	cout<<evn_count<<endl;
          }

	}
}

/*


3 6 
5 7 9

evn=0




*/