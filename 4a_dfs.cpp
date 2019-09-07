#include <iostream>

using namespace std;
int visited[50];
int adj[50][50];
int v;
void DFS(int x)
{
	cout<<x<<"\t";
	visited[x]=1;
	for(int i=1;i<v;i++)
	{
		if(adj[x][i]==1 and visited[i]==0)
			DFS(i);
	}
}

int main(int argc, char **argv)
{
	int i,j;
	cout<<"Enter the number of nodes:"<<endl;
	cin>>v;
	cout<<"Enter the adjacency matrix:"<<endl;
	for(i=0;i<v;i++)
		for(j=0;j<v;j++)
			cin>>adj[i][j];
	cout<<"The connected components are:"<<endl;
	for(int i=0;i<v;i++)
		visited[i]=0;
	DFS(0);
	
	for(int j=0;j<v;j++)
		{cout<<"\n";
		if(visited[j]==0)
			DFS(j);
		}
	
	
	return 0;
}
