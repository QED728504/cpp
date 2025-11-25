#include<iostream>
using namespace std;
double const pi=3.14;
class Shape{
public:
	int Length;
	int Width;
	int Height;
	int Radius;
	int UpperBase;
	int LowerBase;
	int Leg;
};

//正方形
class Square:public Shape{
public:
	Square(int length,int width){
		Length=length;
		Width=width;
	}
public:
	int CalculateArea(){
		return Length*Width;
	}
	int CalculatePerim(){
		return (Length+Width)*2;
	}

};

//长方形
class Rectangle:public Shape{
public:
	Rectangle(int length,int width){
		Length=length;
		Width=width;
	}
public:
	int CalculateArea(){
		return Length*Width;
	}
	int CalculatePerim(){
		return (Length+Width)*2;
	}

};

//圆
class Circle:public Shape{
public:
	Circle(int radius){
		Radius=radius;
	}
public:
	double CalculateArea(){
		return pi*Radius*Radius;
	}
	double CalculatePerim(){
		return 2*pi*Radius;
	}

};

//梯形
class LadderShape:public Shape{
public:
	LadderShape(int upperBase,int lowerBase,int height,int leg){
		UpperBase=upperBase;
		LowerBase=lowerBase;
		Height=height;
		Leg=leg;
	}
public:
	int CalculateArea(){
		return (UpperBase+LowerBase)*Height*2;
	}
	int CalculatePerim(){
		return UpperBase+LowerBase+Leg*2;
	}

};


int main(){
	//正方形输出
	Square square(12,12);
	cout<<"正方形面积为"<<square.CalculateArea()<<endl;
    cout<<"正方形周长为"<<square.CalculatePerim()<<endl<<endl;
    //长方形输出
	Rectangle rectangle(15,12);
	cout<<"长方形面积为"<<rectangle.CalculateArea()<<endl;
    cout<<"长方形周长为"<<rectangle.CalculatePerim()<<endl<<endl;
	//圆输出
	Circle circle(20);
	cout<<"圆面积为"<<circle.CalculateArea()<<endl;
	cout<<"圆周长为"<<circle.CalculatePerim()<<endl<<endl;
    //梯形输出
	LadderShape ladderShape(12,24,8,10);
	cout<<"梯形面积为"<<ladderShape.CalculateArea()<<endl;
	cout<<"梯形周长为"<<ladderShape.CalculatePerim()<<endl<<endl;
}
