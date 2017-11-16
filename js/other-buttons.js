// create an instance of the rpio-gpio-buttons object with pins 11 and 13 
var buttons = require('rpi-gpio-buttons')([19]);
console.log('running');
buttons.on('pressed', function (pin, err) {
  if(err){
    console.log('Error');
  }
    console.log('User pressed button on pin ', pin);
});
/*
// bind to the clicked event and check for the assigned pins when clicked 
buttons.on('clicked', function (pin) {
  switch(pin) { 
    // Down button on pin 19 was clicked 
    case 19:
    userClickedDown();
    break;
  }
});


function userClickedUp() {
  // do something here for up button 
  console.log('UP');
}
 
 
function userClickedDown() {
  // do something here for down button 
  console.log('DOWN');
}

*/
