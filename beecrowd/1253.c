#include <stdio.h>
int main() {

    int t, d, i, nl;
    char l[50];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", l);
        scanf("%d", &d);
        for(i=0; i<50; i++) {
            if(l[i] == '\0') {
                break;
            } if(( l[i] - d ) < 65) {
                nl = l[i] - d + 26;
            } else {
                nl = l[i] - d;
            }
            printf("%c", nl);
        }
        printf("\n");
    } 

    return 0;
}