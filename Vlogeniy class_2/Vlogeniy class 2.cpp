#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include<string>
using namespace std;
class A
{
private:
	int y;
	int r;
public:
	int o;
protected:
	int e;

};
class B :public A
{
private:
	int p=o;
	int r=e;
public:
	int o;
protected:
	int e;

};
class Point 
{
protected:
	int y;
	int x;
public:
	Point()
	{
		x = y = 0;
	}
	int& GetX()
	{
		return x;
	}
	int& GetY()
	{
		return y;
	}
};
class MyWindows: public Point
{
	int width;
	int heigth;
public:
	MyWindows(int W,int H)
	{
		 width=W;
		 heigth=H;
	}
	int& Getwidth()
	{
		return width;
	}
	int& Getheigth()
	{
		return heigth;
	}
	void MoveX(int DX)
	{
		x += DX;
	}
	void MoveY(int DY)
	{
		y+= DY;
	}

	void Show()
	{
		cout << "-------------------------\n\n";
		cout << "X = " << x << "\n\n";
		cout << "Y = " <<y << "\n\n";
		cout << " width = " << width << "\n\n";
		cout << "heigth = " << heigth << "\n\n";
		cout << "-------------------------\n\n";
	}
};
class Roga 
{
protected:
	char color[25];
	int wes;
public:
	Roga()
	{
		strcpy(color, "Dirty");
		wes = 20;
	}
	Roga(const char*c,int w)
	{
		strcpy(color, c);
		wes = w;
	}
};
class Kopyta
{
protected:
	char forma[25];
	int razmer;
public:
	Kopyta()
	{
		strcpy(forma, "Big");
		razmer = 10;
	}
	Kopyta(const char* c, int w)
	{
		strcpy(forma, c);
		razmer = w;
	}
};
class Los :public Roga, public Kopyta
{
public:
	char name[255];
	Los(const char* c )
	{
		strcpy(name, c);
		razmer = 9;
	}
	void DisplayInfo()
	{
		cout << "Name " << name << "\n";
		cout << "Forma " << forma << "\n";
		cout << "Color " << color << "\n";
		cout << "Wes rogov " << wes << "\n";
		cout << "Razmer koryt " << razmer << "\n";
	}
};
class Pasport 
{
protected:
	int ser;
	int num;
	string dat;
	string fio;
public:
	Pasport()
	{
		ser = 0;
		num = 0;
		dat="00.00.0000";
		fio = "Ivan Ivanov Ivanovich";
	}
	Pasport(const char* f, const char* d,int s,int n)
	{
		ser = s;
		num = n;
		dat= d;
		fio = f;
	}
	void ShowPasport()
	{
		cout << "FIO " << fio << "\n";
		cout << "Data " << dat << "\n";
		cout << "Number " << num << "\n";
		cout << "Seria " << ser << "\n";
	}
	void SetPasport()
	{
		cout << "Set FIO " << "\n";
		cin >> fio;
		cout << "Set Data "  << "\n";
		cin >> dat;
		cout << "Set Number "  << "\n";
		cin >> num;
		cout << "Set Seria "  << "\n";
		cin >> ser;
	}
};
class ForeignPasport:public Pasport
{
	string viz;
	int num1;
public:
	ForeignPasport(const char* f, const char* d, int s, int n,const char* v,int n1)
	{
		 num1 = n1;
		viz= v;
		ser = s;
		num = n;
		dat= d;
		fio= f;
	}
	void ShowForeignPasport()
	{
		cout << "FIO " << fio << "\n";
		cout << "Data " << dat << "\n";
		cout << "Number " << num << "\n";
		cout << "Seria " << ser << "\n";
		cout << "Zag number " << num1 << "\n";
		cout << "Viza " << viz << "\n";
	}
	void SetForeignPasport()
	{
		cout << "Set FIO " << "\n";
		cin.getline(fio);
		cout << "Set Data " << "\n";
		cin >> dat;
		cout << "Set Number " << "\n";
		cin >> num;
		cout << "Set Seria " << "\n";
		cin >> ser;
		cout << "Set Zag Number " << "\n";
		cin >> num;
		cout << "Set Viza " << "\n";
		cin >> ser;
	}
};
void main()
{
	/*MyWindows A(10, 10);
	A.Show();
	A.GetX() = 5;
	A.GetY() = 3;
	A.Getwidth() = 40;
	A.Getheigth() = 50;
	A.Show();
	A.MoveX(2);
	A.MoveY(7);
	A.Show();*/

	/*Los l("Lexa");

	l.DisplayInfo();*/

	ForeignPasport h("I Kakeyn Nariaki Anatolievich", "31.01.2006", 4378797,1008,"China,Vietnam,America",20920);
	h.ShowForeignPasport();
	h.SetForeignPasport();
	h.ShowForeignPasport();
}