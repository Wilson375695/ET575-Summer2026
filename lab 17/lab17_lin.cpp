/*
Wilson Lin
June 17, 2026
lab 17, array application
*/
#include<iostream>
#include "lab17_function_lin.cpp"
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    // declare size of the array
    const int sizea = 10;
    // declare the array
    int a[sizea] ={0};
    // declare the variable to save the index of the last positive number
    int listsize;
    // declare the target number
    int targetnumber = 10;

    // calling function
    filluparray(a, listsize, sizea);
    printelements(a, listsize);
    int foundindex = search(a, listsize, targetnumber);
    cout<<"Index of found number: "<<foundindex<<endl;

    cout<<"\n --- example 2: 2d array ---"<<endl;
    intro2darray();

    cout<<"\n --- example 3: print 2d array elements ---"<<endl;
    const int rowsize = 2;
    int n[][3] = {
        {1,2,3},
        {4,5,6}
    };

    printarray(n, rowsize);
    
    cout<<"\n --- example 4: 2d array application ---"<<endl;
    const int students = 3;
    const int subjects = 4;
    // declaring 2d array with initial values
    int grades[students][subjects] ={
        {85, 90, 78, 92},
        {70, 88, 84, 76},
        {95, 91, 89,93}
    };
    // declaring 1d array
    int studentavg[students];
    studentaverage(grades, students, subjects, studentavg);
    printavg( studentavg, students);

    cout<<"\n --- Exerice A ---"<<endl;
    srand(time(0));
    int arr[10] = {45, 11, 1, 20, 30, 33, 44, 55, 22, 24};
    int minNumber = findmin(arr, 10);
    cout<<"The minimum number is "<<minNumber<<endl;

    cout<<"\n --- Exerice B ---"<<endl;
    int arraynumber2d[array_size][array_size] = {0};
    int max = 200;
    int min = 150;
    populatearray2d(arraynumber2d);
    cout<<"Generated 2d array:"<<endl;
    printarray2d(arraynumber2d);
    int totalnumber = range2d(arraynumber2d, min, max);
    cout<<"\nArray has "<<totalnumber<<" number(s) between "<<min<<" and "<<max<<endl;

    return 0;
    
}