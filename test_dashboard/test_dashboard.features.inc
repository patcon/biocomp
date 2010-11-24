<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function test_dashboard_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_flag_default_flags().
 */
function test_dashboard_flag_default_flags() {
$flags = array();
// Exported flag: "Hide announcement".
$flags[] = array (
  'content_type' => 'node',
  'name' => 'hide',
  'title' => 'Hide announcement',
  'global' => '0',
  'types' => 
  array (
    0 => 'announcement',
  ),
  'flag_short' => 'Hide',
  'flag_long' => 'Hide this announcement.',
  'flag_message' => '',
  'unflag_short' => 'Show',
  'unflag_long' => 'Show this announcement',
  'unflag_message' => '',
  'unflag_denied_text' => 'Hidden',
  'link_type' => 'toggle',
  'roles' => 
  array (
    'flag' => 
    array (
      0 => 3,
    ),
    'unflag' => 
    array (
    ),
  ),
  'show_on_page' => 0,
  'show_on_teaser' => 0,
  'show_on_form' => 0,
  'access_author' => '',
  'i18n' => 0,
  'module' => 'test_dashboard',
  'api_version' => 2,
);
return $flags;
}

/**
 * Implementation of hook_node_info().
 */
function test_dashboard_node_info() {
  $items = array(
    'announcement' => array(
      'name' => t('Announcement'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function test_dashboard_views_api() {
  return array(
    'api' => '2',
  );
}
