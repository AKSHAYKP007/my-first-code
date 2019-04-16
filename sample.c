#include<stdio.h>
int main()
{
  int n, k,r_q,r_c,r,c,count=0;int obstacles[100000][2];
  scanf("%d %d", &n, &k);
  scanf("%d %d", &r_q, &r_c);
  for (int i = 0; i < k; i++) {
    for (int j = 0; j < 2; j++)
      scanf("%d", &obstacles[i][j]);
    }
    //towards left and right
    for(int i=r_c-1;i>=1;i--){
      for(int j=0;j<k;j++){
        if(obstacles[j][0]==r_q && obstacles[j][1]==i)
           goto step1;}
      count=count+1;
    }
    step1:
    for(int i=r_c+1;i<=n;i++){
      for (int j = 0; j < k; j++) {
        if (obstacles[j][0] == r_q && obstacles[j][1] == i)
          goto step2;}
e      count = count + 1;
    }
    step2:
    //upwards and downwards
    for(int i=r_q+1;i<=n;i++){
      for (int j = 0; j < k; j++) {
        if (obstacles[j][0] == i && obstacles[j][1] == r_c)
          goto step3;}
      count = count + 1;
    }
    step3:
    for(int i=r_q-1;i>=1;i--){
      for (int j = 0; j < k; j++) {
        if (obstacles[j][0] == r_q && obstacles[j][1] == i)
          goto step4;}
      count = count + 1;
    }step4:
    //along the diagonal
    r=r_q+1;c=r_c+1;
    while(r<=n&&c<=n){
      for (int j = 0; j < k; j++) {
        if (obstacles[j][0] == r && obstacles[j][1] == c)
          goto step5;}
      count = count + 1;
      r=r+1;c=c+1;
    }step5:
    r=r_q-1;c=r_c+1;
    while (r>=1 && c <= n) {
        for (int j = 0; j < k; j++) {
          if (obstacles[j][0] == r && obstacles[j][1] == c)
            goto step6;
        }
        count = count + 1;
        r = r - 1;
        c = c + 1;
      }
    step6:
    r=r_q+1;c=r_c-1;
    while (r<=n && c >= 1) {
        for (int j = 0; j < k; j++) {
          if (obstacles[j][0] == r && obstacles[j][1] == c)
            goto step7;
        }
        count = count + 1;
        r = r + 1;
        c = c - 1;
      }
    step7:
    r = r_q - 1;
    c = r_c - 1;
    while (r >= 1 && c >= 1) {
        for(int j=0;j<k;j++){
          if(obstacles[j][0]==r && obstacles[j][1]==c)
            break; }
        count=count+1;
        r= r- 1;
        c= c - 1;
    }
    printf("%d",count);
return 0;        
}
he
