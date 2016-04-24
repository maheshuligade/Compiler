#include <stdlib.h>
#include <math.h>
#include "exptree.hpp"
#include <string.h>
#include <string.h>
#include "y.tab.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;

char *INTEGER_NAME;
char *BOOLEAN_NAME;
char *VOID_NAME;
char *ID_NAME;
struct Typetable *Typetable_Table = NULL;
struct Fieldlist *Fieldlist_Table = NULL;

void Typetable_Crate()
{
	/**For initilizing the Typetable entries to the primitive data types.**/
	
	
	INTEGER_NAME = (char *)malloc(20*sizeof(char));
	BOOLEAN_NAME = (char *)malloc(20*sizeof(char));
	VOID_NAME = (char *)malloc(20*sizeof(char));
	ID_NAME = (char *)malloc(20*sizeof(char));
	strcpy(INTEGER_NAME,"integer");
	strcpy(BOOLEAN_NAME,"boolean");
	strcpy(VOID_NAME,"void");
	strcpy(ID_NAME,"ID");

	Tinstall(INTEGER_NAME, NULL);
	Tinstall(BOOLEAN_NAME,NULL);
	Tinstall(VOID_NAME,NULL);
	Tinstall(ID_NAME,NULL);
}

struct Typetable *Tlookup(char *NAME)
{
	/**Searches through the typetable and returns the pointer to the type table entry of type name**/

	struct Typetable *temp = new Typetable;
	temp = Typetable_Table;

	while(temp != NULL)
	{
		if (strcmp(temp->NAME,NAME) == 0)
		{
		 	return temp;
		 }
		temp = temp->Next;
	}

	return temp;

}

struct Typetable *Tinstall(char *NAME,struct Fieldlist *Fields)
{
	/**
		Installs a new type table entry for the name with the given fields and returns the pointer to the typetable Entry.	
	**/
	struct Typetable *new_node = new Typetable;
	new_node->NAME = (char *)malloc(20*sizeof(char));

	if (Tlookup(NAME) == NULL)
	{
		cout<<"						="<<Fields<<endl;
		strcpy(new_node->NAME,NAME);
		new_node->Fields = new Fieldlist;
		new_node->Fields = Fields;
		new_node->Next = Typetable_Table;
		Typetable_Table = new_node;
	}
	else
	{
		yyerror("redeclaration of ‘" + string(NAME) + "’");
	}

	return new_node;
}

void Finstall(char *NAME,struct Typetable *TYPE)
{
	/**Creates a Fieldlist entry with the given name and the type**/

	struct Fieldlist *new_node = new Fieldlist;
	
	if (Tlookup(NAME) == NULL)
	{
		
		new_node->NAME = (char *)malloc(20*sizeof(char));
		strcpy(new_node->NAME,NAME);
		new_node->TYPE = new Typetable;
		new_node->TYPE = TYPE;
		new_node->Next = Fieldlist_Table;
		Fieldlist_Table = new_node;
	}
	else
	{
		yyerror("redeclaration of ‘" + string(NAME) + "’");
	}

}

struct Fieldlist *Flookup(char *NAME,struct Fieldlist *List)
{
	/**Searches for the field of the given name in the list and returns the pointer to the matchingg entry.**/

	struct Fieldlist *temp = new Fieldlist;
	temp = List;

	while(temp != NULL)
	{

		// cout<<"NAME = "<<temp->NAME<<" NAME = "<<NAME<<endl;
		if (strcmp(temp->NAME,NAME) == 0)
		{
		 	return temp;
		 }
		temp = temp->Next;
	}

	return temp;

}