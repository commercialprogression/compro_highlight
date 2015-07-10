<?php
/**
 * @file
 * compro_highlight.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function compro_highlight_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'highlight';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'eck_highlight';
  $view->human_name = 'highlight';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'highlight';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  /* Field: Highlight: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'eck_highlight';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Sort criterion: Highlight: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'eck_highlight';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'highlight_page');
  $handler->display->display_options['path'] = 'highlight';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $export['highlight'] = $view;

  return $export;
}
