// var a= document.querySelector("h1")
// a.innerHtml="hiii"
// a.style.color='red'
// a.style.backgroundColor='yellow'
// document.body.style.backgroundColor='black'

// let count=0;
// z.addEventListener("click",function(){
//     count++;
//     alert("button was clicked");
//     console.log(count)
// });
var z=document.querySelector("#b");
var c=document.querySelector(".circle")
// function change()
// {
// c.style.backgroundColor='red';
// }
// z.addEventListener("click",change);
// z.addEventListener("click", function () {
//   if (c.style.backgroundColor === "red") {
//     c.style.backgroundColor = "skyblue";
//   } else {
//     c.style.backgroundColor = "red";
//   }
// });
c.addEventListener("mouseover", function () {
    if (c.style.backgroundColor === "red") {
     c.style.backgroundColor = "skyblue";
  } else {
 c.style.backgroundColor = "red";
  }
  }
);