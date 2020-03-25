#include <bits/stdc++.h>
using namespace std;
//template<typename T1,typename T2>
class WtGraph{  //Weighted Graph 加权图 无向图(网) AN 
	private:
		const static int INF;
		const static unsigned int MaxVexNum;
		const static unsigned int MaxArcNum;
		int NumVex,NumArc; //顶点数，边数 
		int AdjMatrix[50][50];
		string vexs[50];
		WtGraph(int nVex=0,int nArc=0)
		{
			NumVex = nVex;
			NumArc = nArc;
			memset(AdjMatrix,INF,sizeof(AdjMatrix));
		} 
		void CreatWtGraph()
		{
			cout<<"请输入无向网的顶点数和边数：";
			cin>>NumVex>>NumArc;
			cout<<"请输入"<<NumVex<<"个顶点的名称"<<endl; 
			for(int i=0;i<NumVex;i++)
			{
				cin>>vexs[i];
			}
		
			string from,to;
			cout<<"请输入"<<NumArc<<"条弧(u v val)："<<endl;
			for(int i=1;i<=NumArc;i++)
			{
				cout<<"请输入第"<<i<<"条弧的起点，终点，边权：";
				cin>>from>>to;
				int st = LocatedVex(from);
				int ed = LocatedVex(to);
				if(st==-1||ed==-1)
				{
					cout<<"输入错误，找不到相应的顶点！"<<endl;
					i--;
					continue;
				}
			}
		
		}
		int LocatedVex(string& str)
		{
			for(int i=0;i<NumVex;i++)
			{
				if(str==vexs[i]) return i;	
			}
			return -1;	
		}
		void addVex(string& addstr)
		{
			if(LocatedVex(addstr)==-1)
			{
				vexs[NumVex++] = addstr;	
			}	
		}
		void addedge(string & u,string & v,int val)
		{
			int st = LocatedVex(u);
			int ed = LocatedVex(v);
			if(st==-1||ed==-1)
			{
				cout<<"没有相应的顶点"<<endl;
				return;
			}
			AdjMatrix[st][ed] = AdjMatrix[ed][st] = val;
		}
	
};
const unsigned int WtGraph::MaxVexNum = 50;
const unsigned int WtGraph::MaxArcNum = 100;
const int WtGraph::INF = 0x3f3f3f3f;

/*
InitWtGraph( int maxNumber )    //weighted Graph
要求：无
结果：创建一个空的图。为其分配足够的内存空间，它包含maxNumber个顶点的图。

DeWtGraph( ) 
要求：无
结果：释放( free)存储图占用的空间。 

void insertVertex( Vertex newVertex ) 
要求：图不满。
结果：添加newVertex到图中。如果这个顶点在图中已存在，则更新它。 

void insertEdge( char * v1, char *v2, int wt ) 
要求：图包括顶点v1和v2。 
结果：添加一条连接v1和v2的无向边到图中。边的权值为 wt , 如果已经存在连接这两个顶点的边，则更新边的权值。

bool retrieveVetex( char *v, Vertex &vData ) 
要求：无
结果：在图中搜索顶点v。如果发现这个顶点，则复制这个顶点的数据到vData，然后返回true, 否则返回false, vData值不确定。

bool getEdgeWeight( char *v1, char *v2, int &wt ) 
要求：图包括顶点v1和v2。 
结果：在图中搜索连接v1和v2的无向边，如果发现这条边，则返回true,并且用wt返回这条边的权值，否则返回false, wt值不确定。 

void removeVertex( char *v ) 
要求：图包括顶点v。 
结果：从图中删除顶点v。 

void removeEdge( char *v1, char *v2 ) 
要求：图包括顶点v1和v2。 
结果：从图中删除连接v1和v2的无向边。 

void clear( ) 
要求：无
结果：删除图中的所有顶点和边。 

bool isEmpty( ) 
要求：无
结果：如果图为空(无顶点)，则返回true ，否则，返回false 。 

bool isFull( )
要求：无
结果：如果图为满，则返回true，否则，返回false。 

void showStructure( ) 
要求：无
结果：以数组形式输出图的顶点，以邻接矩阵形式输出边(带权值)。如果图为空，则输出“Empty graph”。这个运算只用于测试/调试目的。







*/
int main()
{
	
	
	
	
	
	return 0;	
} 
