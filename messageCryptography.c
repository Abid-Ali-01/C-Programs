#include <stdio.h>

void encryption(char msg[]){
    int i = 0;
    while (msg[i] != '\0') {  
        msg[i] += 5;
        i++;
}
 printf("Message Encrypted!\n");
 printf("%s", msg);
}

void decryption(char msg2[]){
    int j=0;
    while(msg2[j] != '\0'){
        msg2[j] -=5;
       j++;
}
printf("\nMessage Decrypted\n");
printf("%s",msg2);
}

int main() {
char mymsg[100];
printf("Enter Your Msg \n");
fgets(mymsg, sizeof(mymsg),stdin);

encryption(mymsg);
decryption(mymsg);
    return 0;
}
