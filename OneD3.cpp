#include <iostream> 
#include<vector>
#include<algorithm>
using namespace std; 

void intersect(int arr1[], int arr2[], int n1, int n2) 
{ 
  int i = 0, j = 0;
  vector<int> arr;
  for(int i = 0;i<n1;i++)
  {
    arr.push_back(arr1[i]);
  }
  sort(arr1,arr1+n1);
  sort(arr2,arr2+n2);
  cout<<"Array1:\n";
  for(int i = 0;i<n1;i++)
  {
    cout<<arr1[i]<<" ";
  }
  cout<<"Array2:\n";
  for(int i = 0;i<n2;i++)
  {
    cout<<arr2[i]<<" ";
  }
  cout<<"arr:\n";
  for(int i = 0;i<n2;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<"Intersect is: \n";
  while (i < n1 && j < n2) 
  {
    if(arr1[i] < arr2[j])
    {
      i++;
    }
    else if(arr1[i] > arr2[j])
    {
      j++;
    }
    else if(arr1[i] == arr2[j])
    {
      int k = arr1[i];
      if(find(arr.begin(),arr.end(),k)!=arr.end())
      {
        auto it = find(arr.begin(),arr.end(),k);
        cout<<*it<<" ";
      }
      i++;
      j++;
    }
  } 
} 
  
int main() 
{ 
  int n1,n2;
  cout<<"Enter the size of array1: \n";
  cin>>n1;
  cout<<"Enter the size of array2: \n";
  cin>>n2;
  cout<<"Enter array1: \n";
  int arr1[n1],arr2[n2];
  for(int i = 0;i<n1;i++)
  {
    cin>>arr1[i];
  }
  cout<<"Enter array2: \n";
  for(int i = 0; i<n2; i++)
  {
    cin>>arr2[i];
  }
  intersect(arr1,arr2,n1,n2);
  return 0; 
}