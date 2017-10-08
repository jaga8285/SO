#include "matrix2d.h"
#include "mplib3.c"

void dm2dSendLine(int tarefaOrig, int tarefaDest, DoubleMatrix2D *matrix, int line_nb){
	int i;
	i = enviarMensagem(tarefaOrig, tarefaDest, dm2dGetline(matrix,line_nb), matrix->n_c);
	if (i == -1){
		fprintf(stderr,"Envio de mensagem de processo " + tarefaOrig + " para processo " + tarefaDest + "falhou")
	}
}

void dm2dRecieveLine(int tarefaOrig, int tarefaDest, DoubleMatrix2D *matrix int line_nb){
	int i;
	i = receberMensagem(tarefaOrig, tarefaDest, dm2dGetline(matrix,line_nb), matrix->n_c);
	if (i == -1){
		fprintf(stderr,"Rececao de mensagem de processo " + tarefaOrig + " para processo " + tarefaDest + "falhou")
	}
}