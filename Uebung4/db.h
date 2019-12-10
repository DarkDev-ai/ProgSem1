#ifndef DB_H_
#define DB_H_

typedef struct{
	char surname[32];
	char first_name[32];
	int age;
    char gender;
	int weight;
	int size;
	union{
		char last_lymphnode_exam[11];
		struct{
			char last_breast_exam[11];
			int is_pregnant;
		};
	};
}patient;

patient patient_db[100];

void init_db();

#endif
