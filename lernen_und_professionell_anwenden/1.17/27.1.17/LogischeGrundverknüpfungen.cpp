/*
Wertetabellen für die logischen Grundverknüpfungen
GM16 27.1.2017 Ko.

Es sind noch ein paar "ToDo's" zu erledigen!
*/
#include<stdio.h>
//#include<conio.h>
#include<ctype.h>  //  für tolower

int main(){
	int i1, i2, i4, i8;  // ...bis zu vier Operanden: die Zahl ist der "Stellenwert" in einer Dualzahl
	int erg;   // das Ergebnis der Verknüpfung
  char auswahl;
	do{
		do{
			printf("-< LOGISCHE GRUNDVERKNÜPFUNGEN >-\n");
			//Menü
			printf("<U>nd\n<O>der\n<N>icht\n<A>equivalenz\n<0>Ende\n\n");
			fflush(stdin);
			scanf("%c", &auswahl);
			auswahl = tolower(auswahl);  // auf jeden Fall ein Kleinbuchstabe
			/// ToDo: Fehlermeldung ausgeben!!
      if(auswahl!='0'&&auswahl!='u'&&auswahl!='o'&&auswahl!='n'&&auswahl!='a'){
        printf("Falsche Eingabe!!\n");
        auswahl = 'e';        
      }
      printf("%c\n", auswahl);
		}while(auswahl='e');

		// ToDo: Wenn man weiss, wie z.B. "oder" mit zwei Eingängen geht (siehe unten), dann
		//HIER "NICHT" implementieren!! (wieviele Eingänge??)

		if(auswahl=='o'){  //ODER  mit zwei Operadanden
			printf("\n_________ODER_________\n\nE2\tE1\t| ODER\n----------------------\n");  // Tabellenüberschrift
			for(i2=0; i2 <2; i2++){
				for(i1=0; i1 <2; i1++){
					printf("%d\t%d\t| %d\n", i2, i1, i2||i1);  // ODER
				}
			}
			printf("\n\n");
		}
		if(auswahl=='u'){  //UND  mit drei Operadanden
			printf("\n_________UND_________\n\nE3\tE2\tE1\t| UND\n---------------------\n");  // Tabellenüberschrift
			for(i4=0; i4 <2; i4++){
				for(i2=0; i2 <2; i2++){
					for(i1=0; i1 <2; i1++){
						printf("%d\t%d\t%d\t| %d\n", i4, i2, i1, i4&&i2&&i1);  // ODER
					}
				}
			}
			printf("\n\n");
		}
		if(auswahl=='a'){  //Äquivalenz  mit drei Operadanden
			printf("\n_________Äquivalenz_________\n\nE3\tE2\tE1\t| Äquivalenz\n---------------------\n");  // Tabellenüberschrift
			for(i4=0; i4 <2; i4++){
				for(i2=0; i2 <2; i2++){
					for(i1=0; i1 <2; i1++){
						erg = (i4==i2) && (i2==i1);
						printf("%d\t%d\t%d\t| %d\n", i4, i2, i1, erg);  // ODER
						/// ToDo: Ausprobieren, ohne Verwendung von erg
					}
				}
			}
			printf("\n\n");
		}

		/*
		ToDo:  Exklusiv-oder mit drei Eingängen
		1) Wertetabelle hier hinschreiben
		2) GESCHICKT programmieren: kann man die aufwendige Auswahl der drei Fälle auch sehr einfach formulieren??
		(Beachte: das ist nicht das Gegenteil von Äquivalenz!!!)
		*/

		/*
		ZUSATZAUFGABE
		und, oder usw für jeweils zwei, drei, vier Eingänge implementieren
		*/
	}while(auswahl!='0');
	
}
