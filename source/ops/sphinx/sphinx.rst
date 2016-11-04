.. _top:

1. sphinx
===============
学习reStructuredText,使用sphinx写文档，尝试各个功能

- http://docutils.sourceforge.net/docs/ref/rst/restructuredtext.html
- http://www.sphinx-doc.org/en/1.4.8/contents.html

2. h1标题=============
==========================

#. h2标题- - - -
--------------------

#. h3标题#############
##########################

#. h4标题***************
***************************

#. h5标题^^^^^^^^^^^^
^^^^^^^^^^^^^^^^^^^^^^^^^
3. 列表
----------------
Lists can be unnumbered like:

 * 上班
 * 下班
 * 睡觉

Or automatically numbered:

 #. 跑步
 #. 读书

水果
   1. 苹果
   #. 香蕉
   #. 梨
   #. 梨
   #. 梨
   #. 梨
   #. 梨

命令行选项

-a         Output all.
-b         Output both (this description is 
           quite long).
-c arg     Output just arg.
--long     Output all day long.

-p         This option has two paragraphs in the description.
           This is the first.

           This is the second.  Blank lines may be omitted between
           options (as above) or left in (as here and below).

--very-long-option  A VMS-style option.  Note the adjustment for
                    the required two spaces.

--an-even-longer-option
           The description can also start on the next line.

-2, --two  This option has two variants.

-f FILE, --file=FILE  These two options are synonyms; both have
                      arguments.

4. 图片
--------

显示一张图片,不过不太方便

.. image:: image/picture.jpeg
   :height: 200px
   :width: 400 px
   :scale: 50 %
   :alt: alternate text
   :align: center

5. 警告
-------------------------
.. warning::
   这是一台警告消息:XXXXXXXXXXXXXXX

6. 表格
----------------------

+----------------------+----------+----------+----------+
| Header row, column 1 | Header 2 | Header 3 | Header 4 |
+======================+==========+==========+==========+
| body row 1, column 1 | column 2 | column 3 | column 4 |
+----------------------+----------+----------+----------+
| body row 2           | ...      | ...      |          |
+----------------------+----------+----------+----------+
| 1                    | 2        | 33       | c        |
+----------------------+----------+----------+----------+

+----+----+----+
| 1  | 2  | 3  |
+====+====+====+
| a  | b  | c  |
+----+----+----+
| A  | B  | C  |
+----+----+----+
| ia | ab | cd |
+----+----+----+


=====  =====  =======  =======
A      B      A and B  A or B
=====  =====  =======  =======
False  False  False    False
True   False  False    True
False  True   False    True
True   True   True     True
=====  =====  =======  =======



=========  =========================================  ======================================
=========  =========================================  ======================================
=========  =========================================  ======================================






7. 超链接
--------------------

#. `163 <http://www.163.com>`_
#.  qq: http://www.google.com
#.  如果可以用 google1_ ，我绝不用 baidu1_
#.  如果可以用 `google <http://google.com>`_ ，我绝不用 `baidu <http://www.baidu.com>`_
#.  也可以内部链接 top_

.. _google1: http://www.google.com
.. _baidu1: http://www.baidu.com

8. 词汇表
--------------------
.. glossary::

   environment
      A structure where information about all documents under the root is
      saved, and used for cross-referencing.  The environment is pickled
      after the parsing stage, so that successive runs only need to read
      and parse new and changed documents.

   source directory
      The directory which, including its subdirectories, contains all
      source files for one Sphinx project.

   CDN
      T........

   VPN
      T...


9. 代码高亮
------------

.. literalinclude:: check_endian.c
   :language: c

显示行号

.. code-block:: python
   :linenos:

   #!/bin/env python2.7
   #! -*- coding: UTF-8 -*-
   def everyday_2015_11_22():
       for i in range(1,10):
           for j in range(1,i+1):
               print '%dx%d=%-2d'%(i,j,i*j),
           print

       letter='ABCDEFGHIJKLMNOPQRSTUVWXYZ'
       for char in 'ABCDEFGHIJKLMNOPQRSTUVWXYZ':
           print letter
           letter=letter[1:]+char

   def everyday_2015_11_12():
       s=[1,4,5,7,1,7,54,3,67,3,3,89]
       print s
       s.sort()
       print s
       print list(set(s))
       print [ i for i in s if s.count(i) ==1 ]

   if __name__=='__main__':
       everyday_2015_11_22()
       everyday_2015_11_12()


标注5,10,15行

.. literalinclude:: gen_wget_url.sh
   :language: bash
   :emphasize-lines: 5,10,15
