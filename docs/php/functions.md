# php里面一些平常可能并不常用的函数

* extension_loaded
 判断一个扩展是否已加载，示例代码如下：
```
<?php
if (extension_loaded('Stomp')) {
    printf("Stomp has loaded\n");
} else {
    printf("Stomp has not loaded\n");
}
```
* array_replace
  可以用来替换数组中的内容
  参见http://php.net/manual/zh/function.array-replace.php
*
* ob_start、ob_get_contents、ob_end_clean
  可以用来简单的重定向标准输出，比如以下代码
```
$fileName = 'test.txt';
ob_start();
printf("Hello World.\n");
$content = ob_get_contents();
file_put_contents($content);
ob_end_clean();
```

