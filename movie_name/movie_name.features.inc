<?php
/**
 * @file
 * movie_name.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function movie_name_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function movie_name_node_info() {
  $items = array(
    'movie' => array(
      'name' => t('Movie'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Movie Name'),
      'help' => '',
    ),
  );
  return $items;
}
