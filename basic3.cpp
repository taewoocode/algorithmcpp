#include <bits/stdc++.h>
using namespace std;

class Circle {
	int radius;
	public:
		Circle() { radius = 1;
		}
		Circle(int r){ radius = r;
			
		}
		
		void setRadius(int r) { radius = r;
		}
		
		double getArea();
		
};

double Circle::getArea(){
	return 3.14 * radius * radius;
	
}

int main() {
	Circle circleArray[3] = {Circle(10), Circle(20), Circle()};
	
	for(int i = 0; i < 3; i++)
		cout << "Circle" << i << "�� ������" << circleArray[i].getArea() << endl;
	
}
