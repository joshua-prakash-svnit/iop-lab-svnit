/* QN.73 - An election is contested by 5 candidates. The candidate is numbered are 1 to 5
and the voting is done by marking the candidate number on the ballot paper.
Write a program to read the ballots and count the votes cast for each candidate
using an array variable count. In case, a number, read is outside the range 1 to 5,
the ballot should be considered as a ‘spoilt ballot’ and the program should also
count the number of spoilt ballots. */

#include <stdio.h>
int main(){
	int arr[5]={0,0,0,0,0},n,cno,i;
	int spbal=0;
	printf("Enter the no. of ballots to be entered.");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the candidate no. to vote.");
		scanf("%d",&cno);
		if(cno>=1 && cno<=5)
		{
			arr[cno-1]++;
		}
		else
		{
			spbal++;
		}
	}
	printf("\nVOTE COUNT\n");
	for(i=0;i<5;i++)
	{
		printf("CANDIDATE NO.%d - %d VOTES\n",i+1,arr[i]);
	}
	printf("NO. OF SPOILT BALLOTS - %d",spbal);
	return 0;
}

