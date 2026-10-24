#include	<iostream>
using	namespace	std;
#define	SIZE	5
int	queue[SIZE],	front	=	-1,	rear	=	-1;
void	enqueue(int	val)	{
if	(rear	==	SIZE	-	1)	cout	<<	"Queue	Full\n";
else	{
if	(front	==	-1)	front	=	0;
queue[++rear]	=	val;
cout	<<	val	<<	"	enqueued\n";
}
}
void	dequeue()	{
if	(front	==	-1	||	front	>	rear)	cout	<<	"Queue	Empty\n";
else	cout	<<	queue[front++]	<<	"	dequeued\n";
}
int	main()	{
enqueue(10);
enqueue(20);
enqueue(30);
dequeue();
enqueue(40);
cout	<<	"Queue	elements:	";
for	(int	i	=	front;	i	<=	rear;	i++)	cout	<<	queue[i]	<<	"	";
return	0;
}