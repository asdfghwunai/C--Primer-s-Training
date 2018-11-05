默认实参不能用局部变量，只能用全局变量，同名的局部隐藏不了全局
sz wd=80;
sz ht();
char def=' ';

string Screen(sz =ht(), sz=wd, char=def);  //sz只是类型，类型不能直接=，只是简化

string window=Screen();    //相当于调用Screen(ht(),80,' ');

void f2()
{
  sz wd=100;      //隐藏不了的，就是全局没有编译器也不会用你
  def='*';
  window=Screen();  //Screen(ht(),80,'*');
}


内联函数是在声明前加上inline



