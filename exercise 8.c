#include <stdio.h>

enum MessagesToElectorate
{
    MESSAGE_TO_ELECTORAT_X,
    MESSAGE_TO_ELECTORAT_Y,
    MESSAGE_TO_ELECTORAT_Z
};

struct MessageToElectorate
{
    enum MessagesToElectorate type;
    
    union
    {
    char message1[100];
    char message2[100];
    char message3[100];
    };
};

void partyX(struct MessageToElectorate message)
{
    if (message.type == 0 )
    printf("%s\n", message.message1);
    else if(message.type == 1)
    printf("Party y are all bad people\n");
    else
    printf("Party z hates puppies\n");
}

void partyY(struct MessageToElectorate message)
{
    if (message.type == 0)
    printf("Party X are thieves\n");
    else if (message.type == 1)
    printf("%s\n", message.message1);
    else
    printf("Party Z roots for the bad guys in superhero movies\n");
}

void partyZ (struct MessageToElectorate message)
{
    if (message.type == 0)
    printf("We hate party x and you should too\n");
    else if (message.type == 1)
    printf("We got cookies party y does not\n");
    else
    printf("%s\n", message.message1);
    
}
int main()
{
    struct MessageToElectorate message1 = {0, {"We in party X are amazing"}};
    struct MessageToElectorate message2 = {1, {"We in party Y are the best"}};
    struct MessageToElectorate message3 = {2, {"Party Z is the best party of all"}};

    partyX(message1);
    partyX(message2);
    partyX(message3);
    partyZ(message1);
    partyZ(message2);
    partyZ(message3);
    partyY(message1);
    partyY(message2);
    partyY(message3);

    return 0;
}
