pushd ..\..\..\lib
gsc -f -c -check _kernel.scm 
gsc -f -c -check _system.scm
gsc -f -c -check _num.scm
gsc -f -c -check _std.scm 
gsc -f -c -check _eval.scm 
gsc -f -c -check _io.scm
gsc -f -c -check _nonstd.scm
gsc -f -c -check _thread.scm 
gsc -f -c -check _repl.scm
gsc -f -link -flat -o _gambc.c _kernel.c _system.c _num.c _std.c _eval.c _io.c _nonstd.c _thread.c _repl.c
popd

pushd ..\..\..\gsi
gsc -f -c -check _gsilib.scm
gsc -f -link -l ..\lib\_gambc -o _gambcgsi.c _gsilib.c
gsc -f -c -check _gsi.scm 
gsc -f -link -l _gambcgsi -o _gsi_.c _gsi.c
popd
