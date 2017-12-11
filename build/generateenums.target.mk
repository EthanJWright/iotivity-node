# This file is generated by gyp; do not edit.

TOOLSET := target
TARGET := generateenums
### Rules for action "generateenums":
quiet_cmd_binding_gyp_generateenums_target_generateenums = ACTION Generating enums $@
cmd_binding_gyp_generateenums_target_generateenums = LD_LIBRARY_PATH=$(builddir)/lib.host:$(builddir)/lib.target:$$LD_LIBRARY_PATH; export LD_LIBRARY_PATH; cd $(srcdir)/.; mkdir -p generated; node build-scripts/generate-enums.js /home/god/iotivity-node/iotivity-installed/include

generated/enums.cc: obj := $(abs_obj)
generated/enums.cc: builddir := $(abs_builddir)
generated/enums.cc: TOOLSET := $(TOOLSET)
generated/enums.cc: $(srcdir)/iotivity-installed FORCE_DO_CMD
	$(call do_cmd,binding_gyp_generateenums_target_generateenums)

all_deps += generated/enums.cc
action_binding_gyp_generateenums_target_generateenums_outputs := generated/enums.cc


### Rules for final target.
# Build our special outputs first.
$(obj).target/generateenums.stamp: | $(action_binding_gyp_generateenums_target_generateenums_outputs)

# Preserve order dependency of special output on deps.
$(action_binding_gyp_generateenums_target_generateenums_outputs): | $(obj).target/csdk.stamp

$(obj).target/generateenums.stamp: TOOLSET := $(TOOLSET)
$(obj).target/generateenums.stamp: $(obj).target/csdk.stamp FORCE_DO_CMD
	$(call do_cmd,touch)

all_deps += $(obj).target/generateenums.stamp
# Add target alias
.PHONY: generateenums
generateenums: $(obj).target/generateenums.stamp

# Add target alias to "all" target.
.PHONY: all
all: generateenums
