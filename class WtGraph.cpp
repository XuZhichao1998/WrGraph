#include <bits/stdc++.h>
using namespace std;
//template<typename T1,typename T2>
class WtGraph{  //Weighted Graph ��Ȩͼ ����ͼ(��) AN 
	private:
		const static int INF;
		const static unsigned int MaxVexNum;
		const static unsigned int MaxArcNum;
		int NumVex,NumArc; //������������ 
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
			cout<<"�������������Ķ������ͱ�����";
			cin>>NumVex>>NumArc;
			cout<<"������"<<NumVex<<"�����������"<<endl; 
			for(int i=0;i<NumVex;i++)
			{
				cin>>vexs[i];
			}
		
			string from,to;
			cout<<"������"<<NumArc<<"����(u v val)��"<<endl;
			for(int i=1;i<=NumArc;i++)
			{
				cout<<"�������"<<i<<"��������㣬�յ㣬��Ȩ��";
				cin>>from>>to;
				int st = LocatedVex(from);
				int ed = LocatedVex(to);
				if(st==-1||ed==-1)
				{
					cout<<"��������Ҳ�����Ӧ�Ķ��㣡"<<endl;
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
				cout<<"û����Ӧ�Ķ���"<<endl;
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
Ҫ����
���������һ���յ�ͼ��Ϊ������㹻���ڴ�ռ䣬������maxNumber�������ͼ��

DeWtGraph( ) 
Ҫ����
������ͷ�( free)�洢ͼռ�õĿռ䡣 

void insertVertex( Vertex newVertex ) 
Ҫ��ͼ������
��������newVertex��ͼ�С�������������ͼ���Ѵ��ڣ���������� 

void insertEdge( char * v1, char *v2, int wt ) 
Ҫ��ͼ��������v1��v2�� 
��������һ������v1��v2������ߵ�ͼ�С��ߵ�ȨֵΪ wt , ����Ѿ�������������������ıߣ�����±ߵ�Ȩֵ��

bool retrieveVetex( char *v, Vertex &vData ) 
Ҫ����
�������ͼ����������v���������������㣬���������������ݵ�vData��Ȼ�󷵻�true, ���򷵻�false, vDataֵ��ȷ����

bool getEdgeWeight( char *v1, char *v2, int &wt ) 
Ҫ��ͼ��������v1��v2�� 
�������ͼ����������v1��v2������ߣ�������������ߣ��򷵻�true,������wt���������ߵ�Ȩֵ�����򷵻�false, wtֵ��ȷ���� 

void removeVertex( char *v ) 
Ҫ��ͼ��������v�� 
�������ͼ��ɾ������v�� 

void removeEdge( char *v1, char *v2 ) 
Ҫ��ͼ��������v1��v2�� 
�������ͼ��ɾ������v1��v2������ߡ� 

void clear( ) 
Ҫ����
�����ɾ��ͼ�е����ж���ͱߡ� 

bool isEmpty( ) 
Ҫ����
��������ͼΪ��(�޶���)���򷵻�true �����򣬷���false �� 

bool isFull( )
Ҫ����
��������ͼΪ�����򷵻�true�����򣬷���false�� 

void showStructure( ) 
Ҫ����
�������������ʽ���ͼ�Ķ��㣬���ڽӾ�����ʽ�����(��Ȩֵ)�����ͼΪ�գ��������Empty graph�����������ֻ���ڲ���/����Ŀ�ġ�







*/
int main()
{
	
	
	
	
	
	return 0;	
} 
