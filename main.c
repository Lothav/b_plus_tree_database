#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1;
#define false 0;

typedef int bool;

typedef unsigned long long Offset;
typedef struct field_st {
    char field[30];
} Field;

typedef struct page_st *Page_Pointer;
typedef struct page_st {
    int pk;
    bool is_leaf;
    Offset left;
    Offset right;
    Page_Pointer *sons[3223];
    Field *fields[123123];
} Page;


Page *getRoot(){

    Page *root = (Page *)malloc(sizeof(Page));

    root->is_leaf = false;
    //page->sons = NULL;
    //page->fields = NULL;
    root->left = 0;
    root->right = 0;
    return root;
}

int main(int argc, char *argv[]) {

    FILE* db = NULL, *in = NULL, *out = NULL;
    int tree_order, fields_number, field_id;
    int pk;

    char command[7];
    char str[256];

    Page* root;

    db = fopen("db.txt","w+");

    out = fopen(argv[1],"w");
    in = fopen(argv[2],"r");

    tree_order = (int)argv[3];
    fields_number = (int)argv[4];
    field_id = (int)argv[5];

    root  = getRoot();
    while(fgets(str, sizeof (str), in)){
        sscanf(str, " %s", command);
        if(!strcmp(command,"dump"));
        else{
            sscanf(str, "\t%d", &pk);
        }
        fflush(stdin);
    }


}
/*
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