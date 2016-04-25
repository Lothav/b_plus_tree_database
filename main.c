#include <stdio.h>


int main(int argc, char *argv[]) {

    FILE* db = NULL, *in = NULL, *out = NULL;
    int tree_order, fields_number, field_id;

    db = fopen("db.txt","w+");

    out = fopen(argv[1],"w");
    in = fopen(argv[2],"r");

    tree_order = (int)argv[3];
    fields_number = (int)argv[4];
    field_id = (int)argv[5];



}