// //uy ishi 1
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// void Random(int *arr, size_t arr_size, int min, int max) {
//     srand(time(0)); 
//     for (size_t i = 0; i < arr_size; i++) {
//         int rand_int = min + rand() % (max - min + 1);
//         arr[i] = rand_int;
//     }
// }
// void faylgaYoz(const char *faylNomi, int *arr, size_t arr_size, int musbat) {
//     FILE *fayl = fopen(faylNomi, "w");
//     for (size_t i = 0; i < arr_size; i++) {
//         if ((musbat && arr[i] > 0) || (!musbat && arr[i] < 0)) {
//             fprintf(fayl, "%d\n", arr[i]);
//         }
//     }
//     fclose(fayl);
// }
// int main(void) {
//     int n = 10; 
//     int a[n];
//     Random(a, n, -50, 51);
//     printf("Arraydagi qiymatlar:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");
//     faylgaYoz("musbat.txt", a, n, 1);
//     faylgaYoz("manfiy.txt", a, n, 0);

//     return 0;
// }
// //uy ishi 3
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     FILE *bo1 = fopen("muhammad.txt", "w");
//     if (bo1 == NULL) {
//         printf("Faylni ochishda xatolik yuz berdi!\n");
//         return 1;
//     }
//     char input[100];
//     printf("Matn kiriting: ");
//     fgets(input, sizeof(input), stdin); 
//     fprintf(bo1, "%s", input); 
//     fclose(bo1);
//     bo1 = fopen("muhammad.txt", "r");
//     char word[100];
//     if (fscanf(bo1, "%s", word) != EOF) {
//         printf("%s %s\n", word, word);
//     } else {
//     }
//     fclose(bo1);

//     return 0;
// }
// //uy ishi 4 
// #include <stdlib.h>
// #include <string.h>
// #define MAX_WORD_LENGTH 100
// int main() {
//     FILE *bo1 = fopen("muhammad.txt", "w");
//     if (bo1 == NULL) {
//         printf("Faylni ochishda xatolik yuz berdi!\n");
//         return 1;
//     }
//     char input[100];
//     printf("Matn kiriting: ");
//     fgets(input, sizeof(input), stdin); 
//     fprintf(bo1, "%s", input); 
//     fclose(bo1);
//     bo1 = fopen("muhammad.txt", "r");
//     if (bo1 == NULL) {
//         printf("Faylni ochishda xatolik yuz berdi!\n");
//         return 1;
//     }
//     char word[MAX_WORD_LENGTH];
//     char lastWord[MAX_WORD_LENGTH];
//     lastWord[0] = '\0'; 
//     while (fscanf(bo1, "%s", word) != EOF) {
//         strncpy(lastWord, word, MAX_WORD_LENGTH);
//     }
//     fclose(bo1);
//     if (lastWord[0] != '\0') { 
//         printf("%s %s\n", lastWord, lastWord);
//     } else {
//         printf("Faylda hech qanday so'z topilmadi.\n");
//     }

//     return 0;
// }
// //uy ishi 5
// #include <stdio.h>
// #include <stdlib.h>

// #define MAX_WORD_LENGTH 100
// int main() {
//     FILE *file = fopen("muhammad.txt", "w");
//     if (file == NULL) {
//         perror("Faylni ochishda xatolik");
//         return 0 ;
//     }

//     char input[100];
//     printf("Matn kiriting: ");
//     fgets(input, sizeof(input), stdin); 
//     fputs(input, file);
//     fclose(file);
//     file = fopen("muhammad.txt", "r");
//     if (file == NULL) {
//         perror("Faylni ochishda xatolik");
//         return 0;
//     }
//     char soz[MAX_WORD_LENGTH];
//     char ikkinchi_chisoz[MAX_WORD_LENGTH] = ""; 

//     int soz1 = 0;
//     while (fscanf(file, "%s", soz) == 1) {
//         soz1++;
//         if (soz1 == 2) {
//             snprintf(ikkinchi_chisoz, MAX_WORD_LENGTH, "%s", soz); 
//         }
//     }
//     fclose(file);
//     if (ikkinchi_chisoz[0] != '\0') {
//         printf("%s %s\n", ikkinchi_chisoz, ikkinchi_chisoz);
//     } else {
//         printf("Faylda 2-chi so'z topilmadi.\n");
//     }

//     return 0;
// // }
// //uy ishi 6
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {
//   FILE *fp = fopen("kords.txt", "w"); 

//   if (fp == NULL) {
//     printf("Error opening file.\n");
//     return 1;
//   }

//   fprintf(fp, "Salom Foundation33 bolalari. Qaley ishlar"); 
//   fclose(fp); 

//   fp = fopen("kords.txt", "r");

//   if (fp == NULL) {
//     printf("Error opening file.\n");
//     return 1;
//   }

//   char word[100];
//   char secondToLastWord[100]; 
//   char lastWord[100]; 

  
//   while (fscanf(fp, "%s", word) != EOF) {
//     strcpy(secondToLastWord, lastWord);
//     strcpy(lastWord, word); 
//   }

//   fclose(fp);

//   printf("%s\n", secondToLastWord); 
//   printf("%s\n", secondToLastWord);

//   return 0;
// }
// //sinf ishi 1 
// #include <stdio.h>
// #include<stdlib.h>

// typedef struct {
//     char name[52];
//     char position[52];
//     float salary; 
// } employee;

// employee* writeToFile(const char* filename){
//     FILE *file = fopen(filename, "wb");
//     employee* emp;

//     emp = (employee* ) malloc(sizeof(employee));

//     printf("Enter Name: ");
//     scanf("%s", emp->name);

//     printf("Enter positon: ");
//     scanf("%s", emp->position);

//     printf("Enter salary: ");
//     scanf("%f", &emp->salary);

//     int count = fwrite(emp, sizeof(employee), 1, file);
//     if (count == 0){
//         printf("Failed to write");
//         return NULL;
//     }

//     fclose(file);

//     return emp;
// }

// employee readFromFile(const char* filename){
//     FILE *file = fopen(filename, "rb");
//     employee emp;

//     int count = fread(&emp, sizeof(employee), 1, file);
//     if (count == 0){
//         printf("Failed to write");
//         return emp;
//     }

//     return emp;
// }
// int main(){
//     const char *filename = "salary.dat";
    
//     writeToFile(filename);

//     employee emp =  readFromFile(filename);

//     printf("Name: %s\n", emp.name);
//     printf("Positon: %s\n", emp.position);
//     printf("Salary: %.2f", emp.salary);
//     return 0;
// }
// //uyg ishi 7 
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     FILE *fayl= fopen("7-masla.txt", "w"); 
//     if (fayl == NULL) {
//         printf("Faylni ochishda xatolik yuz berdi.\n");
//         return 1;
//     }
//     for (int i = 1; i <= 10; i++) {
//         fprintf(fayl, "%d ", i);
//     }
//     fclose(fayl); 
//     fayl = fopen("7-masala.txt", "r"); 
//     if (fayl == NULL) {
//         printf("Faylni ochishda xatolik yuz berdi.\n");
//         return 1;
//     }
//     int n1[10]; 
//     int en[10]; 
//     int ec = 0;
//     for (int i = 0; i < 10; i++) {
//         fscanf(fayl, "%d", &n1[i]);
//         if (n1[i] % 2 == 0) {
//             en[ec] = n1[i];
//             ec++;
//         }
//     }
//     fclose(fayl); 
//     for (int i = ec - 1; i >= 0; i--) {
//         printf("%d ", en[i]);
//     }

//     return 0;
// }
// //sinf ishi 2 
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct {
//     char name[50];
//     char group[20];
//     float grade;
// } Student;

// int main() {
//     FILE *file;
//     Student students[2];

//     for (int i = 0; i < 2; i++) {
//         printf("Talaba #%d ismini kiriting: ", i + 1);
//         fgets(students[i].name, sizeof(students[i].name), stdin);
//         students[i].name[strcspn(students[i].name, "\n")] = 0;

//         printf("Talaba #%d guruhini kiriting: ", i + 1);
//         fgets(students[i].group, sizeof(students[i].group), stdin);
//         students[i].group[strcspn(students[i].group, "\n")] = 0;

//         printf("Talaba #%d bahosini kiriting: ", i + 1);
//         scanf("%f", &students[i].grade);
//         getchar();
//     }

//     file = fopen("students.dat", "wb");
//     if (file == NULL) {
//         perror("Faylni ochishda xatolik");
//         return 1;
//     }

//     fwrite(students, sizeof(Student), 2, file);
//     fclose(file);
//     printf("Talabalar ma'lumotlari faylga yozildi.\n");
//     return 0;
// }
// //uy ishi 8 
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     FILE *fayl = fopen("8-masala.txt", "w"); 
//     for (int i = 1; i <= 10; i++) {
//         fprintf(fayl, "%d ", i);
//     }
//     fclose(fayl);
//     fayl = fopen("8-mashq.txt", "r");
//     int n1[10];
//     int toq[10];
//     int tc = 0;
//     for (int i = 0; i < 10; i++) {
//         fscanf(fayl, "%d", &n1[i]);
//         if (n1[i] % 2 != 0) {
//             toq[tc] = n1[i];
//             tc++;
//         }
//     }
//     fclose(fayl);
//     for (int i = tc - 1; i >= 0; i--) {
//         printf("%d ", toq[i]);
//     }
//     return 0;
// } 
//uy ishi 9 
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//    FILE *bo1 = fopen("9-mashq.txt", "w");
//    fprintf(bo1, "9 6 2 1 4 7 ");
//    fclose(bo1);
//    fp = fopen("9-mashq.txt", "r");
//    int n;
//    int s = 0;
//    while (fscanf(bo1, "%d", &n) != EOF) {
//        s += n;
//    }
//    fclose(bo1);
//    printf("%d\n", s);
//    return 0;
//}
//uy ishi 11
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_WORD_LENGTH 100
//int main() {
//    FILE *file = fopen("text-file.txt", "w");
//    if (file == NULL) {
//        perror("Error opening file for writing");
//        return 0;
//    }
//    fprintf(file, "hello world. How are you.\n");
//    fclose(file);
//    file = fopen("text-file.txt", "r");
//    if (file == NULL) {
//        perror("Error opening file for reading");
//        return 1;
//    }
//
//    char word[MAX_WORD_LENGTH];
//    while (fscanf(file, "%s", word) != EOF) {
//        int len = strlen(word);
//        while (len > 0 && (word[len - 1] == '.' || word[len - 1] == ',' || word[len - 1] == '!' || word[len - 1] == '?' || word[len - 1] == ';' || word[len - 1] == ':')) {
//            word[len - 1] = '\0';
//            len--;
//        }
//
//        if (len == 3) {
//            printf("%s\n", word);
//        }
//    }
//    fclose(file);
//    return 0;
//}
////uy ishi 10
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//
//#define MAX_WORD_LENGTH 100
//
//int main() {
//    FILE *file = fopen("text-file.txt", "w");
//    if (file == NULL) {
//        perror("Error opening file for writing");
//        return 1;
//    }
//    fprintf(file, "Hello world. How are you.\n");
//    fclose(file);
//    file = fopen("text-file.txt", "r");
//    if (file == NULL) {
//        perror("Error opening file for reading");
//        return 0;
//    }
//    char word[MAX_WORD_LENGTH];
//    while (fscanf(file, "%s", word) != EOF) {
//        int len = strlen(word);
//        while (len > 0 && (word[len - 1] == '.' || word[len - 1] == ',' || word[len - 1] == '!' || word[len - 1] == '?' || word[len - 1] == ';' || word[len - 1] == ':')) {
//            word[len - 1] = '\0';
//            len--;
//        }
//        if (len > 0 && isupper(word[0])) {
//            printf("%s\n", word);
//        }
//    }
//    fclose(file);
//    return 0;
//}
////uy ishi 12
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//#define MAX_WORD_LENGTH 100
//int main() {
//    FILE *file = fopen("text-file.txt", "w");
//    if (file == NULL) {
//        perror("Error opening file for writing");
//        return 1;
//    }
//    fprintf(file, "Hello world . How are \n");
//    fclose(file);
//    file = fopen("text-file.txt", "r");
//    if (file == NULL) {
//        perror("Error opening file for reading");
//        return 1;
//    }
//    char word[MAX_WORD_LENGTH];
//    while (fscanf(file, "%s", word) != EOF) {
//        int len = strlen(word);
//        if (len >= 4) {
//            printf("%s\n", word);
//        }
//    }
//
//    fclose(file);
//    return 0;
//}
////uy ishi 13
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//
//#define MAX_WORD_LENGTH 100
//
//int main() {
//    FILE *file = fopen("text-file.txt", "w");
//    if (file == NULL) {
//        perror("Error opening file for writing");
//        return 1;
//    }
//    fprintf(file, "Hellou worldf. How are you.\n");
//    fclose(file);
//    file = fopen("text-file.txt", "r");
//    char word[MAX_WORD_LENGTH];
//    while (fscanf(file, "%s", word) != EOF) {
//        int len = strlen(word);
//        if (len <= 5) {
//            printf("%s\n", word);
//        }
//    }
//    fclose(file);
//    return 0;
//}
//uy ishi 6
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp = fopen("6m.txt", "w");

    if (fp == NULL) {
        printf("Faylni ochishda xatolik bor.\n");
        return 1;
    }

    fprintf(fp, "Salom Foundation33 bolalari. Qaley ishlar");
    fclose(fp);

    fp = fopen("6-masala.txt", "r");
    char soz[100];
    char oxirdan_2_chi[100];
    char oxirgi_soz[100];
    while (fscanf(fp, "%s", soz) != EOF) {
        strcpy(oxirdan_2_chi, oxirgi_soz);
        strcpy(oxirgi_soz, soz);
    }

    fclose(fp);

    printf("%s\n", oxirdan_2_chi);
    printf("%s\n", oxirdan_2_chi);

    return 0;
}
