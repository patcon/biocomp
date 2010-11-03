<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function school_feed_test_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "data" && $api == "data_default") {
    return array("version" => 1);
  }
  elseif ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
  elseif ($module == "feeds_tamper" && $api == "feeds_tamper_default_instances") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function school_feed_test_node_info() {
  $items = array(
    'competition' => array(
      'name' => t('Competition data'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
