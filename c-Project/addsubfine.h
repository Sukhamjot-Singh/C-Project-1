void addbook(books book[], int * nb, int bid, char* bname, char* bauthor, char* bgenre);
void delbookbyid(books book[], int *nb, int bid);
void fine(issuer irecord[], int ni);
date aftertwoweek(date idate);
int isleapyear(int y);
void addissuer(issuer irecord[], books book[], int * ni, int * nb, char * iname, char*iid, int bid, int d, int m, int y);
void addreturndate(issuer irecord[], books book[], char* iid, int *ni, int *nb, int d, int m, int y);
int validbid(books book[], int bid, int * nb);
int available(books book[], int bid, int * nb);
int ridpresent(issuer irecord[], char* iid, int * ni);
void lower(char * st);