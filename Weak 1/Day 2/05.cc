/* 
leetcode : spiral print 54
left    right
top
 - - - -|
|
| 
| 
- - - - 
bottom 


top = 0 right 3 
left =0 bottom =3
while (top<= bottem && left<= right){
    for (left to right){
        print arr[top] [i]
        top ++;
    }
    for (righ to bottom){
    print arr[i] [right]
    right --;
    }
    if(top<=bottem){
    for (right to left){
        print(arr[bottom][i])
        bottom --;
    }
}
    if(left<= right){
        for (bottem to top){
            print(arr[i] [left]);
            left ++;
        }
    }
}

*/