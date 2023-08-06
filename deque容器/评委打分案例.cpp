//有五名选手abcde，10个评委分别对一名选手打分，去除最高分
//去除最低分，取平均分

#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <deque>
#include <algorithm>
#include <ctime>


class Person
{
public:
	Person(string name, int score)
	{
		this->m_Score = score;
		this->name = name;
	}
	string name;//选手姓名
	int m_Score;//选手平均分
};

void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);
		v.push_back(p);
	}
}

void getScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将评委分数放入deque容器中
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}

		//排序
		sort(d.begin(), d.end());
		//去除最高分和最低分
		d.pop_back();
		d.pop_front();

		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		int avg = sum / d.size();

		it->m_Score = avg;
	}
}

//展示
void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "选手：" << (*it).name << "\t" << "平均分：" << (*it).m_Score << endl;
	}
}


int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	//创建五名选手
	vector<Person>v;
	createPerson(v);

	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "姓名：" << (*it).name << "分数：" << (*it).m_Score << endl;
	//}

	//给五个选手打分
	getScore(v);

	//展示分数
	showScore(v);


	system("pause");
	return 0;
}