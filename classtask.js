let StudentName = "sumire";
let age = 19;
const course = "Btech.Cse";
var CollegeName = "xbc";
let Marks = 79;
const Birthyear = 2007;
StudentName  = "shree";
age = 21;
let city ="Paris";
let Sem = 1;
const FavSubject = "English";
console.log(StudentName);
console.log(age);
console.log(course);
console.log(CollegeName);
console.log(Marks);
console.log(Birthyear);
console.log(city);
console.log(Sem);
console.log(FavSubject);
function checkTemperature(temperature){
    if (temperature<20){
        return "Cold"
    }
    else if (temperature>=20 && temperature <= 30){
        return "Normal"
    }
    else{
        return "Hot"
    }
}
console.log(checkTemperature(30));
console.log(checkTemperature(20));
console.log(checkTemperature(19));
console.log(checkTemperature(29));


