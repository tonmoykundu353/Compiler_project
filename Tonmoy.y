%{
	#include<stdio.h>
	#include <math.h>
	#include <string.h>
	#include <stdlib.h>
	
	extern FILE* yyout;
	
	int cnt=1,cntt=0,val,track=0;
	typedef struct entry {
    	char *str;
    	union {
        	int i;
        	float f;
    	} value;
    	int type;  // 0 for int, 1 for float
	} store;
	store st[1000],sym[1000];
	void ins(store *p, char *s, int n);
	int cnt2=1; 
	
	void yyerror(char *s) {
        fprintf(yyout, "Error: %s\n", s);
        exit(1);
    }
	int look_for_key(char *key);
	int yylex(void);
	
%}
%union 
{
        int number;
        float floating;
        char *string;
}
/* BISON Declarations */

%token<number> NUM
%token<string> VAR 
%token<string> IF ELIF ELSE MAIN INT FLOAT DOUBLE CHAR LP RP LB RB CM SM PLUS MINUS MULT DIV POW ASSIGN FOR COL WHILE BREAK DEFAULT CASE AND SWITCH inc OR XOR FACTORIAL ODDEVEN LEAPYEAR PALINDROME POWER PRIME MAX_FUNC MIN_FUNC LCM_FUNC GCD_FUNC SIN CLP CCP COS TAN NL SQRT ARRAY
%token<floating> FLOAT_NUM
%type <string> statement
%type <number> expression
%type <number> switch_expression
%nonassoc ELIF
%nonassoc ELSE
%right ASSIGN
%left LT GT
%left PLUS MINUS
%left MULT DIV
%left AND OR XOR
%right POW
%left inc

/* Simple grammar rules */

%%

program: MAIN LP RP LB cstatement RB { fprintf(yyout, "\nSuccessful compilation\n"); }
       | error_program
       ;

error_program: LB cstatement RB { 
    yyerror("Program must start with 'mfun main()'");
}
       | cstatement { 
    yyerror("Program must start with 'mfun main()'");
}
       ;

cstatement: /* empty */

	| cstatement statement
	
	| cstatement cdeclaration
	;

cdeclaration:	TYPE ID1 SM	{ printf("\nvalid declaration\n"); }

TYPE : INT	{ printf("\n Integer declaration \n"); }

     | FLOAT	{ printf("\n Float declaration \n"); }

     | CHAR	{ printf("\n Charecter declaration \n"); }
     ;

ID1  : ID1 CM VAR	{
						if(look_for_key($3))
						{
							printf("\n%s is already declared\n", $3 );
						}
						else
						{
							ins(&st[cnt],$3, cnt);
							cnt++;
							
						}
			}

     |VAR	{
				if(look_for_key($1))
				{
					printf("%s is already declared\n", $1 );
				}
				else
				{
					ins(&st[cnt],$1, cnt);
					cnt++;
				}
			}
     ;


statement: SM
	| SWITCH LP switch_expression RP LB BASE RB    {printf("\nSWITCH case.\n");val=$3;} 

	| expression SM 			{ printf("\nvalue of expression: %d\n", ($1)); }

       

	| IF LP expression RP LB statement RB {
								if($3)
								{
									printf("\nWe are  in IF and the value is: %d\n",($6));
								}
								else
								{
									printf("\ncondition value zero in IF block\n");
								}
							}

	| IF LP expression RP LB statement RB ELSE LB statement RB {
								 	if($3)
									{
										printf("\nWe are in IF: %d\n",$6);
									}
									else
									{
										printf("\nWe are in ELSE and the value is : %d\n",$10);
									}
								   }													   
	| FOR LP NUM COL NUM RP LB expression RB     {
	   printf("\nFor Loop :\n");
	   int i;
	   for(i=$3;i<$5;i++){
	   printf("\nStep : %d and value of expression : %d\n",i,$8);
	   }
	}
	/*while loop starts*/

	| WHILE LP NUM LT NUM RP LB expression RB   {
								int i = $5,j=0;
								printf("While LOOP:\n");
								while($3 < i)
								{
									printf("step: %d value of expression :%d \n" ,j, $8);
									i--;
									j++;
								}
								printf("\n");
								
										

						}
	;
	
	|WHILE LP NUM GT NUM RP LB expression RB   {
								int i = $5,j=0;
								printf("While LOOP:\n");
								while($3 > i)
								{
									printf("step: %d value of expression :%d \n" ,j, $8);
									i++;
									j++;
								}
								printf("\n");
								
										

						}
	
	|FACTORIAL LP expression RP SM {
		printf("\nFACTORIAL declaration\n");
		int i;
		int f=1;
		for(i=1;i<=$3;i++)
		{
			f=f*i;
		}
		printf("FACTORIAL of %d is : %d\n",$3,f);
		printf("\n\n");

		}
	| ODDEVEN LP expression RP SM {
		printf("Odd Even Number declaration \n");

		if($3 %2 ==0){
			printf("Number : %d is -> Even\n",$3);
		}
		else{
			printf("Number is :%d is -> Odd\n",$3);
		}
		printf("\n\n");
		}
	| LEAPYEAR LP expression RP SM
      {
	  printf("Leap Year declaration \n");
      if(($3%400==0)|| ($3%100!=0 && $3%4==0)){
         printf("%d is a Leap Year",$3);}
     else
         {printf("%d is not a Leap Year",$3);}
		 printf("\n\n");
      }

	| PALINDROME LP NUM RP SM {
	  printf("Palindrome Number declaration \n");
	  int temp, remainder, rev=0;
      temp = $3;

     while( $3!=0 )
    {
     remainder = $3 % 10;
     rev = rev*10 + remainder;
      $3/= 10;
    }
	
    if( rev == temp )
      printf("%d is a palindrome number \n", temp);
    else
      printf("%d isn't a palindrome number.\n", temp);
	  printf("\n\n");
	}
| POWER LP expression CM expression RP SM	{int power = 1, i;
     printf("Power declaration\n");
	for (i = 1; i <= $5; ++i) {
		power = power * $3;
	}
    printf("Power is %d",power);
	printf("\n\n");
	}
	| PRIME LP expression RP SM {  
                                    printf("Prime Number Detection\n");    
                                    int i,j,k;
                                    int p = 0;
                                    for(i=2;i<=$3-1;i++)
                                       {
                                          j = $3 % i;
                                          if (j == 0)
                                              {
                                                p=1;
                                                break;
                                              }
                                       }
                                    k=$3;
                                    if( k == 1){
                                                 printf("1 is neither prime nor composite.\n");
                                                } 
                                    else{
                                             if(p == 0){
                                                printf("%d is prime.\n",$3);
                                                }
                                             else{
                                                  printf("%d is not prime.\n",$3);
                                                 }
                                         } 
                                  printf("\n\n");
                              }
	| MAX_FUNC LP expression CM expression RP SM {
    
    printf("MAXIMUM Number Detection\n"); 
    
    if($3 > $5)
    {
        printf("%d is maximum", $3);        
    }

    
    if($5 > $3)
    {
        printf("%d is maximum", $5);
    }

    
    if($3 == $5)
    {
        printf("Both are equal");
    }
    printf("\n\n");
    
    }
	| MIN_FUNC LP expression CM expression RP SM {
    
    printf("MINIMUM Number Detection\n"); 
    
    if($3 > $5)
    {
        printf("%d is minimum", $5);        
    }

    
    if($5 > $3)
    {
        printf("%d is minimum", $3);
    }

    
    if($3 == $5)
    {
        printf("Both are equal");
    }
    printf("\n\n");
    
    }
	| GCD_FUNC LP expression CM expression RP SM {
        printf("Entering GCD function\n");
        int num1 = $3;
        int num2 = $5;
        int gcd = 1;
        int temp;
        
        // Ensure num1 is the larger number
        if (num1 < num2) {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        
        // Calculate GCD using Euclidean algorithm
        while (num2 != 0) {
            temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }
        gcd = num1;
        
        printf("G.C.D of %d and %d is = %d\n\n", $3, $5, gcd);
    }
										
	| LCM_FUNC LP expression CM expression RP SM {
        int num1 = $3;
        int num2 = $5;
        int gcd = 1;
        int lcm;
        int temp;
        
        // Store original numbers for later use
        int orig1 = num1;
        int orig2 = num2;
        
        // Calculate GCD using Euclidean algorithm
        while (num2 != 0) {
            temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }
        gcd = num1;
        
        // Calculate LCM using the formula: LCM = (num1 * num2) / GCD
        lcm = (orig1 * orig2) / gcd;
        
        printf("\nLCM Detection");
        printf("\nLCM of %d and %d is = %d\n", $3, $5, lcm);
        printf("\n\n");
    }

	| SIN CLP expression CCP SM {printf("Value of sin(%d) is : %lf\n",$3,sin($3*3.1416/180));}

	| COS  CLP expression CCP SM {printf("\nValue of cos(%d) is : %lf\n",$3,cos($3*3.1416/180));}

	| TAN  CLP expression CCP SM {printf("\nValue of tan(%d) is : %lf\n",$3,tan($3*3.1416/180));}
	
	| NL  CLP expression CCP SM {printf("\nValue of Natural Log(%d) is : %lf\n",$3,(log($3)) );} 
	
	| SQRT  CLP expression CCP SM {printf("\nSqureRoot of value %d : %lf \n",$3,(sqrt($3)));}
	
	| ARRAY TYPE VAR LP NUM RP SM {
		printf("ARRAY Declaration\n");
		
		printf("Size of the ARRAY = %d\n",$5);
	}
	
	;
///////////////////////
	
			BASE : Bas   
				 | Bas Dflt 
				 ;

			Bas   : /*NULL*/
				 | Bas Cs     
				 ;

			Cs    : CASE NUM COL expression SM   {
						
						if(val==$2){
							  track=1;
							  printf("\nCase No : %d  and Result :  %d\n",$2,$4);
						}
					}
				 ;

			Dflt    : DEFAULT COL expression SM    {
						if(track!=1){
							printf("\nResult in default Value is :  %d\n",$3);
						}
						track=0;
					}
				 ;    
	/////////////////////////////
	
	
expression: NUM                   { $$ = $1; }
    | FLOAT_NUM                  { $$ = $1; }
    | VAR ASSIGN expression      { 
        if(look_for_key($1)) {
            sym[cnt2].str = $1;
            if (sym[cnt2].type == 1) { // If float variable
                sym[cnt2].value.f = (float)$3;  // Explicitly cast to float
            } else {
                sym[cnt2].value.i = $3;  // Keep as integer
            }
            cnt2++;
            $$ = $3;
            if (sym[cnt2-1].type == 1) {
                printf("\nValue %f assigned to variable %s\n", sym[cnt2-1].value.f, $1);
            } else {
                printf("\nValue %d assigned to variable %s\n", sym[cnt2-1].value.i, $1);
            }
        } else {
            printf("\nError: Variable %s not declared\n", $1);
            $$ = 0;
        }
    }
    | VAR                       {
        int i;
        for(i = 1; i < cnt2; i++) {
            if(strcmp(sym[i].str, $1) == 0) {
                if (sym[i].type == 1) {
                    $$ = sym[i].value.f;
                } else {
                    $$ = sym[i].value.i;
                }
                break;
            }
        }
    }
	| expression PLUS expression	{ $$ = $1 + $3; }

	| expression AND expression	{printf("\nAND value = %d & %d = %d \n",$1,$3,$1&$3 );  $$ = $1 & $3;}

	| expression OR expression	{printf("\nOR value = %d & %d = %d \n",$1,$3,$1|$3 );  $$ = $1 | $3;}
	
	| expression XOR expression	{printf("\nXOR value = %d & %d = %d \n",$1,$3,$1^$3 );  $$ = $1 ^ $3;}	

	| expression MINUS expression	{ $$ = $1 - $3; }

	| expression MULT expression	{ $$ = $1 * $3; }

	| expression DIV expression	{ 	if($3) 
				  		{
				     			$$ = $1 / $3;
				  		}
				  		else
				  		{
							$$ = 0;
							printf("\ndivision by zero\t");
				  		} 	
				    	}
	| expression POW expression { $$ = pow($1,$3); }


	| expression LT expression	{ $$ = $1 < $3; }

	| expression GT expression	{ $$ = $1 > $3; }

	| LP expression RP		{ $$ = $2;	}
	
	| inc expression inc         { $$=$2+1; printf("inc: %d\n",$$);}

	
	;
	///////////////////////////////////////
	switch_expression: NUM				{ $$ = $1; val = $$;	}

	| switch_expression PLUS switch_expression	{ $$ = $1 + $3; val = $$; }

	| switch_expression MINUS switch_expression	{ $$ = $1 - $3; val = $$; }

	| switch_expression MULT switch_expression	{ $$ = $1 * $3;  val = $$;}

	| switch_expression DIV switch_expression	{ 	if($3) 
				  		{
				     			$$ = $1 / $3; val = $$;
				  		}
				  		else
				  		{
							$$ = 0;
							 val = $$;
				  		} 	
				    	}
	| switch_expression POW switch_expression { $$ = pow($1,$3);  val = $$;}

	
	;
%%
//////////////////////////
void ins(store *p, char *s, int n)
{
  p->str = s;
  p->value.i = n;
  p->type = 0;
}

int look_for_key(char *key)
{
    int i = 1;
    char *name = st[i].str;
    while (name) {
        if (strcmp(name, key) == 0)
            return st[i].value.i;
        name = st[++i].str;
    }
    return 0;
}
/////////////////////////


///////////////////////////


int yywrap()
{
return 1;
}