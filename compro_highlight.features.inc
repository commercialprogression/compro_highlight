<?php
/**
 * @file
 * compro_highlight.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function compro_highlight_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function compro_highlight_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function compro_highlight_eck_bundle_info() {
  $items = array(
    'highlight_collection' => array(
      'machine_name' => 'highlight_collection',
      'entity_type' => 'highlight',
      'name' => 'collection',
      'label' => 'collection',
    ),
    'highlight_standard' => array(
      'machine_name' => 'highlight_standard',
      'entity_type' => 'highlight',
      'name' => 'standard',
      'label' => 'standard',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function compro_highlight_eck_entity_type_info() {
  $items = array(
    'highlight' => array(
      'name' => 'highlight',
      'label' => 'highlight',
      'properties' => array(
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
      ),
    ),
  );
  return $items;
}
