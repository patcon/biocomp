<?php

/**
 * Implementation of hook_feeds_tamper_default_instances().
 */
function school_feed_test_feeds_tamper_default_instances() {
  $export = array();
  $tamper_instance = new stdClass;
  $tamper_instance->disabled = FALSE; /* Edit this to true to make a default tamper_instance disabled initially */
  $tamper_instance->api_version = 1;
  $tamper_instance->id = 'convert_n_to_numeric';
  $tamper_instance->plugin_id = 'find_replace';
  $tamper_instance->settings = array(
    'find' => 'n',
    'replace' => '0',
    'word_boundaries' => 0,
    'case_sensetive' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );

  $export['convert_n_to_numeric'] = $tamper_instance;
  $tamper_instance = new stdClass;
  $tamper_instance->disabled = FALSE; /* Edit this to true to make a default tamper_instance disabled initially */
  $tamper_instance->api_version = 1;
  $tamper_instance->id = 'convert_y_to_numeric';
  $tamper_instance->plugin_id = 'find_replace';
  $tamper_instance->settings = array(
    'find' => 'y',
    'replace' => '1',
    'word_boundaries' => 0,
    'case_sensetive' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );

  $export['convert_y_to_numeric'] = $tamper_instance;
  $tamper_instance = new stdClass;
  $tamper_instance->disabled = FALSE; /* Edit this to true to make a default tamper_instance disabled initially */
  $tamper_instance->api_version = 1;
  $tamper_instance->id = 'school_results_year_rewrite';
  $tamper_instance->plugin_id = 'rewrite';
  $tamper_instance->settings = array(
    'importer' => 'school_results',
    'school_results' => array(
      'check' => array(
        1 => 1,
        3 => 3,
        4 => 4,
        5 => 5,
        6 => 6,
      ),
      0 => '',
      1 => '',
      3 => '',
      4 => '',
      5 => '',
      6 => '[6]-01-01T00:00:00',
    ),
  );

  $export['school_results_year_rewrite'] = $tamper_instance;
  return $export;
}
