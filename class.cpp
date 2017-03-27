#include"class.h"
#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<math.h>

void RECORD::set(){
		ifstream inFile("file.in",ios::in);
                if(!inFile){
                cerr<<"Failed opening"<<endl;
                exit(1);
                }
                //getline(inFile,headline);
                inFile>>K>>Ra>>Rb;

 		}

float RECORD::get_Ra(){
		return Ra;
	}

float RECORD::get_Rb(){
		return Rb;
	}

float RECORD::get_K(){
		return K;
	}

