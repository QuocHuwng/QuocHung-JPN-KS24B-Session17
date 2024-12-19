#include <stdio.h>

int main() {
	int luaChon;
	char chuoi[100];

	do {
		printf("1.Nhap vao chuoi :\n");
		printf("2.In ra chuoi dao nguoc :\n");
		printf("3.Dem so luong tu trong chuoi :\n");
		printf("4.Nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau :\n");
		printf("5.In hoa tat ca chu cai trong chuoi :\n");
		printf("6.Thoat \n");
		printf("Lua chon cua ban : ");
		scanf("%d", &luaChon);
		
		switch (luaChon) {
			case 1: {
				printf("Nhap vao chuoi: ");
				gets (chuoi);
				fgets(chuoi, 100, stdin);
				printf("Chuoi ban da nhap la: %s\n", chuoi);
				break;
			}
			case 2: {
				int length = strlen(chuoi);
				printf("Chuoi dao nguoc la: ");
				for (int i = length - 1; i >= 0; i--) {
					printf("%c", chuoi[i]);
				}
				printf("\n");
				break;
			}
			case 3: {
				int count = 0;
                int inWord = 0;  // Bi?n ki?m tra có ph?i ðang trong m?t t?
                for (int i = 0; chuoi[i] != '\0'; i++) {
                    if (chuoi[i] == ' ' || chuoi[i] == '\n' || chuoi[i] == '\t') {
                        if (inWord) {
                            count++;
                            inWord = 0;
                        }
                    } else {
                        inWord = 1;
                    }
                }
                if (inWord) count++;  // Ð?m t? cu?i cùng n?u không có d?u cách phía sau
                printf("So luong tu trong chuoi: %d\n", count);
                break;
            }
            case 4: {
                char chuoiKhac[100];
                printf("Nhap vao chuoi khac: ");
                gets(chuoi); 
                fgets(chuoiKhac, 100, stdin);
                chuoiKhac[strcspn(chuoiKhac, "\n")] = 0;  // Lo?i b? k? t? newline
                
                if (strcmp(chuoi, chuoiKhac) == 0) {
                    printf("Hai chuoi giong nhau.\n");
                } else {
                    printf("Hai chuoi khong giong nhau.\n");
                }
                break;
			}
			case 5: {
				printf("Chuoi in hoa tat ca chu cai la: ");
				for (int i = 0; chuoi[i] != '\0'; i++) {
					printf("%c", toupper(chuoi[i]));
				}
				printf("\n");
				break;
			} 
		}

	} while (luaChon != 6);
	return 0;
}
