// var a= document.querySelector("h1")
// a.innerHtml="hiii"
// a.style.color='red'
// a.style.backgroundColor='yellow'
// document.body.style.backgroundColor='black'
// console.log("hi");
// var str="abc";
// var res=str.includes("g");
// console.log(res);
// var arr1=[ ];
// var t=arr1.unshift(3);
// console.log(t);
// console.log(arr1);
// let a = typeof(arr1);
// console.log(a);
// let arr1=[1,2,3,4];
// let arr2=[6,7,8];
// let s = [...arr1,...arr2,10];
// console.log(s);
// console.log(arr1);
// let obj1={a:1,b:2};
// let obj2={name:'chananya',a:20};
// console.log(obj1);
// console.log(obj2);
// let n = {...obj1,...obj2};
// console.log(n);
// console.log(Array.isArray(arr1));
// console.log(Array.isArray(obj1));
// var q=[1,2,3];
// var w =[...q];
// w[0]=4;
// console.log(q)
// console.log(w)
// let obj={a:1,b:{c:2}};
// console.log(obj);
// for (var i = 0; i < 2; i++) {
//     setTimeout(() => console.log(i), 100);
// }
// for (let i = 0; i < 2; i++) {
//     setTimeout(() => console.log(i), 100);
// }
// for (const i = 0; i < 2; i++) {
//     setTimeout(() => console.log(i), 100);
// }
var x = 10;
function f1() {
    console.log(x);
    var x = 20;
}
f1();
