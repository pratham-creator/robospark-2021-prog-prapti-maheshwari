import 'package:flutter/material.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
    home: Scaffold(
      appBar: AppBar(
        title: Text('Pratham Ghule'),
        backgroundColor: Colors.redAccent,
        centerTitle: true,
      ), 
      body: Center(
        child: Card(
          elevation: 50,
          shadowColor: Colors.black,
          color: Colors.black12,
          child: SizedBox(
            height: 480,
            width: 350,
            child: Padding(
              padding: const EdgeInsets.all(20.0),
              child: Column(
                children: [
                  CircleAvatar(
                    backgroundColor: Colors.black12,
                    radius: 108,
                    child: CircleAvatar(
                      backgroundImage: NetworkImage(
                          "https://scontent.fbom2-2.fna.fbcdn.net/v/t1.6435-9/100742233_859588391215829_6793211048934506496_n.jpg?_nc_cat=102&ccb=1-5&_nc_sid=09cbfe&_nc_ohc=vmDoPTFZyX4AX_MR-wg&_nc_oc=AQmAQGv4paauAWFnwGeY2Pe7bkVW_w7eAHe17TDkUTDqWya1peCxBstc0pUW-XYV0ps&_nc_ht=scontent.fbom2-2.fna&oh=768046d5986345d7a5a54a5e3fe98e7d&oe=617608E9"), //NetworkImage
                      radius: 100,
                    ), //CircleAvatar
                  ), 
                  SizedBox(
                    height: 10,
                  ),
                  Text(
                    'Pratham Ghule',
                    style: TextStyle(
                      fontSize: 30,
                      color: Colors.red,
                      fontWeight: FontWeight.w500,
                    ), //Textstyle
                  ), //Text
                  SizedBox(
                    height: 10,
                  ), 
                  Text(
                    'Keep motivating yourself,at the end your are the only one left.',
                    style: TextStyle(
                      fontSize: 20,
                      color: Colors.brown,
                      fontWeight: FontWeight.w500,
                    ),
                  ),
                  SizedBox(
                    height: 10,
                  ),
                  ButtonBar(
                    alignment:MainAxisAlignment.start,
                    children: [
                      RaisedButton(  
                        child: const Text('Follow'),  
                        onPressed: () {/* ... */},  
                      ),  
                      RaisedButton(  
                        child: const Text('Like'),  
                        onPressed: () {/* ... */},  
                      ),  
                    ],
                  ),
                ],  
              )
            )
          )
        )
      ),//AppBar
    ), //Scaffold
  ); //MaterialApp
  }
}
// 0FFC8E6C9
