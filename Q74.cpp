
    int A[] = {1, 3, 5, 7};
    int B[] = {2, 4, 6, 8};
    int sizeA = 4;
    int = 4;
    int sizeC = sizeA + sizeB;
    int C[sizeC];
    int i = 0, j = 0, k = 0;

    while (i < sizeA && j < sizeB) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    while (i < sizeA) {
        C[k++] = A[i++];
    }

    while (j < sizeB) {
        C[k++] = B[j++];
    }

    printf("Merged sorted array C: ");
    for (i = 0; i < sizeC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

