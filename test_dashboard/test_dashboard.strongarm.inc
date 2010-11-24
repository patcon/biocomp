<?php

/**
 * Implementation of hook_strongarm().
 */
function test_dashboard_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_announcement';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_announcement'] = $strongarm;
  return $export;
}
