// Copyright 2016 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// This mock sensor implementation triggers an event with some data every once in a while

/* RPI Interface */
var Gpio = require('onoff').Gpio
var sleep = require('sleep');
var pushButton = new Gpio(19, 'in', 'both');

// Return a random integer between 0 and @upperLimit
function randomInteger( upperLimit ) {
    return Math.round( Math.random() * upperLimit );
}

var _ = {
    extend: require( "lodash.assignin" ),
    bind: require( "lodash.bind" )
};

var possibleStrings = [
        "Helsinki",
        "Espoo",
        "Tampere",
        "Oulu",
        "Mikkeli",
        "Ii"
    ];

var bound;
var MockSensor = function MockSensor() {
    function trigger() {
      this.emit( "change", this.currentData() );
      bound = _.bind( trigger, this);
//        setTimeout( _.bind( trigger, this ), randomInteger( 1000 ) + 1000 );
    }
    if ( !this._isMockSensor ) {
        return new MockSensor();
    }
  bound = _.bind( trigger, this);
//    setTimeout( _.bind( trigger, this ), randomInteger( 1000 ) + 1000 );
};

pushButton.watch(function(err, value){
  if(err){
    console.log('Error');
    return;
  }
  if(!value){
    console.log('Button pushed');
    bound();
    sleep.msleep(200);
  }
});


require( "util" ).inherits( MockSensor, require( "events" ).EventEmitter );

_.extend( MockSensor.prototype, {
    _isMockSensor: true,
    currentData: function() {
        return {
            someValue: Math.round( Math.random() * 42 ),
            someOtherValue: possibleStrings[ randomInteger( possibleStrings.length - 1 ) ]
        };
    }
} );

module.exports = MockSensor;

