#include <stdio.h>
#include <string.h>

#define MAX 50


int count_possible_friends(int n, char friends[MAX][MAX], int person) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (i != person && friends[person][i] == 'N') {
            for (int j = 0; j < n; j++) {
                if (friends[person][j] == 'Y' && friends[j][i] == 'Y') {
                    count++;
                    break;
                }
            }
        }
    }
    return count;
}

int main() {
    int T;
    char friends[MAX][MAX];


    printf("Enter the number of test cases: ");
    scanf("%d", &T);

    while (T--) {
        int n;


        printf("Enter the number of people: ");
        scanf("%d", &n);


        printf("Enter the friendship matrix (Y for friendship, N for no friendship):\n");
        for (int i = 0; i < n; i++) {
            scanf("%s", friends[i]);
        }

        int max_possible_friends = -1;
        int person_with_max_friends = -1;


        for (int i = 0; i < n; i++) {
            int possible_friends = count_possible_friends(n, friends, i);
            if (possible_friends > max_possible_friends ||
                (possible_friends == max_possible_friends && i < person_with_max_friends)) {
                max_possible_friends = possible_friends;
                person_with_max_friends = i;
            }
        }


        printf("Person with the most possible friends: %d\n", person_with_max_friends);
    }

    return 0;
}

