#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1;
#define false 0;

typedef int bool;

typedef unsigned long long Offset;
typedef struct field_st {
    char *field;
} Field;

typedef struct page_st *Page_Pointer;
typedef struct page_st {
    int pk;
    bool is_leaf;
    Offset head;
    Page_Pointer **sons;
    Field *fields;
} Page;

void leafSerializeAndInsert(Page *page) {

    Offset metadata[3];
    Offset oler[3];

    FILE* db = NULL;
    db = fopen("db.txt","wb");

    metadata[0] = (Offset)page->pk;
    metadata[1] = (Offset)page->is_leaf;
    metadata[2] = page->head;
    if(db != NULL){
        fwrite(&(metadata[0]), sizeof(Offset), 3, db);
        fflush(db);
    }
    FILE* read = NULL;
    read  = fopen("db.txt", "rb");

    fread(&(oler[0]), sizeof(Offset), 3, read) ;
}

void insertOnTree(Page *page){

    leafSerializeAndInsert(page);


}

void add(int fields_number){

    int i;
    char *field;

    Page *new_page;
    new_page = (Page *) malloc(sizeof(Page));
    new_page->fields = (Field *) malloc(sizeof(Field));
    new_page->head = NULL;
    new_page->is_leaf = true;
    new_page->sons = NULL;
    new_page->pk = atoi(strtok(NULL, "\t"));

    for(i = 0; i < fields_number-1; i++){
        field = strtok(NULL, "\t");
        new_page->fields[i].field = (char *) malloc(sizeof(31));
        stpcpy(new_page->fields[i].field, field);
        insertOnTree(new_page);
    }
}

int main(int argc, char *argv[]) {

    FILE* db = NULL, *in = NULL, *out = NULL;
    int tree_order, fields_number, field_id;

    char *command;
    char str[256];
    char *token;

    Page* root;

    out = fopen(argv[1],"w");
    in = fopen(argv[2],"r");

    tree_order = atoi(argv[3]);
    fields_number = atoi(argv[4]);
    field_id = atoi(argv[5]);

    while(fgets(str, sizeof (str), in)){
        command = strtok(str, "\t");
        while(command != NULL){

            if(!strcmp(command,"add")) add(fields_number;

            command = strtok(NULL, "\t");
        }
    }
}
/*
 *
 *   FIND METHOD FROM ZIVIO NIVIANI BOOK
 *
void find(Adress* a, Page_Pointer* Ap){
    int i;
    Page_Pointer Pag;
    Pag = *Ap;
    if (!(*Ap)->leaf){
        i = 1;
        while(i < Pag->pk && a->offset > Pag->u.node.ri[i-1]) i++;
        if(a->offset < Pag->u.node.ri[i-1]) find(a, &Pag->u.node.pi[i-1]);
        else find(a, &Pag->u.node.pi[i]);
        return;
    }
    i = 1;
    while ( i < Pag->pk && a->offset > Pag->u.leaf.re[i-1].offset) i++;
    if (a->offset == Pag->u.leaf.re[i-1].offset) *a = Pag->u.leaf.re[i-1];
    else printf ("TipoRegistro nao esta presente na arvore\n");
}*/