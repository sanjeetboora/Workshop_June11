#include <bits/stdc++.h>
using namespace std;

int main()
{

	// pair<int, int>p;
	// p.first = 10;
	// p.second = 100;
	// cout << p.first << ", " << p.second << endl;


	// pair<int, string> p2 = {10, "xyz"};
	// cout << p2.first << ", " << p2.second << endl;

	// pair<int, string> p3;
	// p3 = make_pair(30, "cat");
	// cout << p3.first << ", " << p3.second << endl;


	// pair<int, string> arr[10] = {{10, "abc"}, {20, "def"}, {30, "xyz"}};
	// for (int i = 0; i < 3; i++) {
	// 	cout << arr[i].first << ", " << arr[i].second << endl;
	// }

	// pair<int, pair<int, string> > p4;
	// p4.first = 50;
	// p4.second = make_pair(100, "mno");

	// cout << p4.first << " --> " << p4.second.first << ", " << p4.second.second << endl;


//array

	// int arr[10] = {1, 2, 3, 4};

	// array<int, 10> arr1 = {1, 2, 3, 4, 5, 6};

	// for (int i = 0; i < 10; ++i)
	// {
	// 	cout << arr1[i] << ", ";
	// } cout << endl;

	// array<int, 10>:: iterator it1;

	// for (it1 = arr1.begin(); it1 != arr1.end() ; it1++)
	// {
	// 	cout << *(it1) << ", ";
	// } cout << endl;

	// for (auto it2 = arr1.begin(); it2 != arr1.end(); it2++) {
	// 	cout << *(it2) << ", ";
	// } cout << endl;

	// for (auto x : arr1) {
	// 	cout << x << ", ";
	// } cout << endl;



//vector

	// vector<int> v; //{}

	// v.push_back(1);//{1}
	// v.push_back(2);//{1, 2}
	// v.push_back(3);//{1,2,3}

	// v.emplace_back(4);//{1,2,3,4}

	// for (auto i : v) {
	// 	cout << i << ", ";
	// }
	// cout << endl;

	// vector<pair<int, string> >v2;
	// v2.push_back(make_pair(1, "abc"));
	// v2.push_back({2, "def"});

	// v2.emplace_back(make_pair(3, "xyz"));

	// v2.emplace_back(4, "mno");

	// //v2.push_back(5, "pqr"); error

	// for (auto i : v2) {
	// 	cout << i.first << ", " << i.second << endl;
	// }
	// cout << endl;
	// vector<int> v3(5, 200); //{200,200,200,200,200}
	// v3[0] = 500;
	// v3[1] = 700;
	// for (auto i : v3) {//{500,700,200,200,200}
	// 	cout << i << ", ";
	// }
	// cout << endl;

	// //v3.erase(v3.begin());
	// v3.erase(v3.begin() + 1, v3.begin() + 3); //v.erase([first, end))
	// for (auto i : v3) {//500, 200, 200,
	// 	cout << i << ", ";
	// }
	// cout << endl;

	// vector<vector<int> > v4;
	// v4.push_back({1, 2, 3, 4});
	// v4.push_back({11, 12, 13, 14});

	// for (auto i : v4) {
	// 	for (auto j : i)
	// 	{
	// 		cout << j << ",";
	// 	} cout << endl;
	// }


	//list

	// list<int> ls;
	// ls.push_back(10);
	// ls.emplace_back(20);

	// for (auto j : ls)
	// {
	// 	cout << j << ",";
	// } cout << endl;

	// ls.push_front(15);
	// ls.emplace_front(25);

	// for (auto j : ls)
	// {
	// 	cout << j << ",";
	// } cout << endl;


//stack
	// stack<int> st;
	// st.push(1);
	// st.push(2);
	// st.push(3);
	// st.push(4);
	// st.emplace(5);

	// cout << st.top() << endl;
	// st.pop();
	// cout << st.top() << endl;
	// st.pop();
	// cout << st.top() << endl;
	// st.pop();
	// cout << st.top() << endl;
	// st.pop();
	// cout << st.top() << endl;
	// st.pop();

//last in first out

	// cout << st.size() << endl;
	// cout << st.empty() << endl;

	// stack<int> st1;
	// st1.push(10);
	// st1.push(11);
	// cout << st1.empty() << endl;
	// st1.swap(st);
	// cout << st1.top() << endl;

//queue

// 	queue<pair<int, string> > q;
// 	q.push(make_pair(1, "abc"));
// 	q.push(make_pair(2, "def"));
// 	q.push(make_pair(3, "ghi"));

// //first in first out
// 	cout << q.front().first << ", " << q.front().second << endl;
// 	q.pop();
// 	cout << q.front().first << ", " << q.front().second << endl;
// 	q.pop();
// 	cout << q.front().first << ", " << q.front().second << endl;
// 	q.pop();


//deque
	// deque<string> dq;

	// dq.push_back("abc");
	// dq.emplace_back("def");

	// dq.push_front("xyz");
	// dq.emplace_front("pqr");

	// cout << dq.back() << endl;
	// cout << dq.front() << endl;


	// for (auto i : dq) {
	// 	cout << i << ", ";
	// } cout << endl;

//set
// 	set<int> st;
// 	st.insert(5);
// 	st.insert(1);
// 	st.emplace(0);
// 	st.emplace(2);

// 	for (auto it : st)
// 	{
// 		cout << it << ",";

// 	} cout << endl;

// //	st.erase(1);
// 	auto it = st.find(1); //log(n)
// 	st.erase(it);

// 	for (auto it : st)
// 	{
// 		cout << it << ",";

// 	} cout << endl;

// 	auto it1 = st.find(14);
// 	if (it1 != st.end()) {
// 		cout << "14 found" << endl;
// 	}
// 	else {
// 		cout << "14 not found" << endl;
// 	}

	// multiset<int> ms;
	// ms.insert(10);
	// ms.insert(10);
	// ms.insert(100);
	// ms.insert(10);
	// ms.insert(10);

	// for (auto it : ms)
	// {
	// 	cout << it << ",";

	// } cout << endl;

	unordered_set<int> us;
	us.insert(10);
	us.insert(1);
	us.insert(5);
	us.insert(7);
	us.insert(3);

	auto it1 = us.find(7); //O(N)
	if (it1 != us.end()) {
		cout << "7 found" << endl;
	}
	else {
		cout << "7 not found" << endl;
	}


	for (auto it : us)
	{
		cout << it << ",";

	} cout << endl;








	return 0;
}





