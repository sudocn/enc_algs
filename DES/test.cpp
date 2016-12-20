#include <stdio.h>
#include "DES.h"

int main()
{
    DES des;
    int i = 0;
    unsigned char szEnc[256]= {0x5e, 0x4f, 0xde, 0xa4, 0x0e, 0x1b, 0x04, 0x36};

    BYTE szOut[8] = {0};
    BYTE szSn2[8] = {0};

    unsigned char key[9] = "paychase";

    des.CDesEnter(szEnc, szOut, 8, key, 1);
    printf("%s\n", szOut);
    /*
    unsigned char szKey1[9]="emnehsab";
    unsigned char szKey2[9]="cABlEwIR";
    des.CDesEnter(szName, szSn1, 8, szKey1, 0);
    des.CDesEnter(szName, szSn2, 8, szKey2, 0);

        printf("注册码:\n");
        for (i=0; i < sizeof(szSn1); i++)
        {
                printf("%02X",szSn1[i]);
        }
        for (i=0; i < sizeof(szSn2); i++)
        {
                printf("%02X",szSn2[i]);
        }
        printf("\n");
    */
}
