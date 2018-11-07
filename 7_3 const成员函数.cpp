如果是成员函数为const，this就是一个const * const，所以返回值类型为const引用或const对象
const Screen& set() const
{
  return *this;
}

const成员函数支持重载
class A
{
    A& set()
    {
      return *this;
    }
    const A& set() const
    {
      return *this;
    }
}

const对象只能调用const成员函数(this指针问题)
