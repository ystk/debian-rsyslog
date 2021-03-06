if ENABLE_TESTBENCH
TESTRUNS = rt_init rscript
check_PROGRAMS = $(TESTRUNS) ourtail nettester tcpflood chkseq randomgen
TESTS = $(TESTRUNS) cfg.sh \
	validation-run.sh \
	imtcp-multiport.sh \
	diskqueue.sh \
	diskqueue-fsync.sh \
	manytcp.sh \
	sndrcv.sh \
	sndrcv_gzip.sh \
	asynwr_simple.sh \
	asynwr_timeout.sh \
	asynwr_small.sh \
	asynwr_tinybuf.sh \
	wr_large_async.sh \
	wr_large_sync.sh \
	asynwr_deadlock.sh \
	asynwr_deadlock2.sh \
	asynwr_deadlock4.sh \
	gzipwr_large.sh \
	gzipwr_large_dynfile.sh \
	dynfile_invld_async.sh \
	dynfile_invld_sync.sh \
	dynfile_invalid2.sh \
	complex1.sh \
	queue-persist.sh \
	pipeaction.sh
	execonlyonce.sh \
	queue-persist.sh 

if ENABLE_OMSTDOUT
TESTS += omod-if-array.sh \
	 proprepltest.sh \
	 parsertest.sh \
	 timestamp.sh \
	 inputname.sh \
	 threadingmq.sh \
	 threadingmqaq.sh \
	 fieldtest.sh
endif

if ENABLE_EXTENDED_TESTS
TESTS += random.sh 
endif

check_JAVA = DiagTalker.java

endif # if ENABLE_TESTBENCH

TESTS_ENVIRONMENT = RSYSLOG_MODDIR='$(abs_top_builddir)'/runtime/.libs/
DISTCLEANFILES=rsyslog.pid '$(abs_top_builddir)'/DiagTalker.class
test_files = testbench.h runtime-dummy.c

EXTRA_DIST= 1.rstest 2.rstest 3.rstest err1.rstest \
	   validation-run.sh \
	   testsuites/invalid.conf \
	   testsuites/valid.conf \
	   cfg.sh \
	   cfg1.cfgtest \
	   cfg1.testin \
	   cfg2.cfgtest \
	   cfg2.testin \
	   cfg3.cfgtest \
	   cfg3.testin \
	   cfg4.cfgtest \
	   cfg4.testin \
	   DevNull.cfgtest \
	   err1.rstest \
	   NoExistFile.cfgtest \
	   timestamp.sh \
	   testsuites/ts3164.conf \
	   testsuites/mon1digit.ts3164 \
	   testsuites/mon2digit.ts3164 \
	   testsuites/Jan.ts3164 \
	   testsuites/Feb.ts3164 \
	   testsuites/Mar.ts3164 \
	   testsuites/Apr.ts3164 \
	   testsuites/May.ts3164 \
	   testsuites/Jun.ts3164 \
	   testsuites/Jul.ts3164 \
	   testsuites/Aug.ts3164 \
	   testsuites/Sep.ts3164 \
	   testsuites/Oct.ts3164 \
	   testsuites/Nov.ts3164 \
	   testsuites/Dec.ts3164 \
	   testsuites/ts3339.conf \
	   testsuites/master.ts3339 \
	   testsuites/tsmysql.conf \
	   testsuites/master.tsmysql \
	   testsuites/tspgsql.conf \
	   testsuites/master.tspgsql \
	   testsuites/subsecond.conf \
	   testsuites/master.subsecond \
	   testsuites/parse1.conf \
	   testsuites/field1.conf \
	   testsuites/1.parse1 \
	   testsuites/2.parse1 \
	   testsuites/3.parse1 \
	   testsuites/snare.parse1 \
	   testsuites/oversizeTag-1.parse1 \
	   testsuites/weird.parse1 \
	   testsuites/date1.parse1 \
	   testsuites/date2.parse1 \
	   testsuites/date3.parse1 \
	   testsuites/date4.parse1 \
	   testsuites/date5.parse1 \
   	   testsuites/rfc3164.parse1 \
	   testsuites/rfc5424-1.parse1 \
	   testsuites/rfc5424-2.parse1 \
	   testsuites/rfc5424-3.parse1 \
	   testsuites/rfc5424-4.parse1 \
	   testsuites/parse3.conf \
	   testsuites/reallife.parse3 \
	   testsuites/parse-nodate.conf \
	   testsuites/samples.parse-nodate \
	   testsuites/parse_invld_regex.conf \
	   testsuites/samples.parse_invld_regex \
	   testsuites/parse-3164-buggyday.conf \
	   testsuites/samples.parse-3164-buggyday \
	   testsuites/snare_ccoff_udp.conf \
	   testsuites/samples.snare_ccoff_udp \
	   testsuites/snare_ccoff_udp2.conf \
	   testsuites/samples.snare_ccoff_udp2 \
	   testsuites/omod-if-array.conf \
	   testsuites/1.omod-if-array \
	   testsuites/1.field1 \
	   killrsyslog.sh \
	   parsertest.sh \
	   fieldtest.sh \
	   diskqueue.sh \
	   testsuites/diskqueue.conf \
	   diskqueue-fsync.sh \
	   testsuites/diskqueue-fsync.conf \
	   imtcp-multiport.sh \
	   testsuites/imtcp-multiport.conf \
	   manytcp.sh \
	   testsuites/manytcp.conf \
	   inputname.sh \
	   testsuites/inputname_imtcp.conf \
	   testsuites/1.inputname_imtcp_12514 \
	   testsuites/1.inputname_imtcp_12515 \
	   testsuites/1.inputname_imtcp_12516 \
	   omod-if-array.sh \
	   diag.sh \
	   testsuites/diag-common.conf \
	   testsuites/diag-common2.conf \
	   queue-persist.sh \
	   queue-persist-drvr.sh \
	   testsuites/queue-persist.conf \
	   threadingmq.sh \
	   testsuites/threadingmq.conf \
	   threadingmqaq.sh \
	   testsuites/threadingmqaq.conf \
	   sndrcv_drvr.sh \
	   sndrcv.sh \
	   testsuites/sndrcv_sender.conf \
	   testsuites/sndrcv_rcvr.conf \
	   sndrcv_gzip.sh \
	   testsuites/sndrcv_gzip_sender.conf \
	   testsuites/sndrcv_gzip_rcvr.conf \
	   pipeaction.sh \
	   testsuites/pipeaction.conf \
	   asynwr_simple.sh \
	   testsuites/asynwr_simple.conf \
	   asynwr_timeout.sh \
	   testsuites/asynwr_timeout.conf \
	   asynwr_small.sh \
	   testsuites/asynwr_small.conf \
	   asynwr_tinybuf.sh \
	   testsuites/asynwr_tinybuf.conf \
	   wr_large_async.sh \
	   wr_large_sync.sh \
	   wr_large.sh \
	   testsuites/wr_large.conf \
	   asynwr_deadlock.sh \
	   testsuites/asynwr_deadlock.conf \
	   asynwr_deadlock2.sh \
	   testsuites/asynwr_deadlock2.conf \
	   asynwr_deadlock4.sh \
	   testsuites/asynwr_deadlock4.conf \
	   gzipwr_large.sh \
	   testsuites/gzipwr_large.conf \
	   gzipwr_large_dynfile.sh \
	   testsuites/gzipwr_large_dynfile.conf \
	   complex1.sh \
	   testsuites/complex1.conf \
	   random.sh \
	   testsuites/random.conf \
	   dynfile_invld_async.sh \
	   dynfile_invld_sync.sh \
	   dynfile_cachemiss.sh \
	   testsuites/dynfile_cachemiss.conf \
	   dynfile_invalid2.sh \
	   testsuites/dynfile_invalid2.conf \
	   proprepltest.sh \
	   testsuites/rfctag.conf \
	   testsuites/master.rfctag \
	   testsuites/nolimittag.conf \
	   testsuites/master.nolimittag \
	   execonlyonce.sh \
	   testsuites/execonlyonce.conf \
	   testsuites/execonlyonce.data \
	   DiagTalker.java \
	   cfg.sh

ourtail_SOURCES = ourtail.c
chkseq_SOURCES = chkseq.c

tcpflood_SOURCES = tcpflood.c
tcpflood_LDADD = $(SOL_LIBS)

randomgen_SOURCES = randomgen.c
randomgen_LDADD = $(SOL_LIBS)

nettester_SOURCES = nettester.c getline.c
nettester_LDADD = $(SOL_LIBS)

rt_init_SOURCES = rt-init.c $(test_files)
rt_init_CPPFLAGS =  -I$(top_srcdir) $(PTHREADS_CFLAGS) $(RSRT_CFLAGS)
rt_init_LDADD = $(RSRT_LIBS) $(ZLIB_LIBS) $(PTHREADS_LIBS) $(SOL_LIBS)
rt_init_LDFLAGS = -export-dynamic

rscript_SOURCES = rscript.c getline.c $(test_files)
rscript_CPPFLAGS =  -I$(top_srcdir) $(PTHREADS_CFLAGS) $(RSRT_CFLAGS)
rscript_LDADD = $(RSRT_LIBS) $(ZLIB_LIBS) $(PTHREADS_LIBS) $(SOL_LIBS)
rscript_LDFLAGS = -export-dynamic
