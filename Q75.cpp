// QN.75 - MARKS OF STUDENT (HIGHEST MARK, SUBJECT TOPPER AND CALCULATE TOTAL MARKS.)
#include <stdio.h>
int main(){
	int i,sub1,sub2,sub3,great1[2]={0,0},great2[2]={0,0},great3[2]={0,0},grsum[2]={0,0},sum;
	for(i=1;i<=10;i++)
	{
		printf("\nEnter sub 1 marks of student %d - ",i);
		scanf("%d",&sub1);
		if(sub1>=great1[0])
		{
			great1[0]=sub1;
			great1[1]=i;
		}
		printf("\nEnter sub 2 marks of student %d - ",i);
		scanf("%d",&sub2);
		if(sub2>=great2[0])
		{
			great2[0]=sub2;
			great2[1]=i;	
		}
		printf("\nEnter sub 3 marks of student %d - ",i);
		scanf("%d",&sub3);
		if(sub3>=great3[0])
		{
			great3[0]=sub3;
			great3[1]=i;
		}
		sum=sub1+sub2+sub3;
		if(sum>=grsum[0])
		{
			grsum[0]=sum;
			grsum[1]=i;;
		}
		printf("\nTOTAL MARKS OF ROLL.NO %d - %d\n",i,sum);
	}
	printf("HIGHEST TOTAL MARKS OBTAINED - %d by roll no. %d\n",grsum[0],grsum[1]);
	printf("HIGHEST MARKS OBTAINED IN SUB 1 - %d by roll no. %d\n",great1[0],great1[1]);
	printf("HIGHEST MARKS OBTAINED IN SUB 2 - %d by roll no. %d\n",great2[0],great2[1]);
	printf("HIGHEST MARKS OBTAINED IN SUB 3 - %d by roll no. %d\n",great3[0],great3[1]);
	return 0;
}
