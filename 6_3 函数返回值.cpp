返回值会拷贝到一个临时对象(返回指针应该也会)

返回引用不会发生拷贝

不要返回局部变量的指针或引用
string &manip()     //返回值是&
{
  string ret;
  if(!ret.empty())
    return ret;      //xxx，返回了局部变量的引用
  else
    return "123";    //xxx,返回局部临时量的引用

}

左值引用返回
char &get_val(string &str,string::size_type ix);
const左值引用返回
const char &get_val(string &str,string::size_type ix);
防止
get_val(s,0)='A';

用尾置返回类型吧，多方便
int (*func(int i)) [10] //我就理解错了
等价于
auto func(int i)->int (*)[10]
