#include <iostream>
using namespace std;

int main() {
  int m,i;
  cout<<"Enter no. of internal nodes present in the m-ary tree : ";
  cin>>i;
  cout<<"Enter least no of childen each node can have : ";
  cin>>m;

  int ans =0;
  ans = (m-1)*i+1;
  cout<<"No of leaf in an m-ary tree is "<<ans<<endl;
  
}