#include<bits/stdc++.h>
using namespace std;
#include <iostream>
using namespace std;

class Toado {
private:
    double x;
    double y;

public:
    Rectangle(double w, double h) {
        x = w;
        y = h;
    }

    
    double calculateArea() {
        return x * y;
    }

    
    double getWidth() {
        return x;
    }

   
    void setWidth(double w) {
        x = w;
    }
    double tinhkhoangcach(Toado k ){
			float deltax =x-k.getX();
			float deltay = y-k.getY();
			return sqrt(deltax*delta+deltay*deltay);
		}
};

int main() {
 
    Rectangle myRectangle(5.0, 3.0);

    
    double area = myRectangle.calculateArea();
    cout << "Di?n tich: " << area << endl;

    
    double currentWidth = myRectangle.getWidth();
    cout << "Chi?u r?ng ban ??u: " << currentWidth << endl;

    myRectangle.setWidth(7.0);
    cout << "Chi?u r?ng m?i: " << myRectangle.getWidth() << endl;
    double khoangcach = myRectangle.tinhkhoangcach( Rectangle myRectangle(5.0, 3.0));
    return 0;
}


