rsync
===========

.. _rsync_ssh:

1 rsync ssh
--------------------
.. code-block:: bash

   rsync -av --delete \
   --exclude-from=exclude.list \
   --log-file=${base_dir}/.rsync.log \
   -e 'ssh -i /home/yang.song/.ssh/id_rsa'  songy@${ip}:/dir/aa /localdir/

2
------


1
--------------------


