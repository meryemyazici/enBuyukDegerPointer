#include <stdio.h>
#include <stdlib.h>

int main()
{
    int toplamEleman,*ptr;
    printf("toplam deger girceksiniz: ");
    scanf("%d\n",&toplamEleman);

    ptr=(int*)calloc(toplamEleman,sizeof(int));
    int i;
    for(i=0;i<toplamEleman;i++)
        {
        scanf("%d",(ptr+i));

        if(*(ptr+0)<*(ptr+i))
            {
                *(ptr+0)=*(ptr+i);
            }
        }
    printf("en buyuk deger: %d",*(ptr+0));

    return 0;
}

