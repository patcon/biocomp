<?php

/**
 * Implementation of hook_data_default().
 */
function biocomp_school_result_importer_data_default() {
  $export = array();
  $data_table = new stdClass;
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'School results';
  $data_table->name = 'feeds_data_results_school';
  $data_table->table_schema = array(
    'description' => '',
    'fields' => array(
      'feed_nid' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'description' => '',
      ),
      'id' => array(
        'type' => 'serial',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'description' => '',
      ),
      'timestamp' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => FALSE,
        'description' => '',
      ),
      'uid' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
      ),
      'score' => array(
        'type' => 'float',
        'size' => 'normal',
      ),
      'team_score' => array(
        'type' => 'float',
        'size' => 'normal',
      ),
      'team_rank' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => 1,
      ),
      'team_ties' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => 1,
      ),
    ),
    'name' => 'feeds_data_results_school',
    'indexes' => array(
      'feed_nid' => array(
        0 => 'feed_nid',
      ),
      'id' => array(
        0 => 'id',
      ),
      'timestamp' => array(
        0 => 'timestamp',
      ),
    ),
    'primary key' => array(
      0 => 'id',
    ),
  );
  $data_table->meta = array(
    'fields' => array(
      'uid' => array(
        'label' => 'School account user ID',
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'score' => array(
        'label' => 'Average student score',
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_float',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'feed_nid' => array(
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
        'label' => 'Competition Data node ID',
      ),
      'id' => array(
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
        'label' => 'School result ID',
      ),
      'timestamp' => array(
        'views_field_handler' => 'views_handler_field_date',
        'views_filter_handler' => 'views_handler_filter_date',
        'views_argument_handler' => 'views_handler_argument_date',
        'views_sort_handler' => 'views_handler_sort_date',
        'label' => 'Exam year',
      ),
      'team' => array(
        'label' => 'Team?',
      ),
      'team_score' => array(
        'label' => 'Team score (total)',
      ),
      'team_rank' => array(
        'label' => 'Team rank',
      ),
      'team_ties' => array(
        'label' => 'Teams tied for rank',
      ),
    ),
    'join' => array(
      'node' => array(
        'left_field' => 'nid',
        'field' => 'feed_nid',
        'inner_join' => '0',
      ),
      'users' => array(
        'left_field' => 'uid',
        'field' => 'uid',
        'inner_join' => '0',
      ),
    ),
  );

  $export['feeds_data_results_school'] = $data_table;
  return $export;
}
