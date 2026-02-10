#include<stdio.h>

enum floor {ladies = 1 , men ,children
};
int main(){
	int choice;
	printf("\n enter the choice ");
	scanf("%d",&choice);


switch(choice)
{
	case ladies:
		printf("\n goto first floor");
		break;
	case men:
		printf("\n goto second floor");
		break;
	
	case children:
		printf("\ngoto 3rd floor");
		break;
	default:
		printf("\n enter wrong choice");
	}
	return 0;
}
