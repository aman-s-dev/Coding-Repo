
// JavaScript Events are actions or occurrences that happen in the browser. They can be triggered by various user interactions or by the browser itself.
// Events :  onmouseover, onmouseout, mouseenter, mouseleave, oukeydown, onkeyup, onchange, onload, onsubmmit, onfocus, onblur

// Event Listener : when an event with a DOM element occurs, an event handler/listener executes a function 
//                : Syntax :  ""  element.addEventListener(event, function, useCapture);  ""
//                            useCapture (optional): A boolean value that specifies whether to use "Event Capturing"
let btn = document.getElementById("basicBtn")
btn.addEventListener("click", () => {
    document.body.style.backgroundColor = "red";
    alert("You Molester !!");
});

// Event Propagation defines the ORDER in which event handlers are triggered when an event occurs in the DOM
// Done using 2 mechanisms: Bubbling & Capturing
// Bubbling : Event flows from target component to parent & upward through all ancestor components. Default in DOM & React (no separate syntax)
// Capturing : Event flows from parent to child (outermost to innermost). just set Event Capturing in syntax of EL to 'true' 

// IMPORTANT : when the event occurs, compiler check for 'true' in every EL of that event in every ancestor of the element starting from the outermost 
// and then runs the ones with 'true' down to the target even when it does'nt have 'true' and then goes back upwards to run every other EL with no 'true'

