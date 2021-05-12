// Baekjoon_10773_Zero.cpp
#include <iostream>
#include <vector>
using namespace std;
int main(void){
   int sum = 0;
   int num;
   int words[100000];
   vector<int> nums;

   cin >> num;

   for ( int i = 0; i < num; i++ ){
    cin >> words[i];
     
    if ( words[i] != 0 )
    	nums.push_back(words[i]);
    else
      	nums.pop_back();
   }

    int size = nums.size();
    for ( int i = 0; i < size; i++ )
        sum += nums.at(i);
 
   cout << sum << '\n';

   return 0;

}