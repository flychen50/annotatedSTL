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

template <class InputIterator1,class InputIterator2>
inline bool equal_cxf(InputIterator1 first1,InputIterator2 last1,InputIterator2 first2){
  for(;first1!=last1;++first1,++first2)
    if(*first1!=*first2)
      return false;
  return true;


}



int main(){
  int ia[10]={0,1,2,3,4,5,6,7,8,9};
  vector<int> iv1(ia,ia+5);
  vector<int> iv2(ia,ia+9);

  cout<<*(mismatch(iv1.begin(),iv1.end(),iv2.begin()).first);
  cout<<*(mismatch(iv1.begin(),iv1.end(),iv2.begin()).second);

  for_each(iv1.begin(),iv1.end(),display<int>());

  cout<<equal_cxf(iv1.begin(),iv1.end(),iv2.begin());
  // cout<<*max(*)

  string stra1[] = {"Jamie","JJHou","Jason"};
 string stra2[] = {"Jamie","JJhou","Jason"};
 // cout<<"compare:"<<lexicographical_compare(stra1,stra1+2,stra2,stra2+2);
 copy(ia+2,ia+7,ia+4);

 for_each(ia,ia+9,display<int>());
}
