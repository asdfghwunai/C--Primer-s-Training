https://blog.csdn.net/jelly_9/article/details/61193085

class A
{
};

===>>>
class A 
{ 
public: 

A(); //构造函数 
A(const A& a); //拷贝构造函数 
~A(); //析构函数 
A& operator =(const A& a); //赋值运算符重载 
A* operator &(); //取址运算符重载 
const A* operator &() const; //取址运算符重载 
};
--------------------- 
作者：jelly_9 
来源：CSDN 
原文：https://blog.csdn.net/jelly_9/article/details/61193085 
版权声明：本文为博主原创文章，转载请附上博文链接！
