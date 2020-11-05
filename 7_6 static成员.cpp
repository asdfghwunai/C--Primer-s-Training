因为const是改了this指针的形态，而static成员函数没有this指针，所以static函数不能声明为const函数

static成员函数既可以在内部也可以在外部定义；
static变量只能在外部定义，因为static成员变量不属于任一个对象(属于大家的)，所以要在类外初始化(定义)；只有const  static成员变量可以在类内初始化(定义)

静态函数就是私有的，也可以在main函数前被调用。
比如 单例模式静态成员的初始化就调用到静态函数

静态函数作用就是方便的调用静态变量，测大小不管静不静态，函数都不多占内存

静态成员可以直接用 不完全类型，比如
class A
{
  static A a;
  A *b;
  A& c;

}

以直接作为实参，而非静态成员不行
class B
{
    static char c;
    void func(char c=c);   //可以直接作为实参，而非静态成员不行
}
  
