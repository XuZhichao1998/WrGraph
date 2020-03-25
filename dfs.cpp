#include <iostream>
#include <cstdio>
#include <cstring> 
#define cl(a,b) memset(a,b,sizeof(a))
using namespace std;
int mp[257];
const int maxv = 1000;
const int maxn = 1000000;
double a[maxv][maxv];
bool vis[maxv];
char ve[maxn];
int m,n,cnt;
const int inf = INT_MAX;
void init(int n)
{
	cnt = 0;
	cl(vis,0);
	cl(mp,-1);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			a[i][j] = (i!=j)? inf : 0; 
		} 
			
}
void dfs(int x)
{
	if(vis[x]) return;
	cout<<"访问顶点"<<ve[x]<<endl; 
	vis[x] = true;
	for(int i=0;i<n;i++)
	{
		if(a[x][i]<inf)
		{
			if(!vis[i])
			{
				dfs(i); 
			}
		}
	}
}
int main()
{
	freopen("in.txt","r",stdin); 
	cout<<"请输入顶点的数量n,边的数量m:";
	cin>>n>>m;
	init(n);
	char u,v;
	char str1[3],str2[3];
	int uu,vv;
	double d;
	cout<<"请输入"<<m<<"条边:(顶点u,顶点v,边的权值d)\n";
	for(int i=0;i<m;i++)
	{
		cin>>str1>>str2>>d;
		u = str1[0],v = str2[0];
		if(mp[(int)u]!=-1) uu = mp[(int)u];
		else mp[(int)u] = cnt,ve[cnt] = u,uu = cnt++;
		if(mp[(int)v]!=-1) vv = mp[(int)v];
		else mp[(int)v] = cnt,ve[cnt] = v,vv = cnt++;
		a[uu][vv] = a[vv][uu] = d;
	} 
	dfs(0); 
	
		
	
	
	
	return 0;
} 
