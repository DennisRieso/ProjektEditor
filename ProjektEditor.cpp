#pragma once

namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;

    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
        }

    protected:
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
    private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ findToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ replaceToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ undoToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ redoToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ formatToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ fontToolStripMenuItem;
    private: System::Windows::Forms::Button^ btn_db;
    private: System::Windows::Forms::FontDialog^ fontDialog1;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
            this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->findToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->replaceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->formatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->btn_db = (gcnew System::Windows::Forms::Button());
            this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
            this->menuStrip1->SuspendLayout();
            this->SuspendLayout();
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(12, 40);
            this->textBox1->Multiline = true;
            this->textBox1->Name = L"textBox1";
            this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
            this->textBox1->Size = System::Drawing::Size(360, 307);
            this->textBox1->TabIndex = 0;
            // 
            // openFileDialog1
            // 
            this->openFileDialog1->FileName = L"openFileDialog1";
            // 
            // saveFileDialog1
            // 
            this->saveFileDialog1->FileName = L"saveFileDialog1";
            // 
            // menuStrip1
            // 
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->fileToolStripMenuItem,
                    this->editToolStripMenuItem, this->formatToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(384, 24);
            this->menuStrip1->TabIndex = 1;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // fileToolStripMenuItem
            // 
            this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->openToolStripMenuItem,
                    this->saveToolStripMenuItem, this->exitToolStripMenuItem
            });
            this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
            this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 20);
            this->fileToolStripMenuItem->Text = L"Datei";
            // 
            // openToolStripMenuItem
            // 
            this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
            this->openToolStripMenuItem->Size = System::Drawing::Size(126, 22);
            this->openToolStripMenuItem->Text = L"Öffnen";
            this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
            // 
            // saveToolStripMenuItem
            // 
            this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
            this->saveToolStripMenuItem->Size = System::Drawing::Size(126, 22);
            this->saveToolStripMenuItem->Text = L"Speichern";
            this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
            // 
            // exitToolStripMenuItem
            // 
            this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
            this->exitToolStripMenuItem->Size = System::Drawing::Size(126, 22);
            this->exitToolStripMenuItem->Text = L"Beenden";
            this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
            // 
            // editToolStripMenuItem
            // 
            this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->undoToolStripMenuItem,
                    this->redoToolStripMenuItem, this->findToolStripMenuItem, this->replaceToolStripMenuItem
            });
            this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
            this->editToolStripMenuItem->Size = System::Drawing::Size(75, 20);
            this->editToolStripMenuItem->Text = L"Bearbeiten";
            // 
            // undoToolStripMenuItem
            // 
            this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
            this->undoToolStripMenuItem->Size = System::Drawing::Size(183, 22);
            this->undoToolStripMenuItem->Text = L"Zurücksetzen";
            this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::undoToolStripMenuItem_Click);
            // 
            // redoToolStripMenuItem
            // 
            this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
            this->redoToolStripMenuItem->Size = System::Drawing::Size(183, 22);
            this->redoToolStripMenuItem->Text = L"Wiederherstellen";
            this->redoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::redoToolStripMenuItem_Click);
            // 
            // findToolStripMenuItem
            // 
            this->findToolStripMenuItem->Name = L"findToolStripMenuItem";
            this->findToolStripMenuItem->Size = System::Drawing::Size(183, 22);
            this->findToolStripMenuItem->Text = L"Suchen";
            this->findToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::findToolStripMenuItem_Click);
            // 
            // replaceToolStripMenuItem
            // 
            this->replaceToolStripMenuItem->Name = L"replaceToolStripMenuItem";
            this->replaceToolStripMenuItem->Size = System::Drawing::Size(183, 22);
            this->replaceToolStripMenuItem->Text = L"Suchen und Ersetzen";
            this->replaceToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::replaceToolStripMenuItem_Click);
            // 
            // formatToolStripMenuItem
            // 
            this->formatToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fontToolStripMenuItem });
            this->formatToolStripMenuItem->Name = L"formatToolStripMenuItem";
            this->formatToolStripMenuItem->Size = System::Drawing::Size(57, 20);
            this->formatToolStripMenuItem->Text = L"Format";
            // 
            // fontToolStripMenuItem
            // 
            this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
            this->fontToolStripMenuItem->Size = System::Drawing::Size(113, 22);
            this->fontToolStripMenuItem->Text = L"Ändern";
            this->fontToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::fontToolStripMenuItem_Click);
            // 
            // btn_db
            // 
            this->btn_db->Location = System::Drawing::Point(12, 353);
            this->btn_db->Name = L"btn_db";
            this->btn_db->Size = System::Drawing::Size(113, 23);
            this->btn_db->TabIndex = 2;
            this->btn_db->Text = L"Verbindung zur DB";
            this->btn_db->UseVisualStyleBackColor = true;
            this->btn_db->Click += gcnew System::EventHandler(this, &Form1::btn_db_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(384, 391);
            this->Controls->Add(this->btn_db);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"Form1";
            this->Text = L"Projekt Editor";
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void btn_open_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            String^ fileName = this->openFileDialog1->FileName;
            this->textBox1->Text = System::IO::File::ReadAllText(fileName);
        }
    }

    private: System::Void btn_save_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            String^ fileName = this->saveFileDialog1->FileName;
            System::IO::File::WriteAllText(fileName, this->textBox1->Text);
        }
    }

    private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        btn_open_Click(sender, e);
    }

    private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        btn_save_Click(sender, e);
    }

    private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    }

    private: System::Void findToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ searchTerm = ShowInputDialog("Bitte geben Sie den gesuchten Text ein:");
        int startIndex = this->textBox1->Text->IndexOf(searchTerm);
        if (startIndex != -1) {
            this->textBox1->Select(startIndex, searchTerm->Length);
            this->textBox1->Focus();
        }
        else {
            MessageBox::Show("Text nicht gefunden.");
        }
    }

    private: System::Void replaceToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ searchTerm = ShowInputDialog("Bitte geben Sie den Text ein, der ersetzt werden soll:");
        String^ replaceTerm = ShowInputDialog("Bitte geben Sie den neuen Text ein:");
        this->textBox1->Text = this->textBox1->Text->Replace(searchTerm, replaceTerm);
    }

    private: System::Void undoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->textBox1->CanUndo)
        {
            this->textBox1->Undo();
            this->textBox1->ClearUndo();
        }
    }

    private: System::Void redoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        // Redo operation can be complex, and .NET TextBox does not directly support it.
        MessageBox::Show("Wiederherstellen fehlgeschlagen.");
    }

    private: System::Void fontToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
        {
            this->textBox1->Font = this->fontDialog1->Font;
        }
    }

    private: String^ ShowInputDialog(String^ prompt) {
        Form^ inputForm = gcnew Form();
        inputForm->Width = 400;
        inputForm->Height = 150;
        inputForm->Text = prompt;

        TextBox^ inputBox = gcnew TextBox();
        inputBox->Left = 50;
        inputBox->Top = 20;
        inputBox->Width = 300;
        inputForm->Controls->Add(inputBox);

        Button^ confirmation = gcnew Button();
        confirmation->Text = "OK";
        confirmation->Left = 150;
        confirmation->Width = 100;
        confirmation->Top = 50;
        confirmation->DialogResult = System::Windows::Forms::DialogResult::OK;
        inputForm->Controls->Add(confirmation);

        inputForm->AcceptButton = confirmation;

        return inputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK ? inputBox->Text : "";
    }

    private: System::Void btn_db_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
        MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);

        try {
            conDataBase->Open();
            MessageBox::Show("Verbindung hergestellt.");
            conDataBase->Close();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(ex->Message);
        }
    }
    };
}
