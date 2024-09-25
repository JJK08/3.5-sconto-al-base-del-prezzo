#include<stdio.h>

int main() {
    int numero_prodotto;
    float prezzo_unitario;
    float importo_totale;
    float sconto;
    float importo_finale;
    printf("inserisci il numero del prodotto: ");
    scanf("%d",&numero_prodotto);
    printf("inserisci il prezzo unitario: ");
    scanf("%f",&prezzo_unitario);
    importo_totale=numero_prodotto*prezzo_unitario;
    if(importo_totale>50) {
        sconto=importo_totale*0.20;
    }else if (importo_totale>10) {
        sconto = importo_totale * 0.10;
    } else {
        sconto = 0;
    }
    importo_finale=importo_totale-sconto;
    printf("importo totale non scontato:%.2f\n",importo_totale);
    printf("sconto applicato:%.2f\n",sconto);
    printf("importo totale dopo sconto:%.2f\n",importo_finale);
    return 0;
}