VIM
====================

1 K
----------------------

2 trouble shooting
----------------------



2.1 P1.粘贴内容到vim，每行行首自动添加缩进 :sub:`2016-11-04`
###################################################################


因为vim设置了autoindent,所以粘贴时会自动加缩进
可以在粘贴时关闭autoindent

- 在粘贴时设置为paste mode ``:set paste``
- 在.vimrc 中添加配置 ``set pastetoggle=<F2>``,用 ``<F2>`` 控制paste mode

参考： http://stackoverflow.com/questions/2514445/turning-off-auto-indent-when-pasting-text-into-vim


