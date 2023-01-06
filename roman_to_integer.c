int intValue(char roman) {
    switch (roman) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: exit(1);
    }
}

int romanToInt(char * s){
    int res = 0, i;
    for (i = 0; s[i + 1]; i++) {
        int t = intValue(s[i]);
        if (t < intValue(s[i+1])) res -= t;
        else res += t;
    }
    res += intValue(s[i]);
    return res;
}
