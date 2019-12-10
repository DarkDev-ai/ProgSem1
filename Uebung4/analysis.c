
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "db.h"
#include "analysis.h"

float compute_bmi(patient p){
	float bmi;
	bmi = p.weight / ((p.size / 100.00) * (p.size / 100.00));
	return bmi;
}

void identify_risks(){
	for(int i = 0; i < 100; i++){
		if(compute_bmi(patient_db[i]) < 20 || compute_bmi(patient_db[i]) > 25){
			printf("[%d] %s %s\n", i, patient_db[i].first_name, patient_db[i].surname);
		}
	}
}
float compute_bmip(patient *pointer){
	float bmi;
	bmi = (*pointer).weight / (((*pointer).size / 100.00) * ((*pointer).size / 100.00));
	return bmi;
}

void identify_risk_group(patient *patients, int size2){
	for(int i = size2; i < 100; i++){
		if(compute_bmip(patients + i) < 20 || compute_bmip(patients + i) > 25){
			printf("[%d] %s %s\n", i, (patients[i]).first_name, (patients[i]).surname);
		}
	}
}

void identify_pregnant(){
	for(int i = 0; i < 100; i++){
		if(patient_db[i].is_pregnant == 1){
			printf("[%d] %s %s\n", i, patient_db[i].first_name, patient_db[i].surname);
		}
	}
}

void identify_missing_examination(){
	for(int i = 0; i < 100; i++){
			if(!strcmp(patient_db[i].last_lymphnode_exam, "unknown") || !strcmp(patient_db[i].last_breast_exam, "unknown")){
				printf("[%d] %s %s\n", i, patient_db[i].first_name, patient_db[i].surname);
			}
		}
}

void search_by_name(char name[]){
	for(int i = 0;i < 100; i++){
		if(!strcmp(patient_db[i].surname, name)){
			printf("first name: %s\n", patient_db[i].first_name);
			printf("surname: %s\n", patient_db[i].surname);
			printf("age: %d\n", patient_db[i].age);
			printf("gender: %c\n", patient_db[i].gender);
			printf("weight: %d\n", patient_db[i].weight);
			printf("size: %d\n", patient_db[i].size);
			if(patient_db[i].gender == 'm'){
				printf("last lymphnode exam: %s\n", patient_db[i].last_lymphnode_exam);
			}
			if(patient_db[i].gender == 'w'){
			printf("pregnant: %d\n", patient_db[i].is_pregnant);
			printf("last breast exam: %s\n", patient_db[i].last_breast_exam);
			}
		}
	}
}



