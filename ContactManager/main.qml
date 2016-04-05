import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Dialogs 1.2
import com.qtproject.example 1.0
import gom.qtproject.example 1.0

ApplicationWindow {
    id:  mainWindow
    visible: true
    width: 640
    height: 480
    title: qsTr("Contact Manager")
    signal bPressed()
    onBPressed:
    {
        myContact.getModelData(tableView.currentRow)
        console.log("Edit button signal sent")
    }
    SecWindow
    {
        id:secW
    }

    menuBar: MenuBar {
        Menu {
            id:fileMenu
            title: qsTr("File")
            MenuItem {
                text: qsTr("&Open")
                onTriggered:
                {
                    console.log("Open action triggered");
                }
            }
            MenuItem {
                text: qsTr("&Save")
                onTriggered: console.log("Open action triggered");
            }
            MenuItem {
                text: qsTr("Exit")
                onTriggered: Qt.quit();
            }
        }
        Menu {
            id:editMenu
            title: qsTr("Edit")

            MenuItem {
                id:editButton
                text: qsTr("&Edit")
                onTriggered:
                {
                console.log("Open action triggered");

                if(tableView.currentRow!=-1)
                {
                bPressed()
                var component = Qt.createComponent("SecWindow.qml")
                var window = component.createObject(null)
                window.show()

                }

                 }
            }
            MenuItem {
                text: qsTr("&Copy")
                onTriggered: console.log("Open action triggered");
            }
        }
        Menu {
              id:helpMenu
                title: qsTr("Help")
                MenuItem {
                    text: qsTr("&Content")
                    onTriggered: console.log("Open action triggered");
                }
             }
    }
        TableView
        {
            id:tableView
            property int selectedRowIndex: currentRow

           // ContactEdit{
            //    rowIndex: selectedRowIndex
           // }

            model: myModel
             /*
 // Snippet de cod necesar integrarii filtrului cu Modelul implementat in c++ ///in lucru
SortFilter
             {
               source: myModel
               {
               id:contactModelFileter
           }
               sortOrder: tableView.sortIndicatorOrder

               sortCaseSensitivity: Qt.CaseInsensitive
               sortRole: sourceModel.count > 0 ? tableView.getColumn(tableView.sortIndicatorColumn).role : ""
             } */

            highlightOnFocus: false
            anchors.fill: parent
          //  onSortIndicatorColumnChanged:  model.sort
            TableViewColumn
            {
                role:"name"
                title: "Name"
                width:150

            }
            TableViewColumn
            {
                role:"number"
                title: "Number"
                width:150
            }
            TableViewColumn
            {
                role:"email"
                title: "Email"
                width:150
            }
          }
        }
