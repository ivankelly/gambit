pushd ..\..\..\gsi
gsc -link _gsi.scm 
gsc -link _gsilib.scm
popd

pushd ..\..\..\lib
gsc -link _kernel.scm 
gsc -link _system.scm
gsc -link _num.scm
gsc -link _std.scm 
gsc -link _eval.scm 
gsc -link _io.scm
gsc -link _nonstd.scm
gsc -link _thread.scm 
gsc -link _repl.scm
popd
