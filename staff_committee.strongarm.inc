<?php

/**
 * @file
 * staff_committee.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function staff_committee_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_committee_parent_page';
  $strongarm->value = 0;
  $export['comment_anonymous_committee_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_committee_announcements';
  $strongarm->value = 1;
  $export['comment_committee_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_committee_child_page';
  $strongarm->value = 1;
  $export['comment_committee_child_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_committee_parent_page';
  $strongarm->value = 1;
  $export['comment_committee_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_committee_parent_page';
  $strongarm->value = 1;
  $export['comment_default_mode_committee_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_committee_parent_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_committee_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_committee_parent_page';
  $strongarm->value = 1;
  $export['comment_form_location_committee_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_committee_parent_page';
  $strongarm->value = '1';
  $export['comment_preview_committee_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_committee_parent_page';
  $strongarm->value = 1;
  $export['comment_subject_field_committee_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_committee_parent_page';
  $strongarm->value = array(
    0 => 'navigation',
  );
  $export['menu_options_committee_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_committee_parent_page';
  $strongarm->value = array(
    0 => 'navigation:0',
  );
  $export['menu_parent_committee_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_committee_announcements';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_committee_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_committee_child_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_committee_child_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_committee_parent_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_committee_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_committee_parent_page';
  $strongarm->value = '1';
  $export['node_preview_committee_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_committee_announcements';
  $strongarm->value = 1;
  $export['node_submitted_committee_announcements'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_committee_child_page';
  $strongarm->value = 0;
  $export['node_submitted_committee_child_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_committee_parent_page';
  $strongarm->value = 0;
  $export['node_submitted_committee_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_committee_announcements_pattern';
  $strongarm->value = '/committees/[node:field_committee_or_publication]/announcements/[node:title]';
  $export['pathauto_node_committee_announcements_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_committee_child_page_pattern';
  $strongarm->value = '/committees/[node:field_committee_or_publication]/[node:title]';
  $export['pathauto_node_committee_child_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_committee_parent_page_pattern';
  $strongarm->value = '/committees/[node:field_committee_or_publication]';
  $export['pathauto_node_committee_parent_page_pattern'] = $strongarm;

  return $export;
}
