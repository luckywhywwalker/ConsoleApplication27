#include <iostream>
using namespace std;


class Rectangle
{
private:
	int x; 
	int y; 
	int height;
	int width;
public:
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	int getHeight()
	{
		return height;
	}
	int getWidth()
	{
		return width;
	}
	void setX(int n)
	{
		x = n;
	}
	void setY(int n)
	{
		y = n;
	}
	void setHeight(int n)
	{
		height = n;
	}
	void setWidth(int n)
	{
		width = n;
	}
	void show() 
	{
		cout << "X: " << getX() << endl;
		cout << "Y: " << getY() << endl;
		cout << "Height: " << getHeight() << endl;
		cout << "Width: " << getWidth() << endl;
	}
	void input() {
		int val_1;
		int val_2;
		int val_3;
		int val_4;
		cout << "Enter x: ";
		cin >> val_1;
		setX(val_1);
		cout << "Enter y: ";
		cin >> val_2;
		setY(val_2);
		cout << "Enter Height: ";
		cin >> val_3;
		setHeight(val_3);
		cout << "Enter Width: ";
		cin >> val_4;
		setWidth(val_4);
	}
};
int main()
{
	Rectangle r1;
	r1.input();
	r1.show();
	return 0;
}