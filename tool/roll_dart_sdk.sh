#!/usr/bin/env bash

set -euxo pipefail

REPO_ROOT="$(cd "$(dirname -- "${BASH_SOURCE[0]}" )/.." >/dev/null && pwd )"
TRACKING_BRANCH='main'

# How many hex digits of git revisions to use in commit messages
SHORT_REV_LENGTH='10'

cd "$REPO_ROOT/third_party/dart-sdk"

PREVIOUS_REVISION=$(git rev-parse --short=$SHORT_REV_LENGTH HEAD)

# Sub-modules default to detached HEAD, check out `main` branch
git checkout $TRACKING_BRANCH

git pull --ff-only

set +x

NEW_REVISION=$(git rev-parse --short=$SHORT_REV_LENGTH HEAD)

if [[ $PREVIOUS_REVISION == $NEW_REVISION ]]; then
  echo -e "Tried to update the Dart SDK, but apparently you are at the latest $TRACKING_BRANCH commit: $NEW_REVISION"
  exit 0
fi

echo "Updated local Dart SDK from $PREVIOUS_REVISION to $NEW_REVISION"
echo -e "To commit your changes, run the following:\n"
echo "cd $REPO_ROOT"
echo 'git add third_party/dart-sdk'
echo "git commit -m 'Rolled Dart SDK to $NEW_REVISION'"
