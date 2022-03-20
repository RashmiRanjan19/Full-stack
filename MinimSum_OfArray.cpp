#include<iostream>
#include<vector>
#include<list>
using  namespace std;
 
 int main()
 {
     list<int>a;
     for (int i = 0; i < 5; i++)
     {
         /* code */
         int val;
         cin>>val;
         a.push_back(val);
     }
     a.sort();
     int s = a.front();
     a.pop_front();
     int q = a.front();
     cout<<s+q;
     
 }

