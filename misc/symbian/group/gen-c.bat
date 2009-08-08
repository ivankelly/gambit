pushd ..\..\..\gsi
gsc -f -c -check _gsi.scm 
gsc -f -c -check _gsilib.scm
gsc -f -link -flat -o _gambcgsi.c _gsi_.c _gsilib_.c
popd

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
gsc -f -link -flat -o _gambc.c _kernel_.c _system_.c _num_.c _std_.c _eval_.c _io_.c _nonstd_.c _thread_.c _repl_.c
popd
