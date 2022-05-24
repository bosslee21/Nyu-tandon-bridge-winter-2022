#include <iostream>
using namespace std;

int main() {


    return 0;
}

// template will configure data type that goes into parameter
// in the paramemter data type needs to be consistent.
// t in the fucntion will replace any data type.
template <class t> 
void mySwap(t& a, t&b) {
    t temp = a;
    a = b;
    b = temp;

}
// ============ template extended
template<class T>
class someVal {
    T data;
  public: 
    T getVal() const {
        return data;
    }
    void setVal(T newValue);
};

template <class T>
void someVal<T>:: setVal(T newValue) {
    data = newValue;
}