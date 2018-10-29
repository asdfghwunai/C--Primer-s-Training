#include<iostream>

using namespace std;

int main()
{
	int i = 0;
	int *p;
	int *&r = p; //从右到左读，r是一个引用

	r = &i;   //此处改变p的指向，即等价于p=&i;
	*p = 1;
	cout << i << endl;
	while (1);

	return 0;
}
