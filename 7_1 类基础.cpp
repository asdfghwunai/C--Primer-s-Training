this是隐藏的，this是一个const指针

成员变量可以定义在成员函数之后，原因是:编译器分两步处理类，先编译成员的声明，再编译成员函数的定义(也就是说分类的声明和定义)

-------const成员函数------
把成员函数定义为const的话，this指针变为 const Sales_data * const this
const成员函数声明和定义都要有const标志


