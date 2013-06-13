<?php
/**
 * @file
 * gsb_feature_academic_calendar_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_academic_calendar_display_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gsb_feature_academic_calendar_display_views_api() {
  return array("api" => "3.0");
}
