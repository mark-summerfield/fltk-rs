use crate::enums::{Align, CallbackTrigger, Color, Damage, Event, Font, FrameType, LabelType};
use crate::image::Image;
use crate::prelude::*;
use crate::utils::FlString;
use fltk_sys::input::*;
use std::{
    ffi::{CStr, CString},
    mem,
    os::raw,
};

/// Sets the input widget's type
#[repr(i32)]
#[derive(Debug, Copy, Clone, PartialEq)]
pub enum OutputType {
    /// Normal input
    Normal = 8,
    /// Multiline input
    Multiline = 12,
}

impl_widget_type!(OutputType);

/// Creates an output widget
#[derive(Debug)]
pub struct Output {
    inner: *mut Fl_Output,
    tracker: *mut fltk_sys::fl::Fl_Widget_Tracker,
    is_derived: bool,
}

impl_widget_ext!(Output, Fl_Output);
impl_widget_base!(Output, Fl_Output);
impl_input_ext!(Output, Fl_Output);

/// Creates a multiline-output widget
#[derive(Debug)]
pub struct MultilineOutput {
    inner: *mut Fl_Multiline_Output,
    tracker: *mut fltk_sys::fl::Fl_Widget_Tracker,
    is_derived: bool,
}

impl_widget_ext!(MultilineOutput, Fl_Multiline_Output);
impl_widget_base!(MultilineOutput, Fl_Multiline_Output);
impl_input_ext!(MultilineOutput, Fl_Multiline_Output);