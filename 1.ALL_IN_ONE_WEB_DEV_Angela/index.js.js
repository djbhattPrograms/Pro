 alert("Hello");
//  2+5;
var tweet=prompt("Enter tweet (0-140)");
var tweetLength=tweet.length;
alert("The length of your tweet: "+ tweetLength);
var tweetUnder140=tweet.slice(0,140);
alert(tweetUnder140);
alert(tweetUnder140.toUpperCase());
var name=prompt("Enter Your Name: ");
var firstLetterOfName=name.slice(0,1);
var upperCaseFirstLetter=firstLetterOfName.toUpperCase();
// var restOfName=name.slice(1);
alert("Hello " + upperCaseFirstLetter+name.slice(1).toLowerCase());
var dogAge=prompt("Enter Your Dog's Age ");
alert("The human Age of your dog is "+((dogAge-2)*4+21))
var a=3;
var b=a++;
b;
alert(b);

function add() {
    return 5+5;
    
}
console.log(add()) ;

function getMilk() {   
  console.log("leaveHouse");
  console.log("moveRight");
  console.log("moveRight");
  console.log("moveUp");
  console.log("moveUp");
  console.log("moveUp");
  console.log("moveUp");
  console.log("moveRight");
  console.log("moveRight");
  console.log("moveLeft");
  console.log("moveLeft");
  console.log("moveDown");
  console.log("moveDown");
  console.log("moveDown");
  console.log("moveDown");
  console.log("moveLeft");
  console.log("moveLeft");
  console.log("enterHouse");
}

getMilk();


function sum(a,b) {
    return a+b;
}

console.log(sum(10000000,20000000));


function howManyBottles(money){
    return Math.floor(money/1.5);
}
console.log(howManyBottles(100));

function lifeInWeeks(age) {
    
/************Don't change the code above************/    
    
    var remainingAge=90-age;
    var months=remainingAge*12;
    var weaks=remainingAge*52;
    var days=remainingAge*365;
    console.log("You have "+days+" days, "+weaks+" weaks, and "+months+" months left.");
    
    
    
    
    
    
    
/*************Don't change the code below**********/
}

lifeInWeeks(51);

var n =Math.floor((Math.random()*6)+1);
console.log(n);

var name1=prompt("Enter Your Name: ");
var name2=prompt("Enter Your Name: ");
var percentage=alert("Your Love sorce: "+Math.floor((Math.random()*100)+1)+" %");

function isLeap(year) {

    if (year%4===0) {
        if (year%100===0) {
            if (year%400===0) {
                return "Leap year.";
                
            } else {
                return"Not Leap Year.";
            }
            
        } else {
            return"Leap Year.";
        }
        
    } else {
        return "Not Leap Year.";
        
    }
    
}

// ARRAYS

var guestList=["DEBRAJ","DIYA","HIYA","RAMA","APPI","AMALA","MADHU"];
var name=prompt("Enter Your Name ");
if (guestList.includes(name.toUpperCase())) {
    alert("Welcome");
} else {
    alert("Sorry,You are Not invited");
}

  
var list=[];
var count=1;
function fizzBuzz() {
    while (count<=10) {
        if (count % 5===0 && count % 3===0) {
                list.push("FizzBuzz");
         }
        else if (count % 5 ===0) {
                list.push("Buzz");
         }
        else if (count%3 ===0) {
                list.push("Fizz");
        }
        else{
                list.push(count);
        }
        count++
        
    // console.log(list);    
    }
    console.log(list);

}

fizzBuzz();

// in the above if we take '%3' or '%5' first then it won't check the condition of both '%3'and'%5'


function whosPaying(names) {
    
/******Don't change the code above*******/
    var arr=["Angela", "Ben", "Jenny", "Michael", "Chloe"];
    var number = arr.length;
    var randomIndex=Math.floor(Math.random()*number);
    var randomName=arr[randomIndex];
    console.log(randomName+" is going to buy lunch today!");
    
    
    
    
    


/******Don't change the code below*******/    
}

whosPaying();



// for loop

for (var index = 0; index <7; index++) {
    console.log(index);
    
    
}

var list=[];

function fizzBuzz() {
    for (var count = 0; count < 100; count++) {
        if (count % 5===0 && count % 3===0) {
                list.push("FizzBuzz");
         }
        else if (count % 5 ===0) {
                list.push("Buzz");
         }
        else if (count%3 ===0) {
                list.push("Fizz");
        }
        else{
                list.push(count);
        }
        
        
    // console.log(list);    
    }
    console.log(list);

}

fizzBuzz();


function fibonacci(n) {
    var arr=[];
    if (n===1) {
        arr=[0];   
    }
    else if(n===2){
        arr=[0, 1];      
    }else{
        arr=[0, 1]; 
        for (var i = 2; i < n; i++) {
     
        arr.push[arr[arr.length-2]+arr[arr.length-1]];
    }
        
    }

    console.log(arr);    
}

