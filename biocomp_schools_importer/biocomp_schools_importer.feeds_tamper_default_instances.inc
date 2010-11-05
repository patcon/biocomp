<?php

/**
 * Implementation of hook_feeds_tamper_default_instances().
 */
function biocomp_schools_importer_feeds_tamper_default_instances() {
  $export = array();
  $tamper_instance = new stdClass;
  $tamper_instance->disabled = FALSE; /* Edit this to true to make a default tamper_instance disabled initially */
  $tamper_instance->api_version = 1;
  $tamper_instance->id = 'extract_email_from_schools_column';
  $tamper_instance->plugin_id = 'find_replace_regex';
  $tamper_instance->settings = array(
    'find' => '/^(.+)\\<(.+)\\>$/',
    'replace' => '$2',
    'limit' => 1,
  );

  $export['extract_email_from_schools_column'] = $tamper_instance;
  $tamper_instance = new stdClass;
  $tamper_instance->disabled = FALSE; /* Edit this to true to make a default tamper_instance disabled initially */
  $tamper_instance->api_version = 1;
  $tamper_instance->id = 'school_name_decode';
  $tamper_instance->plugin_id = 'html_entity_decode';
  $tamper_instance->settings = FALSE;

  $export['school_name_decode'] = $tamper_instance;
  return $export;
}
