#ifndef PTRSMART_H
#define PTRSMART_H

template <typename T>
class smart_ptr {
    T * obj;
public:
    smart_ptr(T *obj) : obj(obj) {};
    ~smart_ptr() {
        delete obj;
    }
    operator T*() {return obj;}
    T* operator->() { return obj; }
    T& operator* () { return *obj; }
};


#endif // PTRSMART_H
