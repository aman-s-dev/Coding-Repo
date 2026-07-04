// ***CONSOLE object and its methods

console.log("Log is for logging info to the console object")

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



