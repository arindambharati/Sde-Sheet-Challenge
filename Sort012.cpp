#include <iostream>
using namespace std;

//this is o(n)+o(n) time complexity
//therfore time complexity is o(n);
// Space Complexity : O(1)

void Sort012(int arr[],int n) //Not Optimal approach
{
  int count0=0;
  int count1=0;
  int count2=0;

  for(int i=0;i<n;i++)
  {
    if(arr[i]==0)
    {
      count0++;
    }
    if(arr[i]==1)
    {
      count1++;
    }
    if(arr[i]==2)
    {
      count2++;
    }
  }

  int i;
  for(i=0;i<count0;i++)
  {
    arr[i]=0;
  }
  for(i=count0;i<count0+count1;i++)
  {
    arr[i]=1;
  }
  for(i=count0+count1;i<count0+count1+count2;i++)
  {
    arr[i]=2;
  }
}


//The time complexity is O(n) only
// But we are not traversing through the array in again after ending the first loop.
// We are iterating through all the elements only once.
// Space Complexity : O(1)
void Sort012(int arr[],int n) //Optimal Approach
{
  int low=0;
  int mid=0;
  int high=n-1;

  int temp;
  while(mid<=high)
  {
    switch(arr[mid])
    {
      case 0: 
          {
            temp=arr[mid];
            arr[mid]=arr[low];
            arr[low]=temp;
            mid++;
            low++;

            break;
          }
      case 1:
          {
            mid++;
            break;
          }

      case 2:
          {
            temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
            high--;
            break;
          }
    }
  }
}

int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  Sort012(arr,n);
  cout<<"\nafter 012 sort:";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }

}
