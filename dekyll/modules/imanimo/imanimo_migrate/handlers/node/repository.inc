<?php

/**
 * Migrate "Repository" nodes.
 */
class ImanimoRepositoryNodes extends ImanimoMigration {
  public $entityType = 'node';
  public $bundle = 'repository';

  public $csvColumns = array(
    array('field_repo_url', 'URL'),
    array('field_repo_credentials', 'Credentials'),
    array('field_repo_canonical', 'Canonical'),
  );

  public function __construct() {
    parent::__construct();

    // Repository is a group.
    $this
      ->addFieldMapping(OG_GROUP_FIELD)
      ->defaultValue(TRUE);

    $this->addSimpleMappings('field_repo_url');

    $this->addSimpleMappings('field_repo_credentials');

    $this->addSimpleMappings('field_repo_canonical');
  }
}
