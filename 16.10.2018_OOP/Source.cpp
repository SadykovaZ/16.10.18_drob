#include<iostream>
using namespace std;
class drob
{
private:
	//privat protected
	int x;
	int y;

public:
	//����������� �� ���������
	drob()
	{
		x = 0;
		y = 1;
	} 
	//����������� � �����������
	drob(int a, int b)
	{
		x = a;
		setY(b);

	}
	drob(int a)
	{
		x = a;
		y = 1;
	}
	void print()
	{
		cout << x << " / " << y << " = " << (double)x / y;
	}
	//setter �����������
	void setY(int b)
	{
		if (b != 0)
			y = b;
		else
			y = 1;
	}
	void setX(int a)
	{
		x = a;
	}
	//getter
	int getX()
	{
		return x;
	}
	drob()
	{

	}
	~drob()
	{

	}
};
void main()
{
	//drob d(3,2);	// 0/1 //��������� ������ � �������� �����������
	//drob d1; //���������� �� ���������, ����������� ������ ���������
	//drob d2();//��� ������
	//drob d3(14);
	//d3.print();
	int x = 5;
	//a.~A(); ����� ����� �����������
	//���������� ����� ������ ��� ������ � �����������

	system("pause");
}