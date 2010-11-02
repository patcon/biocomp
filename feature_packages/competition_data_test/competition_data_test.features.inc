<?php

/**
 * Implementation of hook_node_info().
 */
function competition_data_test_node_info() {
  $items = array(
    'competition' => array(
      'name' => t('Competition data'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
