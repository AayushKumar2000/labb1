 class fun{


    constructor(name,age)
  {
    this.name=name;
    this.age=age;
  }

details()
{
  console.log(`My name is ${this.name} and my age is ${this.age}`);

  }

  get vote(){
    if(this.age>=18)
    console.log(`${this.name} can vote`);
    else
    console.log(`${this.name} cannot vote`);
  }

  set change_name(n){
    this.name=n;
}

set change_age(a){
  this.age=a;
}




}

// var su =new fun('Aayush',18);
// console.log(su.details());
// console.log(su.vote);
// su.change_age=15;
// console.log(su.details());
// console.log(su.vote);


class student extends fun{
  // constructor(n,a,c){
  //   super(n,a);
  //   this.class=c;
  // }
get full_details(){
  console.log(`My name is ${this.name} and my age is ${this.age}`);
}

static parent(p){
  console.log(`His Father name is ${p.name} and his age is ${p.age} `);

}
}

var s=new student("kumar",20);
console.log(s.full_details);
// s.change_name='ajay'
// console.log(s.full_details);
// console.log(s.vote);
var w=new student("Pradeep kumar",40);
student.parent(w);
