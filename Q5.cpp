Method 1 (using temp)
int a = 5, b = 10, temp;
temp = a;
a = b;
b = temp;

Method 2 (using arithmetic)
a = a + b;
b = a - b;
a = a - b;
