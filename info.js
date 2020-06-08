var ob = {
    walk: function () {
        console.log(this)
    }
}

//arr.filter()
var arr = [-1, 2, 3, 4, 5];
let ans = arr.filter(num => num > 0)
//console.log(ans)
// if there is one line we ignore the return statement



//arr.map() The map() method creates a new array populated with the results of
//calling a provided function on every element in the calling array.
const array1 = [1, 4, 9, 16];
// pass a function to map
const map1 = array1.map(x => x * 2);
//console.log(map1);
// expected output: Array [2, 8, 18, 32]


//FIRST CLASS CITIZENS/FIRST CLASS OBJECTS/Higher order functions
// In programming language design, a first - class citizen in a given programming language is an entity which
// supports all the operations generally available to other entities.These operations typically include being
// passed as an argument, returned from a function, modified, and assigned to a variable

//CALLBACK
// A callback function is a function that is passed as an argument to another function, to be “called back” at
// a later time.A function that accepts other functions as arguments is called a higher - order function, which
// contains the logic for when the callback function gets executed.It’s the combination of these two that allow
// us to extend our functionality.

//object destructuring
//The destructuring assignment syntax is a JavaScript expression that makes it possible to unpack values from 
//arrays, or properties from objects, into distinct variables.

// closures
//inner function preserves the variable of the outer function

// arrow funtions strictly remembers this keyword
//it inherits the context in which the code is defined
//it don't rebind the this keyword



//promise in js
//way to get out of callback hell

//node js wrapper(moduke wrapper function)
//uses IIFE (node does not execute code directly)