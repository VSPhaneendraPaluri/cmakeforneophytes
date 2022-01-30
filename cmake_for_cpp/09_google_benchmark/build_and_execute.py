import os
import sys
import shutil

def create_directory():
  if not os.path.exists('build'):
    os.mkdir('build')
  else:
    print('"build" directory already exists')

def change_directory(destinationDirectory):
  os.chdir(destinationDirectory)
  
def do_build():
  if os.path.exists('build'):
    change_directory('build')
  os.system('cmake --build . --config -- /m')

def do_clean():
  if os.path.exists('build'):
    shutil.rmtree('build')
    print('Cleaning Done !!')
  else:
    print('Example has already been cleaned ...')

def do_configure_and_generate():
  create_directory()
  change_directory('build')
  os.system('cmake -G "Visual Studio 16 2019" ..')

def do_run():
  if not os.path.exists('build/Debug/UsingNuGet.exe'):
    change_directory('Debug')
  os.system('UsingNuGet.exe')

def main(arguments):
  if 'clean' in arguments:
    do_clean()
  if 'configure' in arguments:
    do_configure_and_generate()
  if 'build' in arguments:
    do_build()
  if 'run' in arguments:
    do_run()

if __name__ == '__main__':
  main(sys.argv[1:])
