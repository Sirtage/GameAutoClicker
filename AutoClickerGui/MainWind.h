#pragma once
#pragma comment (lib, "user32.lib")
#include "fw.h"
#include "KeyPicker.h"
#include <string>

#define FNAME "set.cfg"

namespace AutoClickerGui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainWind
	/// </summary>
	public ref class MainWind : public System::Windows::Forms::Form
	{
	public:
		std::map<std::string, std::string>* sets;
		MainWind(void)
		{
			InitializeComponent();
			this->sets = new std::map<std::string, std::string>();
			*this->sets = { {"enabled", "0"}, 
				{"delLeft", "20"}, 
				{"delRight", "10"}, 
				{"bindLeft", "6"}, 
				{"bindRight", "5"}, 
				{"bindstop", "117"}, 
				{"dcLeft", "0"}, 
				{"dcRight", "0"},
				{"rndLeft", "0"},
				{"rnduLeft", "0"},
				{"rnddLeft", "0"},
				{"rndRight", "0"},
				{"rnduRight", "0"},
				{"rnddRight", "0"},
			};
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainWind()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ComboBox^ clickType;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ click_set;

	private: System::Windows::Forms::Button^ applyButton;
	private: System::Windows::Forms::TextBox^ bindPicker;
	private: System::Windows::Forms::TextBox^ delSet;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ dc;
	private: System::Windows::Forms::GroupBox^ randomiseKeep;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ maxScale;

	private: System::Windows::Forms::TextBox^ minScale;

	private: System::Windows::Forms::CheckBox^ RandomiseBox;
	private: System::Windows::Forms::Button^ keyPickerBut;




	private: System::ComponentModel::IContainer^ components;





	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWind::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->bindPicker = (gcnew System::Windows::Forms::TextBox());
			this->click_set = (gcnew System::Windows::Forms::GroupBox());
			this->randomiseKeep = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->maxScale = (gcnew System::Windows::Forms::TextBox());
			this->minScale = (gcnew System::Windows::Forms::TextBox());
			this->RandomiseBox = (gcnew System::Windows::Forms::CheckBox());
			this->dc = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->delSet = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->applyButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->clickType = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->keyPickerBut = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->click_set->SuspendLayout();
			this->randomiseKeep->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->bindPicker);
			this->groupBox1->Controls->Add(this->click_set);
			this->groupBox1->Controls->Add(this->applyButton);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->clickType);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(442, 303);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Mouse settings";
			// 
			// bindPicker
			// 
			this->bindPicker->Location = System::Drawing::Point(94, 63);
			this->bindPicker->Name = L"bindPicker";
			this->bindPicker->Size = System::Drawing::Size(66, 22);
			this->bindPicker->TabIndex = 6;
			// 
			// click_set
			// 
			this->click_set->Controls->Add(this->randomiseKeep);
			this->click_set->Controls->Add(this->dc);
			this->click_set->Controls->Add(this->label5);
			this->click_set->Controls->Add(this->delSet);
			this->click_set->Controls->Add(this->label4);
			this->click_set->Location = System::Drawing::Point(196, 15);
			this->click_set->Name = L"click_set";
			this->click_set->Size = System::Drawing::Size(236, 282);
			this->click_set->TabIndex = 5;
			this->click_set->TabStop = false;
			this->click_set->Text = L"Left click settings";
			// 
			// randomiseKeep
			// 
			this->randomiseKeep->Controls->Add(this->label7);
			this->randomiseKeep->Controls->Add(this->label6);
			this->randomiseKeep->Controls->Add(this->label9);
			this->randomiseKeep->Controls->Add(this->label8);
			this->randomiseKeep->Controls->Add(this->maxScale);
			this->randomiseKeep->Controls->Add(this->minScale);
			this->randomiseKeep->Controls->Add(this->RandomiseBox);
			this->randomiseKeep->Location = System::Drawing::Point(7, 101);
			this->randomiseKeep->Name = L"randomiseKeep";
			this->randomiseKeep->Size = System::Drawing::Size(222, 175);
			this->randomiseKeep->TabIndex = 4;
			this->randomiseKeep->TabStop = false;
			this->randomiseKeep->Text = L"Randomise delay";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 78);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 16);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Up scale: ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 16);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Down scale: ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(188, 78);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(25, 16);
			this->label9->TabIndex = 2;
			this->label9->Text = L"ms";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(188, 50);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(25, 16);
			this->label8->TabIndex = 2;
			this->label8->Text = L"ms";
			// 
			// maxScale
			// 
			this->maxScale->Enabled = false;
			this->maxScale->Location = System::Drawing::Point(92, 75);
			this->maxScale->Name = L"maxScale";
			this->maxScale->Size = System::Drawing::Size(90, 22);
			this->maxScale->TabIndex = 1;
			this->maxScale->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->maxScale->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWind::DelayEnter);
			// 
			// minScale
			// 
			this->minScale->Enabled = false;
			this->minScale->Location = System::Drawing::Point(92, 47);
			this->minScale->Name = L"minScale";
			this->minScale->Size = System::Drawing::Size(90, 22);
			this->minScale->TabIndex = 1;
			this->minScale->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->minScale->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWind::DelayEnter);
			// 
			// RandomiseBox
			// 
			this->RandomiseBox->AutoSize = true;
			this->RandomiseBox->Location = System::Drawing::Point(6, 21);
			this->RandomiseBox->Name = L"RandomiseBox";
			this->RandomiseBox->Size = System::Drawing::Size(99, 20);
			this->RandomiseBox->TabIndex = 0;
			this->RandomiseBox->Text = L"Randomise";
			this->RandomiseBox->UseVisualStyleBackColor = true;
			this->RandomiseBox->CheckedChanged += gcnew System::EventHandler(this, &MainWind::RandomiseBox_CheckedChanged);
			// 
			// dc
			// 
			this->dc->AutoSize = true;
			this->dc->Location = System::Drawing::Point(13, 53);
			this->dc->Name = L"dc";
			this->dc->Size = System::Drawing::Size(103, 20);
			this->dc->TabIndex = 3;
			this->dc->Text = L"Double click";
			this->dc->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(155, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 16);
			this->label5->TabIndex = 2;
			this->label5->Text = L"ms";
			// 
			// delSet
			// 
			this->delSet->Location = System::Drawing::Point(61, 25);
			this->delSet->Name = L"delSet";
			this->delSet->Size = System::Drawing::Size(88, 22);
			this->delSet->TabIndex = 1;
			this->delSet->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->delSet->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainWind::DelayEnter);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 16);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Delay:";
			// 
			// applyButton
			// 
			this->applyButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->applyButton->Location = System::Drawing::Point(20, 255);
			this->applyButton->Name = L"applyButton";
			this->applyButton->Size = System::Drawing::Size(150, 36);
			this->applyButton->TabIndex = 4;
			this->applyButton->Text = L"Apply";
			this->applyButton->UseVisualStyleBackColor = true;
			this->applyButton->Click += gcnew System::EventHandler(this, &MainWind::ApplyClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Bind: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Click type:";
			// 
			// clickType
			// 
			this->clickType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->clickType->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->clickType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Left", L"Right" });
			this->clickType->Location = System::Drawing::Point(94, 32);
			this->clickType->Name = L"clickType";
			this->clickType->Size = System::Drawing::Size(66, 24);
			this->clickType->TabIndex = 0;
			this->clickType->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWind::clickType_changed);
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label3->Location = System::Drawing::Point(23, 360);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"F6";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(23, 380);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 61);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainWind::Start);
			// 
			// keyPickerBut
			// 
			this->keyPickerBut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->keyPickerBut->Location = System::Drawing::Point(562, 380);
			this->keyPickerBut->Name = L"keyPickerBut";
			this->keyPickerBut->Size = System::Drawing::Size(108, 61);
			this->keyPickerBut->TabIndex = 4;
			this->keyPickerBut->Text = L"Key picker";
			this->keyPickerBut->UseVisualStyleBackColor = true;
			this->keyPickerBut->Click += gcnew System::EventHandler(this, &MainWind::keyPickerBut_Click);
			// 
			// MainWind
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(682, 453);
			this->Controls->Add(this->keyPickerBut);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainWind";
			this->Text = L"Game auto clicker";
			this->Load += gcnew System::EventHandler(this, &MainWind::MainWind_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->click_set->ResumeLayout(false);
			this->click_set->PerformLayout();
			this->randomiseKeep->ResumeLayout(false);
			this->randomiseKeep->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainWind_Load(System::Object^ sender, System::EventArgs^ e) {
		clickType->Text = L"Left";
		if (fw::ex(FNAME)) {
			*this->sets = fw::read(FNAME);
		}
		else {
			fw::upt(FNAME, *this->sets);
		}
		clickType_changed(sender, e);
	}
	private: System::Void Start(System::Object^ sender, System::EventArgs^ e);

	private: System::Void clickType_changed(System::Object^ sender, System::EventArgs^ e) {
		click_set->Text = clickType->Text + " click settings";
		std::string key = fw::conv(clickType->Text);
		bindPicker->Text = fw::conv(this->sets->operator[]("bind" + key));
		delSet->Text = fw::conv(this->sets->operator[]("del" + key));
		dc->Checked = std::stoi(this->sets->operator[]("dc" + key));
		RandomiseBox->Checked = std::stoi(this->sets->operator[]("rnd" + key));
		minScale->Text = fw::conv(this->sets->operator[]("rndd" + key));
		maxScale->Text = fw::conv(this->sets->operator[]("rndu" + key));
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DelayEnter(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!e->KeyChar.IsDigit(e->KeyChar) && !e->KeyChar.IsControl(e->KeyChar)) {
			e->Handled = true;
		}
	}
	private: System::Void KeyPressCancel(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		e->Handled = true;
	}

	private: System::Void ApplyClick(System::Object^ sender, System::EventArgs^ e) {
		std::string key = fw::conv(clickType->Text);
		this->sets->insert_or_assign("del" + key, fw::conv(delSet->Text));
		this->sets->insert_or_assign("bind" + key, fw::conv(bindPicker->Text));
		this->sets->insert_or_assign("dc" + key, dc->Checked ? "1" : "0");
		this->sets->insert_or_assign("rnd" + key, RandomiseBox->Checked ? "1" : "0");
		this->sets->insert_or_assign("rndd" + key, fw::conv(minScale->Text));
		this->sets->insert_or_assign("rndu" + key, fw::conv(maxScale->Text));
		fw::upt(FNAME, *this->sets);
	}
	private: System::Void RandomiseBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->minScale->Enabled = this->RandomiseBox->Checked;
		this->maxScale->Enabled = this->RandomiseBox->Checked;
	}
	private: System::Void keyPickerBut_Click(System::Object^ sender, System::EventArgs^ e) {
		KeyPicker^ kp = gcnew KeyPicker();
		kp->ShowDialog();
	}
};
}
