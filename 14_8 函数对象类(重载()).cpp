--------------建一个函数对象---------
struct absInt
{
  int operator()(int val)
  {
    return val<0?-val:val;
  }
};

absInt obj;
int ui=obj(42);

for_each(vs.begin(),vs.end(),PrintString(cerr,'\n'));  
其中PrintString(cerr,'\n')是一个临时对象，相当于上面的obj，而使用时在里面相当于PrintString(cerr,'\n')();

----------------------
greater<string>()就是一个函数对象。
--------------fuction------------------int(int,int)是一个函数类型
function<int(int,int)> f1=add;   //函数指针
function<int(int,int)> f2=devide();   //函数类 的对象
function<int(int,int)> f3=[](int i,int j){return i*j};
