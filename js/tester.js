var Gpio = require('onoff').Gpio
var sleep = require('sleep');
var pushButton = new Gpio(19, 'in', 'both');

pushButton.watch(function(err,value){
  if(err){
    console.log("error");
    return;
  }
  if(!value){
    console.log('Button pushed');
    sleep.msleep(200);
  }

});
