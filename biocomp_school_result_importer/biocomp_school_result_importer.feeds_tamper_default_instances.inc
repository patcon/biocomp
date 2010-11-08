<?php

/**
 * Implementation of hook_feeds_tamper_default_instances().
 */
function biocomp_school_result_importer_feeds_tamper_default_instances() {
  $export = array();
  $tamper_instance = new stdClass;
  $tamper_instance->disabled = FALSE; /* Edit this to true to make a default tamper_instance disabled initially */
  $tamper_instance->api_version = 1;
  $tamper_instance->id = 'convert_school_code_to_uid';
  $tamper_instance->plugin_id = 'id_from_field';
  $tamper_instance->settings = FALSE;

  $export['convert_school_code_to_uid'] = $tamper_instance;
  $tamper_instance = new stdClass;
  $tamper_instance->disabled = FALSE; /* Edit this to true to make a default tamper_instance disabled initially */
  $tamper_instance->api_version = 1;
  $tamper_instance->id = 'convert_year_to_unix';
  $tamper_instance->plugin_id = 'convert_date';
  $tamper_instance->settings = FALSE;

  $export['convert_year_to_unix'] = $tamper_instance;
  $tamper_instance = new stdClass;
  $tamper_instance->disabled = FALSE; /* Edit this to true to make a default tamper_instance disabled initially */
  $tamper_instance->api_version = 1;
  $tamper_instance->id = 'school_results_year_rewrite';
  $tamper_instance->plugin_id = 'rewrite';
  $tamper_instance->settings = array(
    'importer' => 'results_school',
    'results_school' => array(
      'check' => array(
        1 => 1,
      ),
      0 => '23',
      1 => 'blah',
    ),
  );

  $export['school_results_year_rewrite'] = $tamper_instance;
  return $export;
}
