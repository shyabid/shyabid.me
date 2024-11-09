#include "crow.h"

int main() {
    crow::SimpleApp app; 

    CROW_ROUTE(app, "/")([](){
        return "Hello world! this is my first c++ web server";
    });

    CROW_ROUTE(app, "/greet/<string>")([](std::string name){
        return "Hello, " + name + "!";
    });

    app.port(8080).multithreaded().run();
}
