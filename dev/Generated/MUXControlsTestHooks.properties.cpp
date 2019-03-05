// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "MUXControlsTestHooks.h"

CppWinRTActivatableClassWithBasicFactory(MUXControlsTestHooks)


MUXControlsTestHooksProperties::MUXControlsTestHooksProperties()
    : m_loggingMessageEventSource{static_cast<MUXControlsTestHooks*>(this)}
{
}

void MUXControlsTestHooksProperties::EnsureProperties()
{
}

void MUXControlsTestHooksProperties::ClearProperties()
{
}

winrt::event_token MUXControlsTestHooksProperties::LoggingMessage(winrt::TypedEventHandler<winrt::IInspectable, winrt::MUXControlsTestHooksLoggingMessageEventArgs> const& value)
{
    return m_loggingMessageEventSource.add(value);
}

void MUXControlsTestHooksProperties::LoggingMessage(winrt::event_token const& token)
{
    m_loggingMessageEventSource.remove(token);
}
