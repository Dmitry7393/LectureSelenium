# This file is generated by gyp; do not edit.

TOOLSET := target
TARGET := test_WD_hybrid_noWebkit
### Rules for action "input_dir":
quiet_cmd_wd_test_gyp_test_WD_hybrid_noWebkit_target_input_dir = ACTION wd_test_gyp_test_WD_hybrid_noWebkit_target_input_dir $@
cmd_wd_test_gyp_test_WD_hybrid_noWebkit_target_input_dir = LD_LIBRARY_PATH=$(builddir)/lib.host:$(builddir)/lib.target:$$LD_LIBRARY_PATH; export LD_LIBRARY_PATH; cd $(srcdir)/.; mkdir -p $(obj).$(TOOLSET)/test_WD_hybrid_noWebkit; mkdir -p "$(obj).$(TOOLSET)/test_WD_hybrid_noWebkit/geni"

$(obj).$(TOOLSET)/$(TARGET)/geni: obj := $(abs_obj)
$(obj).$(TOOLSET)/$(TARGET)/geni: builddir := $(abs_builddir)
$(obj).$(TOOLSET)/$(TARGET)/geni: TOOLSET := $(TOOLSET)
$(obj).$(TOOLSET)/$(TARGET)/geni:  FORCE_DO_CMD
	$(call do_cmd,wd_test_gyp_test_WD_hybrid_noWebkit_target_input_dir)

all_deps += $(obj).$(TOOLSET)/$(TARGET)/geni
action_wd_test_gyp_test_WD_hybrid_noWebkit_target_input_dir_outputs := $(obj).$(TOOLSET)/$(TARGET)/geni


### Generated for rule wd_test_gyp_test_WD_hybrid_noWebkit_target_generate_ui:
rule_wd_test_gyp_test_WD_hybrid_noWebkit_target_generate_ui_outputs :=

### Finished generating for rule: wd_test_gyp_test_WD_hybrid_noWebkit_target_generate_ui

### Generated for rule wd_test_gyp_test_WD_hybrid_noWebkit_target_generate_moc:
rule_wd_test_gyp_test_WD_hybrid_noWebkit_target_generate_moc_outputs :=

### Finished generating for rule: wd_test_gyp_test_WD_hybrid_noWebkit_target_generate_moc

### Generated for rule wd_test_gyp_test_WD_hybrid_noWebkit_target_generate_rcc:
rule_wd_test_gyp_test_WD_hybrid_noWebkit_target_generate_rcc_outputs :=

### Finished generating for rule: wd_test_gyp_test_WD_hybrid_noWebkit_target_generate_rcc

### Finished generating for all rules

DEFS_Default := \
	'-DQT_NO_DEBUG' \
	'-DQT_GUI_LIB' \
	'-DQT_CORE_LIB' \
	'-DQT_SHARED' \
	'-DQT_NO_OPENGL' \
	'-DNDEBUG' \
	'-D__STDC_FORMAT_MACROS' \
	'-DOS_POSIX'

# Flags passed to all source files.
CFLAGS_Default := \
	-fPIC \
	-Wall \
	-W \
	-Wno-unused-parameter \
	-O3

# Flags passed to only C files.
CFLAGS_C_Default :=

# Flags passed to only C++ files.
CFLAGS_CC_Default :=

INCS_Default := \
	-I$(srcdir)/inc \
	-I/usr/include/qt4 \
	-I$(obj).$(TOOLSET)/$(TARGET)/geni

OBJS := \
	$(obj).target/$(TARGET)/src/Test/main.o

# Add to the list of files we specially track dependencies for.
all_deps += $(OBJS)

# Make sure our dependencies are built before any of us.
$(OBJS): | $(builddir)/libchromium_base.a $(builddir)/libWebDriver_core.a $(builddir)/libWebDriver_extension_qt_base.a $(builddir)/libWebDriver_extension_qt_quick.a $(builddir)/libtest_widgets.a $(builddir)/libmimetypes-qt4.a $(obj).target/libchromium_base.a $(obj).target/libWebDriver_core.a $(obj).target/libWebDriver_extension_qt_base.a $(obj).target/libWebDriver_extension_qt_quick.a $(obj).target/libtest_widgets.a $(obj).target/src/third_party/mimetypes-qt4/libmimetypes-qt4.a

# Make sure our actions/rules run before any of us.
$(OBJS): | $(action_wd_test_gyp_test_WD_hybrid_noWebkit_target_input_dir_outputs) $(rule_wd_test_gyp_test_WD_hybrid_noWebkit_target_generate_ui_outputs) $(rule_wd_test_gyp_test_WD_hybrid_noWebkit_target_generate_moc_outputs) $(rule_wd_test_gyp_test_WD_hybrid_noWebkit_target_generate_rcc_outputs)

# CFLAGS et al overrides must be target-local.
# See "Target-specific Variable Values" in the GNU Make manual.
$(OBJS): TOOLSET := $(TOOLSET)
$(OBJS): GYP_CFLAGS := $(DEFS_$(BUILDTYPE)) $(INCS_$(BUILDTYPE))  $(CFLAGS_$(BUILDTYPE)) $(CFLAGS_C_$(BUILDTYPE))
$(OBJS): GYP_CXXFLAGS := $(DEFS_$(BUILDTYPE)) $(INCS_$(BUILDTYPE))  $(CFLAGS_$(BUILDTYPE)) $(CFLAGS_CC_$(BUILDTYPE))

# Suffix rules, putting all outputs into $(obj).

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(srcdir)/%.cc FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

# Try building from generated source, too.

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj).$(TOOLSET)/%.cc FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj)/%.cc FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

# End of this set of suffix rules
### Rules for final target.
# Build our special outputs first.
$(builddir)/WebDriver_noWebkit: | $(action_wd_test_gyp_test_WD_hybrid_noWebkit_target_input_dir_outputs) $(rule_wd_test_gyp_test_WD_hybrid_noWebkit_target_generate_ui_outputs) $(rule_wd_test_gyp_test_WD_hybrid_noWebkit_target_generate_moc_outputs) $(rule_wd_test_gyp_test_WD_hybrid_noWebkit_target_generate_rcc_outputs)

# Preserve order dependency of special output on deps.
$(action_wd_test_gyp_test_WD_hybrid_noWebkit_target_input_dir_outputs) $(rule_wd_test_gyp_test_WD_hybrid_noWebkit_target_generate_ui_outputs) $(rule_wd_test_gyp_test_WD_hybrid_noWebkit_target_generate_moc_outputs) $(rule_wd_test_gyp_test_WD_hybrid_noWebkit_target_generate_rcc_outputs): | $(builddir)/libchromium_base.a $(builddir)/libWebDriver_core.a $(builddir)/libWebDriver_extension_qt_base.a $(builddir)/libWebDriver_extension_qt_quick.a $(builddir)/libtest_widgets.a $(builddir)/libmimetypes-qt4.a $(obj).target/libchromium_base.a $(obj).target/libWebDriver_core.a $(obj).target/libWebDriver_extension_qt_base.a $(obj).target/libWebDriver_extension_qt_quick.a $(obj).target/libtest_widgets.a $(obj).target/src/third_party/mimetypes-qt4/libmimetypes-qt4.a

LDFLAGS_Default :=

LIBS := \
	-L/usr/lib/x86_64-linux-gnu \
	-lQtNetwork \
	-lQtGui \
	-lQtXml \
	-lQtCore \
	-lQtDeclarative \
	-lpthread \
	-lrt \
	-ldl

$(builddir)/WebDriver_noWebkit: GYP_LDFLAGS := $(LDFLAGS_$(BUILDTYPE))
$(builddir)/WebDriver_noWebkit: LIBS := $(LIBS)
$(builddir)/WebDriver_noWebkit: LD_INPUTS := $(OBJS) $(obj).target/libchromium_base.a $(obj).target/libWebDriver_core.a $(obj).target/libWebDriver_extension_qt_base.a $(obj).target/libWebDriver_extension_qt_quick.a $(obj).target/libtest_widgets.a $(obj).target/src/third_party/mimetypes-qt4/libmimetypes-qt4.a
$(builddir)/WebDriver_noWebkit: TOOLSET := $(TOOLSET)
$(builddir)/WebDriver_noWebkit: $(OBJS) $(obj).target/libchromium_base.a $(obj).target/libWebDriver_core.a $(obj).target/libWebDriver_extension_qt_base.a $(obj).target/libWebDriver_extension_qt_quick.a $(obj).target/libtest_widgets.a $(obj).target/src/third_party/mimetypes-qt4/libmimetypes-qt4.a FORCE_DO_CMD
	$(call do_cmd,link)

all_deps += $(builddir)/WebDriver_noWebkit
# Add target alias
.PHONY: test_WD_hybrid_noWebkit
test_WD_hybrid_noWebkit: $(builddir)/WebDriver_noWebkit

# Short alias for building this executable.
.PHONY: WebDriver_noWebkit
WebDriver_noWebkit: $(builddir)/WebDriver_noWebkit

# Add executable to "all" target.
.PHONY: all
all: $(builddir)/WebDriver_noWebkit
