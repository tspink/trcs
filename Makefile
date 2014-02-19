#
# Makefile
#
export MAKEFLAGS	+= -rR --no-print-directory
export Q		:= @

# Default Targets
all:		default-all
default:	default-all
clean:		default-clean
debug:		default-debug

PHONY := all default clean debug

# Basic Variables
export EXTRA_CC_FLAGS	:= -Wall -g -O0 -nostdlib
export EXTRA_CXX_FLAGS	:= -Wall -g -O0 -nostdlib
export EXTRA_LD_FLAGS	:= -nostdlib

# Directories
export TOPDIR		:= $(CURDIR)
export bin-dir		:= $(TOPDIR)/bin
export build-dir	:= $(TOPDIR)/build
export source-dir	:= $(TOPDIR)/src
export inc-dir		:= $(TOPDIR)/inc

# Build Configuration
-include $(TOPDIR)/.config

# Tools
-include $(build-dir)/Makefile.tools

# Makefile Common Operations
-include $(build-dir)/Makefile.include

# Target
export main-target-name		:= trcs
export real-main-target		:= $(bin-dir)/$(main-target-name)
export main-target-builtin	:= $(source-dir)/$(builtin-name)
export main-target-ldflags	:= $(EXTRA_LD_FLAGS) -e __trcs_start

default-all: $(real-main-target)
	@echo
	@echo "  Build Complete"
	@echo

$(real-main-target): $(main-target-builtin)
	$(Q)$(ECHO) "  LD      $(notdir $@)"
	$(Q)$(LD) -o $@ $< $(main-target-ldflags)

$(main-target-builtin): .FORCE
	$(Q)$(MAKE) $(build)=$(source-dir)

default-debug: .FORCE
	$(Q)$(MAKE) $(debug)=$(source-dir)

default-clean: .FORCE
	$(Q)$(MAKE) $(clean)=$(source-dir)
	$(Q)$(ECHO) "  RM      $(notdir $(real-main-target))"
	$(Q)$(RM) -f $(real-main-target)
	@echo
	@echo "  Clean Complete"
	@echo
	
PHONY += default-all default-clean default-debug

.FORCE:
.PHONY: $(PHONY) .FORCE
