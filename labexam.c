#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 50
int count_possible_friends(int n, bool friends[MAX][MAX], int person) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (i != person && !friends[person][i]) {
            for (int j = 0; j < n; j++) {
                if (friends[person][j] && friends[j][i]) {
                    count++;
                    break;
                }
            }
        }
    }
    return count;
}

int main() {
    int n;
    bool friends[MAX][MAX];


    printf("Enter the number of people: ");
    scanf("%d", &n);


    printf("Enter the friendship matrix (0 for no friendship, 1 for friendship):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", (int *)&friends[i][j]);
        }
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

    return 0;
}

