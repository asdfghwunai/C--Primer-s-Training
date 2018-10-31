//auto的一条语句必须都是相同的类型
auto sz=0,pi=3.14;   //直接报错

//auto指针推导的一个有意思的
int i = 1;
auto *p1=&i;
auto p2 = &i;

/*------START-----------*/
int ii=0;
const int ci = ii, &cr=ci;  //ci是顶层，cr是底层（顶层转底层）

//==========auto==================auto对象忽略顶层const，保留底层
auto b=ci;   //int，忽略顶层
auto c=cr;    //const int&，保留底层
auto d=&i;   //int &
auto e=&ci;  //const int&,&ci是底层

//==========auto &==============
//auto引用的一个易错点
const int ci=42;
auto &h = 42;  //xxx,h推导成int &，报错

auto &g=ci;    //g是const int&
const auto &j=42; 
//auto加上引用一般保留顶层const属性

