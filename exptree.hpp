#include <string>

typedef struct tnode
{
	int type;							//Interger ,Boolean or Void (for statements) 
										//Must Point to the type expression tree for user defined types
	int Node_Type;						/*This field should carry the folling information:
											(a).Operator:(+,/,*,etc) for expression
											(b).Statement Type:(WHILE,READ,etc)for statemnts*/

	int value;							//Value for the expression tree ,for contents
	char *NAME;							//For Identifiers Fuctions
	struct tnode *ptr1,*ptr2,*ptr3; 	/*Maximum of three subtrees (3 Required for IF THEN ELSE)*/
	struct tnode *Arg_List;				//List of arguments for functions
	int line_no,col_no;
	
	struct Gsymbol *Gentry; 					//For global identifiers/Functions
	struct Lsymbol *Lentry;						//For local variables;
} tnode;


struct Gsymbol
{
	char *NAME;		//Name of the identifier
	int TYPE;		//Type can be integer or boolean
	/*The TYPE field must be a Type_Struct if the user defined types are allowed*/
	int size;		//Size field of arrays
	int Binding;	//Address of the Identifier in the Memory
	int value;		//For variables and array to detect
	struct Arg_Struct *Arg_List;//Argument list of the functions
	/*The Arg_Struct must  store the name and type of the each argument*/
	struct Gsymbol *Next;	//Pointer to the next Symbol Table Entry
};


struct Lsymbol
{
	char *NAME;		//Name of the identifier
	int TYPE;		//Type can be integer or boolean
	/*The TYPE field must be a Type_Struct if the user defined types are allowed*/
	int value;		//For variables and array to detect typecheck
	int size;		//Size field of arrays typecheck
	int Binding;	//Address of the Identifier in the Memory
	struct Lsymbol *Next;	//Pointer to the next Symbol Table Entry
};


struct tnode* Make_Node(int type,int Node_Type,int value,  char *NAME,struct tnode* ptr1,struct tnode* ptr2,struct tnode* ptr3,struct tnode* Arg_List);

 /*Make tnode and the value of the field*/
struct tnode* makeLeafNode(int n);

// Make tnode with operator,Left and Right branches set
struct tnode* makeOperatorNode(char c,struct tnode* left,struct tnode* right);
struct tnode* makeStatementNode(char c,int Node_Type, int value,struct tnode* ptr1,struct tnode* ptr2,struct tnode *ptr3);

struct Gsymbol *Glookup(char *NAME);
void Ginstall(char * NAME,int TYPE,int size,int value,struct Arg_List *Arg_List);

struct Lsymbol *Llookup(char *NAME);
void Linstall(char * NAME,int TYPE);

void change_extension(char *filename);
int codegen(struct tnode *expressionTree);


/*To evaluate an expression tree*/
int evaluate(struct tnode* expressionTree);
/*This function gives the codegen for  the location,where location = base address + offset*/
int get_location(struct tnode *expressionTree);
/*This function return the type of the variables and the Arrays;*/
int get_type(struct tnode *expressionTree);
/*To check whether it returns boolean value for type_check in if and while for undefined variable in conditon*/
int is_boolean(struct tnode* expressionTree);
/*To type_check an expression tree*/
int type_check(struct tnode* expressionTree);


extern 	int yyerror(std::string s);
extern int column_no;
extern char error_output[200];
extern char input_file_name[100];
extern int yylineno;
extern int BP;
extern int SP;
extern 	FILE *fp,*sim_code_file;
extern int Memory[1000000];
#define YYSTYPE tnode*
#define Node_Type_LEAF						1
#define Node_Type_ID						2
#define Node_Type_PLUS						3
#define Node_Type_MINUS						4
#define Node_Type_DIV						5
#define Node_Type_MUL						6
#define Node_Type_MODULUS					7
#define Node_Type_POWER						8
#define Node_Type_LT						9
#define Node_Type_LE						10
#define Node_Type_GT						11
#define Node_Type_GE						12
#define Node_Type_EQ						13
#define Node_Type_NE						14
#define Node_Type_IF						15
#define Node_Type_WHILE						16
#define Node_Type_READ						17
#define Node_Type_WRITE						18
#define Node_Type_SLIST						19
#define Node_Type_ASSIGNMENT				20
#define TYPE_VOID							21
#define TYPE_BOOLEAN						22
#define TYPE_INT							23
#define Type_ARRAY 							24
#define Node_Type_DUMMY						25
#define Node_Type_ARRAY						26
#define Node_Type_NOT						27
#define Node_Type_OR						28
#define Node_Type_AND						29
#define Node_Type_BOOLEAN_CONSTANT			30
#define Node_Type_FUNCTION					31
#define Node_Type_FUNCTION_DEF				32
#define Node_Type_RETURN					33