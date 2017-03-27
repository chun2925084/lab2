#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;
class RECORD{
        public:
                //void get(float EA,float EB);
		void set();

		float get_Ra();

		float get_Rb();
		
		float get_K();

        private:
                float  K,Ra,Rb;

};


