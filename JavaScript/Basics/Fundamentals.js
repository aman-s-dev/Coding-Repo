// ***CONSOLE object and its methods

console.log("Log is for logging info to the console object" + " And use + to log more than 1 variables/DS/datatype/objects....and thus the following is valid : " + 1)

console.error("logs error msg to the console. Typically in red")

console.warn("logs warning. Typically in yellow")

console.info('%clogs info but it can be styled','color: red')

console.table([{name:'A', age:NaN},{age:21, name:'B', sex: 'M'}])  // [] : whole table;   {} : 1 record

console.time('timer1');
(function(){
    for (let i=0; i<10000; i++){
        
    }
})();
console.timeEnd('timer1');

console.assert(5<2,"logs error if provided condition is false...helps in catching issues")

// console.group & .groupend, .count, .trace     


// ***Type Conversion and Coercion 
// Number(), parseInt(), parseFloat()
// String() or :
b=23+"";
console.log(b+2)    // gives 232
// Boolean() :  undefined, null, "" (empty string), false, NaN, and 0 to false, and all other values to true......
// and  Number(True/False) gives 1/0  or directly: 
let a = true + 1;
console.log(a)    // gives 2
// the '+' method is called implicit conversion or 'Coercion'.
// One more type of IC is Equality conversion
console.log(5=="5")     //gives true   // == checks the value only; === also checks the type
// console.log(5==="5")    // gives false



//                ***OPERATORs
// ***Arithmetic
// +, -, /, *, **, % 
// x++ :  increments and returns the value before incrementing; ++x :  increments and returns the value after incrementing
// similarly for x-- & --x
// Unary negation : x = 3; y = -x; => y = -3     // unary negation (-) can also convert non-numbers into numbers
// Unary plus : unary plus is the fastest and preferred way of converting something into a number : 
let uo = (+'2') + (+true) + (+false) + (+null); // 2 + 1 + 0 + 0
// BITWISE NOT(~) :  inverts all the bits of its operand, converting each 0 to 1 and each 1 to 0
let bn = 10; console.log(~bn); // -11
// Unary: typeOf
// Unary: void

// ***Assignment 
// AS OBVIOUS

// ***Comparison
console.log(2==="2"); // False  // (2=="2") gives true
// rest AS OBVIOUS

// ***Logical
// &&, ||, !

// ***Ternary 
const num = 111;
const status = num%37==0 ?  "Divisible" : "Not Divisible";

// ***Comma :  evaluates its operands from left to right sequentially and returns the value of the rightmost operand
let n1, n2;
const sum = (n1=53, n1=89, n1+n2);   

// ***Relational (in) : just as in python

// ***BigInt : Use n suffix to denote BigInt literals
const big1 = 123456789012345678901234567890n;
const big2 = 987654321098765432109876543210n;
console.log(big1 * big2);

// 