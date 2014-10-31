#include <cstdio>

class CTest {
public:
    CTest () : m_value(0) {}
    CTest (unsigned value) : m_value(value) {}

private:
    //CTest (const CTest & rhs);
    //CTest & operator= (const CTest & rhs);

    unsigned m_value;
};

int main () {
    CTest t1;
    CTest t2;
    t1 = t2;
    CTest t3(t1);

    return 0;
}

