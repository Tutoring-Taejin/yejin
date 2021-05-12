// Baekjoon_9012_Parenthesis.cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(void){
	int test_data;
	int len;

	cin >> test_data;

	for ( int i = 0; i < test_data; i++ ){
		vector<char> words;
		int isVPS = 1;
		string str;
		cin >> str;

		len = str.size();
		for ( int j = 0; j < len; j++ ){
			if ( str[j] == '(' )
				words.push_back('(');
			else {
				if ( words.empty() == 1 ){
					isVPS = 0;
					break;
				}
				else
					words.pop_back();
			}
		}

		if( words.empty() == 0 )
			cout << "NO" << '\n';
		else {
			if( isVPS == 1 )
				cout << "YES" << '\n';
			else
				cout << "NO" << '\n';
		}
	}

	return 0;

}