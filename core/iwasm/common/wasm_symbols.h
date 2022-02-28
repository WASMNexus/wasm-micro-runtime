#ifdef DEF_CONST_STRING

DEF_CONST_STRING(null, "")
DEF_CONST_STRING(env, "env")
DEF_CONST_STRING(GOT_func, "GOT.func")
DEF_CONST_STRING(wasi_unstable, "wasi_unstable")
DEF_CONST_STRING(wasi_snapshot_preview1, "wasi_snapshot_preview1")
DEF_CONST_STRING(spectest, "spectest")
DEF_CONST_STRING(memory, "memory")
DEF_CONST_STRING(var_stack_pointer, "__stack_pointer")
DEF_CONST_STRING(var_user_stack_pointer, "__user_stack_pointer")
DEF_CONST_STRING(var_memory_base, "__memory_base")
DEF_CONST_STRING(var_table_base, "__table_base")
DEF_CONST_STRING(var_data_end, "__data_end")

//AS
DEF_CONST_STRING(__alloc, "__alloc")
DEF_CONST_STRING(__free, "__free")
DEF_CONST_STRING(__realloc, "__realloc")
DEF_CONST_STRING(__new, "__new")
DEF_CONST_STRING(__pin, "__pin")
DEF_CONST_STRING(__unpin, "__unpin")
DEF_CONST_STRING(__collect, "__collect")

// libc
#if WASM_ENABLE_LIBC_BUILTIN != 0
DEF_CONST_STRING(iprintf, "iprintf")
DEF_CONST_STRING(printf, "printf")
DEF_CONST_STRING(sprintf, "sprintf")
DEF_CONST_STRING(snprintf, "snprintf")
DEF_CONST_STRING(puts, "puts")
DEF_CONST_STRING(putchar, "putchar")
DEF_CONST_STRING(memcmp, "memcmp")
DEF_CONST_STRING(memcpy, "memcpy")
DEF_CONST_STRING(memmove, "memmove")
DEF_CONST_STRING(memset, "memset")
DEF_CONST_STRING(strchr, "strchr")
DEF_CONST_STRING(strcmp, "strcmp")
DEF_CONST_STRING(strcpy, "strcpy")
DEF_CONST_STRING(strlen, "strlen")
DEF_CONST_STRING(strncmp, "strncmp")
DEF_CONST_STRING(strncpy, "strncpy")
DEF_CONST_STRING(malloc, "malloc")
DEF_CONST_STRING(realloc, "realloc")
DEF_CONST_STRING(calloc, "calloc")
DEF_CONST_STRING(strdup, "strdup")
DEF_CONST_STRING(_strdup, "_strdup")
DEF_CONST_STRING(free, "free")
DEF_CONST_STRING(atoi, "atoi")
DEF_CONST_STRING(exit, "exit")
DEF_CONST_STRING(strtol, "strtol")
DEF_CONST_STRING(strtoul, "strtoul")
DEF_CONST_STRING(strtod, "strtod")
DEF_CONST_STRING(memchr, "memchr")
DEF_CONST_STRING(strncasecmp, "strncasecmp")
DEF_CONST_STRING(strspn, "strspn")
DEF_CONST_STRING(strcspn, "strcspn")
DEF_CONST_STRING(strstr, "strstr")
DEF_CONST_STRING(isupper, "isupper")
DEF_CONST_STRING(isalpha, "isalpha")
DEF_CONST_STRING(isspace, "isspace")
DEF_CONST_STRING(isgraph, "isgraph")
DEF_CONST_STRING(isprint, "isprint")
DEF_CONST_STRING(isdigit, "isdigit")
DEF_CONST_STRING(isxdigit, "isxdigit")
DEF_CONST_STRING(tolower, "tolower")
DEF_CONST_STRING(toupper, "toupper")
DEF_CONST_STRING(__ctype_tolower_loc, "__ctype_tolower_loc")
DEF_CONST_STRING(isalnum, "isalnum")
DEF_CONST_STRING(setTempRet0, "setTempRet0")
DEF_CONST_STRING(getTempRet0, "getTempRet0")
DEF_CONST_STRING(llvm_bswap_i16, "llvm_bswap_i16")
DEF_CONST_STRING(llvm_bswap_i32, "llvm_bswap_i32")
DEF_CONST_STRING(bitshift64Lshr, "bitshift64Lshr")
DEF_CONST_STRING(bitshift64Shl, "bitshift64Shl")
DEF_CONST_STRING(llvm_stackrestore, "llvm_stackrestore")
DEF_CONST_STRING(llvm_stacksave, "llvm_stacksave")
DEF_CONST_STRING(emscripten_memcpy_big, "emscripten_memcpy_big")
DEF_CONST_STRING(abort, "abort")
DEF_CONST_STRING(AS_abort, "as_abort") // a placehold, won't be used in code.
DEF_CONST_STRING(abortStackOverflow, "abortStackOverflow")
DEF_CONST_STRING(nullFunc_X, "nullFunc_X")
DEF_CONST_STRING(__cxa_allocate_exception, "__cxa_allocate_exception")
DEF_CONST_STRING(__cxa_begin_catch, "__cxa_begin_catch")
DEF_CONST_STRING(__cxa_throw, "__cxa_throw")
DEF_CONST_STRING(clock_gettime, "clock_gettime")
DEF_CONST_STRING(clock, "clock")
DEF_CONST_STRING(dlopen, "dlopen")
DEF_CONST_STRING(dlsym, "dlsym")
//DEF_CONST_STRING(dltest, "dltest")
DEF_CONST_STRING(dlclose, "dlclose")
#endif

#if WASM_ENABLE_SPEC_TEST
//spec test
DEF_CONST_STRING(print, "print")
DEF_CONST_STRING(print_i32, "print_i32")
DEF_CONST_STRING(print_i32_f32, "print_i32_f32")
DEF_CONST_STRING(print_f64_f64, "print_f64_f64")
DEF_CONST_STRING(print_f32, "print_f32")
DEF_CONST_STRING(print_f64, "print_f64")
#endif

// libc wasi
#if WASM_ENABLE_LIBC_WASI != 0
DEF_CONST_STRING2(args_get)
DEF_CONST_STRING2(args_sizes_get)
DEF_CONST_STRING2(clock_res_get)
DEF_CONST_STRING2(clock_time_get)
DEF_CONST_STRING2(environ_get)
DEF_CONST_STRING2(environ_sizes_get)
DEF_CONST_STRING2(fd_prestat_get)
DEF_CONST_STRING2(fd_prestat_dir_name)
DEF_CONST_STRING2(fd_close)
DEF_CONST_STRING2(fd_datasync)
DEF_CONST_STRING2(fd_pread)
DEF_CONST_STRING2(fd_pwrite)
DEF_CONST_STRING2(fd_read)
DEF_CONST_STRING2(fd_renumber)
DEF_CONST_STRING2(fd_seek)
DEF_CONST_STRING2(fd_tell)
DEF_CONST_STRING2(fd_fdstat_get)
DEF_CONST_STRING2(fd_fdstat_set_flags)
DEF_CONST_STRING2(fd_fdstat_set_rights)
DEF_CONST_STRING2(fd_sync)
DEF_CONST_STRING2(fd_write)
DEF_CONST_STRING2(fd_advise)
DEF_CONST_STRING2(fd_allocate)
DEF_CONST_STRING2(path_create_directory)
DEF_CONST_STRING2(path_link)
DEF_CONST_STRING2(path_open)
DEF_CONST_STRING2(fd_readdir)
DEF_CONST_STRING2(path_readlink)
DEF_CONST_STRING2(path_rename)
DEF_CONST_STRING2(fd_filestat_get)
DEF_CONST_STRING2(fd_filestat_set_times)
DEF_CONST_STRING2(fd_filestat_set_size)
DEF_CONST_STRING2(path_filestat_get)
DEF_CONST_STRING2(path_filestat_set_times)
DEF_CONST_STRING2(path_symlink)
DEF_CONST_STRING2(path_unlink_file)
DEF_CONST_STRING2(path_remove_directory)
DEF_CONST_STRING2(poll_oneoff)
DEF_CONST_STRING2(proc_exit)
DEF_CONST_STRING2(proc_raise)
DEF_CONST_STRING2(random_get)
DEF_CONST_STRING2(sock_recv)
DEF_CONST_STRING2(sock_send)
DEF_CONST_STRING2(sock_shutdown)
DEF_CONST_STRING2(sched_yield)
#endif

#endif