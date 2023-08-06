//#include <iostream>
//using namespace std;
//#include <deque>
//#include <algorithm>
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	cout << endl;
//}
////}
////
////deque的构造函数
////void test01()
////{
////	deque<int>d1;
////	for (int i = 0; i < 10; i++)
////	{
////		d1.push_back(i);
////	}
////	printDeque(d1);
////
////	deque<int>d2(d1.begin(), d1.end());
////	printDeque(d2);
////}
//
//
////void test02()
////{
////	deque<int>d1;
////	for (int i = 0; i < 10; i++)
////	{
////		d1.push_back(i);
////	}
////	
////}
//
//void test03()
//{
//	deque<int>d1;
//
//	d1.push_back(10);
//	d1.push_front(20);
//	//printDeque(d1);
//	d1.pop_back();
//	//printDeque(d1);
//
//
//	//指定位置插入删除,用迭代器
//	d1.insert(d1.begin(), 1000);
//	d1.insert(d1.begin(), 2, 10000);
//	d1.erase(d1.begin());
//	sort(d1.begin(), d1.end());
//	printDeque(d1);
//
//}

//int main()
//{
//	//test01();
//	test03();
//	system("pause");
//	return 0;
//}