#include<stdio.h>

int TT[100][100];
int accepting[100];
int no_of_ac;
int total_states,total_symbols;
void main(){
	int i,j;
	printf("Enter total state : ");
	scanf("%d",&total_states);

	printf("Enter total symbols : ");
	scanf("%d",&total_symbols);

	printf("Enter the transition table :\n");
	for(i=0;i<total_states;i++){
		for(j=0;j<total_symbols;j++){
			printf("State %d : Symbol %d : ",i,j);
			scanf("%d",&TT[i][j]);
		}
	}

	printf("Enter no. of accepting states : ");
	scanf("%d",&no_of_ac);
	printf("Enter all accepting states :\n");
	for(i=0;i<no_of_ac;i++){
		scanf("%d",&accepting[i]);
	}

	int temp=0;
	int current_state;
	while(1){
		current_state=0;
		printf("Enter String : (Enter -1 to stop)\n");
		while(1){
			scanf("%d",&temp);
			if(temp<0){
				break;
			}
			current_state=TT[current_state][temp];
		}
		// check for acceptance
		temp=0;
		for(i=0;i<no_of_ac;i++){
			if(accepting[i]==current_state){
				printf("VALID\n");
				temp=1;
				break;
			}
		}
		if(temp==0){
			printf("INVALID\n");
		}

	}
}
