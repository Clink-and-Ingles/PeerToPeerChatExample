//
// Author: Kevin Ingles
// File: ChatBuffer.hpp
// Description: Holds the exchanged text in a conversation.
//              For now this will have a fixed size.

#ifndef CHAT_BUFFER_HPP
#define CHAT_BUFFER_HPP

#include <array>
#include <string_view>

// TODO: These things still need to be done once everything is up and working
//      1. Add methods for drawing entire chat buffer to screeen and scroll to bottom
//      2. Add functionality to colorize text
//      3. Alternate which side of command buffer the text is sent from based on if message is from sender or not
//      4. Appropriately justify messages

static constexpr size_t max_buffer_size = 9999;

struct ChatBuffer
{
    constexpr ChatBuffer() = default;
    constexpr ChatBuffer(const ChatBuffer& other);
    constexpr ChatBuffer(ChatBuffer&& other) noexcept;
    ~ChatBuffer();

    // Here is where we could develop a ErrorOr<T> API
    void AddChat(const string_view& sender, const string_view& message);

    // Method to display chat in command prompt window

    size_t current_entry{ 0 };
    std::array<string_view, max_buffer_size> chat;
};

#endif
