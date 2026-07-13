//                ******FUNCTIONS

//                ***Types of Functions: 

function sum (a,b) {  // NAMED function
    let c = a+b;
    return c;
}
console.log(sum(2,3))


const code = function() {   // ANONYMOUS
    return 'recovery';
}
console.log(code())
console.log(code)


const diff = function(a,b) {  // FUNCTION EXPRESSION (named/anonymous) (ca even be passed to another fxn)
    return a-b;
}
console.log(diff(4,5))
console.log(diff)


const sqr = n => n*n;    // ARROW function
console.log(sqr(12))
console.log(sqr);


(function(a=12, b=13){    // IMMEDIATELY INVOKED FUNCTION EXPRESSION
    let diff = b**2 - a**2
    console.log(diff); // Can do return
})();



// a CALLBACK FUNCTION is passed as an argument to another function and is executed after the completion of that function.
function outerfn(num, callback){
    let op = callback(num);
    return(op);
}
const callbak = n => (n*n)/7;
console.log(outerfn(237, callbak));



function Person(name, sex, age){     // CONSTRUCTOR function
    this.name = name; // 'this' is a keyword that refers to the object currently executing the function
    this.sex = sex;
    this.age = age;
}
const user = new Person('Aman', 'M', 20); // always called with the 'new' keyword
console.log(user.age);



// ASYNC function


// Generator function


// RECURSIVE function
function factorial(n) {
  if (n === 0) return 1;
  return n * factorial(n - 1);
}
console.log(factorial(5));


// HIGH-ORDER function either takes another function as a parameter or returns another function. These are common in JavaScript (e.g., map, filter, reduce)




function outer(a){       // NESTED(or Inner) function
    function inner(b){
        return a-b;
    }
    return inner;
}
const InnerVar = outer(13);    // the variable takes what the outer() is returning.....i.e., inner() & value of b is still not provided 
console.log(InnerVar(17))


// REST PARAMETER function
function sum(...nums) {    // the ... syntax is used to collect remaining arguments & when the number of arguments is unknown.
  return nums.reduce((a, b) => a + b, 0);
}
console.log(sum(1, 2, 3, 4, 5, 6, 7, 8, 9, 10));



//                ***Function Binding


//                ***Closure 


//                ***ITERATORs
const nums = [1,2,3,4,5];
const it = nums[Symbol.iterator]();
console.log(it.next())  // next() returns an Object: The method returns { value, done }
console.log(it.next())
for (let n of it){  // for...of
    console.log(n)
}
// custom iterator

// -------------------------------------------------------------------------------------------