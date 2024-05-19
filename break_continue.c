/* Break; dan Continue; dalam C.

break; dan continue; adalah control flow statement yang selalu digunakan dalam loop
seperti for loop, while loop, do-while loop dan switch.

Fungsi Break; dan Continue; ?

Break; - menghentikan loop apabila bertemu dengan break; statement. Code selepas break; juga
tidak akan di-execute/dilaksanakan.

Continue - loop masih akan berlaku tapi code selepas "continue;" tidak akan dilaksanakan/diexecute.

mari kita lihat contoh dibawah.
*/


#include <stdio.h>
int main (){
	
	// contoh break; dalam for loop
	
	int nombor;
	
	for (nombor = 1; nombor <= 10; nombor++){
		
		printf("%d ", nombor); // kalau ikutkan normal coding, nombor akan dipaparkan sampai nombor 10 kerana syarat loop
		                       // adalah nombor <= 10. NAMUN,
		
		if(nombor == 5){  // disini diletakkan if (nombor == 5), break; statement akan berlaku dan menyebabkan loop akan dihentikan
		                  // dan code selepas break; tidak akan diexecute.
			break;
			             // ini menyebabkan output akan terhenti sehingga 1,2,3,4,5 sahaja.
		}
		
	}
	
	// contoh lain bagi break; dalam switch statement
	
    int number;
    
    printf("\nSwitch Statement dengan break; statement");
    printf("\nEnter 1-4 : ");
    scanf("%d", &number);
    
    switch (number){
    	case 1:
    		printf("Nombor satu\n");
    		break;                    // selepas sahaja printf dilaksanakan, break; akan digunakan supaya code dibawahnya tidak dilaksanakan.
    		                          
    	case 2:
    		printf("Nombor dua\n");
    		break;
    		
    	case 3:
    		printf("Nombor tiga\n");
    		break;
    		
    	case 4:
    		printf("Nombor empat\n");
    		break;
    	default:
    		printf("Wrong Number!\n");
	}
	
	// contoh jika break; tidak digunakan dalam switch :
	// (semua code dibawah case akan dilaksanakan)
	
	printf("\nSwitch Statement TANPA break; statement");
	printf("\nEnter 1-4 : ");
    scanf("%d", &number);
    
    switch (number){
    	case 1:
    		printf("Nombor satu\n");
    		                
    	case 2:
    		printf("Nombor dua\n");
    		
    	case 3:
    		printf("Nombor tiga\n");
    	
    	case 4:
    		printf("Nombor empat\n");
    	default:
    		printf("Wrong Number!\n");
	}
	
// baik, berikut adalah contoh continue; dalam coding
    int nombore;
    
    for(nombore = 1; nombore <= 10; nombore++){
    	
    	
    	if(nombore == 5){  //jika nombore == 5, continue statement akan membuatkan code selepasnya tidak dilaksanakan,
    	                   //menyebabkan apabila saja nombore == 5, printf tidak akan terlaksana. tetapi loop masih
    	                   //akan diteruskan.
    		continue;
		}
		printf("\n%d", nombore); // output adalah 1,2,3,4,6,7,8,9,10
		                         // nombor 5 tiada kerana continue; statement telah membuat code selepasnya tidak dilaksanakan.
    	
	}
	
// contoh lain continue:
// (akan mengeluarkan output nombor ganjil sahaja sehingga 100)

    int nomboru;
    
    printf("\nNombor ganjil : ");
    
    for(nomboru = 1; nomboru <= 100; nomboru++){
    	
    	if((nomboru % 2) == 0){  //jika nomboru dibahagi 2 dan memberikan baki 0(nombor genap), printf tidak akan dilaksanakan.
    		continue;            //continue; akan melangkau code selepas nya dan membuat loop kembali.
		}
    	printf("%d ", nomboru);
    	
	}
	
	return 0;
}
