#include <algorithm>
#include <vector>
#include <functional>
#include <iostream>
using namespace std;

template <class T>
struct display{
  void operator()(const T& x) const
  { cout<< x<<' ';}
};

struct even
{
  bool operator()(int x) const
  { return x%2? false:true;}
};
class even_by_two{
 public:
  int operator()() const
  { return _x+=2;
  }
 private:
  static int _x;

};


int even_by_two = 0;
int main(int argc, char *argv[])
{
  int ia[]={0,2,4,6,8,10,12,12,12,14,16};
  vector<int> iv(ia,ia+sizeof(ia)/sizeof(int));

  // cout<<*adjacent_find(iv.begin(),iv.end())<<endl;
  // cout<<*adjacent_find(iv.begin(),iv.end(),equal_to<int>());
  // cout<< count_if(iv.begin(),iv.end(),bind2nd(less<int>(),20))<<endl;
  vector<int>::iterator  fd = iv.begin();
  if((fd = find_if(iv.begin(),iv.end(),bind2nd(greater<int>(),19))) != iv.end()){
    cout<<"finding"<<endl;
    for_each(fd,iv.end(),display<int>());
  }else{
    cout<<"find failed"<<endl;
  }


  return 0;
}
