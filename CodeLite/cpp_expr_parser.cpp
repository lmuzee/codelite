#ifndef lint
static char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif
#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define yyclearin (yychar=(-1))
#define yyerrok (yyerrflag=0)
#define YYRECOVERING (yyerrflag!=0)
#define yyparse cl_expr_parse
#define yylex cl_expr_lex
#define yyerror cl_expr_error
#define yychar cl_expr_char
#define yyval cl_expr_val
#define yylval cl_expr_lval
#define yydebug cl_expr_debug
#define yynerrs cl_expr_nerrs
#define yyerrflag cl_expr_errflag
#define yyss cl_expr_ss
#define yyssp cl_expr_ssp
#define yyvs cl_expr_vs
#define yyvsp cl_expr_vsp
#define yylhs cl_expr_lhs
#define yylen cl_expr_len
#define yydefred cl_expr_defred
#define yydgoto cl_expr_dgoto
#define yysindex cl_expr_sindex
#define yyrindex cl_expr_rindex
#define yygindex cl_expr_gindex
#define yytable cl_expr_table
#define yycheck cl_expr_check
#define yyname cl_expr_name
#define yyrule cl_expr_rule
#define YYPREFIX "cl_expr_"
   
/* Copyright Eran Ifrah(c)*/
/*************** Includes and Defines *****************************/
#include "string"
#include "vector"
#include "stdio.h"
#include "map"
#include "expression_result.h"

#define YYSTYPE std::string
#define YYDEBUG 0        /* get the pretty debugging code to compile*/

void cl_expr_error(char *string);

static ExpressionResult result;

/*---------------------------------------------*/
/* externs defined in the lexer*/
/*---------------------------------------------*/
extern char *cl_expr_text;
extern int cl_expr_lex();
extern int cl_expr_parse();
extern int cl_expr_lineno;
extern std::vector<std::string> currentScope;
extern bool setExprLexerInput(const std::string &in);
extern void cl_expr_lex_clean();

/*************** Standard ytab.c continues here *********************/
#define LE_AUTO 257
#define LE_DOUBLE 258
#define LE_INT 259
#define LE_STRUCT 260
#define LE_BREAK 261
#define LE_ELSE 262
#define LE_LONG 263
#define LE_SWITCH 264
#define LE_CASE 265
#define LE_ENUM 266
#define LE_REGISTER 267
#define LE_TYPEDEF 268
#define LE_CHAR 269
#define LE_EXTERN 270
#define LE_RETURN 271
#define LE_UNION 272
#define LE_CONST 273
#define LE_FLOAT 274
#define LE_SHORT 275
#define LE_UNSIGNED 276
#define LE_CONTINUE 277
#define LE_FOR 278
#define LE_SIGNED 279
#define LE_VOID 280
#define LE_DEFAULT 281
#define LE_GOTO 282
#define LE_SIZEOF 283
#define LE_VOLATILE 284
#define LE_DO 285
#define LE_IF 286
#define LE_STATIC 287
#define LE_WHILE 288
#define LE_NEW 289
#define LE_DELETE 290
#define LE_THIS 291
#define LE_OPERATOR 292
#define LE_CLASS 293
#define LE_PUBLIC 294
#define LE_PROTECTED 295
#define LE_PRIVATE 296
#define LE_VIRTUAL 297
#define LE_FRIEND 298
#define LE_INLINE 299
#define LE_OVERLOAD 300
#define LE_TEMPLATE 301
#define LE_TYPENAME 302
#define LE_IDENTIFIER 303
#define LE_STRINGliteral 304
#define LE_FLOATINGconstant 305
#define LE_INTEGERconstant 306
#define LE_CHARACTERconstant 307
#define LE_OCTALconstant 308
#define LE_HEXconstant 309
#define LE_POUNDPOUND 310
#define LE_CComment 311
#define LE_CPPComment 312
#define LE_NAMESPACE 313
#define LE_USING 314
#define LE_TYPEDEFname 315
#define LE_ARROW 316
#define LE_ICR 317
#define LE_DECR 318
#define LE_LS 319
#define LE_RS 320
#define LE_LE 321
#define LE_GE 322
#define LE_EQ 323
#define LE_NE 324
#define LE_ANDAND 325
#define LE_OROR 326
#define LE_ELLIPSIS 327
#define LE_CLCL 328
#define LE_DOTstar 329
#define LE_ARROWstar 330
#define LE_MULTassign 331
#define LE_DIVassign 332
#define LE_MODassign 333
#define LE_PLUSassign 334
#define LE_MINUSassign 335
#define LE_LSassign 336
#define LE_RSassign 337
#define LE_ANDassign 338
#define LE_ERassign 339
#define LE_ORassign 340
#define LE_MACRO 341
#define LE_DYNAMIC_CAST 342
#define LE_STATIC_CAST 343
#define LE_CONST_CAST 344
#define LE_REINTERPRET_CAST 345
#define YYERRCODE 256
short cl_expr_lhs[] = {                                        -1,
    0,    0,    3,    1,    1,    4,    4,    5,    5,    5,
    5,    5,    5,    5,    5,    5,    6,    6,    6,    7,
    7,    7,    2,    2,    2,    2,    2,    2,    2,   13,
   13,   14,   14,   11,   11,   11,   11,   15,   15,   16,
   16,    9,   10,   10,   10,   12,   12,    8,    8,   17,
};
short cl_expr_len[] = {                                         2,
    0,    2,    0,    2,    1,    0,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    0,    1,    3,    4,
    4,    6,    6,    2,    3,    3,    6,    8,    5,    0,
    3,    0,    1,    1,    1,    1,    1,    0,    1,    0,
    2,    2,    0,    1,    1,    6,    3,    0,    2,    2,
};
short cl_expr_defred[] = {                                      1,
    0,    5,    2,    0,   44,   45,    4,    0,   24,   34,
   35,   36,   37,    0,    0,    0,    0,   48,    0,    0,
   25,   26,    0,   49,   48,    0,    0,   40,   50,    0,
    0,    0,   40,    0,   47,    0,    0,    7,   48,    0,
   18,   33,   29,    0,    0,    0,   41,   39,   42,   27,
    0,    0,   31,   23,    0,   40,   13,    8,   11,    9,
   12,   10,   15,   14,   16,    0,   40,   19,   28,   46,
    0,   20,   21,    0,   22,
};
short cl_expr_dgoto[] = {                                       1,
    3,    7,    4,   39,   67,   40,   41,   19,   35,    8,
   17,   20,   31,   43,   49,   36,   24,
};
short cl_expr_sindex[] = {                                      0,
 -254,    0,    0,   21,    0,    0,    0,  -25,    0,    0,
    0,    0,    0,  -17, -230, -274,  -12,    0, -272,   -4,
    0,    0,  -60,    0,    0,   27,  -57,    0,    0, -227,
   32,   12,    0, -227,    0,   29, -226,    0,    0,  -34,
    0,    0,    0,   45, -219,  -32,    0,    0,    0,    0,
 -225, -227,    0,    0,   47,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -56,    0,    0,    0,    0,
 -227,    0,    0,   13,    0,
};
short cl_expr_rindex[] = {                                      0,
  -33,    0,    0,  -29,    0,    0,    0, -214,    0,    0,
    0,    0,    0, -214,    0,    0,    0,    0,    0,    0,
    0,    0,    1,    0,    0,    0,   -6,    0,    0,  -38,
    5,    0,    0,  -38,    0,  -23,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -193,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -22,    0,    0,    0,    0,
  -38,    0,    0,    0,    0,
};
short cl_expr_gindex[] = {                                      0,
    0,    0,    0,    0,    0,  -26,   38,   19,  -14,    0,
    0,   44,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 350
short cl_expr_table[] = {                                      30,
   30,    2,   34,   71,   32,   17,    3,   46,    3,   52,
   43,   52,   43,   37,   14,   40,   15,   38,   45,   40,
   38,   40,   18,   17,    3,    3,   16,   53,   23,   56,
   27,   40,   57,   58,   40,   40,   28,   59,   38,   40,
   30,   70,   30,   60,   74,   38,   32,   25,   61,   62,
   63,   72,   73,   64,   65,   40,   52,   51,   30,   30,
   21,   26,   32,   32,    6,    6,   48,   33,   32,    6,
   47,   42,   22,   44,   75,    6,   50,   66,    6,    5,
    6,    6,    6,   55,   54,    6,    6,   69,   48,   68,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    6,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    6,
    6,    0,    0,    0,    6,    0,    0,    0,    0,    0,
    6,    0,    0,    0,    0,    6,    6,    6,    0,    0,
    6,    6,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   30,    3,    0,    0,
   32,   43,    0,    0,    6,    9,    0,   29,    0,    3,
   29,   29,    0,   43,    0,    0,    0,    0,    0,   38,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   30,    0,    0,    0,   32,    0,    0,    0,    0,
    0,    0,    0,   30,    0,    0,    0,   32,    3,    3,
    3,    3,   43,   43,   43,   43,   10,   11,   12,   13,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   30,   30,   30,   30,   32,   32,   32,   32,
};
short cl_expr_check[] = {                                      60,
    0,  256,   60,   60,    0,   44,   40,   34,   42,   44,
   40,   44,   42,   28,   40,   38,   42,   41,   33,   42,
   44,   44,   40,   62,   58,   59,    8,   62,  303,   62,
  303,   38,  258,  259,   41,   42,   41,  263,   62,   62,
   40,   56,   42,  269,   71,  273,   42,   60,  274,  275,
  276,   66,   67,  279,  280,   62,   44,   39,   58,   59,
  291,   18,   58,   59,  258,  259,   38,   41,   25,  263,
   42,   40,  303,   62,   62,  269,  303,  303,   58,   59,
  274,  275,  276,  303,   40,  279,  280,   41,  303,   52,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  303,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  258,
  259,   -1,   -1,   -1,  263,   -1,   -1,   -1,   -1,   -1,
  269,   -1,   -1,   -1,   -1,  274,  275,  276,   -1,   -1,
  279,  280,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  256,  291,   -1,   -1,
  256,  291,   -1,   -1,  303,  291,   -1,  328,   -1,  303,
  328,  328,   -1,  303,   -1,   -1,   -1,   -1,   -1,  303,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  291,   -1,   -1,   -1,  291,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  303,   -1,   -1,   -1,  303,  342,  343,
  344,  345,  342,  343,  344,  345,  342,  343,  344,  345,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  342,  343,  344,  345,  342,  343,  344,  345,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 1
#endif
#define YYMAXTOKEN 345
#if YYDEBUG
char *cl_expr_name[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,"'&'",0,"'('","')'","'*'",0,"','",0,0,0,0,0,0,0,0,0,0,0,0,0,"':'","';'",
"'<'",0,"'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,"LE_AUTO","LE_DOUBLE","LE_INT","LE_STRUCT","LE_BREAK","LE_ELSE","LE_LONG",
"LE_SWITCH","LE_CASE","LE_ENUM","LE_REGISTER","LE_TYPEDEF","LE_CHAR",
"LE_EXTERN","LE_RETURN","LE_UNION","LE_CONST","LE_FLOAT","LE_SHORT",
"LE_UNSIGNED","LE_CONTINUE","LE_FOR","LE_SIGNED","LE_VOID","LE_DEFAULT",
"LE_GOTO","LE_SIZEOF","LE_VOLATILE","LE_DO","LE_IF","LE_STATIC","LE_WHILE",
"LE_NEW","LE_DELETE","LE_THIS","LE_OPERATOR","LE_CLASS","LE_PUBLIC",
"LE_PROTECTED","LE_PRIVATE","LE_VIRTUAL","LE_FRIEND","LE_INLINE","LE_OVERLOAD",
"LE_TEMPLATE","LE_TYPENAME","LE_IDENTIFIER","LE_STRINGliteral",
"LE_FLOATINGconstant","LE_INTEGERconstant","LE_CHARACTERconstant",
"LE_OCTALconstant","LE_HEXconstant","LE_POUNDPOUND","LE_CComment",
"LE_CPPComment","LE_NAMESPACE","LE_USING","LE_TYPEDEFname","LE_ARROW","LE_ICR",
"LE_DECR","LE_LS","LE_RS","LE_LE","LE_GE","LE_EQ","LE_NE","LE_ANDAND","LE_OROR",
"LE_ELLIPSIS","LE_CLCL","LE_DOTstar","LE_ARROWstar","LE_MULTassign",
"LE_DIVassign","LE_MODassign","LE_PLUSassign","LE_MINUSassign","LE_LSassign",
"LE_RSassign","LE_ANDassign","LE_ERassign","LE_ORassign","LE_MACRO",
"LE_DYNAMIC_CAST","LE_STATIC_CAST","LE_CONST_CAST","LE_REINTERPRET_CAST",
};
char *cl_expr_rule[] = {
"$accept : translation_unit",
"translation_unit :",
"translation_unit : translation_unit primary_expr",
"$$1 :",
"primary_expr : $$1 simple_expr",
"primary_expr : error",
"const_spec :",
"const_spec : LE_CONST",
"basic_type_name : LE_INT",
"basic_type_name : LE_CHAR",
"basic_type_name : LE_SHORT",
"basic_type_name : LE_LONG",
"basic_type_name : LE_FLOAT",
"basic_type_name : LE_DOUBLE",
"basic_type_name : LE_SIGNED",
"basic_type_name : LE_UNSIGNED",
"basic_type_name : LE_VOID",
"parameter_list :",
"parameter_list : template_parameter",
"parameter_list : parameter_list ',' template_parameter",
"template_parameter : const_spec nested_scope_specifier LE_IDENTIFIER special_star_amp",
"template_parameter : const_spec nested_scope_specifier basic_type_name special_star_amp",
"template_parameter : const_spec nested_scope_specifier LE_IDENTIFIER '<' parameter_list '>'",
"simple_expr : stmnt_starter special_cast '<' cast_type '>' '('",
"simple_expr : stmnt_starter LE_THIS",
"simple_expr : stmnt_starter '*' LE_THIS",
"simple_expr : stmnt_starter '*' LE_IDENTIFIER",
"simple_expr : stmnt_starter '(' cast_type ')' special_star_amp LE_IDENTIFIER",
"simple_expr : stmnt_starter '(' '(' cast_type ')' special_star_amp LE_IDENTIFIER ')'",
"simple_expr : stmnt_starter nested_scope_specifier LE_IDENTIFIER optional_template_init_list optinal_postifx",
"optional_template_init_list :",
"optional_template_init_list : '<' parameter_list '>'",
"optinal_postifx :",
"optinal_postifx : '('",
"special_cast : LE_DYNAMIC_CAST",
"special_cast : LE_STATIC_CAST",
"special_cast : LE_CONST_CAST",
"special_cast : LE_REINTERPRET_CAST",
"amp_item :",
"amp_item : '&'",
"star_list :",
"star_list : star_list '*'",
"special_star_amp : star_list amp_item",
"stmnt_starter :",
"stmnt_starter : ';'",
"stmnt_starter : ':'",
"cast_type : nested_scope_specifier LE_IDENTIFIER '<' parameter_list '>' special_star_amp",
"cast_type : nested_scope_specifier LE_IDENTIFIER special_star_amp",
"nested_scope_specifier :",
"nested_scope_specifier : nested_scope_specifier scope_specifier",
"scope_specifier : LE_IDENTIFIER LE_CLCL",
};
#endif
#ifndef YYSTYPE
typedef int YYSTYPE;
#endif
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH 500
#endif
#endif
int yydebug;
int yynerrs;
int yyerrflag;
int yychar;
short *yyssp;
YYSTYPE *yyvsp;
YYSTYPE yyval;
YYSTYPE yylval;
short yyss[YYSTACKSIZE];
YYSTYPE yyvs[YYSTACKSIZE];
#define yystacksize YYSTACKSIZE
void yyerror(char *s) {}


void expr_FuncArgList()
{
	int depth = 1;
	while(depth > 0)
	{
		int ch = cl_expr_lex();
		//printf("ch=%d\n", ch);
		//fflush(stdout);
		if(ch ==0){
			break;
		}
		
		if(ch == ')')
		{
			depth--;
			continue;
		}
		else if(ch == '(')
		{
			depth ++ ;
			continue;
		}
	}
}

void expr_consumeTemplateDecl()
{
	int depth = 1;
	while(depth > 0)
	{
		int ch = cl_expr_lex();
		//printf("ch=%d\n", ch);
		fflush(stdout);
		if(ch ==0){
			break;
		}
		
		if(ch == '>')
		{
			depth--;
			continue;
		}
		else if(ch == '<')
		{
			depth ++ ;
			continue;
		}
	}
}

void expr_syncParser(){
	//dont do anything, a hook to allow us to implement some
	//nice error recovery if needed
}

// return the scope name at the end of the input string
ExpressionResult &parse_expression(const std::string &in)
{
	result.Reset();
	//provide the lexer with new input
	if( !setExprLexerInput(in) ){
		return result;
	}
	
	//printf("parsing...\n");
	cl_expr_parse();
	//do the lexer cleanup
	cl_expr_lex_clean();
	
	return result;
}
#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse()
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register char *yys;
    extern char *getenv();

    if (yys = getenv("YYDEBUG"))
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = (-1);

    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if (yyn = yydefred[yystate]) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yyss + yystacksize - 1)
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = (-1);
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;
#ifdef lint
    goto yynewerror;
#endif
yynewerror:
    yyerror("syntax error");
#ifdef lint
    goto yyerrlab;
#endif
yyerrlab:
    ++yynerrs;
yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yyss + yystacksize - 1)
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = (-1);
        goto yyloop;
    }
yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 3:
{result.Reset();}
break;
case 5:
{ 
								yyclearin;	/*clear lookahead token*/
								yyerrok;
								/*fprintf(stderr, "CodeLite: syntax error, unexpected token '%s' found at line %d \n", cl_expr_text, cl_expr_lineno);*/
								/*fflush(stderr);*/
								expr_syncParser();
						}
break;
case 6:
{yyval = ""; }
break;
case 7:
{ yyval = yyvsp[0]; }
break;
case 8:
{ yyval = yyvsp[0]; }
break;
case 9:
{ yyval = yyvsp[0]; }
break;
case 10:
{ yyval = yyvsp[0]; }
break;
case 11:
{ yyval = yyvsp[0]; }
break;
case 12:
{ yyval = yyvsp[0]; }
break;
case 13:
{ yyval = yyvsp[0]; }
break;
case 14:
{ yyval = yyvsp[0]; }
break;
case 15:
{ yyval = yyvsp[0]; }
break;
case 16:
{ yyval = yyvsp[0]; }
break;
case 17:
{yyval = "";}
break;
case 18:
{yyval = yyvsp[0];}
break;
case 19:
{yyval = yyvsp[-2] + yyvsp[-1] + yyvsp[0];}
break;
case 20:
{yyval = yyvsp[-3] + " " + yyvsp[-2] + " " + yyvsp[-1] +yyvsp[0];}
break;
case 21:
{yyval = yyvsp[-3] + " " + yyvsp[-2] + " " + yyvsp[-1] +yyvsp[0];}
break;
case 22:
{yyval = yyvsp[-5] + " " + yyvsp[-4] + " " + yyvsp[-3] +yyvsp[-2] + yyvsp[-1] + yyvsp[0];}
break;
case 23:
{
						expr_FuncArgList(); 
						yyval = yyvsp[-2];
						result.m_isaType = true;
						result.m_name = yyvsp[-2];
						result.m_isFunc = false;
						printf("Rule 1\n");
						/*result.Print();*/
					}
break;
case 24:
{
						yyval = yyvsp[0];
						result.m_isaType = false;
						result.m_name = yyval;
						result.m_isFunc = false;
						result.m_isThis = true;
						result.m_isPtr = true;
						/*result.Print();*/
					}
break;
case 25:
{
						yyval = yyvsp[0];
						result.m_isaType = false;
						result.m_name = yyval;
						result.m_isFunc = false;
						result.m_isThis = true;
						/*result.Print();*/
					}
break;
case 26:
{
						yyval = yyvsp[0];
						result.m_isaType = false;
						result.m_name = yyval;
						result.m_isFunc = false;
						result.m_isThis = false;
						result.m_isPtr = false;
						/*result.Print();*/
					}
break;
case 27:
{
						yyval = yyvsp[-3];
						result.m_isaType = true;
						result.m_name = yyval;
						result.m_isFunc = false;
						result.m_isThis = false;
						/*result.Print();*/
					}
break;
case 28:
{
						yyval = yyvsp[-4];
						result.m_isaType = true;
						result.m_name = yyval;
						result.m_isFunc = false;
						result.m_isThis = false;
						/*result.Print();*/
					}
break;
case 29:
{
						result.m_isaType = false;
						result.m_name = yyvsp[-2];
						result.m_isThis = false;
						yyvsp[-3].erase(yyvsp[-3].find_last_not_of(":")+1);
						result.m_scope = yyvsp[-3];
						result.m_isTemplate = yyvsp[-1].empty() ? false : true;
						result.m_templateInitList = yyvsp[-1];
						/*result.Print();*/
					}
break;
case 30:
{yyval = "";}
break;
case 31:
{yyval = yyvsp[-2] + yyvsp[-1] + yyvsp[0];}
break;
case 32:
{yyval = "";}
break;
case 33:
{
						yyval = yyvsp[0]; 
						expr_FuncArgList();
						result.m_isFunc = true;
					}
break;
case 34:
{yyval = yyvsp[0];}
break;
case 35:
{yyval = yyvsp[0];}
break;
case 36:
{yyval = yyvsp[0];}
break;
case 37:
{yyval = yyvsp[0];}
break;
case 38:
{yyval = ""; }
break;
case 39:
{ yyval = yyvsp[0]; }
break;
case 40:
{yyval = ""; }
break;
case 41:
{yyval = yyvsp[-1] + yyvsp[0];}
break;
case 42:
{ yyval = yyvsp[-1] + yyvsp[0]; }
break;
case 43:
{yyval = "";}
break;
case 44:
{ yyval = ";";}
break;
case 45:
{ yyval = ":";}
break;
case 46:
{
					yyval = yyvsp[-5] + yyvsp[-4]; 
					yyvsp[-5].erase(yyvsp[-5].find_last_not_of(":")+1);
					result.m_scope = yyvsp[-5]; 
					result.m_name = yyvsp[-4];
					result.m_isPtr = (yyvsp[0].find("*") != (size_t)-1);;
					result.m_isTemplate = true;
					result.m_templateInitList = yyvsp[-3] + yyvsp[-2] + yyvsp[-1];
				}
break;
case 47:
{
					yyval = yyvsp[-2] + yyvsp[-1]; 
					yyvsp[-2].erase(yyvsp[-2].find_last_not_of(":")+1);
					result.m_scope = yyvsp[-2]; 
					result.m_name = yyvsp[-1];
					result.m_isPtr = (yyvsp[0].find("*") != (size_t)-1);;
				}
break;
case 48:
{yyval = "";}
break;
case 49:
{	yyval = yyvsp[-1] + yyvsp[0];}
break;
case 50:
{yyval = yyvsp[-1]+ yyvsp[0];}
break;
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yyss + yystacksize - 1)
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;
yyoverflow:
    yyerror("yacc stack overflow");
yyabort:
    return (1);
yyaccept:
    return (0);
}
