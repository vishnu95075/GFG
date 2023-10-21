console.log("vishnu")
var l = "rahul"
for(let i in l){
    console.warn(l[i]);
}

setTimeout((e)=>{
    console.log(l);
},[5000]);