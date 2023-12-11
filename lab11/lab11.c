#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

typedef enum State {
    START,
    IN_POS_NUMBER,
    IN_NEG_NUMBER,
    IN_SPACE
} State;

typedef enum _kState
{
    STATE_IN_NUMBER,
    STATE_IN_LEADING_ZEROS,
} kState;

const char* addLeadingZeros(int num, int maxLength) {
    char* numStr = (char*)malloc((maxLength + 1) * sizeof(char));

    kState state = STATE_IN_NUMBER;

    for (int i = maxLength - 1; i >= 0; --i) {
        switch (state) {
        case STATE_IN_NUMBER:
            if (num > 0) {
                numStr[i] = '0' + num % 10;
                num /= 10;
            } else {
                numStr[i] = '0';
                state = STATE_IN_LEADING_ZEROS;
            }
            break;

        case STATE_IN_LEADING_ZEROS:
            numStr[i] = '0';
            break;
        }
    }

    numStr[maxLength] = '\0';

    return numStr;
}



int main() {
    enum State state = START;
    char currentChar;
    char buffer[100];
    int bufferIndex = 0;

    int whole_length;
    printf("введите общую длину числа: ");
    scanf("%d%*c",&whole_length);
    while ((currentChar = getchar()) != EOF) {
        switch (state) {
            case START:
                if (currentChar == '-') {
                    state = IN_NEG_NUMBER;
                }
                if (isdigit(currentChar)) {
                    buffer[bufferIndex++] = currentChar;
                    state = IN_POS_NUMBER;

                }
                break;

            case IN_POS_NUMBER:
                if (isdigit(currentChar)) {
                    buffer[bufferIndex++] = currentChar;
                } else if ((isspace(currentChar) || currentChar == '\n' || currentChar == '\t' || currentChar == ',')) {
                    buffer[bufferIndex] = '\0';
                    const char* buf = addLeadingZeros(atoi(buffer), whole_length);
                    if (buf[0] == '0') {
                        printf("%s\n", buf);
                    } else {
                        printf("\x1b[31m" "Invalid argument in addLeadingZeros function\n" "\x1b[0m");
                    }
                    bufferIndex = 0;
                    state = IN_SPACE;
                } else {
                    state = START;
                    bufferIndex = 0;
                }
                break;

            case IN_NEG_NUMBER:
                if (isdigit(currentChar)) {
                    buffer[bufferIndex++] = currentChar;
                } else if ((isspace(currentChar) || currentChar == '\n' || currentChar == '\t' || currentChar == ',')) {
                    buffer[bufferIndex] = '\0';
                    const char* buf1 = addLeadingZeros(atoi(buffer), whole_length);
                    char buf[whole_length + 1];
                    buf[0] = '-';
                    for (int i = 1; i < whole_length + 1; ++i) {
                        buf[i] = buf1[i - 1];
                    }
                    buf[whole_length + 1] = '\0';
                    if (buf[1] == '0') {
                        printf("%s\n", buf);
                    } else {
                        printf("\x1b[31m" "Invalid argument in addLeadingZeros function\n" "\x1b[0m");
                    }
                    bufferIndex = 0;
                    state = IN_SPACE;
                } else {
                    state = START;
                    bufferIndex = 0;
                }
                break;

            case IN_SPACE:
                if (currentChar == '-') {
                    state = IN_NEG_NUMBER;
                }
                else if (isdigit(currentChar)) {
                    state = IN_POS_NUMBER; 
                    buffer[bufferIndex++] = currentChar;
                } else if (!isspace(currentChar)) {
                    state = START;
                }
                break;
        }
    }
    return 0;
}
