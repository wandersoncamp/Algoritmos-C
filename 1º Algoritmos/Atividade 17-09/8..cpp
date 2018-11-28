#include<stdio.h>
int main(){
	int soma;
	int soma2;
	int somad;
	int somas;	
	int somat;
	
	int i, x, m[5][5]; 
	for(i = 0; i <= 4; i++){ 
		for(x = 0; x <= 4; x++){ 
	printf("Digite um valor para matriz M: "); 	
	scanf("%i", &m[i][x]);	
	}
}

	for(x = 0; x <= 4; x++){	
		soma = soma + m[4][x];	
	}

	for(i = 0; i <= 4; i++){	
		soma2 = soma2 + m[i][2];	
}

	for(i = 0; i <= 4; i++){	
		for(x = 0; x <= 4; x++){	
		if(i == x){	
			somad = somad + m[i][x];	
		}
	}
}

	for(i = 0; i <= 4; i++){	
		for(x = 0; x <= 4; x++){	
		if(i + x == 4){	
	
			somas = somas + m[i][x];		
		}
	}
}
	
	for(i = 0; i <= 4; i++){	
		for(x = 0; x <= 4; x++){	
	somat = somat + m[i][x];	
	}
}
	printf("Da linha 4 de M: %i\n", soma);
	printf("Da coluna 2 de M: %i\n", soma2);
	printf("Diagonal principal: %i\n", somad);
	printf("Diagonal secundaria: %i\n", somas);
	printf("De toda a matriz: %i\n", somat);
}
