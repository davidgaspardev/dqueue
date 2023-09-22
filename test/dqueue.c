#include <stdio.h>
#include <dqueue.h>

int main() {
    DQueue* dqueue = create_dqueue();

        int control, info;
    do {
        printf("Test menu\n");
        printf("[ 1 ] Add info\n");
        printf("[ 2 ] Exit\n");
        printf("Enter menu option: ");
        scanf("%d", &control);
        fflush(stdin);

        if (control == 1) {
            printf("Enter new info: ");
            scanf("%d", &info);
            fflush(stdin);

            enqueue(dqueue, info);
        }
    } while (control != 2);

    while(size(dqueue) > 0) {
        int info = dequeue(dqueue);
        printf("[ OK ] Dequeue this info: %d \n", info);
    }

    return 0;
}