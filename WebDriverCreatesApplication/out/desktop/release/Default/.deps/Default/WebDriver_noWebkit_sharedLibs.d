cmd_Default/WebDriver_noWebkit_sharedLibs := g++ -Wl,-rpath=\$$ORIGIN/lib.target/ -Wl,-rpath-link=\./Default/lib.target/  -o Default/WebDriver_noWebkit_sharedLibs -Wl,--start-group ./Default/obj.target/test_WD_hybrid_noWebkit_with_shared_libs/src/Test/main.o ./Default/obj.target/libchromium_base.so ./Default/obj.target/libWebDriver_core.so ./Default/obj.target/libWebDriver_extension_qt_base.so ./Default/obj.target/libWebDriver_extension_qt_quick.so ./Default/obj.target/libtest_widgets.a -Wl,--end-group -L/usr/lib/x86_64-linux-gnu -lQtNetwork -lQtGui -lQtXml -lQtCore -lQtDeclarative -lpthread -lrt -ldl