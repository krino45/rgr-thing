FROM gcc:latest
WORKDIR /app

COPY . .
RUN g++ -o greatest_app 1.cpp

CMD ["./greatest_app"]
