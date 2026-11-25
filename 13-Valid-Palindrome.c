bool isPalindrome(char* s) {
    int i = 0;
    int j = strlen(s) - 1;

    while (i < j) {
        if (!isalnum((unsigned char)s[i])) {
            i++;
        }
        else if (!isalnum((unsigned char)s[j])) {
            j--;
        }
        else {
            if (tolower((unsigned char)s[i]) !=
                tolower((unsigned char)s[j])) {
                return false;
            }

            i++;
            j--;
        }
    }

    return true;
}
