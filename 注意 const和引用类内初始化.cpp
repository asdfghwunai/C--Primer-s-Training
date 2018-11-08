int aa=5;
class A
{
public:
	A(){}
	~A(){}
	int &p = aa;
	const int b = 1;
	const double c = 3; //vs都没报错啊
};

引用和const最晚在初始化列表初始化，不能类里面估计
int aa=5;
class A
{
public:
	A(){ 
	b = 3;    //xxx,这俩地方都报错了
	p = aa;
	}
	~A(){}
	int &p;
	const int b ;
	const double c = 3;
};
