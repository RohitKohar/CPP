#include <gtkmm.h>
#include <sstream>
#include <iomanip>

class SalaryApp : public Gtk::Window
{
public:
    SalaryApp();

private:
    void on_calculate_clicked();

    Gtk::Box mainBox, formBox, buttonBox;
    Gtk::ComboBoxText postCombo;
    Gtk::Entry basicEntry, allowanceEntry, bonusEntry;
    Gtk::Button calculateButton;
    Gtk::Label resultLabel, headingLabel;
};

SalaryApp::SalaryApp()
    : mainBox(Gtk::ORIENTATION_VERTICAL, 15),
      formBox(Gtk::ORIENTATION_VERTICAL, 10),
      buttonBox(Gtk::ORIENTATION_HORIZONTAL, 10),
      calculateButton("Calculate Salary")
{

    set_title("Salary Calculator");
    set_default_size(450, 400);
    set_border_width(20);

    headingLabel.set_markup("<span size='xx-large' weight='bold'>Salary Calculator</span>");
    headingLabel.set_justify(Gtk::JUSTIFY_CENTER);
    mainBox.pack_start(headingLabel, Gtk::PACK_SHRINK);

    postCombo.append("Manager");
    postCombo.append("CEO");
    postCombo.append("Labour");
    postCombo.set_active(0);

    auto create_input_field = [](const Glib::ustring &label, Gtk::Entry &entry, const Glib::ustring &placeholder)
    {
        Gtk::Box *hbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_HORIZONTAL, 10));
        Gtk::Label *lbl = Gtk::manage(new Gtk::Label(label));
        lbl->set_size_request(140);
        lbl->set_xalign(0);
        entry.set_placeholder_text(placeholder);
        hbox->pack_start(*lbl, Gtk::PACK_SHRINK);
        hbox->pack_start(entry);
        return hbox;
    };

    formBox.pack_start(*Gtk::manage(new Gtk::Label("Select Post:")), Gtk::PACK_SHRINK);
    formBox.pack_start(postCombo, Gtk::PACK_SHRINK);
    formBox.pack_start(*create_input_field("Basic Salary:", basicEntry, "e.g. 50000"), Gtk::PACK_SHRINK);
    formBox.pack_start(*create_input_field("Allowance:", allowanceEntry, "e.g. 7000"), Gtk::PACK_SHRINK);
    formBox.pack_start(*create_input_field("Bonus:", bonusEntry, "e.g. 3000"), Gtk::PACK_SHRINK);

    calculateButton.signal_clicked().connect(sigc::mem_fun(*this, &SalaryApp::on_calculate_clicked));
    buttonBox.set_halign(Gtk::ALIGN_CENTER);
    buttonBox.pack_start(calculateButton, Gtk::PACK_SHRINK);

    resultLabel.set_margin_top(20);
    resultLabel.set_line_wrap(true);
    resultLabel.set_max_width_chars(50);
    resultLabel.set_xalign(0);
    resultLabel.set_markup("<span foreground='blue'>Result will appear here...</span>");

    mainBox.pack_start(formBox, Gtk::PACK_SHRINK);
    mainBox.pack_start(buttonBox, Gtk::PACK_SHRINK);
    mainBox.pack_start(resultLabel, Gtk::PACK_SHRINK);

    add(mainBox);
    show_all_children();
}

void SalaryApp::on_calculate_clicked()
{
    try
    {
        float basic_salary = std::stof(basicEntry.get_text());
        float allowance = std::stof(allowanceEntry.get_text());
        float bonus = std::stof(bonusEntry.get_text());

        float afterTax = basic_salary - basic_salary * 13 / 100;
        float afterSSF = afterTax - basic_salary * 13 / 100;
        float finalSalary = afterSSF + allowance + bonus;

        std::ostringstream oss;
        oss << std::fixed << std::setprecision(2);
        oss << "<span foreground='green' weight='bold'>The total calculated salary of "
            << postCombo.get_active_text() << " is: Rs. " << finalSalary << "</span>";

        resultLabel.set_markup(oss.str());
    }
    catch (const std::exception &e)
    {
        resultLabel.set_markup("<span foreground='red'>Invalid input! Please enter numeric values.</span>");
    }
}

int main(int argc, char *argv[])
{
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.salaryapp");
    SalaryApp window;
    return app->run(window);
}
