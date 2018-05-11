// Указатели на функции
void f(int a) { }
void g(int b) { }
 
void (*pf)(int) = &f;
pf(10); // Вызывается f(10)
 
pf = &g;
pf(20); // Вызывается g(20)