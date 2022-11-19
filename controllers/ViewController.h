#pragma once

#include <drogon/HttpController.h>

using namespace drogon;

class ViewController : public drogon::HttpController<ViewController>
{
  public:
    METHOD_LIST_BEGIN
    // use METHOD_ADD to add your custom processing function here;
    // METHOD_ADD(ViewController::get, "/{2}/{1}", Get); // path is /ViewController/{arg2}/{arg1}
    // METHOD_ADD(ViewController::your_method_name, "/{1}/{2}/list", Get); // path is /ViewController/{arg1}/{arg2}/list
//     ADD_METHOD_TO(ViewController::index, "/", Get); // path is /absolute/path/{arg1}/{arg2}/list
    ADD_METHOD_TO(ViewController::index, "/home", Get); // path is /absolute/path/{arg1}/{arg2}/list

    METHOD_LIST_END
    // your declaration of processing function maybe like this:
     void index(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback);
    // void your_method_name(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback, double p1, int p2) const;
};
