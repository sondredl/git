#include "components/git-compat-util.h"
#include "components/config.h"
#include "components/fsmonitor-ipc.h"
#include "components/path.h"

const char *fsmonitor_ipc__get_path(struct repository *r) {
	static char *ret;
	if (!ret)
		ret = repo_git_path(r, "fsmonitor--daemon.ipc");
	return ret;
}
