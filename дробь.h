#pragma once
#include <iostream>
using namespace std;
class הנמבü
{
	int a;
	int b;

public:	
	int NOD(int x, int y)
	{
		if (y == 0) return x;
		return NOD(y, x % y);
	}

	הנמבü(int n, int d) : a{ n }, b{ d } {};

	void show() {
		cout << a << "/" << b;
	}

	הנמבü multi(הנמבü p) {
		int tempNum = a* p.a;
		int tempDen = b* p.b;
		int nod = NOD(tempNum, tempDen);
		return הנמבü(tempNum/nod,tempDen/nod);

	 }
	הנמבü delenie(הנמבü p) {
		int tempNum = a * p.b;
		int tempDen = b * p.a;
		int nod = NOD(tempNum, tempDen);
		return הנמבü(tempNum / nod, tempDen / nod);

	}
	הנמבü sum(הנמבü p) {
		int tempNum = a * p.b + b * p.a ;
		int tempDen = b * p.b;
		int nod = NOD(tempNum, tempDen);
		return הנמבü(tempNum / nod, tempDen / nod);

	}

	הנמבü minus(הנמבü p) {
		int tempNum = a * p.b - b * p.a;
		int tempDen = b * p.b;
		int nod = NOD(tempNum, tempDen);
		return הנמבü(tempNum / nod, tempDen / nod);

	}




};

