#include <iostream>

using namespace std;
// stack

void func()
{
    int x = 10; // يتم تخزين x على الـ Stack
}
void stackExample()
{
    int x = 10;                   // يتم تخزين x على الـ Stack
    int arr[5] = {1, 2, 3, 4, 5}; // يتم تخزين المصفوفة أيضًا على الـ Stack
}

// Stack Overflow
void func()
{
    int arr[1000000]; // قد يؤدي إلى Stack Overflow
}
// Heap
void heapExample()
{
    int *ptr = new int(10); // يتم تخصيص x على الـ Heap
    int *arr = new int[5];  // تخصيص مصفوفة ديناميكيًا على الـ Heap

    delete ptr;   // تحرير ذاكرة x
    delete[] arr; // تحرير ذاكرة المصفوفة
}

int main(int argc, char const *argv[])
{

    // Heap

    int *ptr = new int; // تخصيص على الـ Heap
    *ptr = 20;
    delete ptr; // تحرير الذاكرة
    // Memory Leak

    int *ptr = new int(5);
    // لم يتم استخدام delete، مما يؤدي إلى تسريب الذاكرة

    return 0;
}