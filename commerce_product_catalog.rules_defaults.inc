<?php
/**
 * @file
 * commerce_product_catalog.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function commerce_product_catalog_default_rules_configuration() {
  $items = array();
  $items['rules_auto_delete_product_display'] = entity_import('rules_config', '{ "rules_auto_delete_product_display" : {
      "LABEL" : "Auto delete product display",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "entity" ],
      "ON" : [ "commerce_product_delete" ],
      "DO" : []
    }
  }');
  $items['rules_create_a_product_display'] = entity_import('rules_config', '{ "rules_create_a_product_display" : {
      "LABEL" : "Create a product display",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "entity" ],
      "ON" : [ "commerce_product_insert" ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "product_display",
              "param_title" : "[commerce-product:title]",
              "param_author" : [ "commerce-product:creator" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-commerce-ref" ],
            "value" : [ "commerce-product" ]
          }
        }
      ]
    }
  }');
  return $items;
}
