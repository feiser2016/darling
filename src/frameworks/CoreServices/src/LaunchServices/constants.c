#include <LaunchServices/LaunchServices.h>
#include <LaunchServices/LaunchServicesPriv.h>

const CFStringRef _kLSArchitecturePowerPCValue = CFSTR("ppc");
const CFStringRef _kLSArchitecturePowerPC64Value = CFSTR("ppc64");
const CFStringRef _kLSArchitecturei386Value = CFSTR("i386");
const CFStringRef _kLSArchitecturex86_64Value = CFSTR("x86_64");
const CFStringRef _kLSArchitectureUnknownValue = CFSTR("unknown");

const CFStringRef _kLSPIDKey = CFSTR("LSPID");
const CFStringRef _kLSExecutablePathKey = CFSTR("LSExecutablePath");
const CFStringRef _kLSCheckInTimeKey = CFSTR("LSCheckInTime");
const CFStringRef _kLSDisplayNameKey = CFSTR("LSDisplayName");
const CFStringRef _kLSArchitectureKey = CFSTR("LSArchitecture");
const CFStringRef _kLSBundlePathKey = CFSTR("LSBundlePath");

const CFStringRef _kLSApplicationTypeKey = CFSTR("ApplicationType");
const CFStringRef _kLSApplicationForegroundTypeKey = CFSTR("Foreground");
const CFStringRef _kLSApplicationBackgroundOnlyTypeKey = CFSTR("BackgroundOnly");

const CFStringRef _kLSExecutableFormatKey = CFSTR("LSExecutableFormat");
const CFStringRef _kLSExecutableFormatMachOKey = CFSTR("LSExecutableMachOFormat");
const CFStringRef _kLSExecutableFormatCFMKey = CFSTR("LSExecutableCFMFormat");

const CFStringRef _kLSASNKey = CFSTR("LSASN");

const CFStringRef kLSSharedFileListFavoriteItems = CFSTR("com.apple.LSSharedFileList.FavoriteItems");
const CFStringRef kLSSharedFileListFavoriteVolumes = CFSTR("com.apple.LSSharedFileList.FavoriteVolumes");
const CFStringRef kLSSharedFileListGlobalLoginItems = CFSTR("com.apple.LSSharedFileList.GlobalLoginItems");
// const LSSharedFileListRef kLSSharedFileListItemBeforeFirst;
const CFStringRef kLSSharedFileListItemHidden = CFSTR("com.apple.LSSharedFileList.ItemIsHidden");
// const LSSharedFileListItemRef kLSSharedFileListItemLast;
const CFStringRef kLSSharedFileListLoginItemHidden = CFSTR("com.apple.loginitem.HideOnLaunch");
const CFStringRef kLSSharedFileListRecentApplicationItems = CFSTR("com.apple.LSSharedFileList.RecentApplications");
const CFStringRef kLSSharedFileListRecentDocumentItems = CFSTR("com.apple.LSSharedFileList.RecentDocuments");
const CFStringRef kLSSharedFileListRecentItemsMaxAmount = CFSTR("com.apple.LSSharedFileList.MaxAmount");
const CFStringRef kLSSharedFileListRecentServerItems = CFSTR("com.apple.LSSharedFileList.RecentServers");
const CFStringRef kLSSharedFileListSessionLoginItems = CFSTR("com.apple.LSSharedFileList.SessionLoginItems");
const CFStringRef kLSSharedFileListVolumesComputerVisible = CFSTR("com.apple.LSSharedFileList.FavoriteVolumes.ComputerIsVisible");
const CFStringRef kLSSharedFileListVolumesIDiskVisible = CFSTR("com.apple.LSSharedFileList.FavoriteVolumes.iDiskIsVisible");
const CFStringRef kLSSharedFileListVolumesNetworkVisible = CFSTR("com.apple.LSSharedFileList.FavoriteVolumes.NetworkIsVisible");

const CFStringRef kUTExportedTypeDeclarationsKey = CFSTR("UTExportedTypeDeclarations");
const CFStringRef kUTImportedTypeDeclarationsKey = CFSTR("UTImportedTypeDeclarations");
const CFStringRef kUTTypeIdentifierKey = CFSTR("UTTypeIdentifier");
const CFStringRef kUTTypeTagSpecificationKey = CFSTR("UTTypeTagSpecification");
const CFStringRef kUTTypeConformsToKey = CFSTR("UTTypeConformsTo");
const CFStringRef kUTTypeDescriptionKey = CFSTR("UTTypeDescription");
const CFStringRef kUTTypeIconFileKey = CFSTR("UTTypeIconFile");
const CFStringRef kUTTypeReferenceURLKey = CFSTR("UTTypeReferenceURL");
const CFStringRef kUTTypeVersionKey = CFSTR("UTTypeVersion");
const CFStringRef kUTTagClassFilenameExtension = CFSTR("public.filename-extension");
const CFStringRef kUTTagClassMIMEType = CFSTR("public.mime-type");
const CFStringRef kUTTagClassNSPboardType = CFSTR("com.apple.nspboard-type");
const CFStringRef kUTTagClassOSType = CFSTR("com.apple.ostype");
const CFStringRef kUTTypeItem = CFSTR("public.item");
const CFStringRef kUTTypeContent = CFSTR("public.content");
const CFStringRef kUTTypeCompositeContent = CFSTR("public.composite-content");
const CFStringRef kUTTypeMessage = CFSTR("public.message");
const CFStringRef kUTTypeContact = CFSTR("public.contact");
const CFStringRef kUTTypeArchive = CFSTR("public.archive");
const CFStringRef kUTTypeDiskImage = CFSTR("public.disk-image");
const CFStringRef kUTTypeData = CFSTR("public.data");
const CFStringRef kUTTypeDirectory = CFSTR("public.directory");
const CFStringRef kUTTypeResolvable = CFSTR("com.apple.resolvable");
const CFStringRef kUTTypeSymLink = CFSTR("public.symlink");
const CFStringRef kUTTypeExecutable = CFSTR("public.executable");
const CFStringRef kUTTypeMountPoint = CFSTR("com.apple.mount-point");
const CFStringRef kUTTypeAliasFile = CFSTR("com.apple.alias-file");
const CFStringRef kUTTypeAliasRecord = CFSTR("com.apple.alias-record");
const CFStringRef kUTTypeURLBookmarkData = CFSTR("com.apple.bookmark");
const CFStringRef kUTTypeURL = CFSTR("public.url");
const CFStringRef kUTTypeFileURL = CFSTR("public.file-url");
const CFStringRef kUTTypeText = CFSTR("public.text");
const CFStringRef kUTTypePlainText = CFSTR("public.plain-text");
const CFStringRef kUTTypeUTF8PlainText = CFSTR("public.utf8-plain-text");
const CFStringRef kUTTypeUTF16ExternalPlainText = CFSTR("public.utf16-external-plain-text");
const CFStringRef kUTTypeUTF16PlainText = CFSTR("public.utf16-plain-text");
const CFStringRef kUTTypeDelimitedText = CFSTR("public.delimited-values-text");
const CFStringRef kUTTypeCommaSeparatedText = CFSTR("public.comma-separated-values-text");
const CFStringRef kUTTypeTabSeparatedText = CFSTR("public.tab-separated-values-text");
const CFStringRef kUTTypeUTF8TabSeparatedText = CFSTR("public.utf8-tab-separated-values-text");
const CFStringRef kUTTypeRTF = CFSTR("public.rtf");
const CFStringRef kUTTypeHTML = CFSTR("public.html");
const CFStringRef kUTTypeXML = CFSTR("public.xml");
const CFStringRef kUTTypeSourceCode = CFSTR("public.source-code");
const CFStringRef kUTTypeAssemblyLanguageSource = CFSTR("public.assembly-source");
const CFStringRef kUTTypeCSource = CFSTR("public.c-source");
const CFStringRef kUTTypeObjectiveCSource = CFSTR("public.objective-c-source");
const CFStringRef kUTTypeSwiftSource = CFSTR("public.swift-source");
const CFStringRef kUTTypeCPlusPlusSource = CFSTR("public.c-plus-plus-source");
const CFStringRef kUTTypeObjectiveCPlusPlusSource = CFSTR("public.objective-c-plus-plus-source");
const CFStringRef kUTTypeCHeader = CFSTR("public.c-header");
const CFStringRef kUTTypeCPlusPlusHeader = CFSTR("public.c-plus-plus-header");
const CFStringRef kUTTypeJavaSource = CFSTR("com.sun.java-source");
const CFStringRef kUTTypeScript = CFSTR("public.script");
const CFStringRef kUTTypeAppleScript = CFSTR("com.apple.applescript.text");
const CFStringRef kUTTypeOSAScript = CFSTR("com.apple.applescript.script");
const CFStringRef kUTTypeOSAScriptBundle = CFSTR("com.apple.applescript.script-bundle");
const CFStringRef kUTTypeJavaScript = CFSTR("com.netscape.javascript-source");
const CFStringRef kUTTypeShellScript = CFSTR("public.shell-script");
const CFStringRef kUTTypePerlScript = CFSTR("public.perl-script");
const CFStringRef kUTTypePythonScript = CFSTR("public.python-script");
const CFStringRef kUTTypeRubyScript = CFSTR("public.ruby-script");
const CFStringRef kUTTypePHPScript = CFSTR("public.php-script");
const CFStringRef kUTTypeJSON = CFSTR("public.json");
const CFStringRef kUTTypePropertyList = CFSTR("com.apple.property-list");
const CFStringRef kUTTypeXMLPropertyList = CFSTR("com.apple.xml-property-list");
const CFStringRef kUTTypeBinaryPropertyList = CFSTR("com.apple.binary-property-list");
const CFStringRef kUTTypePDF = CFSTR("com.adobe.pdf");
const CFStringRef kUTTypeRTFD = CFSTR("com.apple.rtfd");
const CFStringRef kUTTypeFlatRTFD = CFSTR("com.apple.flat-rtfd");
const CFStringRef kUTTypeTXNTextAndMultimediaData = CFSTR("com.apple.txn.text-multimedia-data");
const CFStringRef kUTTypeWebArchive = CFSTR("com.apple.webarchive");
const CFStringRef kUTTypeImage = CFSTR("public.image");
const CFStringRef kUTTypeJPEG = CFSTR("public.jpeg");
const CFStringRef kUTTypeJPEG2000 = CFSTR("public.jpeg-2000");
const CFStringRef kUTTypeTIFF = CFSTR("public.tiff");
const CFStringRef kUTTypePICT = CFSTR("com.apple.pict");
const CFStringRef kUTTypeGIF = CFSTR("com.compuserve.gif");
const CFStringRef kUTTypePNG = CFSTR("public.png");
const CFStringRef kUTTypeQuickTimeImage = CFSTR("com.apple.quicktime-image");
const CFStringRef kUTTypeAppleICNS = CFSTR("com.apple.icns");
const CFStringRef kUTTypeBMP = CFSTR("com.microsoft.bmp");
const CFStringRef kUTTypeICO = CFSTR("com.microsoft.ico");
const CFStringRef kUTTypeRawImage = CFSTR("public.camera-raw-image");
const CFStringRef kUTTypeScalableVectorGraphics = CFSTR("public.svg-image");
const CFStringRef kUTTypeLivePhoto = CFSTR("com.apple.live-photo");
const CFStringRef kUTTypeAudiovisualContent = CFSTR("public.audiovisual-content");
const CFStringRef kUTTypeMovie = CFSTR("public.movie");
const CFStringRef kUTTypeVideo = CFSTR("public.video");
const CFStringRef kUTTypeAudio = CFSTR("public.audio");
const CFStringRef kUTTypeQuickTimeMovie = CFSTR("com.apple.quicktime-movie");
const CFStringRef kUTTypeMPEG = CFSTR("public.mpeg");
const CFStringRef kUTTypeMPEG2Video = CFSTR("public.mpeg-2-video");
const CFStringRef kUTTypeMPEG2TransportStream = CFSTR("public.mpeg-2-transport-stream");
const CFStringRef kUTTypeMP3 = CFSTR("public.mp3");
const CFStringRef kUTTypeMPEG4 = CFSTR("public.mpeg-4");
const CFStringRef kUTTypeMPEG4Audio = CFSTR("public.mpeg-4-audio");
const CFStringRef kUTTypeAppleProtectedMPEG4Audio = CFSTR("com.apple.protected-mpeg-4-audio");
const CFStringRef kUTTypeAppleProtectedMPEG4Video = CFSTR("com.apple.protected-mpeg-4-video");
const CFStringRef kUTTypeAVIMovie = CFSTR("public.avi");
const CFStringRef kUTTypeAudioInterchangeFileFormat = CFSTR("public.aiff-audio");
const CFStringRef kUTTypeWaveformAudio = CFSTR("com.microsoft.waveform-audio");
const CFStringRef kUTTypeMIDIAudio = CFSTR("public.midi-audio");
const CFStringRef kUTTypePlaylist = CFSTR("public.playlist");
const CFStringRef kUTTypeM3UPlaylist = CFSTR("public.m3u-playlist");
const CFStringRef kUTTypeFolder = CFSTR("public.folder");
const CFStringRef kUTTypeVolume = CFSTR("public.volume");
const CFStringRef kUTTypePackage = CFSTR("com.apple.package");
const CFStringRef kUTTypeBundle = CFSTR("com.apple.bundle");
const CFStringRef kUTTypePluginBundle = CFSTR("com.apple.plugin");
const CFStringRef kUTTypeSpotlightImporter = CFSTR("com.apple.metadata-importer");
const CFStringRef kUTTypeQuickLookGenerator = CFSTR("com.apple.quicklook-generator");
const CFStringRef kUTTypeXPCService = CFSTR("com.apple.xpc-service");
const CFStringRef kUTTypeFramework = CFSTR("com.apple.framework");
const CFStringRef kUTTypeApplication = CFSTR("com.apple.application");
const CFStringRef kUTTypeApplicationBundle = CFSTR("com.apple.application-bundle");
const CFStringRef kUTTypeApplicationFile = CFSTR("com.apple.application-file");
const CFStringRef kUTTypeUnixExecutable = CFSTR("public.unix-executable");
const CFStringRef kUTTypeWindowsExecutable = CFSTR("com.microsoft.windows-executable");
const CFStringRef kUTTypeJavaClass = CFSTR("com.sun.java-class");
const CFStringRef kUTTypeJavaArchive = CFSTR("com.sun.java-archive");
const CFStringRef kUTTypeSystemPreferencesPane = CFSTR("com.apple.systempreference.prefpane");
const CFStringRef kUTTypeGNUZipArchive = CFSTR("org.gnu.gnu-zip-archive");
const CFStringRef kUTTypeBzip2Archive = CFSTR("public.bzip2-archive");
const CFStringRef kUTTypeZipArchive = CFSTR("public.zip-archive");
const CFStringRef kUTTypeSpreadsheet = CFSTR("public.spreadsheet");
const CFStringRef kUTTypePresentation = CFSTR("public.presentation");
const CFStringRef kUTTypeDatabase = CFSTR("public.database");
const CFStringRef kUTTypeVCard = CFSTR("public.vcard");
const CFStringRef kUTTypeToDoItem = CFSTR("public.to-do-item");
const CFStringRef kUTTypeCalendarEvent = CFSTR("public.calendar-event");
const CFStringRef kUTTypeEmailMessage = CFSTR("public.email-message");
const CFStringRef kUTTypeInternetLocation = CFSTR("com.apple.internet-location");
const CFStringRef kUTTypeInkText = CFSTR("com.apple.ink.inktext");
const CFStringRef kUTTypeFont = CFSTR("public.font");
const CFStringRef kUTTypeBookmark = CFSTR("public.bookmark");
const CFStringRef kUTType3DContent = CFSTR("public.3d-content");
const CFStringRef kUTTypePKCS12 = CFSTR("com.rsa.pkcs-12");
const CFStringRef kUTTypeX509Certificate = CFSTR("public.x509-certificate");
const CFStringRef kUTTypeElectronicPublication = CFSTR("org.idpf.epub-container");
const CFStringRef kUTTypeLog = CFSTR("public.log");

