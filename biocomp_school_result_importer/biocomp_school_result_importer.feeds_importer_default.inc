<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function biocomp_school_result_importer_feeds_importer_default() {
  $export = array();
  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'results_school';
  $feeds_importer->config = array(
    'name' => 'School results',
    'description' => 'Importer for annual data attached to Competition Data content type.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => 'TAB',
        'no_headers' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsDataProcessor',
      'config' => array(
        'update_existing' => 1,
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => '0',
            'target' => 'uid',
            'unique' => 1,
          ),
          1 => array(
            'source' => '1',
            'target' => 'score',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => '6',
            'target' => 'timestamp',
            'unique' => FALSE,
          ),
        ),
        'delete_with_source' => 1,
      ),
    ),
    'content_type' => 'competition',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
  );

  $export['results_school'] = $feeds_importer;
  return $export;
}
