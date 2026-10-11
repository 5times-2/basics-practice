/**
在C語言裡，["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"]不只是一個單純的 char array，而是一個包含許多 char array 的大陣列（每個子陣列的長度又不同，e.g. "4" 的長度是 1， "Buzz"的長度是4），因此會使用char **。

result[0] -> "1"
result[1] -> "2"
result[2] -> "Fizz"
result[3] -> "4"
result[4] -> "Buzz"


result
  |
  v
[ char* ][ char* ][ char* ][ char* ][ char* ]
    |        |        |        |        |
    v        v        v        v        v
   "1"      "2"     "Fizz"    "4"     "Buzz"
    |        |        |        |        |
   [1\0]    [2\0]   [F i z z \0] ...

而 result[2][0] 就是 'F'
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    char** result = malloc(n * sizeof(char*));
    for (int c = 0; c < n; c++){
        int num = c + 1;
        result[c] = malloc(9 * sizeof(char));
        if (num % 3 == 0 && num % 5 == 0){
            strcpy(result[c], "FizzBuzz");
        } else if (num % 3 == 0){
            strcpy(result[c], "Fizz");
        } else if (num % 5 == 0){
            strcpy(result[c], "Buzz");
        } else {
            sprintf(result[c], "%d", num);
        }
    }
    return result;
}