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
  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'importer_schools_profiles';
  $feeds_importer->config = array(
    'name' => 'School profile importer',
    'description' => 'Importer for getting school profiles into new site.',
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
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'school',
        'input_format' => '2',
        'update_existing' => '1',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => '0',
            'target' => 'uid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => '1',
            'target' => 'field_schoolname',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => '2',
            'target' => 'field_name_first',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => '10',
            'target' => 'field_phone',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => '11',
            'target' => 'field_fax',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => '0',
            'target' => 'guid',
            'unique' => 1,
          ),
          6 => array(
            'source' => '0',
            'target' => 'field_school_code',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => '2',
            'target' => 'field_name_last',
            'unique' => FALSE,
          ),
        ),
        'author' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );

  $export['importer_schools_profiles'] = $feeds_importer;
  return $export;
}
