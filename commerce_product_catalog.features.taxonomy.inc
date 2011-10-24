<?php
/**
 * @file
 * commerce_product_catalog.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function commerce_product_catalog_taxonomy_default_vocabularies() {
  return array(
    'product_category' => array(
      'name' => 'Категория товара',
      'machine_name' => 'product_category',
      'description' => 'Категории товаров на сайте',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
