%{
	#include <stdio.h>

	void yyerror (char *mensaje)
	{
		printf("Error: %s\n", mensaje);
	}
%}

  
%token IDENTIFICADOR CONSTANTE STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME
%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM
%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%%

entrada:
%empty
;
entrada: entrada linea
;
linea: '\n'
;
valor: CONSTANTE			{ printf("Resultado = %d\n", $1); }
;
identificador: IDENTIFICADOR 		{ printf("Id %c\n",$1); }
;
%%

int main ()
{
	yyparse();
	return 0;
}
