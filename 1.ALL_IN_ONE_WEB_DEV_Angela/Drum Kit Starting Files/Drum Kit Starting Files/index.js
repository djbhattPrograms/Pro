for (var index = 0; index < document.querySelectorAll(".drum").length; index++) {
    document.querySelectorAll(".drum")[index].addEventListener("click", function () {
        // index give s the number of the button
        // this.innerHTML gives the name of the button
        makesound(this.innerHTML);
        buttonAnimation(this.innerHTML);
    });
}
// it tracks all the keys on the key board
// but the function specifies the property
//event list all the possible information related to keys
document.addEventListener("keydown",function(event) {
    makesound(event.key);
    buttonAnimation(event.key);
     
})
function makesound(key){
    switch (key) {
        case "w":
            var tom1 = new Audio("sounds/tom-1.mp3");
            tom1.play();
            break;
        case "a":
            var tom2 = new Audio("sounds/tom-2.mp3");
            tom2.play();
            break;
        case "s":
            var tom3 = new Audio("sounds/tom-3.mp3");
            tom3.play();
            break;
        case "d":
            var tom4 = new Audio("sounds/tom-4.mp3");
            tom4.play();
            break;
        case "j":
            var snare = new Audio("sounds/snare.mp3");
            snare.play();
            break;
        case "k":
            var crash = new Audio("sounds/crash.mp3");
            crash.play();
            break;
        case "l":
            var kick = new Audio("sounds/kick-bass.mp3");
            kick.play();
            break;


        default:
            // alert("NOT SPECIFIED");
            break;
    }
}
function buttonAnimation(currentkey){
    var activeButton=document.querySelector("."+currentkey);
    activeButton.classList.add("pressed");
    // After 100ms pressed class is removed
    setTimeout(function(){
        activeButton.classList.remove("pressed");
    },100);
    
}
