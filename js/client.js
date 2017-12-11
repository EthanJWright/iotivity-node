var device = require("oic")("client");
device.on("resourcefound", function(event){
  console.log("found");
});

device.findResources();
