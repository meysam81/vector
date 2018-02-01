#include <iostream.h>
#include <conio.h>
#include<math.h>
class bordar
{
  int x,y;
 public:
  bordar (int, int);
  void set(int,int);
  void print();
  static double andaze(bordar);
  static bool mosavi(bordar,bordar);
  friend bordar operator+(bordar,bordar);
  friend bordar operator-(bordar,bordar);
};

bordar operator-(bordar m1,bordar m2)
{
	bordar m3(0,0);
	m3.set(m1.x-m2.x,m1.y-m2.y);
	return m3;
}

bordar::bordar (int a1, int a2)
{
  x = a1;
  y = a2;
}

void bordar::set (int a1, int a2)
{
  x = a1;
  y = a2;
}

void bordar::print()
{
  cout <<"x= "<<x<<"   y= "<<y<<"\n\n";
}

bordar operator+(bordar m1,bordar m2)
{
	bordar m3(0,0);
	m3.set(m1.x+m2.x,m1.y+m2.y);
	return m3;
}

double bordar::andaze(bordar m1)
{
	return sqrt((m1.x*m1.x)+(m1.y*m1.y));
}

bool bordar::mosavi(bordar m1,bordar m2)
{
	if(m1.x==m2.x && m1.y==m2.y)
		return true;
	return false;
}

int main()
{
  bordar m1(5,2);
  bordar m2(2,3);
  bordar m3(0,0);

  cout << "Bordar1:" << endl;
  m1.print();
  
  cout<<"Andaze (Bordar1): "<<bordar::andaze(m1)<<"\n\n";

  cout << "Bordar2:" << endl;
  m2.print();
  
  cout<<"Andaze (Bordar2): "<<bordar::andaze(m2)<<"\n\n";
  
  cout<<(bordar::mosavi(m1,m2)?"Bordar1 = Bordar2":"Bordar1 != Bordar2");
  cout<<"\n\n";
  
  m3=m1+m2;
  cout << "Sum(+):" << endl;
  m3.print();
  
  m3=m1-m2;
  cout << "Minus(-):" << endl;
  m3.print();
  
  getch();
  return 0;
}