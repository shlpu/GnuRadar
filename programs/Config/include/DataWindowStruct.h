////////////////////////////////////////////////////////////////////////////////
///DataWindowStruct.h
///
///
///
///Author: Ryan Seal
///Modified: 08/17/08
////////////////////////////////////////////////////////////////////////////////
#ifndef DATA_WINDOW_STRUCT_H
#define DATA_WINDOW_STRUCT_H
#include <iostream>
using std::cout;
using std::endl;
using std::string;

///Describes an arbitrary number of windows that determine 
///which portions of data to collect.
struct DataWindowStruct{
    string name;
    int start;
    int size;
    int units;
    int id;
    DataWindowStruct(): start(0), size(0), units(0), id(0) {}
    void Print(){
	cout << "name   = " << name  << "\n"
	     << "start  = " << start 
	     << "size   = " << size  
	     << "units  = " << units << "\n"
	     << "id     = " << id    << endl;
    }
};
#endif