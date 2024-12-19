#include <stdio.h>


int main() {
	int luaChon;
	char chuoi[100];
 
	do {
		printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi va in ra\n");
        printf("4. Dem so luong chu so trong chuoi va in ra\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi va in ra\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luaChon);
        
        switch(luaChon) {
        	case 1: {
        		printf("Nhap vao chuoi: ");
        		gets(chuoi); 
				fgets(chuoi, 100, stdin) ;
				break;
			} 
			case 2: {
				printf("Chuoi ban vua nhap la: %s", chuoi);
				break;
			} 
			case 3: {
				int count = 0;
				int size = strlen(chuoi);
				for (int i = 0; i < size; i++) {
					if (isalpha(chuoi[i])) {
						count++;
					}
				}
				printf("So luong chu cai trong chuoi la: %d\n", count);
				break;
			}
			case 4: {
				int count = 0;
				int size = strlen(chuoi);
				for (int i = 0; i < size; i++) {
					if (isdigit(chuoi[i])) {
						count++; 
					} 
				}
				printf("So luong chu so trong chuoi la: %d\n", count);
				break;
			}
			case 5: {
				int count = 0;
				int size = strlen(chuoi);
				for (int i = 0; i < size; i++) {
					if (!(isalpha(chuoi[i]) || isdigit(chuoi[i]) || isspace(chuoi[i]))) {
						count++; 
					} 
				}
				printf("So luong ky tu dac biet trong chuoi la: %d\n", count);
				break;
			} 
        	
		} 
	} while (luaChon != 6); 
	return 0;
} 
