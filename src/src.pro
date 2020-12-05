TEMPLATE = subdirs

SUBDIRS += \
    ukuiwidgets \
    designer

designer.depends = ukuiwidgets
