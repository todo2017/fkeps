#linux开发中常用的一些工具

## lsof
* 列出了3306端口的进程 lsof -i:3306，包括了监听3306的进程以及连接到3306端口的进程
* 列出所有已删除但还有文件句柄未释放的进程 lsof | grep deleted，比如说程序提示磁盘空间不足，
  但在磁盘中检查文件，发现空间还有剩余，那么这个可能就派的上用场了
* 列出指定进程打开的文件列表: lsof -p 进程号


## tcpdump
* 抓取指定网卡的数据包并保存到文件中tcpdump -i eth0 -s0 -w a.pcap

## netstat
## sed
## awk
## ls
## ssh
## readelf
## ps
## top
