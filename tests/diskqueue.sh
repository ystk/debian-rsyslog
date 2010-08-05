# Test for disk-only queue mode
# This test checks if queue files can be correctly written
# and read back, but it does not test the transition from
# memory to disk mode for DA queues.
# added 2009-04-17 by Rgerhards
# This file is part of the rsyslog project, released  under GPLv3
# uncomment for debugging support:
echo diskqueue.sh: testing queue disk-only mode
# uncomment for debugging support:
#export RSYSLOG_DEBUG="debug nostdout noprintmutexaction"
#export RSYSLOG_DEBUGLOG="log"
source $srcdir/diag.sh init
source $srcdir/diag.sh startup diskqueue.conf
# 20000 messages should be enough - the disk test is slow enough ;)
sleep 4
source $srcdir/diag.sh tcpflood -m20000
source $srcdir/diag.sh shutdown-when-empty # shut down rsyslogd when done processing messages
source $srcdir/diag.sh wait-shutdown
source $srcdir/diag.sh seq-check 0 19999
source $srcdir/diag.sh exit
