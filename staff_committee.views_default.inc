<?php
/**
 * @file
 * staff_committee.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function staff_committee_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sc_announcements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Committee Announcements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Announcements';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More news posts ';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>All Announcements</h2>';
  $handler->display->display_options['header']['area']['format'] = 'html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Field: Content: Select Committee */
  $handler->display->display_options['fields']['field_committee_or_publication']['id'] = 'field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['field'] = 'field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['label'] = '';
  $handler->display->display_options['fields']['field_committee_or_publication']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee_or_publication']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  /* Field: Global: Contextual Links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'title' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '500',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = 'More<span class="hide"> about [title_2]</span>';
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['title_2']['element_wrapper_class'] = 'read-more';
  $handler->display->display_options['fields']['title_2']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'div';
  $handler->display->display_options['fields']['created']['element_class'] = 'posted';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = '\\P\\o\\s\\t\\e\\d \\o\\n l, F jS, Y \\a\\t g:i A';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['timezone'] = 'America/Halifax';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committee_announcements' => 'committee_announcements',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'ISC' => 'ISC',
  );

  /* Display: Announcements Block: CD */
  $handler = $view->new_display('block', 'Announcements Block: CD', 'block_cd');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All announcements';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committee_announcements' => 'committee_announcements',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'CD' => 'CD',
  );
  $handler->display->display_options['block_description'] = 'Committee Announcements Block: CD';

  /* Display: Announcements Page: CD */
  $handler = $view->new_display('page', 'Announcements Page: CD', 'page_cd');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committee_announcements' => 'committee_announcements',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'CD' => 'CD',
  );
  $handler->display->display_options['path'] = 'committees/collections-development/announcements';

  /* Display: Announcements Block: ISC */
  $handler = $view->new_display('block', 'Announcements Block: ISC', 'block_isc');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All announcements';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['block_description'] = 'Committee Announcements Block: ISC';

  /* Display: Announcements Page: ISC */
  $handler = $view->new_display('page', 'Announcements Page: ISC', 'page_isc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'committees/instructional-services-committee/announcements';

  /* Display: Announcements Block: LB */
  $handler = $view->new_display('block', 'Announcements Block: LB', 'block_lb');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All announcements';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_3';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committee_announcements' => 'committee_announcements',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'LB' => 'LB',
  );
  $handler->display->display_options['block_description'] = 'Committee Announcements Block: LB';

  /* Display: Announcements Page: LB */
  $handler = $view->new_display('page', 'Announcements Page: LB', 'page_lb');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committee_announcements' => 'committee_announcements',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'LB' => 'LB',
  );
  $handler->display->display_options['path'] = 'committees/library-board/announcements';

  /* Display: Announcements Block: PSC */
  $handler = $view->new_display('block', 'Announcements Block: PSC', 'block_psc');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All announcements';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_4';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committee_announcements' => 'committee_announcements',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'PSC' => 'PSC',
  );
  $handler->display->display_options['block_description'] = 'Committee Announcements Block: PSC';

  /* Display: Announcements Page: PSC */
  $handler = $view->new_display('page', 'Announcements Page: PSC', 'page_psc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committee_announcements' => 'committee_announcements',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'PSC' => 'PSC',
  );
  $handler->display->display_options['path'] = 'committees/public-service-committee/announcements';

  /* Display: Announcements Block: SAC */
  $handler = $view->new_display('block', 'Announcements Block: SAC', 'block_sac');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All announcements';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_5';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committee_announcements' => 'committee_announcements',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'SAC' => 'SAC',
  );
  $handler->display->display_options['block_description'] = 'Committee Announcements Block: SAC';

  /* Display: Announcements Page: SAC */
  $handler = $view->new_display('page', 'Announcements Page: SAC', 'page_sac');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committee_announcements' => 'committee_announcements',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'SAC' => 'SAC',
  );
  $handler->display->display_options['path'] = 'committees/student-advisory-council/announcements';

  /* Display: Announcements Block: STDC */
  $handler = $view->new_display('block', 'Announcements Block: STDC', 'block_stdc');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All announcements';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_6';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committee_announcements' => 'committee_announcements',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'STDC' => 'STDC',
  );
  $handler->display->display_options['block_description'] = 'Committee Announcements Block: STDC';

  /* Display: Announcements Page: STDC */
  $handler = $view->new_display('page', 'Announcements Page: STDC', 'page_stdc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committee_announcements' => 'committee_announcements',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'STDC' => 'STDC',
  );
  $handler->display->display_options['path'] = 'committees/staff-training-development-committee/announcements';

  /* Display: Announcements Block: WERC */
  $handler = $view->new_display('block', 'Announcements Block: WERC', 'block_werc');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All announcements';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_7';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committee_announcements' => 'committee_announcements',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'WERC' => 'WERC',
  );
  $handler->display->display_options['block_description'] = 'Committee Announcements Block: WERC';

  /* Display: Announcements Page: WERC */
  $handler = $view->new_display('page', 'Announcements Page: WERC', 'page_werc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committee_announcements' => 'committee_announcements',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'WERC' => 'WERC',
  );
  $handler->display->display_options['path'] = 'committees/web-electronic-resources-committee/announcements';
  $export['sc_announcements'] = $view;

  $view = new view();
  $view->name = 'sc_minutes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Committee Meeting Minutes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Meeting Minutes';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more minutes';
  $handler->display->display_options['link_display'] = 'page_3';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_minutes_file' => 'field_minutes_file',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_minutes_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 id="committee-minutes">Meeting Minutes</h2>';
  $handler->display->display_options['header']['area']['format'] = 'html';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'sc_upload_minutes_link:block';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No meeting minutes have yet been entered.';
  $handler->display->display_options['empty']['area']['format'] = 'html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File in PDF format */
  $handler->display->display_options['fields']['field_minutes_file']['id'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['table'] = 'field_data_field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['field'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['label'] = '';
  $handler->display->display_options['fields']['field_minutes_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minutes_file']['alter']['text'] = '<a href="[field_minutes_file]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_minutes_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minutes_file']['type'] = 'file_url_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Date of meeting (field_date_of_meeting) */
  $handler->display->display_options['sorts']['field_date_of_meeting_value']['id'] = 'field_date_of_meeting_value';
  $handler->display->display_options['sorts']['field_date_of_meeting_value']['table'] = 'field_data_field_date_of_meeting';
  $handler->display->display_options['sorts']['field_date_of_meeting_value']['field'] = 'field_date_of_meeting_value';
  $handler->display->display_options['sorts']['field_date_of_meeting_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting_minutes' => 'meeting_minutes',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'CD' => 'CD',
  );

  /* Display: Minutes Block: CD */
  $handler = $view->new_display('block', 'Minutes Block: CD', 'block_cd');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All committee minutes';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_minutes_file' => 'field_minutes_file',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_minutes_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File in PDF format */
  $handler->display->display_options['fields']['field_minutes_file']['id'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['table'] = 'field_data_field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['field'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['label'] = '';
  $handler->display->display_options['fields']['field_minutes_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minutes_file']['alter']['text'] = '<a href="[field_minutes_file]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_minutes_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minutes_file']['type'] = 'file_url_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['block_description'] = 'Meetings Minutes Block: CD';

  /* Display: Minutes Page: CD */
  $handler = $view->new_display('page', 'Minutes Page: CD', 'page_cd');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more minutes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>Meeting Minutes: [field_committee_or_publication]</h1>';
  $handler->display->display_options['header']['area']['format'] = 'html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File in PDF format */
  $handler->display->display_options['fields']['field_minutes_file']['id'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['table'] = 'field_data_field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['field'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['label'] = '';
  $handler->display->display_options['fields']['field_minutes_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minutes_file']['alter']['text'] = '<a href="[field_minutes_file]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_minutes_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minutes_file']['type'] = 'file_url_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  /* Field: Content: Select Committee */
  $handler->display->display_options['fields']['field_committee_or_publication']['id'] = 'field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['field'] = 'field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['label'] = '';
  $handler->display->display_options['fields']['field_committee_or_publication']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee_or_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee_or_publication']['element_default_classes'] = FALSE;
  $handler->display->display_options['path'] = 'committees/collections-development/meeting-minutes';

  /* Display: Minutes Block: ISC */
  $handler = $view->new_display('block', 'Minutes Block: ISC', 'block_isc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All committee minutes';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_minutes_file' => 'field_minutes_file',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_minutes_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 id="committee-minutes">Meeting Minutes</h2>';
  $handler->display->display_options['header']['area']['format'] = 'html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File in PDF format */
  $handler->display->display_options['fields']['field_minutes_file']['id'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['table'] = 'field_data_field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['field'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['label'] = '';
  $handler->display->display_options['fields']['field_minutes_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minutes_file']['alter']['text'] = '<a href="[field_minutes_file]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_minutes_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minutes_file']['type'] = 'file_url_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting_minutes' => 'meeting_minutes',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'ISC' => 'ISC',
  );
  $handler->display->display_options['block_description'] = 'Meetings Minutes Block: ISC';

  /* Display: Minutes Page: ISC */
  $handler = $view->new_display('page', 'Minutes Page: ISC', 'page_isc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more minutes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>Meeting Minutes: [field_committee_or_publication]</h1>';
  $handler->display->display_options['header']['area']['format'] = 'html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File in PDF format */
  $handler->display->display_options['fields']['field_minutes_file']['id'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['table'] = 'field_data_field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['field'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['label'] = '';
  $handler->display->display_options['fields']['field_minutes_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minutes_file']['alter']['text'] = '<a href="[field_minutes_file]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_minutes_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minutes_file']['type'] = 'file_url_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  /* Field: Content: Select Committee */
  $handler->display->display_options['fields']['field_committee_or_publication']['id'] = 'field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['field'] = 'field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['label'] = '';
  $handler->display->display_options['fields']['field_committee_or_publication']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee_or_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee_or_publication']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting_minutes' => 'meeting_minutes',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'ISC' => 'ISC',
  );
  $handler->display->display_options['path'] = 'committees/instructional-services/meeting-minutes';

  /* Display: Minutes Block: LB */
  $handler = $view->new_display('block', 'Minutes Block: LB', 'block_lb');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All committee minutes';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_minutes_file' => 'field_minutes_file',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_minutes_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File in PDF format */
  $handler->display->display_options['fields']['field_minutes_file']['id'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['table'] = 'field_data_field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['field'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['label'] = '';
  $handler->display->display_options['fields']['field_minutes_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minutes_file']['alter']['text'] = '<a href="[field_minutes_file]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_minutes_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minutes_file']['type'] = 'file_url_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting_minutes' => 'meeting_minutes',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'LB' => 'LB',
  );
  $handler->display->display_options['block_description'] = 'Meetings Minutes Block: LB';

  /* Display: Minutes Page: LB */
  $handler = $view->new_display('page', 'Minutes Page: LB', 'page_lb');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more minutes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>Meeting Minutes: [field_committee_or_publication]</h1>';
  $handler->display->display_options['header']['area']['format'] = 'html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File in PDF format */
  $handler->display->display_options['fields']['field_minutes_file']['id'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['table'] = 'field_data_field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['field'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['label'] = '';
  $handler->display->display_options['fields']['field_minutes_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minutes_file']['alter']['text'] = '<a href="[field_minutes_file]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_minutes_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minutes_file']['type'] = 'file_url_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  /* Field: Content: Select Committee */
  $handler->display->display_options['fields']['field_committee_or_publication']['id'] = 'field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['field'] = 'field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['label'] = '';
  $handler->display->display_options['fields']['field_committee_or_publication']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee_or_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee_or_publication']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting_minutes' => 'meeting_minutes',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'LB' => 'LB',
  );
  $handler->display->display_options['path'] = 'committees/library-board/meeting-minutes';

  /* Display: Minutes Block: PSC */
  $handler = $view->new_display('block', 'Minutes Block: PSC', 'block_psc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All committee minutes';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_4';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_minutes_file' => 'field_minutes_file',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_minutes_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File in PDF format */
  $handler->display->display_options['fields']['field_minutes_file']['id'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['table'] = 'field_data_field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['field'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['label'] = '';
  $handler->display->display_options['fields']['field_minutes_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minutes_file']['alter']['text'] = '<a href="[field_minutes_file]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_minutes_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minutes_file']['type'] = 'file_url_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting_minutes' => 'meeting_minutes',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'PSC' => 'PSC',
  );
  $handler->display->display_options['block_description'] = 'Meetings Minutes Block: PSC';

  /* Display: Minutes Page: PSC */
  $handler = $view->new_display('page', 'Minutes Page: PSC', 'page_psc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more minutes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>Meeting Minutes: [field_committee_or_publication]</h1>';
  $handler->display->display_options['header']['area']['format'] = 'html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File in PDF format */
  $handler->display->display_options['fields']['field_minutes_file']['id'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['table'] = 'field_data_field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['field'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['label'] = '';
  $handler->display->display_options['fields']['field_minutes_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minutes_file']['alter']['text'] = '<a href="[field_minutes_file]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_minutes_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minutes_file']['type'] = 'file_url_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  /* Field: Content: Select Committee */
  $handler->display->display_options['fields']['field_committee_or_publication']['id'] = 'field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['field'] = 'field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['label'] = '';
  $handler->display->display_options['fields']['field_committee_or_publication']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee_or_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee_or_publication']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting_minutes' => 'meeting_minutes',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'PSC' => 'PSC',
  );
  $handler->display->display_options['path'] = 'committees/public-service/meeting-minutes';

  /* Display: Minutes Block: SAC */
  $handler = $view->new_display('block', 'Minutes Block: SAC', 'block_sac');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All committee minutes';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_minutes_file' => 'field_minutes_file',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_minutes_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File in PDF format */
  $handler->display->display_options['fields']['field_minutes_file']['id'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['table'] = 'field_data_field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['field'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['label'] = '';
  $handler->display->display_options['fields']['field_minutes_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minutes_file']['alter']['text'] = '<a href="[field_minutes_file]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_minutes_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_minutes_file']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_minutes_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minutes_file']['type'] = 'file_url_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting_minutes' => 'meeting_minutes',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'SAC' => 'SAC',
  );
  $handler->display->display_options['block_description'] = 'Meetings Minutes Block: SAC';

  /* Display: Minutes Page: SAC */
  $handler = $view->new_display('page', 'Minutes Page: SAC', 'page_sac');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more minutes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>Meeting Minutes: [field_committee_or_publication]</h1>';
  $handler->display->display_options['header']['area']['format'] = 'html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File in PDF format */
  $handler->display->display_options['fields']['field_minutes_file']['id'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['table'] = 'field_data_field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['field'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['label'] = '';
  $handler->display->display_options['fields']['field_minutes_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minutes_file']['alter']['text'] = '<a href="[field_minutes_file]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_minutes_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minutes_file']['type'] = 'file_url_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  /* Field: Content: Select Committee */
  $handler->display->display_options['fields']['field_committee_or_publication']['id'] = 'field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['field'] = 'field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['label'] = '';
  $handler->display->display_options['fields']['field_committee_or_publication']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee_or_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee_or_publication']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting_minutes' => 'meeting_minutes',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'SAC' => 'SAC',
  );
  $handler->display->display_options['path'] = 'committees/student-advisory-council/meeting-minutes';

  /* Display: Minutes Block: STDC */
  $handler = $view->new_display('block', 'Minutes Block: STDC', 'block_stdc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All committee minutes';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_6';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_minutes_file' => 'field_minutes_file',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_minutes_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File in PDF format */
  $handler->display->display_options['fields']['field_minutes_file']['id'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['table'] = 'field_data_field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['field'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['label'] = '';
  $handler->display->display_options['fields']['field_minutes_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minutes_file']['alter']['text'] = '<a href="[field_minutes_file]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_minutes_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minutes_file']['type'] = 'file_url_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting_minutes' => 'meeting_minutes',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'STDC' => 'STDC',
  );
  $handler->display->display_options['block_description'] = 'Meetings Minutes Block: STDC';

  /* Display: Minutes Page: STDC */
  $handler = $view->new_display('page', 'Minutes Page: STDC', 'page_stdc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more minutes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>Meeting Minutes: [field_committee_or_publication]</h1>';
  $handler->display->display_options['header']['area']['format'] = 'html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File in PDF format */
  $handler->display->display_options['fields']['field_minutes_file']['id'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['table'] = 'field_data_field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['field'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['label'] = '';
  $handler->display->display_options['fields']['field_minutes_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minutes_file']['alter']['text'] = '<a href="[field_minutes_file]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_minutes_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minutes_file']['type'] = 'file_url_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  /* Field: Content: Select Committee */
  $handler->display->display_options['fields']['field_committee_or_publication']['id'] = 'field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['field'] = 'field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['label'] = '';
  $handler->display->display_options['fields']['field_committee_or_publication']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee_or_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee_or_publication']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting_minutes' => 'meeting_minutes',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'STDC' => 'STDC',
  );
  $handler->display->display_options['path'] = 'committees/staff-training-development-committee/meeting-minutes';

  /* Display: Minutes Block: WERC */
  $handler = $view->new_display('block', 'Minutes Block: WERC', 'block_werc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'All committee minutes';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_7';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_minutes_file' => 'field_minutes_file',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_minutes_file' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File in PDF format */
  $handler->display->display_options['fields']['field_minutes_file']['id'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['table'] = 'field_data_field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['field'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['label'] = '';
  $handler->display->display_options['fields']['field_minutes_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minutes_file']['alter']['text'] = '<a href="[field_minutes_file]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_minutes_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minutes_file']['type'] = 'file_url_plain';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting_minutes' => 'meeting_minutes',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'WERC' => 'WERC',
  );
  $handler->display->display_options['block_description'] = 'Meetings Minutes Block: WERC';

  /* Display: Minutes Page: WERC */
  $handler = $view->new_display('page', 'Minutes Page: WERC', 'page_werc');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more minutes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1>Meeting Minutes: [field_committee_or_publication]</h1>';
  $handler->display->display_options['header']['area']['format'] = 'html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File in PDF format */
  $handler->display->display_options['fields']['field_minutes_file']['id'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['table'] = 'field_data_field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['field'] = 'field_minutes_file';
  $handler->display->display_options['fields']['field_minutes_file']['label'] = '';
  $handler->display->display_options['fields']['field_minutes_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_minutes_file']['alter']['text'] = '<a href="[field_minutes_file]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_minutes_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_minutes_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_minutes_file']['type'] = 'file_url_plain';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = TRUE;
  /* Field: Content: Select Committee */
  $handler->display->display_options['fields']['field_committee_or_publication']['id'] = 'field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['field'] = 'field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['label'] = '';
  $handler->display->display_options['fields']['field_committee_or_publication']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee_or_publication']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_committee_or_publication']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting_minutes' => 'meeting_minutes',
  );
  /* Filter criterion: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['filters']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['filters']['field_committee_or_publication_value']['value'] = array(
    'WERC' => 'WERC',
  );
  $handler->display->display_options['path'] = 'committees/web-electronic-resources-committee/meeting-minutes';
  $export['sc_minutes'] = $view;

  $view = new view();
  $view->name = 'sc_toc_links';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Committee Pages Toc';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'committee-toc';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Select Committee */
  $handler->display->display_options['fields']['field_committee_or_publication']['id'] = 'field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['field'] = 'field_committee_or_publication';
  $handler->display->display_options['fields']['field_committee_or_publication']['label'] = '';
  $handler->display->display_options['fields']['field_committee_or_publication']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_committee_or_publication']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
  /* Contextual filter: Content: Select Committee (field_committee_or_publication) */
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['id'] = 'field_committee_or_publication_value';
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['table'] = 'field_data_field_committee_or_publication';
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['field'] = 'field_committee_or_publication_value';
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['default_argument_options']['code'] = '$uri = $_SERVER[REQUEST_URI];
// only add contextual block on "committees" pages
if (strpos($uri, \'/committees/\') === false) {return -1;}
// $uri + contextual filter string source: Meeting Minutes > field_committee_or_publication > Select list
if (strpos($uri, \'collections\') !== false) {return \'CD\';}
elseif (strpos($uri, \'instructional\') !== false) {return \'ISC\';}
elseif (strpos($uri, \'commons\') !== false) {return \'LCSWG\';}
elseif (strpos($uri, \'board\') !== false) {return \'LB\';}
elseif (strpos($uri, \'public\') !== false) {return \'PSC\';}
elseif (strpos($uri, \'student\') !== false) {return \'SAC\';}
elseif (strpos($uri, \'staff\') !== false) {return \'STDC\';}
elseif (strpos($uri, \'electronic\') !== false) {return \'WERC\';}
elseif (strpos($uri, \'website\') !== false) {return \'WRC\';}
else {return -1;}';
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_committee_or_publication_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'committee_child_page' => 'committee_child_page',
    'committee_parent_page' => 'committee_parent_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 id="related-pages">Pages</h2>';
  $handler->display->display_options['header']['area']['format'] = 'extended_html_admin';
  $export['sc_toc_links'] = $view;

  $view = new view();
  $view->name = 'sc_upload_minutes_link';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Committee Upload meeting minutes link';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    14 => '14',
    16 => '16',
    18 => '18',
    20 => '20',
    22 => '22',
    24 => '24',
    54 => '54',
    26 => '26',
    28 => '28',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="more-link add-meeting-minutes"><a href="/node/add/meeting-minutes">Upload more minutes</a></div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting_minutes' => 'meeting_minutes',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Committee Upload More Minutes Block';
  $export['sc_upload_minutes_link'] = $view;

  return $export;
}
