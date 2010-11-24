<?php

/**
 * Implementation of hook_strongarm().
 */
function biocomp_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_update_action';
  $strongarm->value = '3';

  $export['pathauto_update_action'] = $strongarm;
  return $export;
}
