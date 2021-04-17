#include <bits/stdc++.h>
using namespace std;

bool checker(int *arr, int n)
{
  if(n == 1)
  {
    return true;
  }
  
  bool restArray = checker(arr+1, --n);
  return (arr[0] < arr[1] && restArray);
  
}
int main()
{
  int n;
    cin >> n;
  int arr[n];
  
  for(int i=0; i<n; i++)
  {
    cin >> arr[i] ;
  }
  
 
  cout << checker(arr, n) << endl;
}
