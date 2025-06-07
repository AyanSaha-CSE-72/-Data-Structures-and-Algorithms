#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
bool visited[MAX];

vector <int> edges[MAX];
void dfs(int node){
//    cout<<"Node state Before visit: "<<visited[node]<<endl;
    visited[node]=true;
//    cout<<"Node state After visit: "<<visited[node]<<endl;
    cout<<node<<" ";
    for(auto it:edges[node]){
        if(!visited[it]){
//            cout<<it<<"called dfs\n";
            dfs(it);
        }
    }
}
//vector <char> edges[MAX];
//void dfs(char node){
////    cout<<"Node state Before visit: "<<visited[node]<<endl;
//    visited[node]=true;
////    cout<<"Node state After visit: "<<visited[node]<<endl;
//    cout<<node<<" ";
//    for(auto it:edges[node]){
//        if(!visited[it]){
////            cout<<it<<"called dfs\n";
//            dfs(it);
//        }
//    }
//}
int main(){
    edges[1].emplace_back(2);
    edges[2].emplace_back(1);
    edges[2].emplace_back(4);
    edges[4].emplace_back(2);
    edges[1].emplace_back(3);
    edges[3].emplace_back(1);
    edges[4].emplace_back(3);
    dfs(1);
//    int n,s,e,d;
//    cout<<"Enter the number of nodes: ";
//    cin>>n;
//
//    for(int i=1;i<=n;i++){
//        cout<<"Please enter the degree of node "<<i<<" ";
//        cin>>d;
//        for(int j=1;j<=d;j++){
//            cout<<"Please enter the "<<j<<"th edges connected with "<<i<<" ";
//            cin>>e;
//            edges[i].emplace_back(e);
//        }
//
//    }

//    int n,d;
//
//    cout<<"Enter the number of nodes: ";
//    cin>>n;
//    char node[n],e,s;
//    cout<<"Please enter the name of nodes: ";
//    for(int i=0;i<n;i++){
//        cin>>node[i];
//    }
//    for(int i=0;i<n;i++){
//
//        cout<<"Please enter the degree of node "<<node[i]<<" ";
//        cin>>d;
//        for(int j=1;j<=d;j++){
//            cout<<"Please enter the "<<j<<"th edges connected with "<<node[i]<<" ";
//            cin>>e;
//            edges[node[i]].emplace_back(e);
//        }
//
//    }
//
//    cout<<"Please enter the starting node: ";
//    cin>>s;
//
//    cout<<"The result of DFS is: ";
//    dfs(s);

//    for(int i=1; i<=4;i++){
//        if(!visited[i]){
//            dfs(i);
//        }
//    }

    return 0;
}
