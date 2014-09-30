var calc = require('./build/Release/calc.node');

var x = 1;
console.log(x + ' in square: ' + calc.getSquare(x).x);
var x = 2;
console.log(x + ' in square: ' + calc.getSquare(x).x);
var x = 3;
console.log(x + ' in square: ' + calc.getSquare(x).x);
var x = 4;
console.log(x + ' in square: ' + calc.getSquare(x).x);

console.log('no args: ' + calc.getSquare().x);
