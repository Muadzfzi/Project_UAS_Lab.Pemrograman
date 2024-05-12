#include <stdio.h>
#include <string.h>

int login() {
    char username[50];
    char password[50];

    printf("Masukkan nama pengguna: ");
    scanf("%s", username);
    printf("Masukkan kata sandi: ");
    scanf("%s", password);

    if (strcmp(username, "pegawai") == 0 && strcmp(password, "pegawai123") == 0) {
        return 1;
    } else {
        printf("Nama pengguna atau kata sandi salah!\n");
        return 0;
    }
}
