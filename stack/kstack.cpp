int i = freeTop;
arr[freeTop] = x;
freeTop = next[freeTop];
next[i] = top[st];
top = freeTop;

pop(){
    int i = top[st];
    top[sn] = next[top];
    next[i] = freeTop;
    freeTop = i;
    return arr[i];
}
