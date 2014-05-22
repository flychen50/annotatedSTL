#include <algorithm>
#include <vector>
#include <functional>
#include <iostream>
#include <iterator>
#include <string>
using namespace std;
template <class T>
struct display{
  void operator()(const T& x)const{
    cout<<x<<' ';
}
};


int main(){
  int ia[10]={0,1,2,3,4,5,6,7,8,9};
  vector<int> iv1(ia,ia+5);
  vector<int> iv2(ia,ia+9);

  cout<<*(mismatch(iv1.begin(),iv1.end(),iv2.begin()).first);
  cout<<*(mismatch(iv1.begin(),iv1.end(),iv2.begin()).second);
  for_each(iv1.begin(),iv1.end(),display<int>());
}
