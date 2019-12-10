
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "db.h"
#include "analysis.h"

void init_db(){
    patient patient1;
    strncpy(patient1.first_name,"Alan",30);
    strncpy(patient1.surname,"Turing",30);
    patient1.age = 100;
    patient1.gender = 'm';
    patient1.weight = 69;
    patient1.size = 185;
    strncpy(patient1.last_lymphnode_exam, "1.7.2018",20);
    
    patient patient2;
    strncpy(patient2.first_name,"Ronald",30);
    strncpy(patient2.surname,"Rivest",30);
    patient2.age = 70;
    patient2.gender = 'm';
    patient2.weight = 80;
    patient2.size = 180;
    strncpy(patient2.last_lymphnode_exam, "8.9.2010",20);

   patient patient3;
    strncpy(patient3.first_name,"Richard",30);
    strncpy(patient3.surname,"Stallman",30);
    patient3.age = 65;
    patient3.gender = 'm';
    patient3.weight = 100;
    patient3.size = 185;
    strncpy(patient3.last_lymphnode_exam, "",20);

    patient patient4;
    strncpy(patient4.first_name,"Marie",30);
    strncpy(patient4.surname,"Curie",30);
    patient4.age = 125;
    patient4.gender = 'f';
    patient4.weight = 70;
    patient4.size = 170;
    strncpy(patient4.last_breast_exam, "1.9.2003",20);
    
    patient patient5;
    strncpy(patient5.first_name,"Linus",30);
    strncpy(patient5.surname,"Torvalds",30);
    patient5.age = 60;
    patient5.gender = 'm';
    patient5.weight = 75;
    patient5.size = 175;
    strncpy(patient5.last_lymphnode_exam, "1.8.2019",20);

    
    patient_db[0] = patient1;
    patient_db[1] = patient2;
    patient_db[2] = patient3;
    patient_db[3] = patient4;
    patient_db[4] = patient5;
}
