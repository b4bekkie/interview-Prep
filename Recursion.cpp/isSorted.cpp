#include <iostream>
using namespace std ;

bool isSorted ( int arr[] , int size  ) {

    if(size == 0 || size == 1) {
        return true ;
    }
    if(arr[0] > arr[1] ) {
        return false ;
    }
    else {
        bool ans = isSorted(arr+1 , size -1) ;
        return ans ;
    }

}
int main() {





  int arr[5] = {1,5,2,3,4} ;
  int size = 5 ;
  if(isSorted(arr,size)) {
    cout << "sorted" ;
  }
  else {
    cout <<  "not sorted";
  }


}