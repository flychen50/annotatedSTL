#include <algorithm>
#include <vector>
#include <functional>
#include <iostream>
using namespace std;

template<class T>
struct  display{
void operator(  )( const T &x){
  cout<<x<<' ';
}
};

int main(  ){
  
int ia[  ]={
  0,1,2,3,4,5,6,7,8,9,10
};

 vector<int> iv( ia,ia+sizeof( ia )/sizeof( int ) );

 vector<int>::iterator  it =iv.begin()+3; 

 reverse(iv.begin(  ), it);

 reverse( it,iv.end(  ) );
 reverse(iv.begin(  ),iv.end( )  );

 for_each( iv.begin(  ),iv.end(  ),display<int>( )  );
}


















