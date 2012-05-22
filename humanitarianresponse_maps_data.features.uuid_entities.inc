<?php
/**
 * @file
 * humanitarianresponse_maps_data.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function humanitarianresponse_maps_data_uuid_default_entities() {
  $entities = array();

  $entities['map_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/962391d1-721f-45f4-7598-6e79d600cc26',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Thematic',
    'path' => array(
      'alias' => 'map-types/thematic',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'uuid' => '962391d1-721f-45f4-7598-6e79d600cc26',
    'vocabulary_machine_name' => 'map_types',
    'weight' => '0',
  );
  $entities['map_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/d277c836-7719-47c4-7503-cd0b0fb0d0f5',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Reference',
    'path' => array(
      'alias' => 'map-types/reference',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'uuid' => 'd277c836-7719-47c4-7503-cd0b0fb0d0f5',
    'vocabulary_machine_name' => 'map_types',
    'weight' => '0',
  );
  $entities['map_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/41abcd5f-80f0-5d34-f155-9586c0db715f',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Snapshot',
    'path' => array(
      'alias' => 'map-types/snapshot',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'uuid' => '41abcd5f-80f0-5d34-f155-9586c0db715f',
    'vocabulary_machine_name' => 'map_types',
    'weight' => '0',
  );
  $entities['map_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/4a4075f1-a410-7694-dd75-93a06dec5ae2',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => 'Humanitarian Update',
    'path' => array(
      'alias' => 'map-types/humanitarian-update',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'uuid' => '4a4075f1-a410-7694-dd75-93a06dec5ae2',
    'vocabulary_machine_name' => 'map_types',
    'weight' => '0',
  );
  $entities['map_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/6e4b571f-1f83-8024-0d13-a7b07363083e',
      'cause' => FALSE,
    ),
    'description' => '',
    'format' => 'plain_text',
    'name' => '3W',
    'path' => array(
      'alias' => 'map-types/3w',
      'pathauto' => FALSE,
    ),
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'skos:Concept',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'rdfs:label',
          1 => 'skos:prefLabel',
        ),
      ),
      'description' => array(
        'predicates' => array(
          0 => 'skos:definition',
        ),
      ),
      'vid' => array(
        'predicates' => array(
          0 => 'skos:inScheme',
        ),
        'type' => 'rel',
      ),
      'parent' => array(
        'predicates' => array(
          0 => 'skos:broader',
        ),
        'type' => 'rel',
      ),
    ),
    'uuid' => '6e4b571f-1f83-8024-0d13-a7b07363083e',
    'vocabulary_machine_name' => 'map_types',
    'weight' => '0',
  );

  return $entities;
}