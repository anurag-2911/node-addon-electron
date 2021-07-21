import { test } from '../addons/addon';
//= import { calc, test } from '../addons';
import * as demo from '../addons/demo';

console.log('demo', demo);
console.log('demo.hello', demo.hello()); // world

// console.log('addon', addon);
console.log('test.hello', test.hello()); // world
console.log('test.foo', test.foo()); 

