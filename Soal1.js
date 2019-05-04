var obj = {};

	var name = 'Ramsyawaly';
	var address = 'Jalan Siliwangi No.69';
	var hobbies = ['Sport','Programming','Swimming','Music'];
	var is_married = false ;
	var school = 'SMK Negeri 1 Cianjur' ;
	var skills = new Array('Dekstop','Web','Android');

	function biodata(){

		obj.Name = name;
		obj.Address = address;
		obj.Hobbies = hobbies;
		obj.IsMarried = is_married;
		obj.School = school;
		obj.Skills = skills;

		return JSON.stringify(obj, ''); 

	}
	console.log(biodata());