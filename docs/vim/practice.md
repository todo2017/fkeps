# vim实践经验
1. 使用Vundle管理插件
   git clone https://github.com/VundleVim/Vundle.vim ~/.vim/bundle/Vundle.vim
  * 参考资料
  使用Vim插件管理器Vundle http://www.jianshu.com/p/8d416ac4ad11
  vim中的杀手级插件: vundle http://zuyunfei.com/2013/04/12/killer-plugin-of-vim-vundle/
  https://github.com/yangyangwithgnu/use_vim_as_ide
  https://gold.xitu.io/entry/5878222661ff4b0065e447af

2. 配置Vundle
   修改~/.vimrc内容
```
set nocompatible              " be iMproved, required
filetype off                  " required

" 启用vundle来管理vim插件
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
" 安装插件写在这之后

" let Vundle manage Vundle, required
Plugin 'VundleVim/Vundle.vim'

" 安装插件写在这之前
call vundle#end()            " required
filetype plugin on    " required

" 常用命令
" :PluginList       - 查看已经安装的插件
" :PluginInstall    - 安装插件
" :PluginUpdate     - 更新插件
" :PluginSearch     - 搜索插件，例如 :PluginSearch xml就能搜到xml相关的插件
" :PluginClean      - 删除插件，把安装插件对应行删除，然后执行这个命令即可

" h: vundle         - 获取帮助

" vundle的配置到此结束，下面是你自己的配置
```

3. 自动完成插件YouCompleteMe
   https://github.com/Valloric/YouCompleteMe
   git clone https://github.com/Valloric/YouCompleteMe.git /root/.vim/bundle/YouCompleteMe
   参考资料:
   http://howiefh.github.io/2015/05/22/vim-install-youcompleteme-plugin/

