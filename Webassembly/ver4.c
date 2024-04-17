#include <stdio.h>
#include <emscripten.h>


int main(){
		printf("Hello world!\n");
		return 0;
}

EMSCRIPTEN_KEEPALIVE
float kuluvAeg(float vahemaa, float kiirus){

	float aeg;
	aeg = vahemaa / kiirus;
	return aeg;
}
