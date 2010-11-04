<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function biocomp_schools_importer_feeds_importer_default() {
  $export = array();
  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'importer_schools';
  $feeds_importer->config = array(
    'name' => 'School importer',
    'description' => 'Importer for getting school accounts into new site.',
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
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          3 => 3,
          4 => 0,
        ),
        'update_existing' => 1,
        'status' => '1',
        'mappings' => array(
          0 => array(
            'source' => '0',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => '2',
            'target' => 'mail',
            'unique' => FALSE,
          ),
        ),
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );

  $export['importer_schools'] = $feeds_importer;
  return $export;
}
