@echo off
SetLocal EnableDelayedExpansion
(set PATH=E:\Qt\Qt5.12.9\5.12.9\msvc2015_64\bin;!PATH!)
if defined QT_PLUGIN_PATH (
    set QT_PLUGIN_PATH=E:\Qt\Qt5.12.9\5.12.9\msvc2015_64\plugins;!QT_PLUGIN_PATH!
) else (
    set QT_PLUGIN_PATH=E:\Qt\Qt5.12.9\5.12.9\msvc2015_64\plugins
)
%*
EndLocal
