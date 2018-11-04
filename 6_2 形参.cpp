指针传参，也只是拷贝了指针
void reset(int *ip)   //发生了拷贝
{
  *ip=0;  //间接修改指针指向的内容
  ip=0;    //不影响传进来的实参
}


忽略形参的顶层const属性(重心是形参，不是实参)
void func(int i)
void func(const int i)  //xxx 重定义

对引用和指针来说，形参和实参的const底层要匹配
void reset(int *ip);
int i=0;
const int ci=i;
reset(&i);
reset(&ci);  //xxx, 因为实参底层是const，不匹配，给了形参更改的权力

void reset(int &i);
string::size_type ctr=0;
reset(i);
reset(ci);    //xxx,不匹配
reset(42);  //xxx
reset(ctr); //xxx，类型不匹配

尽量使用const引用形参，因为const引用可以接收const和非const对象
string::size_type find_char(const string& s, char c, string::size_type &occurs);

