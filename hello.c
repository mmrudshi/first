// Online C compiler to run C program online
#include <stdio.h>
//declaration/prototype
void namaste();
void bonjour();
int main() {
    printf("enter f for french & i for indian:");
    char ch;
    scanf ("%c", &ch);

    if (ch=='i') { namaste ();
    }
    else { bonjour();
    }
return 0;
}

void namaste (){
    printf("namaste\n");
}
void bonjour() {
    printf("bonjour\n");
}