# This file is generated by gyp; do not edit.

TOOLSET := target
TARGET := WebDriver_extension_qt_quick_web
### Rules for action "input_dir":
quiet_cmd_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_input_dir = ACTION wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_input_dir $@
cmd_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_input_dir = LD_LIBRARY_PATH=$(builddir)/lib.host:$(builddir)/lib.target:$$LD_LIBRARY_PATH; export LD_LIBRARY_PATH; cd $(srcdir)/.; mkdir -p $(obj).$(TOOLSET)/WebDriver_extension_qt_quick_web; mkdir -p "$(obj).$(TOOLSET)/WebDriver_extension_qt_quick_web/geni"

$(obj).$(TOOLSET)/$(TARGET)/geni: obj := $(abs_obj)
$(obj).$(TOOLSET)/$(TARGET)/geni: builddir := $(abs_builddir)
$(obj).$(TOOLSET)/$(TARGET)/geni: TOOLSET := $(TOOLSET)
$(obj).$(TOOLSET)/$(TARGET)/geni:  FORCE_DO_CMD
	$(call do_cmd,wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_input_dir)

all_deps += $(obj).$(TOOLSET)/$(TARGET)/geni
action_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_input_dir_outputs := $(obj).$(TOOLSET)/$(TARGET)/geni


### Generated for rule wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_ui:
rule_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_ui_outputs :=

### Finished generating for rule: wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_ui

### Generated for rule wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_moc:
inc/extension_qt/moc_qdeclarativewebview.cc: obj := $(abs_obj)
inc/extension_qt/moc_qdeclarativewebview.cc: builddir := $(abs_builddir)
inc/extension_qt/moc_qdeclarativewebview.cc: TOOLSET := $(TOOLSET)
inc/extension_qt/moc_qdeclarativewebview.cc: $(srcdir)/inc/extension_qt/qdeclarativewebview.h
	$(call do_cmd,wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_moc_0)

all_deps += inc/extension_qt/moc_qdeclarativewebview.cc
cmd_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_moc_0 = LD_LIBRARY_PATH=$(builddir)/lib.host:$(builddir)/lib.target:$$LD_LIBRARY_PATH; export LD_LIBRARY_PATH; cd $(srcdir)/.; mkdir -p inc/extension_qt; python do_if_modified.py /usr/bin/moc "$(abspath $<)" "$(obj).$(TOOLSET)/WebDriver_extension_qt_quick_web/geni/moc_qdeclarativewebview.cc"
quiet_cmd_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_moc_0 = RULE wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_moc_0 $@

rule_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_moc_outputs := \
	inc/extension_qt/moc_qdeclarativewebview.cc

### Finished generating for rule: wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_moc

### Generated for rule wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_rcc:
rule_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_rcc_outputs :=

### Finished generating for rule: wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_rcc

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
	-I$(srcdir)/src \
	-I/usr/include/qt4 \
	-I$(obj).$(TOOLSET)/$(TARGET)/geni

OBJS := \
	$(obj).target/$(TARGET)/src/webdriver/extension_qt/declarative_item_view_handle.o \
	$(obj).target/$(TARGET)/src/webdriver/extension_qt/qdeclarativewebview.o \
	$(obj).target/$(TARGET)/src/webdriver/extension_qt/qml_web_view_enumerator.o \
	$(obj).target/$(TARGET)/src/webdriver/extension_qt/qml_web_view_executor.o \
	$(obj).$(TOOLSET)/$(TARGET)/geni/moc_qdeclarativewebview.o

# Add to the list of files we specially track dependencies for.
all_deps += $(OBJS)

# Make sure our actions/rules run before any of us.
$(OBJS): | $(action_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_input_dir_outputs) $(rule_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_ui_outputs) $(rule_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_moc_outputs) $(rule_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_rcc_outputs)

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
$(obj).target/libWebDriver_extension_qt_quick_web.a: | $(action_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_input_dir_outputs) $(rule_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_ui_outputs) $(rule_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_moc_outputs) $(rule_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_rcc_outputs)

# Preserve order dependency of special output on deps.
$(action_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_input_dir_outputs) $(rule_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_ui_outputs) $(rule_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_moc_outputs) $(rule_wd_ext_qt_gyp_WebDriver_extension_qt_quick_web_target_generate_rcc_outputs): | 

LDFLAGS_Default :=

LIBS :=

$(obj).target/libWebDriver_extension_qt_quick_web.a: GYP_LDFLAGS := $(LDFLAGS_$(BUILDTYPE))
$(obj).target/libWebDriver_extension_qt_quick_web.a: LIBS := $(LIBS)
$(obj).target/libWebDriver_extension_qt_quick_web.a: TOOLSET := $(TOOLSET)
$(obj).target/libWebDriver_extension_qt_quick_web.a: $(OBJS) FORCE_DO_CMD
	$(call do_cmd,alink)

all_deps += $(obj).target/libWebDriver_extension_qt_quick_web.a
# Add target alias
.PHONY: WebDriver_extension_qt_quick_web
WebDriver_extension_qt_quick_web: $(obj).target/libWebDriver_extension_qt_quick_web.a

# Add target alias
.PHONY: WebDriver_extension_qt_quick_web
WebDriver_extension_qt_quick_web: $(builddir)/libWebDriver_extension_qt_quick_web.a

# Copy this to the static library output path.
$(builddir)/libWebDriver_extension_qt_quick_web.a: TOOLSET := $(TOOLSET)
$(builddir)/libWebDriver_extension_qt_quick_web.a: $(obj).target/libWebDriver_extension_qt_quick_web.a FORCE_DO_CMD
	$(call do_cmd,copy)

all_deps += $(builddir)/libWebDriver_extension_qt_quick_web.a
# Short alias for building this static library.
.PHONY: libWebDriver_extension_qt_quick_web.a
libWebDriver_extension_qt_quick_web.a: $(obj).target/libWebDriver_extension_qt_quick_web.a $(builddir)/libWebDriver_extension_qt_quick_web.a

