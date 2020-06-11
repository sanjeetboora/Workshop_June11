#include <bits/stdc++.h>
using namespace std;

int add(int x, int y) {
	return x + y;
}

string concatinate(string x, string y) {
	return x + y;
}

template<typename T>
T addtion(T x, T y) {
	return x + y;
}


template<typename T, typename U>
class Pair
{
public:
	T first;
	U second;
	Pair() {}; //default constructor
	Pair(T x, U y) { //user defined constructor
		first = x;
		second = y;
	}

};


int main(int argc, char const *argv[])
{

	// int a = 10;
	// int b = 20;

	// //cout << add(a, b) << endl;

	// string a1 = "abc";
	// string b1 = "def";
	// //cout << concatinate(a1, b1) << endl;

	// float a2 = 10.50;
	// float b2 = 20.40;

	// //cout << add(a2, b2) << endl;

	// cout << addtion(a, b) << endl;
	// cout << addtion(a1, b1) << endl;
	// cout << addtion(a2, b2) << endl;
	// cout << addtion<float>(a2, b2) << endl;


	Pair<int, string> p;
	p.first = 10;
	p.second = "abc";
	cout << p.first << ", " << p.second << endl;

	Pair<int, string> p2(100, "xyz");
	cout << p2.first << ", " << p2.second << endl;




	return 0;
}