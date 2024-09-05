// Name: A Chao Thao
// Assignment: CS449 Sprint 0 - GUI Program (wxWidgets)

#include <wx/wx.h> // Include the main wxWidgets header file for all basic GUI components
#include <wx/statline.h> // Include header for drawing a line using wxStaticLine

// Frame class that inheriting from wxFrame
class Frame : public wxFrame
{
public:
    // Constructor
    Frame(const wxString& title);

private:
    // Event handler methods
    void OnExit(wxCommandEvent& event); // Method to handle exit button click
    void OnCheckBoxToggle(wxCommandEvent& event); // Method to handle checkbox toggle

    // GUI components
    wxCheckBox* checkBox; // Checkbox 
    wxRadioButton* radioButton1; // First radio button
    wxRadioButton* radioButton2; // Second radio button
    wxRadioButton* radioButton3; // Third radio button
};

// Custom Application class inheriting from wxApp
class MyApp : public wxApp
{
public:
    // Overriding OnInit method to initialize the app
    virtual bool OnInit();
};

// Statrts the program
wxIMPLEMENT_APP(MyApp);

// Called when the application starts
bool MyApp::OnInit()
{
    // Create a new Frame (this will be the frame title)
    Frame* frame = new Frame("CS449 Sprint 0 - GUI Program (wxWidgets)");
    frame->Show(true); // Show the frame window
    return true;
}

// Frame constructor definition (frame window lenght and width)
Frame::Frame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(450, 270))
{
    // Create a panel within the frame
    wxPanel* panel = new wxPanel(this, wxID_ANY);

    // Add static text to the panel
    wxStaticText* staticText = new wxStaticText(panel, wxID_ANY, "What is your favorite Programming Language? (Choose 1)", wxPoint(20, 20));

    // Draw a line using wxStaticLine and adjust it
    wxStaticLine* line = new wxStaticLine(panel, wxID_ANY, wxPoint(20, 50), wxSize(310, 2));

    // Create and add a checkbox to the panel
    checkBox = new wxCheckBox(panel, wxID_ANY, "Check this box if you are \"A Chao Thao\".", wxPoint(20, 70));
    checkBox->Bind(wxEVT_CHECKBOX, &Frame::OnCheckBoxToggle, this); // Bind checkbox toggle event to handler

    // Add radio buttons to the panel
    // First radio button in group is set to be default
    radioButton1 = new wxRadioButton(panel, wxID_ANY, "C++", wxPoint(20, 100), wxDefaultSize, wxRB_GROUP); 
    radioButton2 = new wxRadioButton(panel, wxID_ANY, "Java", wxPoint(20, 130)); // Second radio button
    radioButton3 = new wxRadioButton(panel, wxID_ANY, "Python", wxPoint(20, 160)); // Third radio button

    // Add an exit button to the panel
    wxButton* exitButton = new wxButton(panel, wxID_EXIT, "Exit", wxPoint(150, 200));
    exitButton->Bind(wxEVT_BUTTON, &Frame::OnExit, this); // Bind exit button click event to handler
}

// Display a message when the checkbox is check and uncheck.
void Frame::OnCheckBoxToggle(wxCommandEvent& event)
{
    if (checkBox->IsChecked()) // Check if checkbox is checked
    {
        // Show this message if the checkbox is checked
        wxMessageBox("Check: Welcome! A Chao Thao.", "Info", wxOK | wxICON_INFORMATION);
    }
    else
    {
        // Show this message if the checkbox is unchecked
        wxMessageBox("Check box is unchecked", "Info", wxOK | wxICON_INFORMATION);
    }
}

// Handle when the exit button is click, close the frame window.
void Frame::OnExit(wxCommandEvent& event)
{
    Close(true); 
}