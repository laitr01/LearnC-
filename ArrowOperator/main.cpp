#include <iostream>

using namespace std;

struct student{
    int student_no;
    string student_name;
};
int recursive(int n);
int main()
{
    //39 | Arrow Operator with Pointers to Access Structure Members | CPP Programming Video Tutorials
    student peter;
    student *stdStr;
    stdStr = &peter;
    peter.student_no = 12345;
    stdStr->student_name = "peter";
    cout << stdStr->student_name << endl;
    cout << stdStr->student_no << endl;

    //43 | C++ Sizeof Operator with Variables, Data types, Structures, Unions | CPP Video Tutorial
    cout << "int --> "<< sizeof(int) <<endl;
    cout << "short int --> "<< sizeof(short int)<<endl;
    cout << "char --> "<< sizeof(char)<<endl;
    //45 | New and Delete Operators in C++ | Dynamic Memory Allocation | CPP Programming Video Tutorials
    int *pointer;
    pointer = new int; //allocate new memory on heap
    *pointer = 24;
    cout<< *pointer << endl;
    delete pointer; //delete value at pointer
    cout<< *pointer << endl;
    //46 | Dynamically Allocating Arrays Depending on User Input in C++ | CPP Programming Video Tutorials
    int *pointer1 = NULL;
    cout<<"how many items do you want to input?"<<endl;
    int input;
    cin>>input;
    pointer1 = new int[input];
    int temp;
    for(int i =0; i < input; i++){
        cout<<"number "<<i<<endl;
        cin>>temp;
        *(pointer1+i) = temp;
    }
    cout<<"numbers you have input "<<endl;
    for(int i = 0;i<input; i++){
        cout<<"number "<<i << "----> "<<*(pointer1+i)<<endl;
    }
    //51 | Recursive Function and Recursion in C++ | CPP Programming Video Tutorials
    cout<< recursive(5)<<endl;
    return 0;
}
int recursive(int n){
    if(n == 1)
        return 1;
    else
        return n*recursive(n-1);
}
