%{
	#include<stdio.h>
	#include <string.h>
	#include "Tonmoy.tab.h"
	#include<stdlib.h>
	
	void yyerror(const char *s);
	int yylex(void);
	int has_mfun = 0;
%}

identifiers "variable_"[a-zA-Z]([a-zA-Z0-9])*
unary_operator "inc"|"dec"
single_line_comment [/][/].*
multiple_line_comment [ ]*[/]"cmnt"[/][a-zA-Z0-9!@#*(){}_+-,.:\|?><\n\t ]*[/]"cmnt"[/]

/*RE and Action*/

%%


{single_line_comment} {
	printf("single line comment\n");

}
{multiple_line_comment} {
	printf("multiple_line_comment");
}

{unary_operator}   {return inc;}
"sop"	 { return LB; }
"scp"	  { return RB; }
"brk"    {   return BREAK;     }
"check"      { return CASE;      }
"incident"      { return SWITCH;	}
"nop"     {  return DEFAULT; 	}
"wlp" { return WHILE;}
"in"	{ return INT; }
"flt"	{ return FLOAT; }
"ch"	{ return CHAR; }
[:]     { return COL;}
[0-9]+	{ 
		yylval.number = atoi(yytext);
		return NUM;
	}
"flp"   { return FOR;}	
"fop"	{ return LP; }
"fcp"	{ return RP; }
"cop"	{ return CLP; }
"ccp"	{ return CCP; }
"$"	{ return CM; }
"#"	{ return SM; }
"addition"	{ return PLUS;}
"subtraction"	{ return MINUS; }
"multiplication"	{ return MULT; }
"division"	{ return DIV; }
"exponential"	{ return POW; }
[@]		{ return ASSIGN;  }
"grt"	{ return GT; }
"lrt"	{ return LT; }

{identifiers} {
	 yylval.string=strdup(yytext);
	 return VAR;
	}

"iff"		{ return IF;}
"oriff"	{ return ELIF; }
"or"		{ return ELSE;}

^"mfun "[A-Za-z]+    { 
    has_mfun = 1;
    if (strcmp(yytext, "mfun main") == 0) {
        return MAIN;
    } else {
        fprintf(yyout, "Error: Invalid main function declaration\n");
        exit(1);
    }
}
"AND"	{ return AND; }
"OR"	{ return OR; }
"XOR"	{ return XOR; }
"FACTORIAL" { return FACTORIAL; }
"ODDEVEN" { return ODDEVEN; }
"LEAPYEAR" { return LEAPYEAR; }
"PALINDROME" { return PALINDROME; }
"POWER" { return POWER; }
"PRIME" { return PRIME; }
[ \t\n]*	

.	{
		yyerror("Unknown Character.\n");
	}
"MAX" { return MAX_FUNC; }
"MIN" { return MIN_FUNC; }
"GCD"   { return GCD_FUNC; }
"LCM"   { return LCM_FUNC; }
"SIN"	{ return SIN; }
"COS"	{ return COS; }
"TAN"	{ return TAN; }
"NL"	{ return NL; }
"SQRT"	{ return SQRT; }
"MY_ARRAY"	{ return ARRAY; }

^"main"    { 
    if (!has_mfun) {
        fprintf(yyout, "Error: Program must start with 'mfun main()'\n");
        exit(1);
    }
    return MAIN;
}

[0-9]+\.[0-9]+	{ 
    yylval.floating = atof(yytext);
    return FLOAT_NUM;
}

%%

/* user subroutines */

int main()
{
	yyin = freopen("in.txt","r",stdin);
	yyout = freopen("out.txt","w",stdout);
	yyparse();
	
}