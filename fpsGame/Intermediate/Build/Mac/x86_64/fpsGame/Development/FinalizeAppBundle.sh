#!/bin/sh
cd "/Users/lukehawinkels/Desktop/Projects/COMP313-Assignment-01/fpsGame/Binaries/Mac"
mkdir -p "fpsGame.app/Contents/MacOS"
mkdir -p "fpsGame.app/Contents/Resources"
rsync --checksum "/Users/Shared/Epic Games/UE_4.26/Engine/Source/Runtime/Launch/Resources/Mac/UE4.icns" "fpsGame.app/Contents/Resources/fpsGame.icns"
rsync --checksum "/Users/Shared/Epic Games/UE_4.26/Engine/Source/Runtime/Launch/Resources/Mac/Info.plist" "$TMPDIR/TempInfo.plist"
/usr/bin/sed -i "" -e "s/\${EXECUTABLE_NAME}/fpsGame/g" "$TMPDIR/TempInfo.plist"
/usr/bin/sed -i "" -e "s/\${APP_NAME}/com.YourCompany.fpsGame/g" "$TMPDIR/TempInfo.plist"
/usr/bin/sed -i "" -e "s/\${MACOSX_DEPLOYMENT_TARGET}/10.14.6/g" "$TMPDIR/TempInfo.plist"
/usr/bin/sed -i "" -e "s/\${ICON_NAME}/fpsGame/g" "$TMPDIR/TempInfo.plist"
/usr/bin/sed -i "" -e "s/\${BUNDLE_VERSION}/4.26.2/g" "$TMPDIR/TempInfo.plist"
rsync --checksum "$TMPDIR/TempInfo.plist" "fpsGame.app/Contents/Info.plist"
chmod 644 "fpsGame.app/Contents/Info.plist"
echo 'echo -n "APPL????"' | bash > "$TMPDIR/TempPkgInfo"
rsync --checksum "$TMPDIR/TempPkgInfo" "fpsGame.app/Contents/PkgInfo"
touch -c "fpsGame.app"
