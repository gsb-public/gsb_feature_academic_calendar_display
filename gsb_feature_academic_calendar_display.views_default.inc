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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_academic_year',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_academic_quarter',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_academic_year' => 'field_academic_year',
    'field_academic_quarter' => 'field_academic_quarter',
    'field_event_date' => 'field_event_date',
    'field_academic_calendar_link' => 'field_academic_calendar_link',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_academic_year' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_academic_quarter' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_academic_calendar_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No upcoming events';
  $handler->display->display_options['empty']['area']['format'] = 'gsb_wysiwyg_text';
  /* Field: Content: Academic year */
  $handler->display->display_options['fields']['field_academic_year']['id'] = 'field_academic_year';
  $handler->display->display_options['fields']['field_academic_year']['table'] = 'field_data_field_academic_year';
  $handler->display->display_options['fields']['field_academic_year']['field'] = 'field_academic_year';
  $handler->display->display_options['fields']['field_academic_year']['label'] = '';
  $handler->display->display_options['fields']['field_academic_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_academic_year']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_academic_year']['alter']['text'] = '[field_academic_year]';
  $handler->display->display_options['fields']['field_academic_year']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_academic_year']['settings'] = array(
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
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'day_month_and_year',
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
  $handler->display->display_options['fields']['field_academic_calendar_link']['label'] = '';
  $handler->display->display_options['fields']['field_academic_calendar_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_academic_calendar_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_academic_calendar_link']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Sort criterion: Content: Quarter (field_academic_quarter) */
  $handler->display->display_options['sorts']['field_academic_quarter_value']['id'] = 'field_academic_quarter_value';
  $handler->display->display_options['sorts']['field_academic_quarter_value']['table'] = 'field_data_field_academic_quarter';
  $handler->display->display_options['sorts']['field_academic_quarter_value']['field'] = 'field_academic_quarter_value';
  /* Sort criterion: Content: Event Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
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
  /* Filter criterion: Content: Academic year (field_academic_year) */
  $handler->display->display_options['filters']['field_academic_year_value']['id'] = 'field_academic_year_value';
  $handler->display->display_options['filters']['field_academic_year_value']['table'] = 'field_data_field_academic_year';
  $handler->display->display_options['filters']['field_academic_year_value']['field'] = 'field_academic_year_value';
  $handler->display->display_options['filters']['field_academic_year_value']['value'] = array(
    'all' => 'all',
  );
  $handler->display->display_options['filters']['field_academic_year_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_year_value']['expose']['operator_id'] = 'field_academic_year_value_op';
  $handler->display->display_options['filters']['field_academic_year_value']['expose']['label'] = 'Academic year (field_academic_year)';
  $handler->display->display_options['filters']['field_academic_year_value']['expose']['operator'] = 'field_academic_year_value_op';
  $handler->display->display_options['filters']['field_academic_year_value']['expose']['identifier'] = 'field_academic_year_value';
  $handler->display->display_options['filters']['field_academic_year_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_academic_year_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    241 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    201 => 0,
    221 => 0,
    216 => 0,
    226 => 0,
    231 => 0,
    246 => 0,
    236 => 0,
    31 => 0,
    36 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
  );
  /* Filter criterion: Content: Academic Calendar Display (field_academic_calendar_display) */
  $handler->display->display_options['filters']['field_academic_calendar_display_tid']['id'] = 'field_academic_calendar_display_tid';
  $handler->display->display_options['filters']['field_academic_calendar_display_tid']['table'] = 'field_data_field_academic_calendar_display';
  $handler->display->display_options['filters']['field_academic_calendar_display_tid']['field'] = 'field_academic_calendar_display_tid';
  $handler->display->display_options['filters']['field_academic_calendar_display_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_calendar_display_tid']['expose']['operator_id'] = 'field_academic_calendar_display_tid_op';
  $handler->display->display_options['filters']['field_academic_calendar_display_tid']['expose']['label'] = 'Academic Calendar Display (field_academic_calendar_display)';
  $handler->display->display_options['filters']['field_academic_calendar_display_tid']['expose']['operator'] = 'field_academic_calendar_display_tid_op';
  $handler->display->display_options['filters']['field_academic_calendar_display_tid']['expose']['identifier'] = 'field_academic_calendar_display_tid';
  $handler->display->display_options['filters']['field_academic_calendar_display_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    11 => 0,
    151 => 0,
    16 => 0,
    21 => 0,
    241 => 0,
    71 => 0,
    61 => 0,
    171 => 0,
    56 => 0,
    66 => 0,
    201 => 0,
    221 => 0,
    216 => 0,
    226 => 0,
    231 => 0,
    246 => 0,
    236 => 0,
    31 => 0,
    36 => 0,
    41 => 0,
    91 => 0,
    146 => 0,
    136 => 0,
    26 => 0,
    46 => 0,
    51 => 0,
    81 => 0,
    86 => 0,
    96 => 0,
    101 => 0,
    106 => 0,
    116 => 0,
    121 => 0,
    126 => 0,
    131 => 0,
    141 => 0,
    156 => 0,
    161 => 0,
    166 => 0,
    176 => 0,
    181 => 0,
    186 => 0,
    191 => 0,
    206 => 0,
    211 => 0,
    251 => 0,
  );
  $handler->display->display_options['filters']['field_academic_calendar_display_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_academic_calendar_display_tid']['vocabulary'] = 'academic_calendar_display';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Academic Calendar: Program';
  $handler->display->display_options['pane_category']['name'] = 'Customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_academic_year_value' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.field_cta_action',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Academic year (field_academic_year)',
    ),
    'tid' => array(
      'type' => 'user',
      'context' => 'entity:field_collection_item.field_cta_action',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Program',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['academic_calendar'] = $view;

  return $export;
}
