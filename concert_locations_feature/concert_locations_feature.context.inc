<?php
/**
 * @file
 * concert_locations_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function concert_locations_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'locations';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'locations' => 'locations',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-17' => array(
          'module' => 'block',
          'delta' => '17',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-Locations2-block_3' => array(
          'module' => 'views',
          'delta' => 'Locations2-block_3',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-Locations2-block_2' => array(
          'module' => 'views',
          'delta' => 'Locations2-block_2',
          'region' => 'content',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['locations'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'locations_advisors';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'locations/independent-advisors' => 'locations/independent-advisors',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-17' => array(
          'module' => 'block',
          'delta' => '17',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-Locations2-block_1' => array(
          'module' => 'views',
          'delta' => 'Locations2-block_1',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-Locations2-block_2' => array(
          'module' => 'views',
          'delta' => 'Locations2-block_2',
          'region' => 'content',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['locations_advisors'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'locations_corporate';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'locations/branch-offices' => 'locations/branch-offices',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-17' => array(
          'module' => 'block',
          'delta' => '17',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-Locations2-block_3' => array(
          'module' => 'views',
          'delta' => 'Locations2-block_3',
          'region' => 'content',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['locations_corporate'] = $context;

  return $export;
}
