/*  Thanks: Agradeço a DEUS pelo dom do conhecimento
 *  Author: Eduardo Marçal
 *  Create on: 17/08/15
*/

#include "stdlib.h"
#include "stdio.h"

int main(int argc, char const *argv[])
{
	unsigned short int i, j;
	unsigned short int qttPessoa, qttSairam;
	unsigned short int *vPessoas, *vSairam;

	scanf("%hu", &qttPessoa);
	vPessoas = (unsigned short int*) malloc(qttPessoa*sizeof(unsigned short int));
	for(i = 0; i < qttPessoa; i++) { scanf("%hu ", &vPessoas[i]);}

	scanf("%hu", &qttSairam);
	vSairam = (unsigned short int*) malloc(qttSairam*sizeof(unsigned short int));
	for(i = 0; i < qttSairam; i++)	{	scanf("%hu", &vSairam[i]);}

	for(i = 0; i < qttSairam; ++i){
		for(j = 0; j < qttPessoa; ++j){
			if(vPessoas[j]==vSairam[i]){
				int a = j, c = j+1;
				while(a < qttPessoa){
					vPessoas[a++] = vPessoas[c++];
				}
				qttPessoa--;
				break;
			}
		}
	}

	i = 0;
	while( i < qttPessoa){ printf("%hu ", vPessoas[i]);	i++; }
	printf("\n");

	return 0;
}
