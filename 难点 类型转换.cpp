/*
1.不要混用带符号和无符号类型，啥结果你自己分析，这转那什么的
2.俩对象进行运算，先各自提升，再决定谁转谁
*/

unsigned char c=-1;  //还能hold住
signed char c2=256; //xxx, 超过表示范围，大小未定义

string s,t="a value";   //有转换
while(cin>>s)  //istream对象转换成bool
  
static_cast<>：不要用于包含底层const的，比如const int* 和const引用
dynamic_cast<>
const_cast<>: 只用于去除底层const属性，不用于类型转换
reinterpret_cast<>： 不要用了，也不是大神啊


