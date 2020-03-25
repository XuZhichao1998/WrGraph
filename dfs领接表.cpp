#include <iostream>
#include <cstdio>
#include <cstring> 
#include <map> 
#define cl(a,b) memset(a,(b),sizeof(a))
using namespace std;
int mp[257];
const int maxv = 1000;
const int maxn = 1000000;
double a[maxv][maxv];
bool vis[maxv];
char ve[maxn];
int m,n,cnt;
const int inf = INT_MAX;
struct Node
{
	int to;
	double d;
	int Next;
}node[maxn];
int tot;
int head[maxv];
void init(int n)
{
	cl(mp,-1);
	cl(vis,0);
	cl(head,-1);
	tot = 0;
}
void addedge(int u,int v,double dis)
{
	node[tot].to = v;
	node[tot].d = dis;
	node[tot].Next = head[u];
	head[u] = tot++;
}
void dfs(int x)
{
	if(vis[x]) return;
	cout<<"���ʶ��㣺"<<ve[x]<<endl;
	vis[x] = true;
	for(int i=head[x];~i;i=node[i].Next)
	{
		if(!vis[node[i].to])
		{
				dfs(node[i].to);
		}
	}
}
int main()
{
	freopen("in.txt","r",stdin); 
	cout<<"�����붥�������n,�ߵ�����m:";
	cin>>n>>m;
	init(n);
	char u,v;
	char str1[3],str2[3];
	int uu,vv;
	double d;
	cout<<"������"<<m<<"����:(����u,����v,�ߵ�Ȩֵd)\n";
	for(int i=0;i<m;i++)
	{
		cin>>str1>>str2>>d;
		u = str1[0],v = str2[0];
		if(mp[(int)u]!=-1) uu = mp[(int)u];
		else mp[(int)u] = cnt,ve[cnt] = u,uu = cnt++;
		if(mp[(int)v]!=-1) vv = mp[(int)v];
		else mp[(int)v] = cnt,ve[cnt] = v,vv = cnt++;
		addedge(uu,vv,d);
		addedge(vv,uu,d);
	} 
	dfs(0); 

	return 0;
} 
