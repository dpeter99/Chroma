echo "Build"
make kernel

if [ $? -eq 0 ]; then

echo "POST:"
./post.sh

echo "RUN"
./run.bat

fi