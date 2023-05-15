#include<iostream>
using namespace std;

 void increament(int **p) {
        ++(**p);
    }

int main () {
    // float f = 10.5;
    // float p = 2.5;
    // float*ptr = &f;
    // (*ptr) ++;
    // *ptr = p;
    // cout << *ptr <<" " << f << " " << p;

    // out put is 2.5  2.5  2.5;


    // int a= 7;
    // int *c = &a;
    // c = c + 1;
    // cout << a << "   " << *c;

    // char s [] = "hello";
    // char *p = s;
    // cout << s[0] <<" " << p[0];

    // int first = 5;
    // int *p = &first;

    // cout << (*p)++ << endl;
    // cout << first << endl;    // ans = 8 9


    // int *p = 0;
    // int first = 110;

    // p = first;
    // cout << *p << endl;  // ans = error;


    // float f = 12.5;
    // float p = 21.5;

    // float *ptr = &f;
    //  (*ptr)++;
    //  *ptr = p;
    //  cout << *ptr << " " << f << " " << p << endl;   // ans = 21.5 21.5 21.5

    // int arr[5];
    // int *ptr;

    // cout << sizeof(arr) << endl << sizeof(ptr);

    // int arr [] = {11, 21, 34, 45};
    // cout << *(arr) << " " << *(arr +1) ; // ans = 11 21

    // int arr [] = {11, 21, 31};
    // int *p = arr;
    // cout << p[2] << endl;   // ans = 31;

    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout << *ptr << endl; // ans = b;
     

    // char arr [] = "abcde";
    // char *p = &arr[0];
    // p++;
    // cout << p << endl;  // ans = bcde; 

    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 9;
    // cout << second << " " << first ; // ans = 119 111


    // int first = 100;
    // int *p = &first;
    // int **q = &p;
    // int second = ++(**q);
    // int *r = *q;
    // ++(*r);
    // cout << first << " " << second ;  // 102 101

   

   
    int num = 110;
    int *ptr = &num;
    increament(&ptr);
    cout << num << endl; ;   // ans = 111



   return 0;
}