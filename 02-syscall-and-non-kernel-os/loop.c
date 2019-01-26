/*
	新增編譯和執行步驟 :
	gcc hello.c -o hello
	./hello
===============================
# 此範例可以看到 :

gcc loop.c -o loop
===============================
# 螢幕輸出 :

cc@02-syscall-and-non-kernel-os$./loop &        ## 加上「&」會顯示出loop程式的「行程ID」
[1] 6492                                        ## loop程式的「行程ID」
cc@02-syscall-and-non-kernel-os$sar -P ALL 1
Linux 4.13.0-39-generic (cc-VirtualBox) 	廿十九年一月廿六日 	_x86_64_	(1 CPU)

                CPU     %user     %nice   %system   %iowait    %steal     %idle
                all    100.00      0.00      0.00      0.00      0.00      0.00
                  0    100.00      0.00      0.00      0.00      0.00      0.00     ## 可以看到 %user = 100%，loop程式是「使用者行程」
...
cc@02-syscall-and-non-kernel-os$kill 6492       ## 終止loop行程
===============================
# 參考資料 :

  圖解Linux核心工作原理：透過實作與圖解學習OS與硬體的基礎知識，武內覺
  https://github.com/walter-cc/linux-in-practice
*/
int main(void)
{
	for (;;)
		;
}
