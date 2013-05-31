<?php
/**
 * @file
 * gsb_feature_academic_calendar_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_academic_calendar_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'academic_calendar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Academic Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_academic_quarter',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_event_date' => 'field_event_date',
    'field_academic_calendar_link' => 'field_academic_calendar_link',
    'field_academic_quarter' => 'field_academic_quarter',
  );
  $handler->display->display_options['style_options']['default'] = 'field_event_date';
  $handler->display->display_options['style_options']['info'] = array(
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_academic_calendar_link' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_academic_quarter' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_event_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_academic_calendar_link']['id'] = 'field_academic_calendar_link';
  $handler->display->display_options['fields']['field_academic_calendar_link']['table'] = 'field_data_field_academic_calendar_link';
  $handler->display->display_options['fields']['field_academic_calendar_link']['field'] = 'field_academic_calendar_link';
  $handler->display->display_options['fields']['field_academic_calendar_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_academic_calendar_link']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Quarter */
  $handler->display->display_options['fields']['field_academic_quarter']['id'] = 'field_academic_quarter';
  $handler->display->display_options['fields']['field_academic_quarter']['table'] = 'field_data_field_academic_quarter';
  $handler->display->display_options['fields']['field_academic_quarter']['field'] = 'field_academic_quarter';
  $handler->display->display_options['fields']['field_academic_quarter']['label'] = '';
  $handler->display->display_options['fields']['field_academic_quarter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_academic_quarter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_academic_quarter']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'academic_calendar_event' => 'academic_calendar_event',
  );
  /* Filter criterion: Field: Program (field_program_single) */
  $handler->display->display_options['filters']['field_program_single_tid']['id'] = 'field_program_single_tid';
  $handler->display->display_options['filters']['field_program_single_tid']['table'] = 'field_data_field_program_single';
  $handler->display->display_options['filters']['field_program_single_tid']['field'] = 'field_program_single_tid';
  $handler->display->display_options['filters']['field_program_single_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_program_single_tid']['expose']['operator_id'] = 'field_program_single_tid_op';
  $handler->display->display_options['filters']['field_program_single_tid']['expose']['label'] = 'Program (field_program_single)';
  $handler->display->display_options['filters']['field_program_single_tid']['expose']['operator'] = 'field_program_single_tid_op';
  $handler->display->display_options['filters']['field_program_single_tid']['expose']['identifier'] = 'field_program_single_tid';
  $handler->display->display_options['filters']['field_program_single_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    6 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_program_single_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_program_single_tid']['vocabulary'] = 'program';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['academic_calendar'] = $view;

  return $export;
}
