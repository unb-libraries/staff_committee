<?php
/**
 * @file
 * staff_committee.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function staff_committee_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_:node/%
  $menu_links['navigation_:node/%'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/%',
    'router_path' => 'node/%',
    'link_title' => '',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_:node/%',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_committee-child-page:node/add/committee-child-page
  $menu_links['navigation_committee-child-page:node/add/committee-child-page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/committee-child-page',
    'router_path' => 'node/add/committee-child-page',
    'link_title' => 'Committee Child Page',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'navigation_committee-child-page:node/add/committee-child-page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_committee-parent-page:node/add/committee-parent-page
  $menu_links['navigation_committee-parent-page:node/add/committee-parent-page'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/committee-parent-page',
    'router_path' => 'node/add/committee-parent-page',
    'link_title' => 'Committee Parent Page',
    'options' => array(
      'attributes' => array(
        'title' => 'A committee page that may contain any HTML, like a membership listing or related documents like a terms of reference PDF file.',
      ),
      'alter' => TRUE,
      'identifier' => 'navigation_committee-parent-page:node/add/committee-parent-page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Committee Child Page');
  t('Committee Parent Page');

  return $menu_links;
}
