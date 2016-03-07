void change_extension(char *filename)
{	
	int i,j;

	for (i = 0; filename[i]!='\n'; i++)
	{
		if (filename[i]=='.')
		{
			// cout<<filename[i++];
			i++;
			break;
		}
	}
	filename[i++]='s';
	filename[i++]='i';
	filename[i++]='m';
	filename[i++]='\0';
}
int codegen(struct tnode *expressionTree)
{

	return 0;
}