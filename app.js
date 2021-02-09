// //Working with Modules.
// Shows how actually modules work
// const tutorial = require('./tutorial.js')
// console.log(tutorial);
// // console.log(tutorial(100000000000000000,19898888888));
// console.log(tutorial.sum(3,4));
// console.log(tutorial.PI);
// console.log(new tutorial.SomeMathObject());
//Event emitter modules lets us to inculcate the event driven modules inside out app.
const EventEmitter = require('events');
const eventEmitter = new EventEmitter();


eventEmitter.on('tutorial',()=>{
    console.log('tutorial event has ocurred');
})

// eventEmitter.emit('tutorial');

class Person extends EventEmitter{
    constructor(name){
        super();
        this.name = name;
    }
    getname(){
        return this.name;
    }
}

let pp = new Person('prabal');
let ps = new Person('christina');
pp.on('name',()=>{
    console.log('my name is'+pp.name);
});
ps.on('name',()=>{
    console.log(ps.name);
})
ps.emit('name');
pp.emit('name');
