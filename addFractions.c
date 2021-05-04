#include <stdio.h>

int findLCD(int Num1, int Num2) {
    int LCM, Temp, GCD;

    int a = Num1;
    int b = Num2;
    
    while (Num2 != 0) {
     	Temp = Num2;
     	Num2 = Num1 % Num2;
     	Num1 = Temp;
    }
    GCD = Num1;
    return (a * b) / GCD;
}

void addFraction (int *Anum, int *Aden, int Bnum, int Bden) {
    int LCD, aMultiple, bMultiple;

    LCD = findLCD(*Aden, Bden);

    aMultiple = LCD / *Aden;
    bMultiple = LCD / Bden;

    *Anum *= aMultiple;
    Bnum *= bMultiple;
    
    *Anum += Bnum;
    *Aden = LCD;
}

int main () {
    int Anum = 1;
    int Aden = 5;
    
    int Bnum = 1;
    int Bden = 10;
    
    addFraction(&Anum, &Aden, Bnum, Bden);
    
    printf("%d %d", Anum, Aden);
    
}
