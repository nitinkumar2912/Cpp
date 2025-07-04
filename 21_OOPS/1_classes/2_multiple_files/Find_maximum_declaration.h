#ifndef FIND_MAXIMUM_DECLARATION_H
#define FIND_MAXIMUM_DECLARATION_H

class Find_maximum {
private:
    int a, b;

public:
    Find_maximum(int x, int y);

    void set_a(int x);
    void set_b(int y);

    int get_a();
    int get_b();

    int max();
    void print_max();
};

#endif
