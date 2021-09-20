#include<iostream>
using namespace std;

class PersonalData {
protected:
	string Name, Surname, Address, Mobile_no, Dob;
	PersonalData () {
	    Name = "Hello";
	    Surname = "NA";
	    Address = "NA";
	    Mobile_no = "NA";
	    Dob = "NA";
	}

    PersonalData(string name, string surname, string address,string mobile_no, string dob) {
	    Name = name;
	    Surname = surname;
	    Address = address;
	    Mobile_no = mobile_no;
	    Dob = dob;
	}

	void setPersonalData()
		{
			cout<<"\nEnter your first name : ";
			cin>>Name;
			cout<<"\nEnter your last name : ";
			cin>>Surname;
			cout<<"\nEnter your address : ";
			cin>>Address;
			cout<<"\nEnter your mobile no. : ";
			cin>>Mobile_no;
			cout<<"\nEnter your date of birth : ";
			cin>>Dob;
		}

    void printPersonalData()
    {
        cout<<"\nFirst Name : "<<Name;
        cout<<"\nLast Name : "<<Surname;
        cout<<"\nAddress : "<<Address;
        cout<<"\DOB : "<<Dob;
        cout<<"\Mobile No. : "<<Mobile_no;
    }
};

class Professional {
protected:
	string Name_of_organization, Job_profile, Project;
	Professional() {
	    Name_of_organization = "NA";
	    Job_profile = "NA";
	    Project = "NA";
	}
	Professional(string name_of_organization, string job_profile, string project) {
	    Name_of_organization = name_of_organization;
	    Job_profile = job_profile;
	    Project = project;
	}

	void setProfessionalData()
		{
			cout<<"\nEnter your organization : ";
			cin>>Name_of_organization;
			cout<<"\nEnter your job profile : ";
			cin>>Job_profile;
			cout<<"\nEnter your project : ";
			cin>>Project;
		}

    void printProfessionalData()
    {
        cout<<"\nOrganization : "<<Name_of_organization;
        cout<<"\nJob profile : "<<Job_profile;
        cout<<"\nProject : "<<Project;
    }
};

class Academic {
protected:
	int Year_of_passing;
	float Cgpa;
	string College_name, Branch;

	Academic() {
	    Year_of_passing = 0;
	    Cgpa = 0;
	    College_name = "NA";
	    Branch = "NA";
	}

	Academic(int year_of_passing, int cgpa, string college_name, string branch) {
	    Year_of_passing = 0;
	    Cgpa = 0;
	    College_name = "NA";
	    Branch = "NA";
	}

	void setAcademicData()
		{
			cout<<"\nEnter your college name : ";
			cin>>College_name;
			cout<<"\nEnter your branch : ";
			cin>>Branch;
			cout<<"\nEnter your year of passing : ";
			cin>>Year_of_passing;
			cout<<"\nEnter your CGPA : ";
			cin>>Cgpa;
		}

    void printAcademicData()
    {
        cout<<"\nCollege Name : "<<College_name;
        cout<<"\nAcademic Branch : "<<Branch;
        cout<<"\nAcademic Year of Passing : "<<Year_of_passing;
        cout<<"\nAcademic CGPA : "<<Cgpa;
    }
};

class Biodata:public PersonalData,public Professional,public Academic {
public:
    void setBiodata()
    {
        setPersonalData();
        setProfessionalData();
        setAcademicData();
    }

    void printBiodata()
    {
        printPersonalData();
        printProfessionalData();
        printAcademicData();

    }
};

int main() {
	Biodata b;
    b.setBiodata();
    b.printBiodata();
}
