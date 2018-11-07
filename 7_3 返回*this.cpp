如果是成员函数为const，this就是一个const * const，所以返回值类型为const引用或const对象
const Screen& set() const
{
  return *this;

}
