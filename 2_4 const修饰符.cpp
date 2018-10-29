//const对象
int i=42;
const int ci=i;   //都只是拷贝，相互间没关联
int j=ci;

//const引用 有关联
const int ci=1024;
const int& r1=ci;  //正确
int &r2=ci //错误，怕你通过r2改值

