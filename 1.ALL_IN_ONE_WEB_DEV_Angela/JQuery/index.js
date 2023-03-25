// $("h1").css("color","red");
// alert("hello");
// $("h1").addClass("big-title");

// BY javescript 

// for (var index = 0; index < 5; index++) {
//     document.querySelectorAll("button")[index].addEventListener("click",function(){
//         document.querySelector("h1").style.color="purple";
//     })
    
// }

// J Query

$("button").click(function(){
    $("h1").css("color","purple");
    $("h1").removeClass("center");
    $("h1").text("BYE");
    $("button").html("<em>Reload me</em>")


});

$(document).keydown(function(event){
   var key= event.key;
   $("h1").text(key);
});
