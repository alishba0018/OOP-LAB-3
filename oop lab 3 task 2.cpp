#include <iostream>
#include <string>
using namespace std;

class Circle{
	private:
	double radius;
	public:
	double pi=3.14;
	void setRadius(double r){
		radius=r;
	}
	double getRadius(){
		return radius;
	}
	double getArea(){
		double area=pi*radius*radius;
		return area;
	}
	double getDiameter(){
		double diameter=2*radius;
		return diameter;
	}
	double getCircumference(){
		double circumference=2*pi*radius;
		return circumference;
	}
};

int main(){
	Circle c1;
	double radius;
	cout<<"Enter the radius: ";
	cin>>radius;
	c1.setRadius(radius);
	cout<<"the area of circle is: "<<c1.getArea()<<endl;
	cout<<"the diamter of circle is: "<<c1.getDiameter()<<endl;
	cout<<"the circumference of circle is: "<<c1.getCircumference();
	return 0;
}
