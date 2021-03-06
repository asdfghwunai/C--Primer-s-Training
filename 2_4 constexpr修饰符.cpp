https://blog.csdn.net/zhaojia92/article/details/50831436
constexpr修饰符会验证变量是否是常量表达式，不是就直接报错
只有编译期就能确定值得才叫常量表达式

==========constexpr修饰指针本身==============
constexpr int *p=nullptr;         //修饰p
const int i=42;   //常量表达式
constexpr const int *p=nullptr;  //修饰p


===========constexpr函数==============
函数
int size()
{
	int a = 1;
	return a;
}

const int sz1=size();   //没错误,但sz1不叫常量表达式
constexpr int sz2=size(); //xxx，constexpr会帮验证，size()必须是constexpr函数，返回constexpr int类型(const int也不行)，并且返回值也要是常量。我这里检查出这个错误了

constexpr int size()
{
	return 1;
}
//我这样写vs不知为啥报错

----------但是constexpr不一定返回常量表达式---------------
constexpr int new_size()
{return 42;}

constexpr int foo=new_sz();    //是常量表达式
constexpr size_t Scale(size_t cnt)
{
	return new_sz()*cnt;
}

Scale(1); //是常量表达式
int i=42;
Scale(i); //就不是了
