// операции над указателями
#include <stdio.h>
int main (void)
{
int urn[S] = (100,200,300,400,500);
int * ptrl, * ptr2, *ptr3;
ptrl = urn; // присваивание указателю адреса
ptr2 = &urn[2]; // то же самое
// разыменование указателя и получение
// адреса указателя
printf("значение указателя, разыменованный указатель, адрес указателя:\n"1;
printf("ptrl = %р, *ptrl = %d, &ptrl = %p\n",
ptrl, *ptrl, &ptrl);
// сложение указателей
ptr3 = ptrl + 4;
printf ( "^сложение значения int с указателем: \n") ;
printf("ptrl + 4 = %р, * (ptr4 +3) = %d\n",
ptrl +4, * (ptrl + 3) ) ;
ptrl++; // инкрементирование указателя
printf ( "Означения после выполнения операции ptrl + + : \п") ;
printf("ptrl = %р, *ptrl =%d, sptrl = %p\n",
ptrl, *ptrl, &ptrl) ;
ptr2--; // декрементирование указателя
printf( "Означения после выполнения операции --ptr2:\n");
printf("ptr2 = %р, *ptr2 = %d, &ptr2 = %p\n",
ptr2, *ptr2, &ptr2);
— ptrl; // восстановление исходного значения
++ptr2; // восстановление исходного значения
printf("\пвосстановление исходных значений указателей:\n");
printf("ptrl = %р, ptr2 = %p\n", ptrl, ptr2);
// вычитание одного указателя из другого
printf("уквычитание одного указателя из другого:\n");
printf("ptr2 = %р, ptrl = %р, ptr2 - ptrl = %td\n",
ptr2, ptrl, ptr2 - ptrl) ;
// вычитание целого значения из указателя
printf("уквычитание из указателя значения типа int:\n");
printf("ptr3 = %р, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);
return О;
}