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
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Thematic',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Thematic',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Thematic',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Thématique',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Temático',
        ),
      ),
    ),
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
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
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
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Reference',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Reference',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Reference',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Référence',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Referencia',
        ),
      ),
    ),
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
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
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
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Snapshot',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Snapshot',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Snapshot',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Instantané',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Infografía',
        ),
      ),
    ),
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
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
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
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Humanitarian Update',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Humanitarian Update',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Humanitarian Update',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Actualisation Humanitaire',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Actualización Humanitaria',
        ),
      ),
    ),
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
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
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
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => '3W',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => '3W',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => '3W',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => '3W',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => '3W',
        ),
      ),
    ),
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
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '6e4b571f-1f83-8024-0d13-a7b07363083e',
    'vocabulary_machine_name' => 'map_types',
    'weight' => '0',
  );
  $entities['map_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/366de738-bd2f-9334-61a7-b53c8ae2f736',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Dashboard',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Dashboard',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Dashboard',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Tableau de Bord',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Tablero de control',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'map-types/dashboard',
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
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '366de738-bd2f-9334-61a7-b53c8ae2f736',
    'vocabulary_machine_name' => 'map_types',
    'weight' => '0',
  );
  $entities['map_types'][] = (object) array(
    '__metadata' => array(
      'type' => 'taxonomy_term',
      'uri' => 'taxonomy_term/6c4a6cc4-b9de-ac94-21bf-ce7b500fae53',
      'cause' => FALSE,
    ),
    'description' => '',
    'description_field' => array(
      'und' => array(
        0 => array(
          'format' => 'plain_text',
          'summary' => NULL,
          'value' => '',
        ),
      ),
    ),
    'format' => 'plain_text',
    'language' => 'und',
    'name' => 'Funding Graphic',
    'name_field' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Funding Graphic',
        ),
      ),
      'en' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Funding Graphic',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Graphique de Financement',
        ),
      ),
      'es' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Gráfico de Financiación',
        ),
      ),
    ),
    'path' => array(
      'alias' => 'map-types/funding-graphic',
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
    'translations' => array(
      'original' => 'en',
      'data' => array(
        'en' => array(
          'language' => 'en',
          'source' => '',
          'status' => '1',
          'translate' => '0',
        ),
        'fr' => array(
          'language' => 'fr',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
        'es' => array(
          'language' => 'es',
          'source' => 'en',
          'status' => '1',
          'translate' => '0',
        ),
      ),
    ),
    'uuid' => '6c4a6cc4-b9de-ac94-21bf-ce7b500fae53',
    'vocabulary_machine_name' => 'map_types',
    'weight' => '0',
  );

  return $entities;
}
