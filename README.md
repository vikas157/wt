EXPERIMENT NO.1
INSTALLING AND RUNNING APPLICATIONS ON ANDROID STUDIO
Step 1 - System Requirements
The required tools to develop Android applications are open source and can be 
downloaded from the Web. Following is the list of software's you will need before 
you start your Android application programming.
Java JDK5 or later version
Java Runtime Environment (JRE) 6 Android Studio
Step 2 - Setup Android Studio
Android Studio is the official IDE for android application development.It works 
based on IntelliJ IDEA, You can download the latest version of android studio from 
Android Studio 2.2 Download, If you are new to installing Android Studio on 
windows,you will find a file, which is named as android-studio-bundle-
143.3101438-windows.exe.So just download and run on windows machine according 
to android studio wizard guideline.
If you are installing Android Studio on Mac or Linux, You can download the 
latest version from Android Studio Mac Download,or Android Studio Linux 
Download, check the instructions provided along with the downloaded file for Mac 
OS and Linux. This tutorial will consider that you are going to setup your 
environment on Windows machine having Windows 8.1 operating system. 
Installation
So let's launch Android Studio.exe,Make sure before launch Android Studio, Our 
Machine should required installed Java JDK. To install Java JDK,take a references of 
Android environment setup
Once you launched Android Studio, its time to mention JDK7 path or later version in 
android studio installer.
1
2
Below the image initiating JDK to android SDK
Need to check the components, which are required to create applications, below the image has 
selected Android Studio, Android SDK, Android Virtual Machine and performance(Intel chip).
3
Need to specify the location of local machine path for Android studio and Android SDK, 
below the image has taken default location of windows 8.1 x64 bit architecture.
Need to specify the ram space for Android emulator by default it would take 512MB of local 
machine RAM.
4
At final stage, it would extract SDK packages into our local machine, it would take a while 
time to finish the task and would take 2626MB of Hard disk space.
After done all above steps perfectly, you must get finish button and it gonna be open android 
studio project with Welcome to android studio message as shown below
5
You can start your application development by calling start a new android studio project. in a 
new installation frame should ask Application name, package information and location of the 
project.
6
After entered application name, it going to be called select the form factors your application 
runs on, here need to specify Minimum SDK, in our tutorial, I have declared as API23: 
Android 6.0(Mashmallow)
7
The next level of installation should contain selecting the activity to mobile, it specifies the 
default layout for Applications
At the final stage it going to be open development tool to write the application code.
8
Step 3 - Create Android Virtual Device
To test your Android applications, you will need a virtual Android device. So before we start 
writing our code, let us create an Android virtual device. Launch Android AVD Manager 
Clicking AVD_Manager icon as shown below
After Click on a virtual device icon, it going to be shown by default virtual devices which are 
present on your SDK, or else need to create a virtual device by clicking Create new Virtual 
device button
9
If your AVD is created successfully it means your environment is ready for Android 
application development. If you like, you can close this window using top-right cross button. 
Better you re- start your machine and once you are done with this last step, you are ready to 
proceed for your first Android example but before that we will see few more important 
concepts related to Android Application Development.
10




2. DEVELOPMENT OF HELLO WORLD APPLICATION
AIM: To design an android application to display Hello World
First step is to create a simple Android Application using Android studio. When you click on 
Android studio icon, it will show screen as shown below
You can start your application development by calling start a new android studio project. in a 
new installationframeshouldaskApplicationname,packageinformationandlocationof
theproject.−
11
Configure the Hello World Project Details
We'll finish creating the project by configuring some details about its name, location, and the 
API version it
Change the name of the application. Change the default Project location to your preferred 
directory or just leave it as the default location.
On the minimum API level, ensure that API 15: Android 4.0.3 IceCreamSandwich is set as 
the Minimum SDK. This ensures that your application runs on almost all devices.
12
The next level of installation should contain selecting the activity to mobile, it specifies the 
default layout for Applications.
13
SOURCE CODE :
The Main Activity File
The main activity code is a Java file MainActivity.java. This is the actual application file 
which ultimately gets converted to a Dalvik executable and runs your application
package com.example.helloworldapplication;
import androidx.appcompat.app.AppCompatActivity; import android.os.Bundle;
public class MainActivity extends AppCompatActivity {
@Override
protected void onCreate(Bundle savedInstanceState) { super.onCreate(savedInstanceState); 
setContentView(R.layout.activity_main);
}}
The Layout File
The activity_main.xml is a layout file available in res/layout directory, that is referenced by 
your application when building its interface. You will modify this file very frequently to 
change the layout of your application. For your "Hello World!" application, this file will have 
following content related to default layout −
<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android" 
xmlns:tools="http://schemas.android.com/tools" android:layout_width="match_parent" 
android:layout_height="match_parent" >
<TextView android:layout_width="wrap_content" android:layout_height="wrap_content" 
android:layout_centerHorizontal="true" android:layout_centerVertical="true" 
android:padding="@dimen/padding_medium" android:text="@string/hello_world" 
tools:context=".MainActivity" />
I )Running app on Phone:
Connect your Phone to Computer
Plug in your device to your computer with a USB cable. If you're developing on Windows, 
you might need to install this universal ADB USB driver or find your specific USB driver for 
your device.
Enable USB Debugging
14
The next step is to enable USB debugging so your phone can interact with your computer in a 
developer mode.
The following steps are needed:
1. (Windows Only) Install this ADB Driver
2. Plug-in your Android Device to Computer via USB
3. Open the "Settings" App on the Device
4. Scroll down to bottom to find "About phone" item
5. Scroll down to bottom to find "Build number" section
6. Tap on "Build Number" 7 times in quick succession
7. You should see the message "You are now a developer!"
8. Go back to main "Settings" page
9. Scroll down bottom to find "Developer options" item
10. Turn on "USB Debugging" switch and hit "OK"
11.Unplug and re-plug the device
12. Dialog appears "Allow USB Debugging?"
13. Check "Always allow from this computer" and then hit "OK"
Running your App
Now, we can launch apps from Android Studio onto our device:
1. Select one of your projects and click "Run" from the toolbar.
2. In the "Choose Device" window that appears, select the "Choose a running device" radio
button, select the device, and click OK.
II) Running app on Emulator(AVD)
15
To run the app from Android studio, open one of your project's activity files and click Run 
icon from the tool bar. Android studio installs the app on your AVD and starts it and if 
everything is fine with your set-up and application, it will display following Emulator window
−Once Gradle finishes building, Android Studio should install the app on your connected 
device and start i
16




3. Create an application that takes the name from a text box and shows hello message 
along with the name entered in text box, when the user clicks the OK button.
Code for MainActivity.java
package com.example.it.snist; import android.os.Bundle;
import android.support.v7.app.AppCompatActivity; import android.view.View;
import android.widget.Button; import android.widget.EditText; import 
android.widget.TextView;
public class MainActivity extends AppCompatActivity {
// These are the global variables EditText editName, editPassword; TextView result;
Button buttonSubmit, buttonReset;
@Override
protected void onCreate(Bundle savedInstanceState) { super.onCreate(savedInstanceState); 
setContentView(R.layout.activity_main);
editName = (EditText) findViewById(R.id.editName); editPassword = (EditText) 
findViewById(R.id.editPassword); result = (TextView) findViewById(R.id.tvResult); 
buttonSubmit = (Button) findViewById(R.id.buttonSubmit); buttonReset = (Button) 
findViewById(R.id.buttonReset);
/*
Submit Button
*/
buttonSubmit.setOnClickListener(new View.OnClickListener() {
@Override
public void onClick(View v) {
String name = editName.getText().toString();
String password = editPassword.getText().toString(); result.setText("Name:\t" + name + 
"\nPassword:\t" + password );
}
});
17
/*
Reset Button
*/
buttonReset.setOnClickListener(new View.OnClickListener() { @Override
public void onClick(View v) { editName.setText(""); editPassword.setText(""); 
result.setText(""); editName.requestFocus();
}
});
}}
activity_main.xml
<?xml version="1.0" encoding="utf-8"?>
<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android" 
xmlns:app="http://schemas.android.com/apk/res-auto" 
xmlns:tools="http://schemas.android.com/tools" android:layout_width="match_parent" 
android:layout_height="match_parent"
android:background="#FFFF8D" tools:context="com.example.it.snist.MainActivity">
<TextView android:id="@+id/textView"
android:layout_width="wrap_content" android:layout_height="wrap_content" 
android:layout_alignParentLeft="true" android:layout_alignParentStart="true" 
android:layout_alignParentTop="true" android:text="NAME" android:textSize="20sp" 
android:layout_margin="20dp" />
<TextView android:id="@+id/textView2"
android:layout_width="wrap_content" android:layout_height="wrap_content" 
android:textSize="20sp" android:text="PASSWORD" android:layout_marginTop="38dp" 
android:layout_below="@+id/textView" android:layout_alignLeft="@+id/textView" 
android:layout_alignStart="@+id/textView" />
<EditText android:id="@+id/editName"
android:layout_width="wrap_content" android:layout_height="wrap_content" 
android:ems="10" android:inputType="textPersonName" android:hint="Enter Name" 
android:layout_alignParentTop="true" android:layout_alignParentRight="true" 
android:layout_alignParentEnd="true" android:layout_alignLeft="@+id/editPassword" 
android:layout_alignStart="@+id/editPassword" />
<EditText android:id="@+id/editPassword" android:layout_width="wrap_content" 
android:layout_height="wrap_content" android:ems="10"
android:hint="Enter Password" android:inputType="textPassword" 
android:layout_alignBottom="@+id/textView2" android:layout_alignParentRight="true" 
android:layout_alignParentEnd="true" android:layout_marginRight="18dp" 
android:layout_marginEnd="18dp" />
18
<Button android:id="@+id/buttonSubmit" android:layout_width="wrap_content" 
android:layout_height="wrap_content" android:layout_alignParentLeft="true" 
android:layout_alignParentStart="true"
android:layout_below="@+id/textView2" android:layout_marginTop="20dp" 
android:text="SUBMIT" />
<Button android:id="@+id/buttonReset"
android:layout_width="wrap_content" android:layout_height="wrap_content" 
android:text="RESET" android:layout_alignBaseline="@+id/buttonSubmit" 
android:layout_alignBottom="@+id/buttonSubmit" android:layout_centerHorizontal="true" />
<TextView android:id="@+id/tvResult"
android:layout_width="wrap_content"
android:layout_height="wrap_content" android:layout_alignParentBottom="true" 
android:layout_alignParentLeft="true" android:layout_alignParentStart="true" 
android:layout_marginBottom="143dp" android:textSize="30sp" />
</RelativeLayout>
19




4. Create a screen that has input boxes for User Name, Password, Address, Gender(radio 
buttons for male and female), Age (numeric) and a Submit button. On clicking the submit 
button, print all the data below the Submit Button (use any layout)
Code for MainActivity.java
package com.example.it2.snist; import android.os.Bundle;
import android.support.v7.app.AppCompatActivity; import android.view.View;
import android.widget.Button; import android.widget.EditText; import 
android.widget.TextView;
public class MainActivity extends AppCompatActivity {
// These are the global variables
EditText editName, editPassword,editAddress,editAge; TextView result;
RadioGroup radioGenderGroup;
ivate RadioButton radioGenderButton; Button buttonSubmit;
@Override
protected void onCreate(Bundle savedInstanceState) { super.onCreate(savedInstanceState); 
setContentView(R.layout.activity_main);
editName = (EditText) findViewById(R.id.editName); editPassword = (EditText) 
findViewById(R.id.editPassword); editAddress = (EditText) findViewById(R.id.editAddres); 
editAge = (EditText) findViewById(R.id.editAge);
radioSexGender = (RadioGroup) findViewById(R.id.radioGender);
result = (TextView) findViewById(R.id.tvResult); buttonSubmit = (Button) 
findViewById(R.id.buttonSubmit);
buttonSubmit.setOnClickListener(new View.OnClickListener() {
@Override
public void onClick(View v) {
String name = editName.getText().toString();
String password = editPassword.getText().toString(); String address= 
editAddress.getText().toString();
int selectedId = radioGenderGroup.getCheckedRadioButtonId();
// find the radiobutton by returned id
gen = (RadioButton) findViewById(selectedId);
20
result.setText("Name:\t" + name + "\nPassword:\t" + password+ "\nAddredd:\t" + address+ 
"\nAGE:\t" + age+ "\nGender:\t" + gen);
}
});
}}
activity_main.xml
<?xml version="1.0" encoding="utf-8"?>
<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android" 
xmlns:app="http://schemas.android.com/apk/res-auto" 
xmlns:tools="http://schemas.android.com/tools" android:layout_width="match_parent" 
android:layout_height="match_parent"
android:background="#FFFF8D" tools:context="com.example.it2.snist.MainActivity">
<TextView android:id="@+id/textView"
android:layout_width="wrap_content" android:layout_height="wrap_content" 
android:layout_alignParentLeft="true" android:layout_alignParentStart="true" 
android:layout_alignParentTop="true" android:text="NAME" android:textSize="20sp" 
android:layout_margin="20dp" />
<TextView android:id="@+id/textView2"
android:layout_width="wrap_content" android:layout_height="wrap_content" 
android:textSize="20sp" android:text="PASSWORD" android:layout_marginTop="38dp" 
android:layout_below="@+id/textView"
android:layout_alignLeft="@+id/textView" android:layout_alignStart="@+id/textView" />
<EditText android:id="@+id/editName"
android:layout_width="wrap_content" android:layout_height="wrap_content" 
android:ems="10" android:inputType="textPersonName" android:hint="Enter Name" 
android:layout_alignParentTop="true" android:layout_alignParentRight="true" 
android:layout_alignParentEnd="true" android:layout_alignLeft="@+id/editPassword" 
android:layout_alignStart="@+id/editPassword" />
<EditText android:id="@+id/editPassword" android:layout_width="wrap_content" 
android:layout_height="wrap_content" android:ems="10"
android:hint="Enter Password" android:inputType="textPassword" 
android:layout_alignBottom="@+id/textView2" android:layout_alignParentRight="true" 
android:layout_alignParentEnd="true" android:layout_marginRight="18dp" 
android:layout_marginEnd="18dp" />
<EditText
android:id="@+id/editAddress" android:layout_width="wrap_content" 
android:layout_height="wrap_content" android:layout_marginRight="18dp" 
android:layout_marginEnd="18dp" />
21
<EditText
android:id="@+id/editAge" android:layout_width="wrap_content" 
android:layout_height="wrap_content"
android:layout_marginRight="18dp" android:layout_marginEnd="18dp" />
<RadioGroup
android:id="@+id/radioGender" android:layout_width="wrap_content" 
android:layout_height="wrap_content" >
<RadioButton android:id="@+id/radioMale" android:layout_width="wrap_content"
android:layout_height="wrap_content" android:text="@string/radio_male" 
android:checked="true" />
<RadioButton android:id="@+id/radioFemale" android:layout_width="wrap_content" 
android:layout_height="wrap_content" android:text="@string/radio_female" />
</RadioGroup>
<Button android:id="@+id/buttonSubmit" android:layout_width="wrap_content" 
android:layout_height="wrap_content" android:layout_alignParentLeft="true" 
android:layout_alignParentStart="true"
android:layout_below="@+id/textView2" android:layout_marginTop="20dp" 
android:text="SUBMIT" />
<TextView android:id="@+id/tvResult"
android:layout_width="wrap_content" android:layout_height="wrap_content" 
android:layout_alignParentBottom="true" android:layout_alignParentLeft="true" 
android:layout_alignParentStart="true" android:layout_marginBottom="143dp" 
android:textSize="30sp" /></RelativeLayout>
22




5. Design an android application to create page using Intent and one Button and pass the Values 
from one Activity to second Activity.
AIM: To design an android application to design a page using Intent and one Button and pass 
the Values from one Activity to second Activity.
Main Activity Java File
package com.example.transferofdata; import android.os.Bundle;
import android.app.Activity; import android.content.Intent; import android.view.Menu; import
android.view.View;
import android.view.View.OnClickListener; import android.widget.Button;
import android.widget.EditText;
public class MainActivity extends Activity
{
@Override
protected void onCreate(Bundle savedInstanceState)
{
super.onCreate(savedInstanceState); setContentView(R.layout.activity_main);
final EditText et=(EditText)findViewById(R.id.editText1); final EditText 
et1=(EditText)findViewById(R.id.editText2); Button 
send=(Button)findViewById(R.id.button1); send.setOnClickListener(new OnClickListener()
{
@Override
public void onClick(View arg0)
{
String s=et.getText().toString(); String s1=et1.getText().toString();
Intent it=new Intent(MainActivity.this,Second.class); it.putExtra("uname", s);
it.putExtra("pwd", s1); startActivity(it);
}
});
}
@Override
public boolean onCreateOptionsMenu(Menu menu)
{
getMenuInflater().inflate(R.menu.main, menu); return true;
}
23
}
SecondActivity.java
package com.example.transferofdata; import android.os.Bundle;
import android.app.Activity; import android.view.Menu; import android.widget.TextView;
public class Second extends Activity
{
@Override
protected void onCreate(Bundle savedInstanceState)
{
super.onCreate(savedInstanceState); setContentView(R.layout.activity_second);
TextView tv=(TextView)findViewById(R.id.textView1); TextView 
tv1=(TextView)findViewById(R.id.textView2); 
tv.setText(getIntent().getExtras().getString("uname")); 
tv1.setText(getIntent().getExtras().getString("pwd"));
}
@Override
public boolean onCreateOptionsMenu(Menu menu)
{
getMenuInflater().inflate(R.menu.second, menu); return true;
}}
MainActivity.xml
<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android" 
xmlns:tools="http://schemas.android.com/tools" android:layout_width="match_parent"
android:layout_height="match_parent" 
android:paddingBottom="@dimen/activity_vertical_margin" 
android:paddingLeft="@dimen/activity_horizontal_margin" 
android:paddingRight="@dimen/activity_horizontal_margin" 
android:paddingTop="@dimen/activity_vertical_margin" tools:context=".MainActivity" >
<Button android:id="@+id/button1"
android:layout_width="wrap_content" android:layout_height="wrap_content" 
android:layout_alignParentLeft="true" android:layout_alignParentTop="true" 
24
android:layout_marginLeft="78dp" android:layout_marginTop="154dp" android:text="send" 
/>
<EditText android:id="@+id/editText1" android:layout_width="wrap_content"
android:layout_height="wrap_content" android:layout_alignParentTop="true" 
android:layout_alignRight="@+id/button1" android:layout_marginTop="18dp" 
android:ems="10" ><requestFocus /></EditText>
<EditText android:id="@+id/editText2"
android:layout_width="wrap_content" android:layout_height="wrap_content" 
android:layout_alignRight="@+id/button1" android:layout_below="@+id/editText1" 
android:layout_marginTop="37dp" android:ems="10"
android:inputType="textPassword" /></RelativeLayout>
SecondActivity.xml
<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android" 
xmlns:tools="http://schemas.android.com/tools" android:layout_width="match_parent"
android:layout_height="match_parent" 
android:paddingBottom="@dimen/activity_vertical_margin" 
android:paddingLeft="@dimen/activity_horizontal_margin" 
android:paddingRight="@dimen/activity_horizontal_margin" 
android:paddingTop="@dimen/activity_vertical_margin" tools:context=".Second" >
<TextView android:id="@+id/textView1" android:layout_width="wrap_content" 
android:layout_height="wrap_content" android:layout_alignParentLeft="true" 
android:layout_alignParentTop="true" android:layout_marginLeft="42dp" 
android:layout_marginTop="70dp" android:text="uname" />
<TextView android:id="@+id/textView2" android:layout_width="wrap_content" 
android:layout_height="wrap_content"
android:layout_alignLeft="@+id/textView1" android:layout_below="@+id/textView1" 
android:layout_marginLeft="15dp"
25
android:layout_marginTop="37dp" android:text="password" />
</RelativeLayout>
OUTPUT:
26




6.Design an android application Send SMS using Intent
AIM : To design an android application Send SMS using Intent.
MainActivity.java package com.example.sms; import android.os.Bundle; import 
android.app.Activity;
import android.telephony.gsm.SmsManager; import android.view.Menu;
import android.view.View;
import android.view.View.OnClickListener; import android.widget.Button;
public class MainActivity extends Activity
{
@Override
protected void onCreate(Bundle savedInstanceState
{
super.onCreate(savedInstanceState); setContentView(R.layout.activity_main); Button 
bt=(Button)findViewById(R.id.button1); bt.setOnClickListener(new OnClickListener()
{
@Override
public void onClick(View v)
{
// TODO Auto-generated method stub SmsManager sms=SmsManager.getDefault();
sms.sendTextMessage("5554", null, "hai", null, null);
}
});
}
public boolean onCreateOptionsMenu(Menu menu)
{
// Inflate the menu; this adds items to the action bar if it is present. 
getMenuInflater().inflate(R.menu.main, menu);
return true;
}}
27
MainActivity.xml
<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android" 
xmlns:tools="http://schemas.android.com/tools" android:layout_width="match_parent"
android:layout_height="match_parent" 
android:paddingBottom="@dimen/activity_vertical_margin" 
android:paddingLeft="@dimen/activity_horizontal_margin" 
android:paddingRight="@dimen/activity_horizontal_margin" 
android:paddingTop="@dimen/activity_vertical_margin" tools:context=".MainActivity" >
<Button android:id="@+id/button1"
android:layout_width="wrap_content" android:layout_height="wrap_content" 
android:layout_alignParentLeft="true" android:layout_alignParentTop="true" 
android:layout_marginLeft="54dp" android:layout_marginTop="166dp" android:text="send" 
/>
</RelativeLayout>
OUTPUT:
28
7
