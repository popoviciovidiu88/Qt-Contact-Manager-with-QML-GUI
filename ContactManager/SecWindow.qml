import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Dialogs 1.2

ApplicationWindow
{
    readonly property alias secW :secondaryWindow
      id: secondaryWindow
    width:mainWindow.width/2
   height:mainWindow.height/2
    title: qsTr("Edit window")

    Rectangle
    {
        width:parent.width / 1.2
        height:parent.height/6
        color:"white"
        border.width: 2
        border.color: "lightblue"
        x:20
        y:20

    TextInput
        {
        width:parent.width
        height:parent.height
        anchors.fill: parent
        id:textInput
        font.pointSize: 10
        text: myContact.name
        }
    }

    Rectangle
    {
        width:parent.width/ 1.2
        height:parent.height/6
        color:"white"
        border.width: 2
        border.color: "lightblue"
        x:20
        y:60

    TextInput
        {
        width:parent.width
        height:parent.height
        anchors.fill: parent
        id:textInput2
        font.pointSize: 10
        text: myContact.number
        }
    }

    Rectangle
    {
        width:parent.width/ 1.2
        height:parent.height/6
        color:"white"
        border.width: 2
        border.color: "lightblue"
        x:20
        y:100

    TextInput
         {
        width:parent.width
        height:parent.height
        anchors.fill: parent
        id:textInput3
        font.pointSize: 10
        text:myContact.email
         }

    }

    Button
    {
       width:parent.width/8
       height:parent.height/8
       x:20
       y:160
       text: "Ok"

        MouseArea
        {
            anchors.fill: parent
            onClicked:
            {
                console.log("Open action triggered");
                myContact.setName(textInput.text)
                myContact.setNumber(textInput2.text)
                myContact.setEmail(textInput3.text)
                myContact.setModelData()
               // myXmlInterface.appendContent("nume qml","qml0727713979","qmlmahmatghandi@gum")
                myXmlInterface.writeToFile()
                secondaryWindow.close()
            }
        }
    }
}




