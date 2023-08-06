//������ѡ��abcde��10����ί�ֱ��һ��ѡ�ִ�֣�ȥ����߷�
//ȥ����ͷ֣�ȡƽ����

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
	string name;//ѡ������
	int m_Score;//ѡ��ƽ����
};

void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
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
		//����ί��������deque������
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}

		//����
		sort(d.begin(), d.end());
		//ȥ����߷ֺ���ͷ�
		d.pop_back();
		d.pop_front();

		//ȡƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		int avg = sum / d.size();

		it->m_Score = avg;
	}
}

//չʾ
void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "ѡ�֣�" << (*it).name << "\t" << "ƽ���֣�" << (*it).m_Score << endl;
	}
}


int main()
{
	//���������
	srand((unsigned int)time(NULL));
	//��������ѡ��
	vector<Person>v;
	createPerson(v);

	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "������" << (*it).name << "������" << (*it).m_Score << endl;
	//}

	//�����ѡ�ִ��
	getScore(v);

	//չʾ����
	showScore(v);


	system("pause");
	return 0;
}