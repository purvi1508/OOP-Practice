#include <iostream>

class Base {
private:
    int privateVar;
    
protected:
    int protectedVar;
    
public:
    int publicVar;
    
    Base(int p, int pr, int pu) : privateVar(p), protectedVar(pr), publicVar(pu) {}
    
    void Display() {
        std::cout << "Base class privateVar: Not accessible directly" << std::endl;
        std::cout << "Base class protectedVar: " << protectedVar << std::endl;
        std::cout << "Base class publicVar: " << publicVar << std::endl;
    }
};

class DerivedPublic : public Base {
public:
    DerivedPublic(int p, int pr, int pu) : Base(p, pr, pu) {}
    
    void Display() {
        std::cout << "DerivedPublic class privateVar: Not accessible directly" << std::endl;
        std::cout << "DerivedPublic class protectedVar: " << protectedVar << std::endl;
        std::cout << "DerivedPublic class publicVar: " << publicVar << std::endl;
    }
};

class DerivedProtected : protected Base {
public:
    DerivedProtected(int p, int pr, int pu) : Base(p, pr, pu) {}
    
    void Display() {
        std::cout << "DerivedProtected class privateVar: Not accessible directly" << std::endl;
        std::cout << "DerivedProtected class protectedVar: " << protectedVar << std::endl;
        std::cout << "DerivedProtected class publicVar: Not accessible directly" << std::endl;
    }
};

class DerivedPrivate : private Base {
public:
    DerivedPrivate(int p, int pr, int pu) : Base(p, pr, pu) {}
    
    void Display() {
        std::cout << "DerivedPrivate class privateVar: Not accessible directly" << std::endl;
        std::cout << "DerivedPrivate class protectedVar: " << protectedVar << std::endl;
        std::cout << "DerivedPrivate class publicVar: Not accessible directly" << std::endl;
    }
};

int main() {
    DerivedPublic dp(1, 2, 3);
    DerivedProtected dprot(4, 5, 6);
    DerivedPrivate dpriv(7, 8, 9);
    
    std::cout << "Accessing DerivedPublic from main:" << std::endl;
    dp.Display(); // Can access protected and public members
    
    std::cout << "\nAccessing DerivedProtected from main:" << std::endl;
    dprot.Display(); // Can access protected members
    
    std::cout << "\nAccessing DerivedPrivate from main:" << std::endl;
    dpriv.Display(); // Cannot access any members
    
    return 0;
}
