#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(OddRemoveTest, ValidVector) {
  Solution solution;
  int arr[]={1,2,3,4,1,2,3,4};
  int n=sizeof(arr)/sizeof(int);
  vector<int> v = {arr,arr + n};
  solution.oddremove(v);
  vector<int> actual = v;
  int arr1[]={2,4,2,4};
  n=sizeof(arr1)/sizeof(int);
  vector<int> v1 = {arr1,arr1 + n}; 
  vector<int> expected = v1;
  EXPECT_EQ(expected, actual);
}

TEST(OddRemoveTest, EmptyVector) {
  Solution solution;
  int arr[]={};
  int n=sizeof(arr)/sizeof(int);
  vector<int> v = {arr,arr + n};
  solution.oddremove(v);
  vector<int> actual = v;
  int arr1[]={};
  n=sizeof(arr1)/sizeof(int);
  vector<int> v1 = {arr1,arr1 + n}; 
  vector<int> expected = v1;
  EXPECT_EQ(expected, actual);
}