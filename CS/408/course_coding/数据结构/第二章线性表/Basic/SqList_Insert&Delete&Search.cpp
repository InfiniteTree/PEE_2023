#define MaxSize 10
typedef struct{
    int data[MaxSize];
    int length;
}SqList;

bool ListInsert(SqList &L, int i, int e){
    if(i<1||i>L.length+1)
        return false;
    else if(L.length>Maxsize)
        return false;
    for(int j=L.length; j>=i; j--){
        L.data[j] = L.data[j-1];
    }
    L.data[i-1]=e;
    L.length++;
    return true;
}


bool ListDelete(SqList &L, int i, Elemtype &e){
    if(i<1||i>L.length){
        return false;
    }
    e = L.data[i-1];
    for(int j=i; i<L.length; j++){
        L.data[j-1] = L.data[j];
    }
    L.length--;
    return true;
}

int LocateElem(SqList L, ElemType e){
    int i;
    for(i=0; i<L.length; i++){
        if(L.data[i]==e){
            return i+1;
        }
    }
    return 0;
}