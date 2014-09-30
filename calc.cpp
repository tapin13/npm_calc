#include <node.h>
#include <v8.h>
#include <stdio.h>
#include <stdlib.h>

using namespace v8;

Handle<Value> getSquare(const Arguments& args) {
    HandleScope scope;
    
    if(args.Length() < 1) {
        ThrowException(Exception::TypeError(String::New("Wrong number of arguments")));
        return scope.Close(Undefined());
    }
    
    Local<Number> x = args[0]->ToNumber();

    Local<Object> obj = Object::New();
    obj->Set(String::NewSymbol("x"), Number::New( x->IntegerValue() * x->IntegerValue()));
    return scope.Close(obj);
}

void init(Handle<Object> target) {
    target->Set(String::NewSymbol("getSquare")
    , FunctionTemplate::New(getSquare)->GetFunction());
}

NODE_MODULE(calc, init);