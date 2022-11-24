YEARVAR=$(date "+%Y")
DAYVAR=$(date "+%d")
# Insert your paths
PYPATH=
AOCURLPATH=
REPOPATH=

$PYPATH $AOCURLPATH $YEARVAR $DAYVAR;

mkdir $REPOPATH/day$DAYVAR && cp $REPOPATH/template/* $REPOPATH/day$DAYVAR;
echo -e "CC=g++\nCCstd=c++11\n.SILENT:\nall:\n\t\$(CC) -std=\$(CCstd) main.cc ../shared/execution.cc\n\t/app/vbuild/RHEL7-x86_64/python/3.8.0/bin/python3 /home/ezjanos/Scripts/aocurl.py $(YEARVAR) $(DAYVAR) -io | ./a.out" > $REPOPATH/day$DAYVAR/Makefile
