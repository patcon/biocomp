<?php

/**
 * Implementation of hook_views_default_views().
 */
function biocomp_school_results_views_views_default_views() {
  $views = array();

  // Exported view: test_results_school
  $view = new view;
  $view->name = 'test_results_school';
  $view->description = '';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'users';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'content_profile_rel' => array(
      'label' => 'Content Profile',
      'required' => 0,
      'type' => 'school',
      'id' => 'content_profile_rel',
      'table' => 'users',
      'field' => 'content_profile_rel',
      'relationship' => 'none',
    ),
    'uid' => array(
      'label' => 'feeds_data_results_school.uid -> users.uid',
      'required' => 0,
      'id' => 'uid',
      'table' => 'feeds_data_results_school',
      'field' => 'uid',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('fields', array(
    'team_ties' => array(
      'label' => 'Teams tied',
      'alter' => array(
        'alter_text' => 1,
        'text' => ' ([team_ties])',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 1,
      'id' => 'team_ties',
      'table' => 'feeds_data_results_school',
      'field' => 'team_ties',
      'relationship' => 'uid',
    ),
    'team_rank' => array(
      'label' => 'Team rank',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'team_rank',
      'table' => 'feeds_data_results_school',
      'field' => 'team_rank',
      'relationship' => 'uid',
    ),
    'field_schoolname_value' => array(
      'label' => 'School',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'plain',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_schoolname_value',
      'table' => 'node_data_field_schoolname',
      'field' => 'field_schoolname_value',
      'relationship' => 'content_profile_rel',
    ),
    'team_score' => array(
      'label' => 'Team score',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'team_score',
      'table' => 'feeds_data_results_school',
      'field' => 'team_score',
      'relationship' => 'uid',
    ),
  ));
  $handler->override_option('sorts', array(
    'team_rank' => array(
      'order' => 'ASC',
      'id' => 'team_rank',
      'table' => 'feeds_data_results_school',
      'field' => 'team_rank',
      'relationship' => 'uid',
    ),
  ));
  $handler->override_option('arguments', array(
    'field_schoolname_value' => array(
      'id' => 'field_schoolname_value',
      'table' => 'node_data_field_schoolname',
      'field' => 'field_schoolname_value',
      'relationship' => 'content_profile_rel',
    ),
  ));
  $handler->override_option('filters', array(
    'rid' => array(
      'operator' => 'or',
      'value' => array(
        '3' => '3',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'rid',
      'table' => 'users_roles',
      'field' => 'rid',
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
    'team_rank' => array(
      'operator' => '<=',
      'value' => array(
        'value' => '75',
        'min' => '',
        'max' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'team_rank',
      'table' => 'feeds_data_results_school',
      'field' => 'team_rank',
      'relationship' => 'uid',
    ),
    'team_ties' => array(
      'operator' => '!=',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'team_ties',
      'table' => 'feeds_data_results_school',
      'field' => 'team_ties',
      'relationship' => 'none',
    ),
    'date_filter' => array(
      'operator' => '=',
      'value' => array(
        'value' => NULL,
        'min' => NULL,
        'max' => NULL,
        'default_date' => '',
        'default_to_date' => '',
      ),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'date_filter_op',
        'identifier' => 'year',
        'label' => 'Year',
        'optional' => 1,
        'remember' => 0,
      ),
      'date_fields' => array(
        'feeds_data_results_school.timestamp' => 'feeds_data_results_school.timestamp',
      ),
      'date_method' => 'OR',
      'granularity' => 'year',
      'form_type' => 'date_select',
      'default_date' => '',
      'default_to_date' => '',
      'year_range' => '1995:+0',
      'id' => 'date_filter',
      'table' => 'feeds_data_results_school',
      'field' => 'date_filter',
      'relationship' => 'uid',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'asc',
    'columns' => array(
      'field_schoolname_value' => 'field_schoolname_value',
    ),
    'info' => array(
      'field_schoolname_value' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'school-results');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
