#include "MainWindow.h"
#include "StandardGreeter.h"

MainWindow::MainWindow()
    : m_button("Run Console Greeting")
{
    set_border_width(10);

    m_button.signal_clicked().connect(sigc::mem_fun(
                *this, &MainWindow::on_button_clicked));

    add(m_button);

    m_button.show();
}

MainWindow::~MainWindow() { }

void MainWindow::on_button_clicked()
{
    m_greeter.greet();
}

