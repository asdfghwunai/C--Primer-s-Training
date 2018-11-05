见识到了一种新类型叫函数类型，就是函数名

====函数指针作为形参=====
void useBigger(const string &s1, const string &s2, bool pf(const string& s));  //函数类型会自动转换成函数指针
void useBigger(const string &s1, const string &s2, bool (*pf)(const string& s));

====简化======
typedef bool Func(const string& s1,const string& s2);
typedef decltype(lengehCompare) Func2;      //函数类型

typedef bool (*Func)(const string& s1,const string& s2);
typedef decltype(lengehCompare) *Func2;     //指针类型

====返回函数指针======
using F=int(int *,int *);
using PF=int (*)(int *,int *);

PF f1(int);
F* f1(int);
F f1(int);   //xxx,函数类型不能作为返回类型

decltype(sumLength) *getFcn(const string&);   //也行，注意*号
