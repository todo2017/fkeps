# libevent使用经验

* event_get_version函数
  获取libevent版本信息,memcached源码中的sanitycheck函数调用此方法来判断libevent的版本,
  返回的是一个字符串常量，比如"2.0.21-stable",当然也有返回unsigned int结果的方法event_get_version_number
  示例代码:
```
    const char *ever = event_get_version();
    printf("libevent version is:%s\n", ever);
```

