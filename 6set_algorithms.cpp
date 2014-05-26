#include <set>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

template <class T>
struct display{
  void operator()(const T& x){
    cout<<x<<' ';
}

};

 
  main(){
    int ia1[6] = {1,3,5,7,9,11};
    int ia2[7] = {1,1,2,3,5,8,13};

    multiset<int> S1(ia1,ia1+6);
    multiset<int> S2(ia2,ia2+7);
   
    multiset<int>::iterator  first1 = S1.begin();
    multiset<int>::iterator    last1 = S1.end();
    multiset<int>::iterator     first2 = S2.begin();
    multiset<int>::iterator     last2 = S2.end();

    set_intersection(first1,last1,first2,last2,ostream_iterator<int>(cout," "));


}
