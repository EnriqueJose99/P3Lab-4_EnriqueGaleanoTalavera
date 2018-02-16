#include <iostream>
#include "Parqueo.h"

using namespace std;

Parqueo::Parqueo(){

}

Parqueo::Parqueo(int n, int x, int m){
	n = x/10;
	if(n < 12){
		m = n*0.7;
	}
	if(n>=12){
		m=n*0.4;
	}


}
