class A
{
    A(const string& s);
}
就会
string null_book="123";
A a=null_book;发生隐式转换；

隐式转换是一步的，就是
A a="123"; //xxx,需要两步

为了不发生隐式转换，就必须在构造函数前加上explicit，这样
A a(null_book); 才行
A a="123"; //xxx,不支持

隐式转换只对只接受一个参数的。

string就有只接受一个const char*的构造函数，并且不是explicit的；
而vector的都是explicit的。
