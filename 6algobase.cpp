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
  // cout<<*(mismatch(iv1.begin(),iv1.end(),iv2.begin()).first)<<endl;
  // cout<<*(mismatch(iv1.begin(),iv1.end(),iv2.begin()).second)<<endl;;
  //   cout<<  equal(iv1.begin(),iv1.end(),iv1.begin());
   //cout<<  equal(iv1.begin(),iv1.end(),&ia[3],less<int>());
   fill(iv1.begin(),iv1.end(),9);
   fill_n(iv1.begin(),3,7);


  vector<int>::iterator ite1 = iv1.begin();
  vector<int>::iterator ite2 = ite1;
  advance(ite2,3);
  for_each(ite2,iv1.end(),display<int>());
}
