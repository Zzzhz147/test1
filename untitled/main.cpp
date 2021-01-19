#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::vector;
//using namespace std;


int main()
{

// fuck you std::cin!
//    std::cout << "Enter two nums!" << std::endl;
//    int v1 = 0, v2 = 0;
//    std::cin >> v1 >> v2;
//    std::cout << "The sum of" << v1 << "and" << v2
//         << "is" << v1 + v2 << std::endl;

//    std::cout << "fxxk cin" << std::endl;
//    std::cout << "fxxk cin" << std::endl;
//    std::string a;
//    std::cin >> a;
//    std::cout << "fxxk cin" << std::endl;

//    std::cout << "Enter two nums!" << std::endl;
//    int v1 = 0, v2 = 0;
//    std::scanf("%d %d", &v1, &v2);
//    std::cout << "The sum of" << v1 << "and" << v2
//         << "is" << v1 + v2 << std::endl;


//    int sum = 0, val = 1;
//    while (val <= 10) {
//        sum += val;
//        ++val;
//    }
//    std::cout << "the sum is: " << sum << std::endl;

//    int sum = 0, val = 100;
//    while (val >= 50) {
//        sum += val;
//        --val;
//    }
//    std::cout << "the sum is: " << sum << std::endl;

//    int sum = 0;
//    for (int val = 1; val <= 10; ++val){
//        sum += val;
//    }
//    std::cout << "the sum is: " << sum << std::endl;

//    int sum = 0;
//    for (int val = -100; val <= 100; std::cout << "hacked!" << std::endl){
//        sum += val;
//    }
//    std::cout << "the sum is: " << sum << std::endl;

//    Sales_item total;
//    if (cin >> Sales_item) {
//        Sales_item now;
//        while (cin >> now) {
//            if (now.ID() == total.ID()) {
//                total += now;
//            } else {
//                cout << total << endl;
//                total = now;
//            }
//        }
//        cout << total << endl;
//    } else {
//        cout << "No Data??!" << endl;
//        return -1;
//    }

//    unsigned short a = 1;
//    unsigned short b = -1;
//    std::cout << a + a << std::endl;
//    std::cout << a + b << std::endl;
//    std::cout << b << std::endl;

//    for (unsigned short a = 10; a < 0; --a) {
//        std::cout << a << std::endl;
//        std::cout << "lalala" << std::endl;
//    }

//    short a = 75536;
//    std::cout << a << std::endl;
//    std::cout << "\t123\t1234\t12312412" << std::endl;
//    std::cout << "\t3\t12\t1231241231231232" << std::endl;

//    int ten = 10, sixt = 0x10;
//    std::cout << ten << std::endl;
//    std::cout << sixt << std::endl;
//    std::cout << ten + sixt << std::endl;
//    int eight = 09;

//    char a[] = {'1', '2', '3'};
//    std::cout << a << std::endl;

//    int _ = 1;
//    std::cout << _ << std::endl;

//    int a = 1;
//    std::cout << a << std::endl;
//    while (a < 2) {
//        std::cout << a << std::endl;
//        int a = 2;
//        int b = a;
//        std::cout << a << std::endl;
//        std::cout << b << std::endl;
//    }

//    int a = 100, sum = 0;
//    for (int a = 1; a <= 10; ++a) {
//        sum += a;
//    }
//    std::cout << a << std::endl;
//    std::cout << sum << std::endl;

//    int a = 1;
//    std::cout << a << std::endl;
//    int &b = a;
//    int c = a;
//    std::cout << b << std::endl;
//    std::cout << c << std::endl;
//    a = 2;
//    std::cout << a << std::endl;
//    std::cout << b << std::endl;
//    std::cout << c << std::endl;
//    b = 3;
//    std::cout << a << std::endl;
//    std::cout << b << std::endl;
//    std::cout << c << std::endl;
//    b = c;
//    std::cout << b << std::endl;

//    int a = 1;
//    int *poin = &a;
//    int **popo = &poin;
//    int ***popopo = &popo;

//    std::cout << *poin << std::endl;
//    std::cout << poin << std::endl;
//    std::cout << &poin << std::endl;
//    std::cout << popopo << std::endl;
//    std::cout << *popopo << std::endl;
//    std::cout << **popopo << std::endl;
//    std::cout << ***popopo << std::endl;

//    int a = 1;
//    int *ptr = &a;
//    int *ptr2 = ptr;

//    std::cout << *ptr2 << std::endl;

//    int b = 0;

//    if (a) {
//        std::cout << "*poin" << std::endl;
//    }

//    if (b) {
//        std::cout << "b" << std::endl;
//    }
//    int a = 1;
//    int *ptr = &a;

//    int a = 1;
//    const int &b = a;
//    std::cout << b << std::endl;
//    a = 2;
//    std::cout << b << std::endl;

//    int a = 0x114514;
//    int *ptr = &a;
//    std::cout << ptr << std::endl;
//    std::cout << &a << std::endl;
//    std::cout << *ptr << std::endl;
//    std::cout << *a << std::endl;

//    int a = 1;
//    while (a == 1) {
//        std::cout << a << std::endl;
//        int a = 2;
//    }
//    for (int unused = 0; a == 1; ++unused) {
//        std::cout << a << std::endl;
//        int a = 2;
//        std::cout << a << std::endl;
//    }

//    using std::cout;
//    std::cout << double(14 /5 );

    vector<int> v = {1, 2, 3, 4, 5};
    for(int i: v) {
        std::cout << i << std::endl;
        i += 1;
        std::cout << i << std::endl;
    }
    return 0;
}
