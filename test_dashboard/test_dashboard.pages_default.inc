<?php

/**
 * Implementation of hook_default_page_manager_pages().
 */
function test_dashboard_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard';
  $page->task = 'page';
  $page->admin_title = 'Account dashboard';
  $page->admin_description = 'Account dashboard for logged in users (school or admin)';
  $page->path = 'user/%uid/dashboard';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'argument_uid_1',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'uid' => array(
      'id' => 1,
      'identifier' => 'Dashboard User: ID',
      'name' => 'uid',
      'settings' => array(),
    ),
  );
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dashboard_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'School Dashboard',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'name' => 'user',
        'id' => 1,
        'identifier' => 'User',
        'keyword' => 'user',
        'context_settings' => array(
          'type' => 'current',
          'user' => '',
          'uid' => '',
        ),
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'right' => NULL,
      'default' => array(
        'corner_location' => 'pane',
      ),
    ),
    'style' => 'rounded_corners',
    'right' => array(
      'style' => '-1',
    ),
    'bottom' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = 'My School Dashboard';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'left';
    $pane->type = 'user_profile';
    $pane->subtype = 'user_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_uid_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['left'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Welcome text',
      'title' => '',
      'body' => 'Hello, %uid:name!',
      'format' => '1',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['top'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'test_announcement';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-3'] = $pane;
    $display->panels['top'][1] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard'] = $page;

 return $pages;

}
