<?php
/**
 * @file
 * commerce_product_catalog.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function commerce_product_catalog_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'products_of_a_category';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term; it also emulates Views 1\'s handling by having two possible feeds.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'products_of_a_category';
  $view->core = 0;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'YYY [vocabulary]';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* Relationship: Content: Referenced product */
  $handler->display->display_options['relationships']['field_commerce_ref_product_id']['id'] = 'field_commerce_ref_product_id';
  $handler->display->display_options['relationships']['field_commerce_ref_product_id']['table'] = 'field_data_field_commerce_ref';
  $handler->display->display_options['relationships']['field_commerce_ref_product_id']['field'] = 'field_commerce_ref_product_id';
  $handler->display->display_options['relationships']['field_commerce_ref_product_id']['required'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Product: Изображение */
  $handler->display->display_options['fields']['field_product_picture']['id'] = 'field_product_picture';
  $handler->display->display_options['fields']['field_product_picture']['table'] = 'field_data_field_product_picture';
  $handler->display->display_options['fields']['field_product_picture']['field'] = 'field_product_picture';
  $handler->display->display_options['fields']['field_product_picture']['relationship'] = 'field_commerce_ref_product_id';
  $handler->display->display_options['fields']['field_product_picture']['label'] = '';
  $handler->display->display_options['fields']['field_product_picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_product_picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_product_picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_product_picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_product_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_product_picture']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_product_picture']['field_api_classes'] = 0;
  /* Field: Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_commerce_ref_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['external'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['commerce_price']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['commerce_price']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['html'] = 0;
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['commerce_price']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['commerce_price']['hide_empty'] = 0;
  $handler->display->display_options['fields']['commerce_price']['empty_zero'] = 0;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_formatted_amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => FALSE,
  );
  $handler->display->display_options['fields']['commerce_price']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = 'Подробнее';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['relationship'] = 'field_commerce_ref_product_id';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['exclude'] = TRUE;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['external'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['html'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['hide_empty'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['empty_zero'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="price">[commerce_price]</div> [title_1] [add_to_cart_form] ';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
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
  /* Contextual filter: Product: Каталог (field_catalog) */
  $handler->display->display_options['arguments']['field_catalog_tid']['id'] = 'field_catalog_tid';
  $handler->display->display_options['arguments']['field_catalog_tid']['table'] = 'field_data_field_catalog';
  $handler->display->display_options['arguments']['field_catalog_tid']['field'] = 'field_catalog_tid';
  $handler->display->display_options['arguments']['field_catalog_tid']['relationship'] = 'field_commerce_ref_product_id';
  $handler->display->display_options['arguments']['field_catalog_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_catalog_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_catalog_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_catalog_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_catalog_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_catalog_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_catalog_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_catalog_tid']['not'] = 0;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: Core feed */
  $handler = $view->new_display('feed', 'Core feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 15;
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'taxonomy/term/%/%/feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Views 1 feed */
  $handler = $view->new_display('feed', 'Views 1 feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 15;
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'taxonomy/term/%/feed';
  $translatables['products_of_a_category'] = array(
    t('Master'),
    t('YYY [vocabulary]'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Product'),
    t('Подробнее'),
    t('<div class="price">[commerce_price]</div> [title_1] [add_to_cart_form] '),
    t('All'),
    t('Page'),
    t('Core feed'),
    t('Views 1 feed'),
  );
  $export['products_of_a_category'] = $view;

  return $export;
}
