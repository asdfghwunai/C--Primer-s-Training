只有那三个才能用default. =default就代表用合成的
任何函数都能用delete

如果析构=delete,就不能定义对象了，但是可以用new，但是不能调用delete
class A
{
public：
  A();
  ~A()=delete;
}
--------------------
其实
class A
{
public：
  A();
  ~A();
}
main函数中 
A a;   //报错，因为没定义A内容，写成A(){}
---------------------------
但是，你这样写
class A
{
public:
	A(){}
	~A();
};  
也不行，因为需要用到A()进行销毁
---------------
class A
{
private:
	A(){}
	~A(){}
};  
也不行，因为不可访问
