var age=17;
if (age>=18 && age<50){
    console.log("Now you can")
}else if (age>=16 && age<18){
    console.log("Control for some time")
}

// FOR
for (var i=0; i<5; i++){
    console.log(i)
}

// FOR OF
var vowels = "aeiou";
for (v of vowels){
    console.log(v)
}

// FOR IN
var object = {
    length : 20,
    breadth : 30,
    height : 23
}
for (dim in object){
    console.log(object[dim])
}

// DO WHILE
var i = 0;
do{
    console.log("Atleast once");
    i++;
}while(i==0)

// Function
function sum (a,b) {
    let c = a+b;
    return c;
}
const diff = (a,b) => {
    let c = a-b;
    return c;
}

