ElemType *B = (ElemType *)malloc(n+1) *sizeof(ElemType));
void Merge(ElemType A[], int low, int mid, int high)
{
    for(int k=low; k<=high; k++){
        B[k] = A[k];
    }
    for(int i=low, j=mid+1, k=i; i<=mid && j<=high; k++){
        if(B[i]<=B[j]){
            A[k] = B[i++];
        }
        else{
            A[k] = B[j++];
        }
    }

    while(i<=mid) A[k++] = B[i++];
    while(j<=mid) A[k++] = B[j++];
}

void MergeSort(ElemType A[], int low, int high){
    if(low<high){
        int mid = (low+high)/2;
        MergeSort(A, low, mid);
        MergeSort(A, mid+1, high);
        Merge(A, low, mid, high);
    }
}