#include"header.h"

int codelength(int ndc)
{
printf("%s: begins\n",__func__);
	if(ndc<4)
		return 2;
	else if(ndc<8)
		return 3;
	else if(ndc<16)
		return 4;
	else if(ndc<32)
		return 5;
	else if(ndc<64)
		return 6;
	else if(ndc<128)
		return 7;
printf("%s: ends\n",__func__);
}
