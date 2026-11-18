#pragma once

#include <QString>

// Display-site localization for canonical UI text.
//
// The Control Panel keeps canonical English strings in its data tables, routing
// keys and comparisons (category titles, task links, sidebar entries, page
// paths). Those strings are translated only where they are shown, through
// Branding::brand()/UiText::localize(), so navigation and matching stay stable.
namespace UiText {

QString localize(const QString &canonical);

} // namespace UiText
