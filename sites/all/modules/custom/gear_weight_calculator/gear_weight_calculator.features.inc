<?php
/**
 * @file
 * gear_weight_calculator.features.inc
 */

/**
 * Implements hook_node_info().
 */
function gear_weight_calculator_node_info() {
  $items = array(
    'gear_post' => array(
      'name' => t('Gear Post'),
      'base' => 'node_content',
      'description' => t('Gear Post is dedicated to profiling a certain type of gear that was added or reviewed.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
