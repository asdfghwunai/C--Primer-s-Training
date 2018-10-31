/*
decltype(expr)很好记，保留原始表达式的类型

*/

//=====decltype与引用=========
int i=42,*p=&i, &r=i;

decltype(r) b;   //int &
decltype(r+0) c; //int
decltype((r + 0)) cc=3; //int  ，我还以为是int &呢，不能想当然

decltype(i) d;     //int
decltype(（i）) e;  //int &，加括号的作用
