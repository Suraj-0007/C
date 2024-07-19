#include<iostream>
using namespace std;
const int numofNodes = 10;
int main(){
    int numofNodes, k, n;
    char i, j, res, c;
    int adj[10][10], path[10][10];
	cout << "\n\tNumber of nodes in the graph :";
    cin >> n;
    numofNodes = n;
    cout << "\n\n\tNodes are lebbled as A,B,C,......\n\n";
    cout << "\nEnter '1'for 'YES' and '0' for 'NO' !!\n";
 	for (i = 65; i < 65 + numofNodes; i++)
        for (j = 65; j < 65 + numofNodes; j++)
        {
            cout << "\n\tIs there an EDGE from " << i << " to " << j << " ? ";
            cin >> res;
            if (res == '1')
                adj[i - 65][j - 65] = 1;
            else
                adj[i - 65][j - 65] = 0;
        }
    cout << "\nAdjacency Matrix:\n";
 	cout << "\n\t\t\t   ";
    for (i = 0; i < numofNodes; i++)
    {
        c = 65 + i;
        cout << c << " ";
    }
    cout << "\n\n";
    for (int i = 0; i < numofNodes; i++)
    {
        c = 65 + i;
        cout << "\t\t\t" << c << "  ";
        for (int j = 0; j < numofNodes; j++)
            cout << adj[i][j] << " ";
        cout << "\n";
    }
    for (int i = 0; i < numofNodes; i++)
        for (int j = 0; j < numofNodes; j++)
            path[i][j] = adj[i][j];
 
    for (int k = 0; k < numofNodes; k++)
        for (int i = 0; i < numofNodes; i++)
            if (path[i][k] == 1)
                for (int j = 0; j < numofNodes; j++)
                    path[i][j] = path[i][j] || path[k][j];
 
    for (int i = 0; i < numofNodes; i++)
        for (int j = 0; j < numofNodes; j++)
            adj[i][j] = path[i][j];
 
    cout << "\nTransitive Closure: \n";
 
    cout << "\n\t\t\t   ";
    for (i = 0; i < numofNodes; i++)
    {
        c = 65 + i;
        cout << c << " ";
    }
    cout << "\n\n";
    for (int i = 0; i < numofNodes; i++)
    {
 
        c = 65 + i;
        cout << "\t\t\t" << c << "  ";
        for (int j = 0; j < numofNodes; j++)
            cout << adj[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
