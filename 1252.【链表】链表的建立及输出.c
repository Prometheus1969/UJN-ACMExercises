#include <stdio.h>
#include <stdlib.h>
struct student
{
	float score;
	struct student *next;
};
#define LEN sizeof(struct student)
struct student *creat(void)
{
	struct student *p1,*p2,*head=NULL;
	
	p1 = p2 = (struct student *)malloc(LEN);
	scanf("%f",&p1->score);
	while(p1->score != 0)
	{
		if(head==NULL)
		{
		    head = p1;
		    p1->next = NULL;
		}
		else
		{
		    p1->next = p2;
		    head = p1;
        }
        p2 = p1;
		p1 = (struct student *)malloc(LEN);
		scanf("%f",&p1->score);
	}
	return head;
}
void Out(struct student *head)
{
	struct student *p=NULL;
	
	p = head;
	while(p != NULL)
	{
		printf("%.0f ",p->score);
		p = p->next;
	} 
}
int main()
{
	struct student *head;
	
	head = creat();
	Out(head);
	return 0;
}
