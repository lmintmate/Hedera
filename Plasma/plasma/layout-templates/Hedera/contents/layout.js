var panel = new Panel
var panelScreen = panel.screen
var freeEdges = {"bottom": true, "top": true, "left": true, "right": true}

for (i = 0; i < panelIds.length; ++i) {
    var tmpPanel = panelById(panelIds[i])
    if (tmpPanel.screen == panelScreen) {
        // Ignore the new panel
        if (tmpPanel.id != panel.id) {
            freeEdges[tmpPanel.location] = false;
        }
    }
}

panel.location = "left";
//panel.height = gridUnit * 2
panel.height = 60;

var kicker = panel.addWidget("org.kde.plasma.kicker")
kicker.currentConfigGroup = ["Shortcuts"]
kicker.writeConfig("global", "Alt+F1")
kicker.writeConfig("alignResultsToBottom", "false")
kicker.writeConfig("showRecentApps", "false")
kicker.writeConfig("showRecentDocs", "false")
kicker.writeConfig("useExtraRunners", "false")

//panel.addWidget("org.kde.plasma.showActivityManager")
//panel.addWidget("org.kde.plasma.pager")
var taskmanager = panel.addWidget("org.kde.plasma.taskmanager")
taskmanager.currentConfigGroup = ["General"]
taskmanager.writeConfig("maxStripes", "1")
taskmanager.writeConfig("middleClickAction", "NewInstance")
taskmanager.writeConfig("showOnlyCurrentDesktop", "true")
taskmanager.writeConfig("showOnlyCurrentScreen", "true")
taskmanager.writeConfig("showToolTips", "false")
taskmanager.writeConfig("sortingStrategy", "4")
taskmanager.writeConfig("wheelEnabled", "false")


/* Next up is determining whether to add the Input Method Panel
 * widget to the panel or not. This is done based on whether
 * the system locale's language id is a member of the following
 * white list of languages which are known to pull in one of
 * our supported IME backends when chosen during installation
 * of common distributions. */

var langIds = ["as",    // Assamese
               "bn",    // Bengali
               "bo",    // Tibetan
               "brx",   // Bodo
               "doi",   // Dogri
               "gu",    // Gujarati
               "hi",    // Hindi
               "ja",    // Japanese
               "kn",    // Kannada
               "ko",    // Korean
               "kok",   // Konkani
               "ks",    // Kashmiri
               "lep",   // Lepcha
               "mai",   // Maithili
               "ml",    // Malayalam
               "mni",   // Manipuri
               "mr",    // Marathi
               "ne",    // Nepali
               "or",    // Odia
               "pa",    // Punjabi
               "sa",    // Sanskrit
               "sat",   // Santali
               "sd",    // Sindhi
               "si",    // Sinhala
               "ta",    // Tamil
               "te",    // Telugu
               "th",    // Thai
               "ur",    // Urdu
               "vi",    // Vietnamese
               "zh_CN", // Simplified Chinese
               "zh_TW"] // Traditional Chinese

if (langIds.indexOf(languageId) != -1) {
    panel.addWidget("org.kde.plasma.kimpanel");
}

var systemtray = panel.addWidget("org.kde.plasma.systemtray")
systemtray.currentConfigGroup = ["General"]
systemtray.writeConfig("hiddenItems", "org.kde.plasma.networkmanagement,org.kde.kdeconnect")

var digitalclock = panel.addWidget("org.kde.plasma.digitalclock")
digitalclock.currentConfigGroup = ["General"]
digitalclock.writeConfig("boldText", "true")
digitalclock.writeConfig("fontFamily", "Noto Sans")
digitalclock.writeConfig("showDate", "true")
