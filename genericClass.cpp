#include <iostream>

using namespace std;

class Point {
	public:
		int x, y;
		Point(int x = 0, int y = 0): x(x), y(y)
		{}

		Point operator+ (Point &secondPoint) {
			return Point(this->x + secondPoint.x, this->y + secondPoint.y);
		}
};

template<class T>
class Sum {
	public:
		T X, Y;

		T getSum() {
			return X + Y;
		}
		Sum(T arg1, T arg2) {
			X = arg1;
			Y = arg2;
			cout << "Sum is: " << this->getSum() << endl;
		}
};

template<>
class Sum<Point> {
	public:
		Point X, Y;
		Point getSum() {
			return X + Y;
		}


		Sum(Point arg1, Point arg2) {
			this->X = Point(arg1.x, arg1.y);
			this->Y = Point(arg2.x, arg2.y);
			Point sum = this->getSum();
			cout << "Sum of points is: " << "x: " << sum.x << ", y: " << sum.y << endl;
		}
};


int main() {

	Point a(2, 2);
	Point b(1, 4);

	Sum<int> sumInt(1, 2);
	Sum<string> sumString("test", " strings concatenation");
	Sum<Point> sumOfPoints(a, b);

	return 0;
}