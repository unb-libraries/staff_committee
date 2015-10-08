<?php
/**
 * @file
 * staff_committee.features.inc
 */

/**
 * Implements hook_views_api().
 */
function staff_committee_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function staff_committee_node_info() {
  $items = array(
    'committee_announcements' => array(
      'name' => t('Committee Announcements'),
      'base' => 'node_content',
      'description' => t('Announcements nodes that are associated with Committee Parent Pages and posted by the Committee Admin role. Sticky to top of Lists and Promote to Front page are supported.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'committee_child_page' => array(
      'name' => t('Committee Child Page'),
      'base' => 'node_content',
      'description' => t('A committee sub page that may contain any HTML. Sidebar links are created automatically.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'committee_parent_page' => array(
      'name' => t('Committee Parent Page'),
      'base' => 'node_content',
      'description' => t('A committee page that may contain any HTML, like a membership listing or related documents like a terms of reference PDF file.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
