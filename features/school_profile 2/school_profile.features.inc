<?php

/**
 * Implementation of hook_node_info().
 */
function school_profile_node_info() {
  $items = array(
    'school' => array(
      'name' => t('School profile'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('School'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
