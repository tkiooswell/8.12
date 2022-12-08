

#include <iostream>
using namespace std;
#include "дробь.h"

int main()
{
	дробь qwerty(6, 34);
	дробь qwerty2(5, 42);

	qwerty = qwerty.multi(qwerty2);
	
	qwerty.show();





}

