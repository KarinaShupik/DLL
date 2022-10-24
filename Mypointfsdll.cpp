#include <iostream>
#include <string>
#include "Pointfuncsdll.h"
using namespace std;
using namespace Pointfuncsdll;

int main()
{
	Point myObj;
	myObj = myObj.Init(2, 6);
	myObj.Display();
	myObj.toString();

	system("PAUSE");
}
