CC=g++
CCstd=c++11
.SILENT:
all:
	$(CC) -std=$(CCstd) main.cc ../shared/execution.cc
	/app/vbuild/RHEL7-x86_64/python/3.8.0/bin/python3 /home/ezjanos/Scripts/aocurl.py 2022 01 -io | ./a.out
