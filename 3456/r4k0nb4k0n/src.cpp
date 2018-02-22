#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int test_cases, T, arr[3];
  cin >> T;
  for(test_cases=1; test_cases<=T; test_cases++){
    cout << "#" << test_cases << " ";
    for(int i=0; i<3; i++) cin >> arr[i];
    sort(arr, arr+3);
    if(arr[0] == arr[1] && arr[1] == arr[2])
      cout << arr[0] << "\n";
    else if(arr[0] < arr[1])
      cout << arr[0] << "\n";
    else if(arr[1] < arr[2])
    cout << arr[2] << "\n";
  }
  return 0;
}
