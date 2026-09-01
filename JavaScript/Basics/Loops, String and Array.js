let age=17;
if (age>=18 && age<50){
    console.log("Now you can")
}else if (age>=16 && age<18){
    console.log("Control for some time")
}


//           ****LOOPs
// FOR
for (let i=0; i<5; i++){
    console.log(i)
}

// FOR OF
let vowels = "aeiou";
for (v of vowels){
    console.log(v)
}

// FOR IN
let object = {
    length : 20,
    breadth : 30,
    height : 23
}
for (dim in object){
    console.log(object[dim])
}

// FOREACH
x = [1,2,3,4];
x.forEach(i => console.log(i**4)); // or even a function


// DO WHILE
let i = 0;
do{
    console.log("Atleast once");
    i++;
}while(i==0)



//               ****STRINGs
let s1 = "using double quotes"
let s2 = 'using single quotes'
let s = new String("using constructor")   // creates a string object instead of a primitive string. It is generally not recommended because it can cause unexpected behavior in comparisons
let si = `embed expressions within backticks for dynamic string creation : ${2367%3==0}` // Template Literals (String Interpolation : ${})
let mls = `this is a
multiline
string`;


console.log(mls[13]);  // t not i bcz of newline character possessing one index 
console.log(mls.length);  // 26 not 24 bcz of 2 newline characters 
let conc = s1 + ' & ' + s2;
conc += s;
let esc = " \' \" \\\ \` "  // backslash ( \ ) is an escape character   
let bl = "Break a long string";
+ " using addition (+)"
+ " Cuz it's valid";
console.log(mls.substring(0,10));
console.log(mls.toUpperCase());   // similarly, .toLowerCase()
console.log(si.indexOf('for'));
let rs = si.replace(/i/g, "R");  // g flag helps replacing substring's all occurences
let tws = '  trim whitespaces  '.trim();   // from both ends of the string
let comp = s1 == s2.replace('single', 'double');
console.log(s1.localeCompare(s2));  // Compares lexicographically; +1 if s1>s2, -1 if s1<s2, 0 id s1=s2 



//              ***ARRAYs
// Arrays can hold any type of data-such as numbers, strings, objects, or even other arrays...aur vo bhi ALL OF THOSE AT ONCE
let any = [7, 'sync', [1,8,27]];     // even objects !
let pr = [2,3,5,7,11,13,17];
let fib = new Array(1,1,2,3,5,8);  // Array constructor    // Use the array literal method for efficiency, readability, and speed


console.log(pr[0]);
console.log(pr.length);
pr[pr.length-1]=9973; // Updating
pr.push(67); // Add to end
pr.unshift(101);  // Add to beginning
let last = pr.pop(); // removes and returns the last
let fst = pr.shift(); // removes and returns the first
pr.splice(3,2,43,19,997);  // removes & replaces/adds  // array.splice(startIndex, deleteCount, item1, item2, ..., itemN);  
pr.splice(5,1);  // providing elements-to-add is OPTIONAL
pr.length = 12; console.log(pr); // length increment 
pr.length = 6; console.log(pr); //length decrement
for (let i = 0; i < fib.length; i++) {   // traversing  
    console.log(fib[i])
}
pr.forEach(function sqr(p){
    console.log(p**2);
});
let concArrays = pr.concat(fib);  // this is the only Concatenation method
console.log(pr.toString());
// typeof


// --------------------------------------------------------------------------------------------------------------------