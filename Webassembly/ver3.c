#include <stdio.h>
#include <emscripten.h>
 
EMSCRIPTEN_KEEPALIVE double kuluvAeg(double vahemaa, double kiirus){
	 
	double aeg;
	aeg = vahemaa / kiirus; 	 
	return aeg;
}
