/*
	新增編譯和執行步驟 :
	gcc hello.c -o hello
	./hello
===============================
# 此範例可以看到 :

gcc ppidloop.c -o ppidloop
===============================
# 螢幕輸出 :

cc@02-syscall-and-non-kernel-os$./ppidloop &
[3] 6534
cc@02-syscall-and-non-kernel-os$sar -P ALL 1 1
Linux 4.13.0-39-generic (cc-VirtualBox) 	廿十九年一月廿六日 	_x86_64_	(1 CPU)

                CPU     %user     %nice   %system   %iowait    %steal     %idle
                all     78.00      0.00     22.00      0.00      0.00      0.00
                  0     78.00      0.00     22.00      0.00      0.00      0.00     ## 以78%來處理ppidloop程式，核心處理是22%

Average:        CPU     %user     %nice   %system   %iowait    %steal     %idle
Average:        all     78.00      0.00     22.00      0.00      0.00      0.00
Average:          0     78.00      0.00     22.00      0.00      0.00      0.00

===============================
# 參考資料 :

  圖解Linux核心工作原理：透過實作與圖解學習OS與硬體的基礎知識，武內覺
  https://github.com/walter-cc/linux-in-practice
*/
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	for (;;)
		getppid();
}
