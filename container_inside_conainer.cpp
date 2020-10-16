#include <iostream>
#include <vector>

using namespace std;


int main() {
  vector<int> myvector = {1,2,3,4,5};
  vector<int> :: iterator it;

  for(it = myvector.begin(); it != myvector.end(); it++) {
    cout<<*it<<endl;
  }

  //creating a tree with vector
  //vector inside a vector
  vector<vector<int>> tree;
  int n, from, to;
  cout<<"enter the desired edges" << endl;
  cin>>n;
  tree.resize(n);
  cout<<tree.size()<<endl;
  for(int i=0; i < tree.size(); i++) {
    cout<<"enter from and to connections"<<endl;
    cin>>from>>to;
    tree[from].push_back(to);
  }

  for(int i=0; i < tree.size(); i++) {
    for(it=tree[i].begin(); it < tree[i].end(); it++) {
      cout<<"from: " <<i<<" "<<"to: "<<*it<<endl;
    }
  }
  return 0;
}