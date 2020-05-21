#pragma once

#include "cfl_group.h"
#include "cfl_widget.h"

#ifdef __cplusplus
extern "C" {
#endif

#define WINDOW_DECLARE(widget)                                                 \
    void widget##_make_modal(widget *, unsigned int boolean);                  \
    void widget##_fullscreen(widget *, unsigned int boolean);                  \
    void widget##_make_current(widget *);                                      \
    void widget##_set_icon(widget *, const void *);                            \
    void *widget##_icon(const widget *);                                       \
    void widget##_make_resizable(widget *self, void *);                        \
    void widget##_set_cursor(widget *self, int cursor);

WIDGET_DECLARE(Fl_Window)

GROUP_DECLARE(Fl_Window)

WINDOW_DECLARE(Fl_Window)

WIDGET_DECLARE(Fl_Double_Window)

GROUP_DECLARE(Fl_Double_Window)

WINDOW_DECLARE(Fl_Double_Window)

WIDGET_DECLARE(Fl_Menu_Window)

GROUP_DECLARE(Fl_Menu_Window)

WINDOW_DECLARE(Fl_Menu_Window)

#ifdef FLTK_GL_WIN_SUPPORT

WIDGET_DECLARE(Fl_Gl_Window)

GROUP_DECLARE(Fl_Gl_Window)

WINDOW_DECLARE(Fl_Gl_Window)

void Fl_Gl_Window_flush(Fl_Gl_Window *self);

char Fl_Gl_Window_valid(const Fl_Gl_Window *self);

void Fl_Gl_Window_set_valid(Fl_Gl_Window *self, char v);

char Fl_Gl_Window_context_valid(const Fl_Gl_Window *self);

void Fl_Gl_Window_set_context_valid(Fl_Gl_Window *self, char v);

int Fl_Gl_Window_can_do(Fl_Gl_Window *self);

void *Fl_Gl_Window_context(const Fl_Gl_Window *self);

void Fl_Gl_Window_set_context(Fl_Gl_Window *self, void *ctx, int destroy_flag);

void Fl_Gl_Window_swap_buffers(Fl_Gl_Window *self);

void Fl_Gl_Window_ortho(Fl_Gl_Window *self);

int Fl_Gl_Window_can_do_overlay(Fl_Gl_Window *self);

void Fl_Gl_Window_redraw_overlay(Fl_Gl_Window *self);

void Fl_Gl_Window_hide_overlay(Fl_Gl_Window *self);

void Fl_Gl_Window_make_overlay_current(Fl_Gl_Window *self);

float Fl_Gl_Window_pixels_per_unit(Fl_Gl_Window *self);

int Fl_Gl_Window_pixel_w(Fl_Gl_Window *self);

int Fl_Gl_Window_pixel_h(Fl_Gl_Window *self);

#endif

#ifdef __cplusplus
}
#endif