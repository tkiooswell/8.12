#pragma once
#include <iostream>
using namespace std;
class �����
{
	int a;
	int b;

public:	
	int NOD(int x, int y)
	{
		if (y == 0) return x;
		return NOD(y, x % y);
	}

	�����(int n, int d) : a{ n }, b{ d } {};

	void show() {
		cout << a << "/" << b;
	}

	����� multi(����� p) {
		int tempNum = a* p.a;
		int tempDen = b* p.b;
		int nod = NOD(tempNum, tempDen);
		return �����(tempNum/nod,tempDen/nod);

	 }
	����� delenie(����� p) {
		int tempNum = a * p.b;
		int tempDen = b * p.a;
		int nod = NOD(tempNum, tempDen);
		return �����(tempNum / nod, tempDen / nod);

	}
	����� sum(����� p) {
		int tempNum = a * p.b + b * p.a ;
		int tempDen = b * p.b;
		int nod = NOD(tempNum, tempDen);
		return �����(tempNum / nod, tempDen / nod);

	}

	����� minus(����� p) {
		int tempNum = a * p.b - b * p.a;
		int tempDen = b * p.b;
		int nod = NOD(tempNum, tempDen);
		return �����(tempNum / nod, tempDen / nod);

	}




};

