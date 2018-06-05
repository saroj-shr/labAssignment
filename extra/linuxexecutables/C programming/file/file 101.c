#include<stdio.h>
#include<stdlib.h>

struct info{
    int bookID;
    char bookName[30];
};

void main(){
    static int n, i;
    FILE *fp;

    scanf("%d", &n);

    struct info *list = (struct info*) calloc(sizeof(struct info), n);

    if(list == NULL){
        printf("MEMMORY LEAK!!");
        exit(1);
    }

    if(( fp = fopen("books.txt","w+")) == NULL){
        printf("file problem");
        exit(1);
    }

    //reading input
    printf("Enter bookId and bookName\n");
    for(i =0;i<n ;i++){
        scanf("%d %s", &list[i].bookID, list[i].bookName);
    }

    //writing to file
    for(i = 0; i < n; i++){
        fprintf(fp, "%d %s\n", list[i].bookID, list[i].bookName);
    }

    //reading from the file
    rewind(fp);
    struct info read;

    while(!feof(fp)){
        fscanf(fp, "%d %s", &read.bookID, read.bookName );
        if(read.bookID == 1){
            printf("\n%d %s\n", read.bookID, read.bookName);
        }
    }

    free(list);
    fclose(fp);
}