#ifndef _SINGLETON
#define _SINGLETON_

// 版本一
class B
{
private:
    B();
    B(const A &rhs);
    static B b;

public:
    static B &getInstance();
};

// 版本二：只有调用getInstance()函数后才产生实列，节省空间
class A
{
private:
    A();
    A(const A &rhs);
 
public:
    static A &getInstance();
};

A &A::getInstance()
{
    static A a;
    return a;
}

#endif