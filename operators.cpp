#include <cstdlib>
#include <iostream>
#include "stdlib.h"

using namespace std;

class Point {
	public:
	int x,y;
	Point(){
		srand(time(NULL));
		this->x = rand() % 10;
		this->y = rand() % 10;
	}
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}

	Point operator+ (Point &obj) {
		Point result(x + obj.x, y + obj.y);
		return result;
	};
};

int main() {
	Point firstPoint(2, 2);
	Point secondPoint;
	Point thirdPoint = firstPoint + secondPoint;
	cout << "First point: x = " << firstPoint.x << " y = " << firstPoint.y << endl;
	cout << "Second point: x = " << secondPoint.x << " y = " << secondPoint.y << endl;
	cout << "Sum points from first and second. x : " << thirdPoint.x << " y: " << thirdPoint.y << endl;
	
	return 0;
}