/*
	新增編譯和執行步驟 :
	gcc hello.c -o hello
	./hello
===============================
# 此範例可以看到 :

gcc hello.c -o hello

===============================
# 螢幕輸出 :

1) strace -o hello.log ./hello         ## "strace" 可以看到這個程式所發出的"system call"是什麼
cat hello.log
...
write(1, "hello world\n", 12)           = 12        ## 這是藉由將資料輸出至畫面或檔案的「write()」system call，來將「hello world\n」這個字串輸出至畫面的。
...

2) strace -T -o hello.log ./hello       ## -T 可顯示出system call花了多少時間，以10^-6秒顯示
cat hello.log
...
write(1, "hello world\n", 12)           = 12 <0.000021>     ## 處理「hello world\n」這個字串花了0.000021秒。
...
===============================
# 參考資料 :

  圖解Linux核心工作原理：透過實作與圖解學習OS與硬體的基礎知識，武內覺
  https://github.com/walter-cc/linux-in-practice
*/
#include <stdio.h>

int main(void)
{
	puts("hello world");
	return 0;
}
