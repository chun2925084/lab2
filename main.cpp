#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib> 
#include<math.h>
#include"class.h"
using namespace std;

/*class RECORD{
	public: 
		void get(float EA,float EB){
		float judge,X;
		ifstream inFile("file.in",ios::in);
        	if(!inFile){
                cerr<<"Failed opening"<<endl;
                exit(1);
        	}
        	//getline(inFile,headline);
        	inFile>>K>>Ra>>Rb;
		ofstream outFile("file.out",ios::out);
        	outFile<<Ra<<"\t"<<Rb<<endl;
        	while(inFile>>judge){
                Ra=Ra+K*(judge-EA);
                Rb=Rb+K*((1-judge)-EB);
                X=(Rb-Ra)/400;
                EA=1/1+pow(10,X);
                EB=1/1+pow(10,(-X));
                outFile<<round(Ra)<<"\t"<<round(Rb)<<endl;
        }

}
	private:
		float  K,Ra,Rb;
};
*/

int main(){
                float judge,X,a,b,EA,EB,m,n,o;
                float k;
                RECORD ginny;
		ginny.set();
                a=ginny.get_Ra();
                b=ginny.get_Rb();
                k=ginny.get_K();
	//	cout<<"1111"<<b<<endl;
                ofstream outFile("file.out",ios::out);
                outFile<<a<<"\t"<<b<<endl;
                ifstream inFile("file.in",ios::in);
                if(!inFile){
                cerr<<"Failed opening"<<endl;
                exit(1);
                }
		inFile>>m>>n>>o;
		while(inFile>>judge){
//                X=(b-a)/400;
                EA=1/(1+pow(10,((b-a)/400)));
                EB=1/(1+pow(10,((a-b)/400)));
//		cout<<a<<" "<<b<<" "<<EA<<" "<<EB<<" "<<endl;
                a=a+k*(judge-EA);
                b=b+k*((1-judge)-EB);
              /*  X=(Rb-Ra)/400;
                EA=1/1+pow(10,X);
                EB=1/1+pow(10,(-X));*/
                outFile<<round(a)<<"\t"<<round(b)<<endl;
        }


/*
	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	//getline(inFile,headline);
	inFile>>k>>ra>>rb;
	ofstream outFile("file.out",ios::out);
	outFile<<ra<<"\t"<<rb<<endl;
	while(inFile>>judge){
		ra=ra+k*(judge-EA);
		rb=rb+k*((1-judge)-EB);
		X=(rb-ra)/400;
		EA=1/1+pow(10,X);
		EB=1/1+pow(10,(-X));
		outFile<<round(ra)<<"\t"<<round(rb)<<endl;
	}
*/
}
