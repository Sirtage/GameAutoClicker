#pragma once

namespace AutoClickerGui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ KeyPicker
	/// </summary>
	public ref class KeyPicker : public System::Windows::Forms::Form
	{
	public:
		KeyPicker(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~KeyPicker()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ keyCode;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->keyCode = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 208);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(340, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Press any key or mouse button";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Exit(Esc)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(156, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Key code: ";
			// 
			// keyCode
			// 
			this->keyCode->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->keyCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->keyCode->Location = System::Drawing::Point(171, 89);
			this->keyCode->Name = L"keyCode";
			this->keyCode->Size = System::Drawing::Size(86, 60);
			this->keyCode->TabIndex = 3;
			this->keyCode->Text = L"None";
			this->keyCode->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// KeyPicker
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 246);
			this->ControlBox = false;
			this->Controls->Add(this->keyCode);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"KeyPicker";
			this->ShowIcon = false;
			this->Text = L"KeyPicker";
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &KeyPicker::KeyPicker_KeyPress);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &KeyPicker::KeyPicker_MouseClick);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void KeyPicker_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == 0x1B) {
			Close();
		}
		else {
			keyCode->Text = ((int)e->KeyChar).ToString();
		}
	}
	private: System::Void KeyPicker_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		int k = 0;
		switch (e->Button.GetHashCode()) {
		case 1048576:
			k = 1;
			break;
		case 2097152:
			k = 2;
			break;
		case 4194304:
			k = 4;
			break;
		case 8388608:
			k = 5;
			break;
		case 16777216:
			k = 6;
			break;
		}
		keyCode->Text = k.ToString();
	}
};
}
