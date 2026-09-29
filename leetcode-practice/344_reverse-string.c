void reverseString(char* s, int sSize) {
    char* result = malloc(sSize * sizeof(char));
    int sSizeCount = sSize - 1;
    for (int c = 0; c < sSize; c++) {
        result[c] = s[sSizeCount];
        sSizeCount --;
    }
    for (int c = 0; c < sSize; c++) {
        s[c] = result[c];
    }
    free(result);
}