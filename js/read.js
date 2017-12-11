var fs = require('fs');

fs.readFile('data.txt', 'utf8', function(err, contents){
  console.log(contents);
});
console.log('after read file');
