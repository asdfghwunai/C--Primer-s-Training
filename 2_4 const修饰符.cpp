//const对象
int i=42;
const int ci=i;   //都只是拷贝，相互间没关联
int j=ci;

//const引用 有关联
const int ci=1024;
const int& r1=ci;  //正确
int &r2=ci //错误，怕你通过r2改值

//const引用 和 普通引用对比
int i=42;
const int &r1 =i;
const int &r2= 42;  
const int &r3= r1*2;

int &r4=r1*2;   //错误，解释是把42和r1*2 都当成const对象

double dval=3.14;
const int&ri=dval; //正确，解释是见const引用，你就当成有const int临时对象存在(负责转换类型)


//const指针  *号左边底层，右边顶层
int *p1;
const int* p2;
const int* const p3;

p2=p1;   //int *可以给 const int*
p2=p3;
p3=p2;   //都行，因为都是const int*

p1=p2;   //不行，const int *不能给 int *
//就是底层const要注意一下(指向变量问题)，顶层不用管，就当成指针拷贝
