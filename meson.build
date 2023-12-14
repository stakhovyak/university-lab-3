## Single Linked List

project('SingleLinkedListTemplate', 'cpp',
        license: 'GPL',
        default_options: [
          'cpp_std=c++17',
          'warning_level=3',
          'buildtype=debug'
        ])

# Compiler configuration
# To set a default compiler, from the OS shell:
#   $ CC=mycc meson <options>

compiler = meson.get_compiler('cpp')

warning_level = get_option('warning_level').to_int()

if compiler.get_id() == 'gcc'
    message('Compiler: GCC')
    libs_compiler = ['-lstdc++fs']
    libs_linker   = ['-lstdc++fs']
elif compiler.get_id() == 'clang'
    message('Compiler: LLVM/clang')
    libs_compiler = ['-stdlib=libc++']
    libs_linker   = ['-stdlib=libc++', '-lstdc++fs']
endif

incdir = include_directories('include')

src = ['main.cpp', 'linked-list.cpp', 'node.cpp']

inputfile = files('input.txt')

executable('main', src, include_directories : incdir)

