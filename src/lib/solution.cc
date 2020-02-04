#include "solution.h"
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

void Solution::oddremove(vector<int>& v) { 
  
  for(auto it=v.begin();it!=v.end(); it++)
    {
      if((*it%2)!=0)
        v.erase(it);
    }
   
}
