//===-- main.cpp --------------------------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
typedef int Foo;

int main() {
    // CHECK: (Foo [3]) array = {
    // CHECK-NEXT: (Foo) [0] = 1
    // CHECK-NEXT: (Foo) [1] = 2
    // CHECK-NEXT: (Foo) [2] = 3
    // CHECK-NEXT: }
    Foo array[3] = {1,2,3};
    return 0; //% self.filecheck("frame variable array --show-types --", 'main.cpp')
}
