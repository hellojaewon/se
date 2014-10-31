#include <cstdio>

void func (int n) {
    printf("func1 called\n");
}

void func (int * n) {
    printf("func2 called!\n");
}

int main () {
    func(0);
    func(NULL);

    return 0;
}

