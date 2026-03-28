int insertPos = 2;
int insertVal = 12

for(int i = n ; i >insertPos ; i --) {
arr[i] = arr[i-1];
}
arr[insertPos] = insertVal;
n++;
int delpos = 3;
for(int i = delpos ; i<n-1 ; i++){
arr[i]=arr[i-1];
}
n--;
