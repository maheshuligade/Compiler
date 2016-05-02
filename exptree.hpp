#include <string>
#include <stack>

using namespace std;
typedef struct tnode
{
	struct Typetable *type;				//Interger ,Boolean or Void (for statements) 
										//Must Point to the type expression tree for user defined types
	int Node_Type;						/*This field should carry the folling information:
											(a).Operator:(+,/,*,etc) for expression
											(b).Statement Type:(WHILE,READ,etc)for statemnts*/

	int value;							//Value for the expression tree ,for contents
	char *NAME;							//For Identifiers Fuctions
	struct tnode *ptr1,*ptr2,*ptr3; 	/*Maximum of three subtrees (3 Required for IF THEN ELSE)*/
	struct tnode *Arg_List;				//List of arguments for functions
	int line_no,col_no;
	struct Fieldlist *Fields;				//Pointer to the head of the fields list in case  of the user defined variable.

	struct Gsymbol *Gentry; 					//For global identifiers/Functions
	struct Lsymbol *Lentry;						//For local variables;
} tnode;


struct Gsymbol
{
	char *NAME;		//Name of the identifier
	struct Typetable *TYPE;		//Type can be integer or boolean
	/*The TYPE field must be a Type_Struct if the user defined types are allowed*/
	int size;		//Size field of arrays
	int Binding;	//Address of the Identifier in the Memory
	int value;		//For variables and array to detect
	int line_no,col_no; //For typecheck of redeclaration of the variables

	struct tnode *Arg_List;//Argument list of the functions
	/*The Arg_Struct must  store the name and type of the each argument*/
	struct Lsymbol *Local; //To store the local variables;
	struct tnode *BODY; //storing the body of the function.
	struct Gsymbol *Next;	//Pointer to the next Symbol Table Entry
};


struct Lsymbol
{
	char *NAME;		//Name of the identifier
	struct Typetable *TYPE;		//Type can be integer or boolean
	/*The TYPE field must be a Type_Struct if the user defined types are allowed*/
	int value;		//For variables and array to detect typecheck
	int size;		//Size field of arrays typecheck
	int Binding;	//Address of the Identifier in the Memory
	int line_no,col_no; //For typecheck of redeclaration of the variables
	struct Lsymbol *Next;	//Pointer to the next Symbol Table Entry
	int pass_by_type; //wheter the argument is PASS_BY_VALUE or PASS_BY_REFERENCE or Local variable
};

struct Typetable
{
	char *NAME;					//For storing type Name
	struct Fieldlist *Fields;	//Pointer to the head of the fields list.
	struct Typetable *Next;		//Pointer to  the Next type table entry.
};
 

struct Fieldlist
{	
	char *NAME;					//For storing the Name of the field
	struct Typetable *TYPE;		//Pointer to the type table entry.
	struct Fieldlist *Next;		//Pointer to the Next field.
};
struct tnode* Make_Node(struct Typetable *type,int Node_Type,int value,  char *NAME,struct tnode* ptr1,struct tnode* ptr2,struct tnode* ptr3,struct tnode* Arg_List);

 /*Make tnode and the value of the field*/
struct tnode* makeLeafNode(int n);

// Make tnode with operator,Left and Right branches set
struct tnode* makeOperatorNode(char c,struct tnode* left,struct tnode* right);
struct tnode* makeStatementNode(char c,int Node_Type, int value,struct tnode* ptr1,struct tnode* ptr2,struct tnode *ptr3);

/**
	Make_Arg_Node is used to make the arguments in the function declaration and definition stores the local variables and
	which is linked to the Lentry of the Function node later.
**/
struct Lsymbol *Make_Arg_Node(char *NAME,struct Typetable *TYPE,int size,int pass_by_type);
/**
	Make_Arg_Node_List is used to combine two arguments into one and also checks the redeclaration of the arguments and also 
	contains the local variable and which is linked to the Lentry of the Function node later.
**/
struct Lsymbol *Make_Arg_Node_List(struct Lsymbol *Node_1,struct Lsymbol *Node_2,int value);

/**
	Make_Arg_Node_List_for_global is used to combine two arguments into one and also checks the redeclaration of the arguments and also 
	contains the global variable and which is linked to the Lentry of the Function node later.
**/
struct tnode *Make_Arg_Node_List_for_global(struct tnode *Node_1,struct tnode *Node_2,int value);


struct Gsymbol *Glookup(char *NAME);
void Ginstall(char * NAME,struct Typetable *TYPE,int size,int value,struct tnode *Arg_List);

struct Lsymbol *Llookup(char *NAME);
void Linstall(char * NAME,struct Typetable *TYPE);

/**
	Lookup variable in the local and gloabal symbol table ,If the variable is not there in the local
	symbol table then look into the global symbol table ,if it is not there return NULL
**/
struct Lsymbol *lookup_variable(char *function_name,char *variable_name);

/**
	This marks the local variable as LOCAL_VARIABLE need	for pushing in the Function call  of the codegen.
**/
struct Lsymbol *Mark_Variables_local(struct Lsymbol *function_local_variable);

/**This function assigns the binding to the local variables and the argument relative to the stack*/
void assign_binding(struct  tnode *expressionTree);
void change_extension(char *filename);
int codegen(struct tnode *expressionTree);


/*To evaluate an expression tree*/
int evaluate(struct tnode* expressionTree);
/*This function gives the codegen for  the location,where location = base address + offset*/
int get_location(struct tnode *expressionTree);
/**This function returns the no of the global variables.**/
int get_global_var_no();
/**
	This function gives the binding of the variable if it is local variable then it returns the binding of the 
	local variable otherwise it returns the binding of the global variable.
**/
int get_variable_binding(string last_function_used,char *NAME);
/*This function return the type of the variables and the Arrays;*/
struct Typetable *get_type(struct tnode *expressionTree);
/*To check whether it returns boolean value for type_check in if and while for undefined variable in conditon*/
int is_boolean(struct tnode* expressionTree);
/*To type_check an expression tree*/
int type_check(struct tnode* expressionTree);

/**For initilizing the Typetable entries to the primitive data types.**/
void Typetable_Crate();

/**Searches through the typetable and returns the pointer to the type table entry of type name**/
struct Typetable *Tlookup(char *NAME);

/**
	Installs a new type table entry for the name with the given fields and returns the pointer to the typetable Entry.	
**/
struct Typetable *Tinstall(char *NAME,struct Fieldlist *Fields);

/**Creates a Fieldlist entry with the given name and the type**/
void Finstall(char *NAME,struct Typetable *TYPE);

/**Searches for the field of the given name in the list and returns the pointer to the matchingg entry.**/
struct Fieldlist *Flookup(char *NAME,struct Fieldlist *List);

/**Prints the cpde for the Library Function initilize()**/
void print_code_initialize();
/**Prints the cpde for the Library Function allocate()**/
void print_code_allocate();
/**Prints the cpde for the Library Function free()**/
void print_code_free();

/**Returns the position of the member into the User defined variable.**/
int count_position(char *NAME,char *Member_NAME);
/**	Stack that stores the last fucntion name seen.It is used for the type_check of the Node_Type_FUNCTION_CALL 
	type_check
**/
extern stack <char * > last_function_used_type_check;

extern 	int yyerror(std::string s);
extern int column_no;
// extern char error_output[200];
extern char input_file_name[100];
extern int yylineno;
// extern int BP;
// extern int SP;
extern 	FILE *fp,*sim_code_file;
extern int Memory[1000000];
extern struct Gsymbol *Gsymbol_table;
extern struct Lsymbol *Lsymbol_table;
extern char *INTEGER_NAME;
extern char *BOOLEAN_NAME;
extern char *VOID_NAME;
extern char *ID_NAME;

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
#define Node_Type_FUNCTION_CALL				33
#define Node_Type_RETURN					34
#define PASS_BY_VALUE						35
#define PASS_BY_REFERENCE					36
#define LOCAL_VARIABLE						37
#define TYPE_USER							38