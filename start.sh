docker compose up -d

cd app/vue
#echo "Running BUILD"
#docker build -t era:dev .
docker build -t my-app:dev .
#docker build -f Dockerfile-prod -t my-app:prod .
#
#echo "By default Accepting 8080 port"
#docker run -v ${PWD}:/app -v /app/node_modules -p $PORT:8080 --rm era:dev
#docker run -it -p 80:80 --rm my-app:prod
#docker run -v ${PWD}:/app -v /app/vue -p 80:80 --rm era:prod
 docker run -v ${PWD}:/app -v /app/node_modules -p 8080:8080 --rm my-app:dev