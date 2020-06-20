
//var is function/global scoped 
//let is blocked scoped


var a = 4;
if (a > 0) {
    let a = 3;
    console.log(a);
}
console.log(a);


var a = 4;
if (a > 0) {
    var a = 3;
    console.log(a);
}
console.log(a);


let a = 4;
if (a > 0) {
    let a = 3;
    console.log(a);
}
console.log(a);

