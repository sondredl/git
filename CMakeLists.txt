cmake_minimum_required(VERSION 3.15)

# Project name and version
project(gitTwo VERSION 2.0)

add_subdirectory(contrib/buildsystems)
# Specify the C++ standard
# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add definition for NO_REGEX
# add_definitions(-DNO_REGEX=NeedsStartEnd) 


# Add source directories
# include_directories(${PROJECT_SOURCE_DIR})
# include_directories(${PROJECT_SOURCE_DIR}/include)
# include_directories(${PROJECT_SOURCE_DIR}/compat/win32)
# include_directories(${PROJECT_SOURCE_DIR}/compat/poll)
# include_directories(${GIT_SDK}) # TODO -> fix env var as include directory
	# abspath.h
	# add-interactive.h
	# advice.h
	# alias.h
	# alloc.h
	# apply.h
	# archive.h
	# attr.h
	# banned.h
	# base85.h
	# bisect.h
	# blame.h
	# blob.h
	# bloom.h
	# branch.h
	# builtin.h
	# bulk-checkin.h
	# bundle-uri.h
	# bundle.h
	# cache-tree.h
	# cbtree.h
	# chdir-notify.h
	# checkout.h
	# chunk-format.h
	# color.h
	# column.h
	# commit-graph.h
	# commit-reach.h
	# commit-slab-decl.h
	# commit-slab-impl.h
	# commit-slab.h
	# commit.h
	# config.h
	# connect.h
	# connected.h
	# convert.h
	# copy.h
	# credential.h
	# csum-file.h
	# date.h
	# decorate.h
	# delta-islands.h
	# delta.h
	# diagnose.h
	# diff-merges.h
	# diff.h
	# diffcore.h
	# dir-iterator.h
	# dir.h
	# editor.h
	# entry.h
	# environment.h
	# exec-cmd.h
	# fetch-negotiator.h
	# fetch-pack.h
	# fmt-merge-msg.h
	# fsck.h
	# fsmonitor--daemon.h
	# fsmonitor-ipc.h
	# fsmonitor-ll.h
	# fsmonitor-path-utils.h
	# fsmonitor-settings.h
	# fsmonitor.h
	# gettext.h
	# git-compat-util.h
	# git-curl-compat.h
	# git-zlib.h
	# gpg-interface.h
	# graph.h
	# grep.h
	# hash-ll.h
	# hash-lookup.h
	# hash.h
	# hashmap.h
	# help.h
	# hex-ll.h
	# hex.h
	# hook.h
	# http.h
	# ident.h
	# iterator.h
	# json-writer.h
	# khash.h
	# kwset.h
	# levenshtein.h
	# line-log.h
	# line-range.h
	# linear-assignment.h
	# list-objects-filter-options.h
	# list-objects-filter.h
	# list-objects.h
	# list.h
	# lockfile.h
	# log-tree.h
	# loose.h
	# ls-refs.h
	# mailinfo.h
	# mailmap.h
	# match-trees.h
	# mem-pool.h
	# merge-blobs.h
	# merge-ll.h
	# merge-ort-wrappers.h
	# merge-ort.h
	# merge-recursive.h
	# merge.h
	# mergesort.h
	# midx.h
	# name-hash.h
	# notes-cache.h
	# notes-merge.h
	# notes-utils.h
	# notes.h
	# object-file-convert.h
	# object-file.h
	# object-name.h
	# object-store-ll.h
	# object-store.h
	# object.h
	# oid-array.h
	# oidmap.h
	# oidset.h
	# oidtree.h
	# pack-bitmap.h
	# pack-mtimes.h
	# pack-objects.h
	# pack-revindex.h
	# pack.h
	# packfile.h
	# pager.h
	# parallel-checkout.h
	# parse-options.h
	# parse.h
	# patch-ids.h
	# path.h
	# pathspec.h
	# pkt-line.h
	# preload-index.h
	# pretty.h
	# prio-queue.h
	# progress.h
	# promisor-remote.h
	# prompt.h
	# protocol-caps.h
	# protocol.h
	# prune-packed.h
	# quote.h
	# range-diff.h
	# reachable.h
	# read-cache-ll.h
	# read-cache.h
	# rebase-interactive.h
	# rebase.h
	# ref-filter.h
	# reflog-walk.h
	# reflog.h
	# refs.h
	# refspec.h
	# remote.h
	# replace-object.h
	# repository.h
	# rerere.h
	# reset.h
	# resolve-undo.h
	# revision.h
	# run-command.h
	# sane-ctype.h
	# send-pack.h
	# sequencer.h
	# serve.h
	# server-info.h
	# setup.h
	# sha1dc_git.h
	# shallow.h
	# shortlog.h
	# sideband.h
	# sigchain.h
	# simple-ipc.h
	# sparse-index.h
	# split-index.h
	# statinfo.h
	# strbuf.h
	# streaming.h
	# string-list.h
	# strmap.h
	# strvec.h
	# sub-process.h
	# submodule-config.h
	# submodule.h
	# symlinks.h
	# tag.h
	# tar.h
	# tempfile.h
	# thread-utils.h
	# tmp-objdir.h
	# trace.h
	# trace2.h
	# trailer.h
	# transport-internal.h
	# transport.h
	# tree-walk.h
	# tree.h
	# unicode-width.h
	# unix-socket.h
	# unix-stream-server.h
	# unpack-trees.h
	# upload-pack.h
	# url.h
	# urlmatch.h
	# userdiff.h
	# utf8.h
	# varint.h
	# version.h
	# versioncmp.h
	# walker.h
	# wildmatch.h
	# worktree.h
	# wrapper.h
	# write-or-die.h
	# ws.h
	# wt-status.h
	# xdiff-interface.h

# Specify the executable and source files
# This should be updated with the actual source files
# set(SOURCES
# 	common-main.c
# 	abspath.c
# 	add-interactive.c
# 	add-patch.c
# 	advice.c
# 	alias.c
# 	alloc.c
# 	apply.c
# 	archive-tar.c
# 	archive-zip.c
# 	archive.c
# 	attr.c
# 	base85.c
# 	bisect.c
# 	blame.c
# 	blob.c
# 	bloom.c
# 	branch.c
# 	bulk-checkin.c
# 	bundle-uri.c
# 	bundle.c
# 	cache-tree.c
# 	cbtree.c
# 	chdir-notify.c
# 	checkout.c
# 	chunk-format.c
# 	color.c
# 	column.c
# 	combine-diff.c
# 	commit-graph.c
# 	commit-reach.c
# 	commit.c
# 	common-main.c
# 	config.c
# 	connect.c
# 	connected.c
# 	convert.c
# 	copy.c
# 	credential.c
# 	csum-file.c
# 	ctype.c
# 	daemon.c
# 	date.c
# 	decorate.c
# 	delta-islands.c
# 	diagnose.c
# 	diff-delta.c
# 	diff-lib.c
# 	diff-merges.c
# 	diff-no-index.c
# 	diff.c
# 	diffcore-break.c
# 	diffcore-delta.c
# 	diffcore-order.c
# 	diffcore-pickaxe.c
# 	diffcore-rename.c
# 	diffcore-rotate.c
# 	dir-iterator.c
# 	dir.c
# 	editor.c
# 	entry.c
# 	environment.c
# 	exec-cmd.c
# 	fetch-negotiator.c
# 	fetch-pack.c
# 	fmt-merge-msg.c
# 	fsck.c
# 	fsmonitor-ipc.c
# 	fsmonitor-settings.c
# 	fsmonitor.c
# 	gettext.c
# 	git-zlib.c
# 	git.c
# 	gpg-interface.c
# 	graph.c
# 	grep.c
# 	hash-lookup.c
# 	hashmap.c
# 	help.c
# 	hex-ll.c
# 	hex.c
# 	hook.c
# 	http-backend.c
# 	http-fetch.c
# 	http-push.c
# 	http-walker.c
# 	http.c
# 	ident.c
# 	imap-send.c
# 	json-writer.c
# 	kwset.c
# 	levenshtein.c
# 	line-log.c
# 	line-range.c
# 	linear-assignment.c
# 	list-objects-filter-options.c
# 	list-objects-filter.c
# 	list-objects.c
# 	lockfile.c
# 	log-tree.c
# 	loose.c
# 	ls-refs.c
# 	mailinfo.c
# 	mailmap.c
# 	match-trees.c
# 	mem-pool.c
# 	merge-blobs.c
# 	merge-ll.c
# 	merge-ort-wrappers.c
# 	merge-ort.c
# 	merge-recursive.c
# 	merge.c
# 	midx-write.c
# 	midx.c
# 	name-hash.c
# 	notes-cache.c
# 	notes-merge.c
# 	notes-utils.c
# 	notes.c
# 	object-file-convert.c
# 	object-file.c
# 	object-name.c
# 	object.c
# 	oid-array.c
# 	oidmap.c
# 	oidset.c
# 	oidtree.c
# 	pack-bitmap-write.c
# 	pack-bitmap.c
# 	pack-check.c
# 	pack-mtimes.c
# 	pack-objects.c
# 	pack-revindex.c
# 	pack-write.c
# 	packfile.c
# 	pager.c
# 	parallel-checkout.c
# 	parse-options-cb.c
# 	parse-options.c
# 	parse.c
# 	patch-delta.c
# 	patch-ids.c
# 	path.c
# 	pathspec.c
# 	pkt-line.c
# 	preload-index.c
# 	pretty.c
# 	prio-queue.c
# 	progress.c
# 	promisor-remote.c
# 	prompt.c
# 	protocol-caps.c
# 	protocol.c
# 	prune-packed.c
# 	quote.c
# 	range-diff.c
# 	reachable.c
# 	read-cache.c
# 	rebase-interactive.c
# 	rebase.c
# 	ref-filter.c
# 	reflog-walk.c
# 	reflog.c
# 	refs.c
# 	refspec.c
# 	remote-curl.c
# 	remote.c
# 	replace-object.c
# 	repo-settings.c
# 	repository.c
# 	rerere.c
# 	reset.c
# 	resolve-undo.c
# 	revision.c
# 	run-command.c
# 	scalar.c
# 	send-pack.c
# 	sequencer.c
# 	serve.c
# 	server-info.c
# 	setup.c
# 	sh-i18n--envsubst.c
# 	sha1dc_git.c
# 	shallow.c
# 	shell.c
# 	sideband.c
# 	sigchain.c
# 	sparse-index.c
# 	split-index.c
# 	stable-qsort.c
# 	statinfo.c
# 	strbuf.c
# 	streaming.c
# 	string-list.c
# 	strmap.c
# 	strvec.c
# 	sub-process.c
# 	submodule-config.c
# 	submodule.c
# 	symlinks.c
# 	tag.c
# 	tempfile.c
# 	thread-utils.c
# 	tmp-objdir.c
# 	trace.c
# 	trace2.c
# 	trailer.c
# 	transport-helper.c
# 	transport.c
# 	tree-diff.c
# 	tree-walk.c
# 	tree.c
# 	unix-socket.c
# 	unix-stream-server.c
# 	unpack-trees.c
# 	upload-pack.c
# 	url.c
# 	urlmatch.c
# 	usage.c
# 	userdiff.c
# 	utf8.c
# 	varint.c
# 	version.c
# 	versioncmp.c
# 	walker.c
# 	wildmatch.c
# 	worktree.c
# 	wrapper.c
# 	write-or-die.c
# 	ws.c
# 	wt-status.c
# 	xdiff-interface.c
# )

# Add executable target
# add_executable(git-for-windows ${SOURCES})

# Include subdirectories if needed
# add_subdirectory(submodule)

# Find packages required
# find_package(OpenSSL REQUIRED)
# find_package(CURL REQUIRED)
# find_package(ZLIB REQUIRED)


# Link libraries to the executable
# target_link_libraries(git-for-windows OpenSSL::SSL OpenSSL::Crypto CURL::libcurl ZLIB::ZLIB compat syslog)

# Optionally, specify other linker and compiler options
# target_compile_options(git-for-windows PRIVATE -w -Wall -Wextra NO_REGEX=NeedsStartEnd)
# target_compile_definitions(git-compat-util PRIVATE  NO_REGEX=NeedsStartEnd)

# Add custom commands if needed
# For example, to handle custom build steps from the Makefile
# add_custom_command(
#     TARGET git-for-windows POST_BUILD
#     COMMAND ${CMAKE_COMMAND} -E copy_if_different
#         "${CMAKE_CURRENT_BINARY_DIR}/$<TARGET_FILE:git-for-windows>"
#         "${CMAKE_BINARY_DIR}/bin"
# )

# Define installation rules
# install(TARGETS git-for-windows DESTINATION bin)
# install(DIRECTORY include/ DESTINATION include)

# Optionally, handle external dependencies that the Makefile might have managed
# ExternalProject_Add(
#     some_external_project
#     PREFIX ${CMAKE_BINARY_DIR}/external
#     GIT_REPOSITORY https://github.com/some/repo.git
#     GIT_TAG master
#     CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=<INSTALL_DIR>
# )

# Set any necessary build flags
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -some_flag")

###################### warning flags ##########################
# add_compile_options(-Wunused-parameter)
# if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU" OR CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
#     add_compile_options(-w)
# elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
#     add_compile_options(/w)
# endif()
# set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -w")

# set( NO_REGEX
# 	COMPAT_CFLAGS += -Icompat/regex
# 	COMPAT_OBJS += compat/regex/regex.o
# ) 