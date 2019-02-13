void definir (fila *q){
	q->inicio = NULL;
	q->fim =NULL;
}

void tornar_vazia (fila*q){
	tipo_elem *ndel, nextno;
	
	if(!vazia(q)){
		nextno = q->inicio;
		while (nextno != NULL){
			ndel = nextno;
			nextno = nextno->lig;
			free(ndel);
		}
	}
	definir(q);
}
