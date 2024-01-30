/*
Given an array a of size N which contains elements from 0 to N-1,
 you need to find all the elements occurring more than once in the given array.
Return the answer in ascending order. If no such element is found, return list containing [-1]. 
Note: The extra space is only for the array to be returned. Try and perform all operations within the provided array. 
*/
/*
Input:
N = 4
a[] = {0,3,1,2}
Output: 
-1
Explanation: 
There is no repeating element in the array. Therefore output is -1.
*/
#include<iostream>
using namespace std;
#include<vector>
vector<int> duplicates(int v[], int n)
 {
        vector<int>p;
                  for (int i=0;i<n;i++)
                  {
                      int index= v[i]%n;
                      v[index]=v[index]+n;
                  }
                  for (int i=0;i<n;i++)
                  {
                      if(v[i]/n>=2)
                      p.push_back(i);
                  }
          
          if(p.empty())
          {
               p.push_back(-1);
          return p; 
          }
          return p;
    }
int main()
{
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
          cin>>a[i];
     }
     vector<int>e=duplicates(a,n);
      for (int i=0;i<e.size();i++)
      {
          cout<<e[i]<<" ";
      }
}
