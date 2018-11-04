用到initializer_list<T> li; //里面的元素都是const类型

void error_msg(initializer_list<T> li)
{
  
}


调用是
error_msg({"aa","bb","cc"});
