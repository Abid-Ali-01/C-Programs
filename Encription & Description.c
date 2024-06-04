#include <stdio.h>

void encription(char msg[]){
    int i = 0;
    while (msg[i] != '\0') {  
        msg[i] += 5;
        i++;
}
 printf("Message Encripted!\n");
 printf("%s", msg);
}

void decription(char msg2[]){
    int j=0;
    while(msg2[j] != '\0'){
        msg2[j] -=5;
       j++;
}
printf("\nMessage Decripted\n");
printf("%s",msg2);
}

int main() {
char mymsg[100];
printf("Enter Your Msg \n");
fgets(mymsg, sizeof(mymsg),stdin);

encription(mymsg);
decription(mymsg);
    return 0;
}