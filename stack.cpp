#include	<iostream>
using	namespace	std;
#define	SIZE	5
int	stack[SIZE],	top	=	-1;
void	push(int	val)	{
if	(top	==	SIZE	-	1)	cout	<<	"Stack	Overflow\n";
else	{	stack[++top]	=	val;	cout	<<	val	<<	"	pushed\n";	}
}
void	pop()	{
if	(top	==	-1)	cout	<<	"Stack	Underflow\n";
else	cout	<<	stack[top--]	<<	"	popped\n";
}
int	main()	{
push(10);
push(20);
push(30);
pop();
push(40);
cout	<<	"Stack	elements:	";
for	(int	i	=	0;	i	<=	top;	i++)	cout	<<	stack[i]	<<	"	";
return	0;
} 