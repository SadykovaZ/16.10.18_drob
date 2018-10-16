#include<iostream>
using namespace std;
class drob
{
private:
	//privat protected
	int x;
	int y;

public:
	//конструктор по умолчанию
	drob()
	{
		x = 0;
		y = 1;
	} 
	//конструктор с параметрами
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
	//setter модификатор
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
	//drob d(3,2);	// 0/1 //создается обьект и вызывает констурктор
	//drob d1; //конструтор по умолчанию, конструктро всегда публичном
	//drob d2();//так нельзя
	//drob d3(14);
	//d3.print();
	int x = 5;
	//a.~A(); явный вызов деструктора
	//деструктор нужен только для работы с указателями

	system("pause");
}