IS_ROOT ?= false

zsh:
ifeq ($(IS_ROOT), true)
	$(info $@ 以 Root 身份進入 workspace)
	@echo "eq"
else
	$(info $@ 以預設身份進入 workspace)
	@echo "neq"
endif
.PHONY: zsh
