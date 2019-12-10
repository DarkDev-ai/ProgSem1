
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "db.h"
#include "analysis.h"
int input1;
int input2 = 1;
int input3 = 1;
int input4;
char a[32];

void back(){
	input1 = 0;
	printf("Main menu: 1     exit: 0\n");
	scanf("%d", &input2);
}
int main(){
	init_db();
	printf("Welcome!\n");
	while(input2){
		printf("Please enter the ID of the function you wish to execute.\n");
		printf("1: compute_bmi\n");
		printf("2: identify_risks\n");
        printf("3: compute_bmip\n");
		printf("4: identify_risk_group\n");
		printf("5: identify_pregnant\n");
		printf("6: identify_missing_examination\n");
		printf("7: search_by_name\n");
		printf("0: exit\n");
		scanf("%d", &input1);
		switch(input1)
        {
			case 1:
				printf("Please enter your UID:\n");
				scanf("%d", &input3);
				printf("%f\n", compute_bmi(patient_db[input3]));
                back();
				break;
			case 2:
				identify_risks();
                back();
				break;
			case 3:
                printf("Please enter your UID\n");
				scanf("%d", &input3);
				printf("%f\n", compute_bmip(&patient_db[input3]));
				back();
                break;
            case 4:
				printf("Please enter your desired starting UID\n");
				scanf("%d", &input4);
				identify_risk_group(&patient_db[0], input4);
                back();
				break;
			case 5:
				identify_pregnant();
                back();
				break;
			case 6:
				identify_missing_examination();
                back();
				break;
			case 7:
				printf("Please enter a surname!\n");
				scanf("%s", a);
				search_by_name(a);
                back();
				break;
			case 0:
				input2 = 0;
				break;
			default:
				printf("Invalid Input!\nNo valid number was given\n");
				input2 = 0;
                back();
				break;
		}
		if(input2 == 0){
			printf("Goodbye!\n");
		}
	;}


	return 0;
}

