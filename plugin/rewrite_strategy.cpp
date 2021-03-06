/**
 * @file rewrite_strategy.cpp
 * @author kymowind@gmail.com
 * @date 2017/02/14 20:17:42
 *  
 **/

#include "rewrite_strategy.h"
#include "sub_log.h"
namespace sub_framework {

RewriteStrategy::RewriteStrategy() {
    _init();
}

RewriteStrategy::~RewriteStrategy() {
}

int RewriteStrategy::_process(const Request& req, Json::Value& root, const int& level) {
    root["rewrite"] = "yes";
    return SUB_OK;
}

int RewriteStrategy::_init() {    
    DEBUG_LOG("Init RewriteStrategy Okay!");
    return SUB_OK;
}

}
