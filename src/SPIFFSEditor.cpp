#include "SPIFFSEditor.h"
#include <FS.h>

// File: edit.htm.gz, Size: 4138
#define edit_htm_gz_len 4138
const uint8_t edit_htm_gz[] PROGMEM = {
    0x1F, 0x8B, 0x08, 0x00, 0x6D, 0xE7, 0x58, 0x5E, 0x02, 0x03, 0xB5, 0x3A,
    0x7D, 0x7F, 0xDB, 0x36, 0xCE, 0xFF, 0x3F, 0x9F, 0x42, 0x51, 0x6F, 0x99,
    0x74, 0x96, 0x65, 0x3B, 0x49, 0xB3, 0x56, 0x8E, 0x92, 0xD9, 0x49, 0xDA,
    0xB4, 0xCD, 0x5B, 0x63, 0xBB, 0x5D, 0xDA, 0xCB, 0xED, 0x47, 0x4B, 0xB4,
    0xCD, 0x46, 0xA2, 0x54, 0x89, 0x8A, 0x93, 0x7A, 0xFE, 0xEE, 0x07, 0x90,
    0x92, 0x2D, 0x39, 0x4E, 0xBB, 0xDD, 0x3D, 0x5B, 0xB7, 0x9A, 0x24, 0x08,
    0x10, 0x00, 0xF1, 0x4A, 0x6D, 0x6F, 0xE3, 0xE8, 0xE2, 0xB0, 0x7F, 0x7D,
    0x79, 0xAC, 0x4D, 0x44, 0x18, 0xEC, 0xEF, 0xE1, 0xDF, 0x5A, 0x40, 0xF8,
    0xD8, 0xA5, 0x7C, 0x7F, 0x4F, 0x30, 0x11, 0xD0, 0xFD, 0xE3, 0xDE, 0xA5,
    0x76, 0xEC, 0x33, 0x11, 0x25, 0x7B, 0x0D, 0xB5, 0xB2, 0x97, 0x8A, 0x87,
    0x80, 0x6A, 0x21, 0xF5, 0x19, 0x71, 0x53, 0x2F, 0xA1, 0xB0, 0xD9, 0xF6,
    0xC2, 0xD9, 0xB7, 0x3A, 0xE3, 0x3E, 0xBD, 0x77, 0xB6, 0x9B, 0xCD, 0x76,
    0x1C, 0xA5, 0x4C, 0xB0, 0x88, 0x3B, 0x64, 0x98, 0x46, 0x41, 0x26, 0x68,
    0x3B, 0xA0, 0x23, 0xE1, 0x3C, 0x8F, 0xEF, 0xDB, 0xC3, 0x28, 0xF1, 0x69,
    0xE2, 0xB4, 0xE2, 0x7B, 0x0D, 0x40, 0xCC, 0xD7, 0x9E, 0xED, 0xEC, 0xEC,
    0xB4, 0x87, 0xC4, 0xBB, 0x1D, 0x27, 0x51, 0xC6, 0xFD, 0xBA, 0x17, 0x05,
    0x51, 0xE2, 0x3C, 0x1B, 0x3D, 0xC7, 0x3F, 0x6D, 0x9F, 0xA5, 0x71, 0x40,
    0x1E, 0x1C, 0x1E, 0x71, 0x0A, 0xB8, 0xF7, 0xF5, 0x74, 0x42, 0xFC, 0x68,
    0xEA, 0x34, 0xB5, 0xA6, 0xD6, 0x6A, 0x02, 0x91, 0x64, 0x3C, 0x24, 0x46,
    0xD3, 0xC2, 0x3F, 0xF6, 0x8E, 0xD9, 0x1E, 0x45, 0x5C, 0xD4, 0x53, 0xF6,
    0x8D, 0x3A, 0xAD, 0x2D, 0x38, 0x4D, 0x4E, 0x47, 0x24, 0x64, 0xC1, 0x83,
    0x93, 0x12, 0x9E, 0xD6, 0x53, 0x9A, 0xB0, 0x91, 0x5A, 0x9E, 0x52, 0x36,
    0x9E, 0x08, 0xE7, 0x97, 0x66, 0x73, 0x0E, 0xFC, 0x6B, 0x59, 0x30, 0x0B,
    0x58, 0x0A, 0xC8, 0x28, 0x9E, 0x3A, 0x4F, 0x44, 0xB1, 0xD3, 0x54, 0xAC,
    0x37, 0xDB, 0x21, 0x49, 0xC6, 0x8C, 0xC3, 0x20, 0x26, 0xBE, 0xCF, 0xF8,
    0xD8, 0x51, 0x68, 0x01, 0x9B, 0x2D, 0xA4, 0x4D, 0x68, 0x40, 0x04, 0xBB,
    0xA3, 0xED, 0x90, 0xF1, 0xFA, 0x94, 0xF9, 0x62, 0xE2, 0xEC, 0x02, 0x8F,
    0x6D, 0x2F, 0x4B, 0x52, 0x90, 0x29, 0x8E, 0x18, 0x17, 0x34, 0x91, 0x68,
    0x69, 0x4C, 0xF8, 0x2C, 0x17, 0x15, 0x15, 0x50, 0xC8, 0xC9, 0x78, 0xC0,
    0x38, 0xAD, 0x0F, 0x83, 0xC8, 0xBB, 0x5D, 0x9C, 0xB4, 0x1B, 0xDF, 0xE7,
    0x67, 0x39, 0x93, 0xE8, 0x8E, 0x26, 0xB3, 0xA5, 0xBA, 0x24, 0x76, 0x05,
    0x58, 0x21, 0x4D, 0x29, 0x9D, 0xDB, 0xE2, 0x2E, 0x03, 0xA8, 0x25, 0x7F,
    0x41, 0xCA, 0x05, 0xFF, 0x4B, 0x91, 0x56, 0x04, 0x57, 0x28, 0x8C, 0xC7,
    0x99, 0x98, 0x3D, 0xBE, 0xCA, 0x28, 0x26, 0x1E, 0x13, 0x0F, 0x28, 0x3F,
    0x6C, 0x9B, 0xA1, 0x2E, 0x01, 0x2B, 0x09, 0x49, 0xA0, 0xA1, 0xCE, 0xB5,
    0x0F, 0x34, 0xF1, 0x09, 0x27, 0x56, 0x27, 0x61, 0x24, 0xB0, 0x7A, 0x4B,
    0xAD, 0xD7, 0xC3, 0xE8, 0x5B, 0x3D, 0x83, 0x31, 0xCC, 0x03, 0xEA, 0x09,
    0xA5, 0x64, 0xB8, 0x87, 0xE1, 0x2D, 0x13, 0x8F, 0x01, 0x8F, 0x16, 0x4A,
    0xEA, 0x92, 0x4A, 0x9A, 0xA8, 0x0B, 0x6C, 0x49, 0xF5, 0x20, 0xC7, 0x52,
    0x72, 0x25, 0x54, 0x7D, 0x18, 0x09, 0x11, 0x85, 0xD2, 0xE4, 0x16, 0x02,
    0x6B, 0xD2, 0x6A, 0x5E, 0x3C, 0xBA, 0x91, 0xF5, 0xDA, 0x2F, 0x91, 0x6F,
    0x83, 0x5E, 0x05, 0xF3, 0x48, 0x50, 0x27, 0x01, 0x1B, 0x73, 0x27, 0x64,
    0xBE, 0x1F, 0xD0, 0x92, 0xD5, 0x3A, 0x59, 0x12, 0x18, 0x3E, 0x11, 0xC4,
    0x61, 0x21, 0x19, 0xD3, 0x46, 0xCC, 0xC7, 0x00, 0x4D, 0xE9, 0xEE, 0x8E,
    0xC5, 0x3E, 0x74, 0x2F, 0xAE, 0xA6, 0xCD, 0x77, 0xAF, 0xC7, 0x51, 0x07,
    0xFE, 0x39, 0xEF, 0x0D, 0x26, 0xC7, 0x83, 0x31, 0x8C, 0xBA, 0x38, 0xED,
    0xBC, 0x3F, 0xEC, 0xBC, 0x87, 0x9F, 0xC3, 0x56, 0xED, 0xCB, 0xE8, 0x2B,
    0x2E, 0x74, 0x5F, 0xFB, 0xDD, 0xFE, 0xE0, 0xB8, 0xD3, 0x79, 0xD7, 0x78,
    0x73, 0x3E, 0xFD, 0xF8, 0x6E, 0x17, 0xC1, 0xDD, 0xA0, 0x79, 0xF5, 0x61,
    0xD2, 0x1C, 0x6C, 0xBD, 0x0C, 0xFD, 0x13, 0x7F, 0xE2, 0x85, 0x83, 0xCE,
    0xFB, 0x8F, 0x57, 0x77, 0xD7, 0xE1, 0x60, 0xDC, 0xFB, 0xD8, 0x9A, 0x7C,
    0xDA, 0xFA, 0xD0, 0xFB, 0xF4, 0xF1, 0xD5, 0x2D, 0xFD, 0xED, 0xE4, 0xED,
    0xA7, 0xFE, 0x14, 0x10, 0x8E, 0xA2, 0xDE, 0xE0, 0xAA, 0xFB, 0xA1, 0x3B,
    0xFE, 0xD4, 0xF5, 0x8E, 0xEF, 0x87, 0xC1, 0x79, 0xF7, 0x75, 0x67, 0xD8,
    0xD9, 0xF2, 0x28, 0x1D, 0xF7, 0xAF, 0xBA, 0xD9, 0x9B, 0x77, 0x17, 0x63,
    0xC6, 0x26, 0xBD, 0x4F, 0xE7, 0x7D, 0xEF, 0xF0, 0xF9, 0xE9, 0xE0, 0xA4,
    0xC3, 0x26, 0xE7, 0x6F, 0xAF, 0x9A, 0xB7, 0xAF, 0xDF, 0x1D, 0x1E, 0x79,
    0xD7, 0x6F, 0xAF, 0x77, 0x8F, 0xB6, 0x1B, 0xBF, 0xFC, 0x72, 0xE6, 0x5F,
    0x30, 0xDE, 0xBF, 0xFB, 0xD6, 0x19, 0x1F, 0x4E, 0x5F, 0x3C, 0xA4, 0xFD,
    0xC9, 0x9B, 0x3B, 0xDE, 0xF8, 0x10, 0x7D, 0x79, 0xF3, 0x70, 0x06, 0xFF,
    0x5D, 0x5E, 0xD6, 0x86, 0xBD, 0x56, 0x3A, 0x78, 0xFF, 0xE6, 0xC3, 0x56,
    0xFA, 0xF2, 0x79, 0xDC, 0x3D, 0x3A, 0xBA, 0x0B, 0x87, 0x97, 0x8D, 0xD0,
    0xBF, 0x1D, 0x89, 0x17, 0xDB, 0x22, 0xBE, 0x1E, 0x67, 0x9F, 0xBE, 0x3E,
    0x7F, 0x3B, 0x69, 0x5C, 0x50, 0x72, 0x3D, 0xA9, 0x3D, 0x7C, 0x7B, 0x78,
    0x31, 0xE9, 0x9F, 0xDC, 0x9D, 0x07, 0xE4, 0xFE, 0xFC, 0xDC, 0xFB, 0x16,
    0xD6, 0x02, 0xF2, 0xF2, 0xA2, 0x1F, 0x90, 0xA4, 0x35, 0xF0, 0x3B, 0x8D,
    0xDA, 0xE1, 0x56, 0x67, 0x47, 0x24, 0x57, 0x87, 0xFC, 0x68, 0xFB, 0x4B,
    0xEF, 0x45, 0xB7, 0xDB, 0x8A, 0x86, 0x5F, 0xB7, 0x5E, 0xDF, 0xEE, 0xBE,
    0x1E, 0xEC, 0xBE, 0x1F, 0xBE, 0xEF, 0xF4, 0x76, 0xBA, 0x03, 0x72, 0xDD,
    0x7B, 0xDF, 0x19, 0xED, 0x0C, 0x27, 0x93, 0x77, 0xEF, 0xFA, 0xAF, 0xFC,
    0xCE, 0xB7, 0xA4, 0x73, 0x31, 0xED, 0xDC, 0x1F, 0x0F, 0x3A, 0x27, 0xB5,
    0x77, 0xC7, 0x67, 0xCD, 0x56, 0xEF, 0x7A, 0x7B, 0x7C, 0xB6, 0x3B, 0xED,
    0xA6, 0xC7, 0x9D, 0xF7, 0xDD, 0xE6, 0xF8, 0x6D, 0x2D, 0x24, 0x9F, 0xA2,
    0xC3, 0xED, 0xF1, 0x9B, 0x5D, 0x76, 0x79, 0x4D, 0x3A, 0x6F, 0xBA, 0x6F,
    0x53, 0x76, 0x15, 0x9E, 0x0C, 0x9A, 0x9D, 0xCE, 0xE9, 0x05, 0x7D, 0x75,
    0xB8, 0x4D, 0xDE, 0x6D, 0x79, 0x1F, 0x41, 0xFF, 0x83, 0xDF, 0xE8, 0x2F,
    0xB5, 0xCE, 0xF4, 0xA2, 0x19, 0x78, 0x2F, 0x69, 0xFF, 0xE4, 0xBA, 0x2F,
    0x6F, 0xE7, 0x38, 0x78, 0xD5, 0xBF, 0xED, 0x65, 0xEF, 0xC3, 0xC3, 0x43,
    0x53, 0xE3, 0x51, 0x3D, 0xA1, 0x31, 0x25, 0xA2, 0x1C, 0xAE, 0x16, 0xFE,
    0x01, 0xB6, 0xB5, 0xB4, 0xC2, 0xDC, 0x4F, 0x05, 0xBD, 0x17, 0x75, 0x9F,
    0x7A, 0x51, 0x42, 0xE4, 0x1E, 0x40, 0xA0, 0x09, 0x9A, 0xD8, 0xFC, 0x57,
    0x19, 0x3F, 0x35, 0x15, 0x3F, 0x35, 0xC2, 0x7D, 0xCD, 0x28, 0x1C, 0x01,
    0x83, 0x87, 0x4F, 0xEF, 0x98, 0x47, 0xEB, 0x31, 0xBB, 0xA7, 0x41, 0x5D,
    0x22, 0x3B, 0x4D, 0x73, 0x26, 0xFD, 0xAD, 0xD8, 0x46, 0x38, 0x98, 0x9A,
    0xA4, 0x5A, 0x2C, 0xF8, 0x5F, 0x88, 0x47, 0x21, 0xB0, 0x81, 0xCB, 0x84,
    0xF8, 0xAB, 0x7C, 0x27, 0x4A, 0xEA, 0xC3, 0x6C, 0x3C, 0x62, 0xF7, 0xE0,
    0xD0, 0x23, 0xC6, 0x99, 0xA0, 0x5A, 0x2B, 0x9D, 0xFF, 0x5A, 0x90, 0xB9,
    0xA5, 0x0F, 0xA3, 0x84, 0x84, 0x34, 0xD5, 0xFE, 0x24, 0x99, 0xD9, 0x28,
    0x89, 0xC2, 0x65, 0x10, 0x99, 0x8B, 0xA8, 0x34, 0x99, 0xCF, 0x9F, 0x65,
    0x71, 0x10, 0x11, 0x10, 0x73, 0x4D, 0xE4, 0x50, 0xF1, 0x34, 0x91, 0x6E,
    0xB5, 0x88, 0xAB, 0xB9, 0x9B, 0x6D, 0xA1, 0x5B, 0x96, 0xDD, 0x7A, 0x6B,
    0x67, 0xE9, 0xBA, 0x75, 0xB9, 0x17, 0xE3, 0xFD, 0x9A, 0x4C, 0x81, 0xF1,
    0xA0, 0x14, 0xEE, 0x9E, 0x09, 0x50, 0xE9, 0x13, 0x87, 0xCB, 0x43, 0xF2,
    0xC8, 0xB0, 0x60, 0x40, 0x05, 0xEA, 0x96, 0x8C, 0xD4, 0x85, 0x24, 0xB0,
    0x6F, 0xFE, 0x8C, 0xCA, 0xBC, 0x67, 0x3D, 0x8B, 0x13, 0xB8, 0x0D, 0x3A,
    0xFD, 0x1E, 0xCD, 0x42, 0xA6, 0x2A, 0x6D, 0x45, 0x53, 0x65, 0xBC, 0x5C,
    0x84, 0x65, 0xDA, 0x93, 0xBC, 0x16, 0xA4, 0x1F, 0x4B, 0x05, 0xE0, 0x05,
    0x37, 0xCF, 0x91, 0x9B, 0xEF, 0x6A, 0x75, 0x7B, 0xF7, 0xA7, 0x9C, 0x87,
    0x9D, 0xE6, 0x4F, 0x73, 0x3B, 0xDF, 0x5B, 0xA4, 0xE4, 0x56, 0x13, 0xFE,
    0x29, 0x32, 0xEF, 0x8B, 0x25, 0x0B, 0xC3, 0xE7, 0xF8, 0xA7, 0x60, 0x10,
    0xE9, 0x94, 0x80, 0xDB, 0x3B, 0x2F, 0x5F, 0xF8, 0xC3, 0x02, 0x98, 0x0B,
    0xF6, 0x24, 0x3C, 0x21, 0x3E, 0xCB, 0x52, 0xE7, 0x79, 0xF3, 0xA7, 0x5C,
    0x9F, 0x5B, 0x3B, 0x28, 0xFB, 0xE2, 0x2E, 0x71, 0xB2, 0xB4, 0xD8, 0x34,
    0x66, 0x5C, 0xDB, 0x4A, 0x35, 0xBC, 0x6F, 0x92, 0x2C, 0x0C, 0xB3, 0x92,
    0xED, 0xE7, 0xBF, 0x2E, 0x4D, 0x13, 0xF7, 0xCF, 0x9A, 0x3F, 0xCD, 0x44,
    0x02, 0xD9, 0x64, 0x04, 0xB9, 0xC6, 0x49, 0x22, 0x41, 0x04, 0x35, 0x9A,
    0xE6, 0x1C, 0x84, 0x5B, 0x03, 0xD8, 0xDE, 0x6D, 0xFA, 0x74, 0x6C, 0xCE,
    0xE7, 0x7B, 0x0D, 0x99, 0xD7, 0xA0, 0x6C, 0xF1, 0x12, 0x16, 0x8B, 0xFD,
    0x51, 0xC6, 0x3D, 0xE4, 0x41, 0x1B, 0x53, 0x83, 0x9A, 0xB3, 0x84, 0x8A,
    0x2C, 0xE1, 0x9A, 0x1F, 0x79, 0x19, 0x1A, 0xBB, 0x3D, 0xA6, 0xE2, 0x58,
    0xD9, 0x7D, 0xF7, 0xE1, 0x8D, 0x0F, 0x3B, 0xE6, 0x0B, 0x04, 0x6F, 0x2D,
    0x02, 0x38, 0x30, 0x9C, 0x97, 0xE3, 0x54, 0xF6, 0x43, 0x82, 0x01, 0x22,
    0xEF, 0xE8, 0x83, 0x41, 0x2D, 0xB1, 0x40, 0xA4, 0x36, 0xAE, 0x1B, 0xC5,
    0x2E, 0x80, 0x71, 0x73, 0x76, 0x07, 0x4A, 0x20, 0x2E, 0xFD, 0x2C, 0x6E,
    0x2C, 0xE6, 0x72, 0xF8, 0x69, 0xE7, 0xBB, 0xC9, 0x1E, 0x3B, 0xA8, 0xB7,
    0x1C, 0xB2, 0xCF, 0x0E, 0x5A, 0xE0, 0x5E, 0x65, 0x6E, 0xE4, 0xB9, 0xAF,
    0x58, 0x40, 0x07, 0xB9, 0xC3, 0xE1, 0x31, 0x48, 0x6C, 0xB1, 0x85, 0x28,
    0xE2, 0x5B, 0xCD, 0xE6, 0x86, 0x4B, 0x0F, 0x48, 0x00, 0x39, 0xCC, 0xD0,
    0x8F, 0xAF, 0xAE, 0x2E, 0xAE, 0x3E, 0xEB, 0x35, 0x5A, 0xD3, 0x6F, 0x1C,
    0x4D, 0xAF, 0x71, 0xD3, 0x11, 0x76, 0x42, 0x47, 0x09, 0x4D, 0x27, 0x97,
    0x44, 0x4C, 0x8C, 0xD4, 0xBE, 0x23, 0x41, 0x56, 0x16, 0x84, 0xA1, 0xDC,
    0xC8, 0xA2, 0x70, 0x39, 0x9D, 0x6A, 0xAF, 0x40, 0xCD, 0x47, 0x90, 0xEA,
    0xDA, 0xC2, 0x26, 0x71, 0x4C, 0xB9, 0x6F, 0xE8, 0x31, 0x20, 0xEA, 0x16,
    0x35, 0xAD, 0x84, 0x7E, 0xCD, 0x68, 0x2A, 0x52, 0x1B, 0x2C, 0xD7, 0xD0,
    0x2F, 0x07, 0x7D, 0xDD, 0xD2, 0x1B, 0xE8, 0x47, 0x3A, 0xF0, 0x46, 0xCC,
    0x39, 0x52, 0x89, 0x5C, 0xD0, 0xA4, 0x3E, 0xCC, 0xC0, 0xA0, 0xB8, 0x6E,
    0xB6, 0x23, 0x9B, 0x71, 0x4E, 0x93, 0x93, 0xFE, 0xD9, 0xA9, 0xAB, 0x5F,
    0x29, 0x46, 0xB4, 0x53, 0x28, 0x48, 0x74, 0x4B, 0x5E, 0x51, 0x7E, 0xC8,
    0xE1, 0x84, 0x05, 0xBE, 0x11, 0x99, 0x6D, 0x24, 0xE1, 0x49, 0x12, 0xB2,
    0x40, 0x01, 0x0A, 0x9E, 0x2D, 0x1E, 0x62, 0xEA, 0xEA, 0x23, 0x50, 0x86,
    0x6E, 0x79, 0x76, 0x98, 0x05, 0x82, 0xC5, 0x01, 0x75, 0x37, 0x5A, 0x30,
    0xE3, 0x60, 0x41, 0xAE, 0x8E, 0xB9, 0x19, 0x61, 0xCC, 0x77, 0x75, 0x15,
    0xA1, 0xF2, 0xB8, 0xB6, 0xEE, 0x14, 0x4F, 0x9D, 0x92, 0x56, 0x4E, 0x49,
    0xCB, 0xB8, 0x4A, 0xE0, 0x34, 0x3F, 0x18, 0xC3, 0x3C, 0xCE, 0xD4, 0x51,
    0x05, 0xCC, 0xA7, 0x23, 0x02, 0x9C, 0x7C, 0x40, 0x6D, 0xBA, 0x7A, 0x63,
    0xDD, 0x41, 0xA9, 0x3A, 0xC8, 0xAF, 0x6A, 0xC4, 0x2F, 0x6B, 0x44, 0xDD,
    0xEE, 0x3A, 0x64, 0x5F, 0x21, 0x07, 0x55, 0xE4, 0xA0, 0x8C, 0x7C, 0x28,
    0x8D, 0x64, 0x1D, 0x72, 0xA0, 0x90, 0x93, 0x8A, 0x88, 0x89, 0x14, 0x51,
    0x85, 0xBD, 0x3A, 0x6A, 0x13, 0x05, 0xD2, 0xAD, 0xA4, 0x22, 0x66, 0x62,
    0x83, 0x97, 0x92, 0x61, 0x40, 0x7D, 0x77, 0xA3, 0x09, 0x33, 0x2C, 0xB6,
    0xDD, 0xAD, 0xE6, 0x9A, 0x33, 0x12, 0x75, 0x46, 0x56, 0x65, 0x30, 0x2B,
    0x33, 0xA8, 0xF5, 0xC8, 0x1D, 0xD5, 0xD6, 0x31, 0x98, 0x99, 0x56, 0x60,
    0x47, 0xDC, 0x0B, 0x98, 0x77, 0xEB, 0x2E, 0xBD, 0xC5, 0x9C, 0xB1, 0x85,
    0x85, 0x5A, 0x5C, 0x06, 0xBA, 0x01, 0x94, 0x5E, 0x8B, 0xA5, 0x7C, 0x80,
    0xFA, 0x9E, 0x5B, 0xD9, 0x5A, 0x02, 0xDC, 0xA6, 0xF7, 0xD4, 0x3B, 0x8C,
    0xC2, 0x90, 0xA0, 0xED, 0xA6, 0xC0, 0x41, 0x3E, 0xD1, 0xCD, 0xB9, 0x15,
    0xAD, 0xC5, 0x79, 0xC2, 0x45, 0x2C, 0x7F, 0x3D, 0x8B, 0x23, 0x03, 0x5C,
    0xCE, 0xF5, 0x6C, 0xD4, 0x61, 0x6A, 0x83, 0x1E, 0xC7, 0x62, 0xF2, 0x03,
    0x17, 0x2A, 0x0C, 0x54, 0xA2, 0x7C, 0x6E, 0xDE, 0x58, 0x0B, 0x91, 0x56,
    0x7C, 0xEA, 0xA2, 0xB7, 0xE2, 0x54, 0xA8, 0xBC, 0x8A, 0x5D, 0x9A, 0x4B,
    0x1D, 0x94, 0x61, 0xB9, 0xBD, 0x2F, 0xA0, 0xFA, 0x7C, 0x0E, 0xE7, 0x01,
    0xFF, 0x13, 0x68, 0xF9, 0xE8, 0x9F, 0x17, 0x60, 0xC9, 0xA3, 0x34, 0x78,
    0x8B, 0xBB, 0x0D, 0xE3, 0xC0, 0xF9, 0x97, 0x6D, 0x7C, 0xFE, 0xB7, 0x7D,
    0x53, 0x33, 0xCD, 0x83, 0x7F, 0x34, 0xA4, 0x86, 0x0D, 0x61, 0x7E, 0x6E,
    0xDD, 0x58, 0x04, 0xC0, 0xF6, 0x3F, 0xCD, 0x7F, 0xD9, 0x12, 0x5C, 0x81,
    0xB5, 0xEF, 0x22, 0xC8, 0x24, 0x78, 0x12, 0x1A, 0x58, 0x34, 0xD2, 0xC8,
    0xE6, 0xA6, 0x21, 0x5C, 0x52, 0xB9, 0xC6, 0x9A, 0xA8, 0xE9, 0x36, 0xC4,
    0x29, 0xA8, 0x2D, 0x56, 0x82, 0x5F, 0x1F, 0x12, 0xBD, 0x8A, 0xAD, 0x0B,
    0x80, 0xE4, 0x1E, 0x65, 0x86, 0x1E, 0x91, 0x4B, 0xA9, 0x65, 0x06, 0x01,
    0xA1, 0xD3, 0xC4, 0x73, 0x95, 0xD6, 0x0E, 0x0A, 0x98, 0x0B, 0x51, 0x70,
    0x5E, 0x8E, 0x96, 0x0A, 0x75, 0xD5, 0xFE, 0x0B, 0x85, 0x51, 0x6B, 0x09,
    0x45, 0x82, 0x98, 0x56, 0xEC, 0x3C, 0x63, 0xB9, 0x3A, 0xA6, 0x2C, 0xDD,
    0x9A, 0xAC, 0x2E, 0xCB, 0x56, 0x02, 0xD7, 0x97, 0x46, 0xFF, 0xF3, 0x1E,
    0x0B, 0xC7, 0x5A, 0x89, 0x1F, 0xFC, 0xCB, 0xFD, 0x19, 0x23, 0xF2, 0xE6,
    0xEF, 0xDE, 0x10, 0xB8, 0x02, 0xD3, 0xA0, 0x36, 0x8F, 0xA6, 0x86, 0x59,
    0xFB, 0x59, 0xD7, 0x24, 0x45, 0x57, 0x0F, 0xC9, 0x7D, 0xDE, 0x53, 0x62,
    0xC6, 0x6B, 0x6B, 0x38, 0x2F, 0x5A, 0x94, 0x7C, 0x41, 0x76, 0x73, 0x24,
    0x13, 0x51, 0x5B, 0x2B, 0x32, 0xA9, 0x6A, 0x65, 0x74, 0xAD, 0xB1, 0xFF,
    0x73, 0x25, 0xA0, 0x5B, 0x4C, 0x5D, 0xA7, 0x0A, 0xC6, 0x59, 0x00, 0x8E,
    0x49, 0x9F, 0x8E, 0xB4, 0x01, 0x93, 0x81, 0xBA, 0x1A, 0x23, 0xAD, 0xC0,
    0x60, 0xE6, 0x81, 0xE1, 0x95, 0xFD, 0x79, 0x0F, 0x8B, 0xDF, 0xFD, 0x4B,
    0x55, 0xD5, 0x40, 0xEA, 0xC5, 0x99, 0xAE, 0xAC, 0xAC, 0xEA, 0x25, 0x70,
    0x69, 0x04, 0xD0, 0xAD, 0x45, 0x1E, 0x1D, 0x46, 0xFE, 0x43, 0x29, 0xFB,
    0xA6, 0xDD, 0x87, 0xC3, 0x80, 0xA4, 0xE9, 0x39, 0xDC, 0x80, 0xA1, 0x7B,
    0x21, 0x28, 0x5C, 0x59, 0xE1, 0x7E, 0x73, 0x73, 0xB3, 0x8A, 0x94, 0xD0,
    0x10, 0x8A, 0x6D, 0xC5, 0x15, 0xF8, 0xA4, 0xE9, 0xF8, 0x40, 0x18, 0x0C,
    0x69, 0x0D, 0x63, 0xF8, 0x92, 0xF1, 0x3D, 0xAE, 0x38, 0x7A, 0x7A, 0x11,
    0x53, 0xFE, 0x1E, 0xEE, 0x4A, 0x99, 0x65, 0x8D, 0x56, 0x53, 0x34, 0xFD,
    0x47, 0x6C, 0x1F, 0xE5, 0x06, 0xBB, 0x60, 0x3D, 0x5D, 0xAB, 0x50, 0xFE,
    0xF7, 0xB0, 0x5C, 0x4A, 0x14, 0x6B, 0x38, 0x4E, 0x20, 0x40, 0xAD, 0xE1,
    0x18, 0x62, 0x8D, 0xA0, 0x0B, 0x7E, 0x93, 0xB5, 0xFC, 0x66, 0x7F, 0x0F,
    0xBF, 0x4B, 0x3B, 0x8F, 0x8A, 0x92, 0x48, 0xD5, 0x57, 0x28, 0x81, 0xCF,
    0xEE, 0x74, 0xD3, 0x8A, 0xDC, 0x2A, 0x05, 0xA8, 0x0D, 0xA3, 0x20, 0xE8,
    0x47, 0xF1, 0xC1, 0x13, 0xEB, 0xCE, 0x62, 0xBD, 0x18, 0xE4, 0x6C, 0x2E,
    0xB7, 0x58, 0xDE, 0x5A, 0xA2, 0xA7, 0x50, 0xF6, 0x1F, 0x3C, 0x05, 0xF8,
    0x11, 0x59, 0xDC, 0x63, 0xA5, 0x2E, 0xB5, 0x41, 0x79, 0xB0, 0xFA, 0x5B,
    0xCD, 0xB3, 0xFC, 0xC5, 0xEC, 0xBA, 0x16, 0xB5, 0x09, 0x8C, 0x73, 0x25,
    0xB9, 0xA8, 0x24, 0x8B, 0x3C, 0x11, 0x80, 0x8A, 0x75, 0xEC, 0x42, 0xDC,
    0xB4, 0xA6, 0xC7, 0xF7, 0xCB, 0x35, 0x28, 0xFC, 0x5D, 0x5F, 0x2D, 0x31,
    0x83, 0x40, 0x3C, 0x5D, 0xB9, 0x94, 0xF2, 0x75, 0x93, 0xA2, 0xE8, 0x20,
    0x76, 0x34, 0x1A, 0xA5, 0x54, 0x7C, 0xC4, 0x90, 0x64, 0x25, 0x8B, 0xF9,
    0x89, 0x0C, 0x49, 0xC0, 0x58, 0xC4, 0xC3, 0x28, 0x4B, 0x69, 0x94, 0x89,
    0x4A, 0x6A, 0x31, 0x16, 0xC2, 0xEC, 0xA5, 0x7F, 0xFC, 0xB1, 0x98, 0xEC,
    0xA7, 0xB5, 0x60, 0x39, 0xBD, 0xDE, 0xF3, 0x4B, 0x93, 0x7D, 0xBF, 0x96,
    0x98, 0xAB, 0x97, 0xFE, 0x3F, 0x5B, 0x0A, 0x29, 0x5B, 0x8A, 0x87, 0xA5,
    0x72, 0x11, 0x13, 0x4B, 0x31, 0x4F, 0x16, 0x8C, 0xBC, 0xE4, 0xB3, 0x68,
    0xD0, 0x58, 0x29, 0xA9, 0xF2, 0xBC, 0xEC, 0xAB, 0x1C, 0x02, 0xCA, 0x8A,
    0x2B, 0x7B, 0x6B, 0xAB, 0x03, 0x1F, 0x23, 0x93, 0x0F, 0x5A, 0x3F, 0x8D,
    0xA6, 0x34, 0x39, 0x24, 0x29, 0x35, 0x20, 0x69, 0x2E, 0xE3, 0x0E, 0x42,
    0x4D, 0x27, 0x58, 0xB7, 0x6B, 0x73, 0x93, 0x28, 0x70, 0x9E, 0xB9, 0x23,
    0x8E, 0x35, 0x19, 0xC8, 0x97, 0x55, 0x4E, 0xA0, 0x36, 0xF6, 0x95, 0x20,
    0xF5, 0x91, 0x2A, 0x41, 0x0D, 0xD3, 0x82, 0xB6, 0x03, 0xAE, 0xF9, 0x32,
    0x89, 0x62, 0x32, 0x96, 0x3D, 0x18, 0xAC, 0xA1, 0x7B, 0x20, 0x35, 0x6B,
    0xA3, 0x89, 0x04, 0x4B, 0x9D, 0x4B, 0xE1, 0x37, 0xCB, 0x16, 0x86, 0x5B,
    0xBA, 0x4A, 0x86, 0xED, 0xA5, 0x2F, 0xAD, 0xC9, 0x1A, 0x04, 0x5F, 0x60,
    0x13, 0x03, 0xF7, 0x40, 0x23, 0x93, 0xDF, 0x03, 0xB8, 0x5B, 0xB3, 0x1D,
    0xED, 0xB1, 0x76, 0x54, 0xAB, 0x99, 0xAA, 0x4A, 0x77, 0x5D, 0x68, 0x73,
    0xA2, 0x1B, 0x59, 0x58, 0x82, 0x50, 0xD5, 0xCC, 0x62, 0xC0, 0xD9, 0x08,
    0x54, 0xD5, 0x05, 0x8E, 0xB0, 0xC6, 0x34, 0x4B, 0x1D, 0x89, 0xBF, 0xEC,
    0x48, 0x9E, 0xA8, 0x3D, 0xA8, 0xAC, 0x2F, 0xA0, 0x8E, 0x59, 0x2D, 0x31,
    0x84, 0x99, 0x4E, 0x99, 0xF0, 0x26, 0x18, 0x80, 0x3C, 0xD0, 0xAA, 0x2E,
    0xA0, 0xA8, 0x75, 0xE4, 0x68, 0x22, 0xC2, 0xE5, 0x28, 0xC8, 0x87, 0x5F,
    0xD2, 0x7C, 0xE0, 0xA5, 0xC5, 0xE8, 0xBE, 0x04, 0x84, 0x92, 0x36, 0x07,
    0x47, 0x7C, 0x94, 0x0F, 0xA1, 0x97, 0x2D, 0xE8, 0x14, 0xC0, 0xE2, 0x37,
    0x8E, 0xF3, 0x51, 0x3C, 0x29, 0x46, 0x13, 0x7A, 0xBF, 0xC0, 0x8B, 0x0A,
    0xA8, 0x4F, 0x75, 0x47, 0xD9, 0xD8, 0x46, 0x73, 0x9E, 0x0F, 0x5A, 0x4B,
    0xF9, 0x83, 0xFF, 0x47, 0xF9, 0x63, 0x3E, 0x2E, 0xA4, 0x89, 0x8B, 0xD1,
    0x98, 0x15, 0xB2, 0x0C, 0xC3, 0xF8, 0xBB, 0x9C, 0x24, 0xA5, 0x9E, 0xB8,
    0xD4, 0xD3, 0x8A, 0x1F, 0xB5, 0x9D, 0xC2, 0x74, 0x8C, 0x51, 0xC5, 0x1F,
    0x47, 0xB6, 0x87, 0xBF, 0xE7, 0x91, 0x2F, 0x6B, 0x4B, 0xD3, 0x0A, 0x8D,
    0x11, 0xD4, 0xB9, 0xBA, 0x59, 0xF6, 0xD3, 0xEC, 0xBF, 0x6D, 0x45, 0x8F,
    0x8E, 0x4F, 0x8F, 0xFB, 0xC7, 0xE5, 0xC2, 0x19, 0x39, 0x2F, 0x99, 0x54,
    0x5C, 0xE9, 0xD2, 0x97, 0x15, 0x01, 0x14, 0xD8, 0x28, 0x0A, 0xD8, 0xEB,
    0xE6, 0xA6, 0xF2, 0x8B, 0xB7, 0xBD, 0x8B, 0x73, 0x3B, 0x26, 0x09, 0x78,
    0x24, 0xA9, 0x30, 0x17, 0x16, 0x24, 0xCA, 0x07, 0xBF, 0x3E, 0x2E, 0x95,
    0xEB, 0xF2, 0x0B, 0x83, 0x23, 0xE6, 0x96, 0x3A, 0x4D, 0xF5, 0xC3, 0x13,
    0x17, 0xEB, 0xCA, 0xFC, 0x25, 0x08, 0x92, 0xD3, 0x68, 0x99, 0xA8, 0x8A,
    0x38, 0x33, 0x2A, 0x87, 0x79, 0x71, 0x97, 0xAD, 0x6B, 0x98, 0x46, 0xA6,
    0x25, 0x26, 0x2C, 0x2D, 0x37, 0x2A, 0x95, 0xA0, 0xF0, 0x27, 0xB5, 0x3D,
    0x5F, 0x8C, 0x24, 0xB9, 0xD5, 0x9A, 0x5B, 0x7D, 0x0B, 0x52, 0xF1, 0xC1,
    0x22, 0x18, 0x31, 0xCB, 0xD9, 0xB6, 0xB8, 0x1B, 0x1D, 0x72, 0x0F, 0xE3,
    0xFA, 0xD3, 0xAD, 0xC1, 0x93, 0xE6, 0xC9, 0x0B, 0xF3, 0xE4, 0x8F, 0xDD,
    0x73, 0xE1, 0x28, 0xCA, 0xD7, 0x16, 0xC7, 0xB4, 0x87, 0xC0, 0xDA, 0x6D,
    0x7B, 0xE9, 0xC3, 0x00, 0x91, 0x1E, 0x5C, 0x06, 0xA0, 0x1F, 0xC3, 0xFA,
    0x17, 0x72, 0x47, 0xD4, 0x4B, 0x50, 0x15, 0x6D, 0x9D, 0xA3, 0xC2, 0x76,
    0xEF, 0x77, 0x1C, 0x95, 0x77, 0x2E, 0xC3, 0x40, 0xBA, 0x1C, 0x96, 0xBC,
    0x59, 0xAC, 0x0B, 0x0E, 0xCB, 0x88, 0x21, 0x63, 0x03, 0x18, 0x6F, 0xEE,
    0x4A, 0x9A, 0xA8, 0xE6, 0xA0, 0x85, 0xDF, 0x40, 0x50, 0x7C, 0xCA, 0x71,
    0xD6, 0xC4, 0x69, 0x15, 0x93, 0x2B, 0x1E, 0x41, 0x56, 0x3A, 0x4B, 0x04,
    0x76, 0x83, 0x68, 0x68, 0xE0, 0x23, 0xD3, 0x0C, 0xB5, 0xED, 0xF0, 0xB9,
    0x69, 0xFD, 0xA0, 0xBF, 0x24, 0x96, 0x57, 0x0D, 0xBB, 0xC8, 0x61, 0xC5,
    0x5C, 0xD7, 0xF7, 0x41, 0xDF, 0xEB, 0x94, 0xF2, 0x8A, 0x44, 0x3A, 0x15,
    0x3D, 0x48, 0x6C, 0x28, 0x1A, 0xE4, 0x1B, 0x09, 0x44, 0x24, 0xA7, 0x34,
    0xD3, 0x75, 0xAC, 0x2C, 0xBD, 0x80, 0x92, 0xA4, 0x27, 0x3B, 0x57, 0x99,
    0xB4, 0x56, 0x62, 0xE0, 0xF7, 0x7C, 0x0D, 0x7F, 0x1C, 0x0A, 0x3D, 0x3A,
    0xB8, 0x99, 0xB4, 0x32, 0x48, 0x3A, 0x42, 0x36, 0x98, 0x7A, 0x43, 0xBE,
    0x8B, 0xDA, 0xF2, 0xB2, 0x4C, 0x6B, 0x01, 0x05, 0x17, 0x37, 0xB8, 0x1B,
    0x01, 0x23, 0xA5, 0x45, 0xEC, 0x49, 0x89, 0x7A, 0xFC, 0x08, 0xF1, 0x31,
    0xA5, 0x04, 0x62, 0x00, 0x62, 0x0A, 0x04, 0x7D, 0x2A, 0xA4, 0x48, 0x65,
    0x2E, 0x39, 0xA5, 0x02, 0xA2, 0x8C, 0xD4, 0x2C, 0x1E, 0x5C, 0x88, 0x47,
    0x6D, 0x64, 0x0D, 0xD8, 0xCF, 0xDD, 0x3B, 0x37, 0xE3, 0x0D, 0x89, 0x96,
    0x60, 0x65, 0xD3, 0xA3, 0x69, 0x2A, 0xC5, 0x45, 0x75, 0x9C, 0x81, 0x8F,
    0x1A, 0x3A, 0xA0, 0x35, 0x42, 0x18, 0xE1, 0x41, 0xA8, 0x18, 0x00, 0xF4,
    0x27, 0x34, 0xCC, 0x21, 0x02, 0x87, 0x00, 0x22, 0x08, 0xFA, 0x87, 0xD4,
    0x70, 0x4F, 0x56, 0x90, 0x8C, 0x8F, 0xDD, 0x56, 0x03, 0xDF, 0x69, 0x56,
    0xC9, 0x0E, 0x52, 0xDA, 0x8B, 0x46, 0xA2, 0x4F, 0x86, 0xA9, 0x01, 0x05,
    0xC0, 0x9A, 0x1D, 0x00, 0xEA, 0x41, 0xE2, 0x35, 0xB6, 0xF2, 0xF3, 0x4E,
    0xA0, 0xB2, 0x0B, 0xB0, 0xBA, 0xEB, 0x78, 0xF8, 0x95, 0xF3, 0x94, 0x71,
    0x9A, 0x63, 0x02, 0xB0, 0x37, 0x89, 0xA6, 0x97, 0x09, 0xE3, 0xE2, 0x4C,
    0xB6, 0xA1, 0xC6, 0x46, 0x4B, 0x5E, 0x9F, 0x7A, 0x58, 0x91, 0xF7, 0x53,
    0xBC, 0xB8, 0xCC, 0x30, 0xAF, 0x3B, 0x95, 0x77, 0x17, 0x6B, 0x08, 0x17,
    0x02, 0x65, 0x86, 0x33, 0x9B, 0x42, 0x07, 0xAB, 0x1F, 0x8A, 0x24, 0xA8,
    0xF7, 0x74, 0x2B, 0x24, 0x1E, 0x4C, 0xD4, 0x1E, 0x98, 0xCF, 0x2D, 0x8C,
    0x1D, 0x4E, 0x39, 0xA8, 0xA5, 0x50, 0x2B, 0x50, 0x64, 0x5C, 0xD9, 0x8C,
    0x59, 0xD3, 0xA1, 0x86, 0x85, 0x18, 0x06, 0xFE, 0xEA, 0x5F, 0xF0, 0xE0,
    0xC1, 0x81, 0x5C, 0xF5, 0x03, 0x3E, 0x32, 0xEE, 0x47, 0xDF, 0xE3, 0xE3,
    0xD3, 0x0A, 0x1F, 0x9F, 0xD6, 0xF1, 0x41, 0xAB, 0xCA, 0x83, 0xC9, 0x00,
    0xC8, 0x9E, 0x11, 0x4E, 0xC6, 0x34, 0x81, 0x05, 0x3C, 0x04, 0x55, 0xF2,
    0x97, 0x38, 0x4B, 0xE8, 0xF7, 0x39, 0xEB, 0x4D, 0xD8, 0x48, 0x3C, 0xE2,
    0xAF, 0x58, 0xFD, 0x2F, 0xB8, 0xC4, 0x03, 0xD7, 0x73, 0x99, 0xD7, 0xA6,
    0x95, 0x84, 0xF2, 0xFD, 0xB7, 0x12, 0xE9, 0x47, 0x2E, 0x84, 0x97, 0x8A,
    0x83, 0xFC, 0x75, 0x4B, 0x0F, 0xC0, 0x1B, 0x81, 0x9F, 0x52, 0x53, 0xC7,
    0xBB, 0x50, 0xCA, 0x9F, 0x02, 0x43, 0x86, 0x0A, 0x7C, 0xD4, 0x9D, 0xCD,
    0x2D, 0xE1, 0x1A, 0xA0, 0x18, 0x3F, 0x9A, 0x02, 0xAB, 0x9E, 0x2C, 0x70,
    0xED, 0x09, 0x64, 0x42, 0x10, 0x09, 0x8E, 0x84, 0x7C, 0xDA, 0xF8, 0x7C,
    0xB0, 0x79, 0x53, 0x83, 0x3C, 0xE4, 0xC2, 0x8F, 0xE9, 0xC2, 0x60, 0xF3,
    0xE6, 0x9F, 0x66, 0x63, 0xCC, 0xAC, 0x65, 0x47, 0x6A, 0xC9, 0x64, 0x4F,
    0x3F, 0xF3, 0x1B, 0x97, 0x80, 0xD4, 0x95, 0x84, 0x57, 0x44, 0x33, 0xB0,
    0x36, 0x14, 0x16, 0x7E, 0xF0, 0x7F, 0x94, 0x80, 0x1F, 0xE9, 0x79, 0xE0,
    0xDC, 0x6B, 0xDE, 0xE3, 0xF5, 0xE2, 0x53, 0x98, 0x6E, 0x95, 0x1E, 0xAC,
    0x74, 0xFC, 0x3E, 0xA5, 0x63, 0x97, 0x25, 0x4A, 0xA1, 0x44, 0x91, 0x85,
    0xA8, 0xA1, 0x06, 0xE5, 0x10, 0x85, 0x99, 0x78, 0xD1, 0x1C, 0x28, 0xB0,
    0x39, 0x47, 0xB3, 0xA5, 0x23, 0xF0, 0x40, 0x5F, 0x5F, 0xE4, 0xCE, 0xDF,
    0xCE, 0x4E, 0x4F, 0x84, 0x88, 0xAF, 0x54, 0x4C, 0x04, 0x5A, 0xD5, 0x85,
    0xE5, 0xE5, 0x99, 0x33, 0x91, 0x3C, 0x14, 0xA5, 0x0E, 0x26, 0x06, 0xE5,
    0xD0, 0xBF, 0x5D, 0x0C, 0xBF, 0x40, 0x9C, 0x35, 0xF4, 0xB3, 0x14, 0x12,
    0xD6, 0x96, 0x8D, 0xE8, 0xFD, 0xFE, 0xA5, 0xBD, 0x6B, 0x37, 0xA1, 0x2E,
    0x00, 0xAD, 0x42, 0x5A, 0x86, 0x7B, 0x9F, 0xFF, 0x25, 0xE4, 0xED, 0xBF,
    0x86, 0xCC, 0x20, 0x6A, 0xA5, 0x10, 0x96, 0x0A, 0xFC, 0x2A, 0xEE, 0x24,
    0x89, 0xA6, 0x12, 0xED, 0x38, 0x49, 0xF0, 0x52, 0xFA, 0x50, 0xA1, 0x68,
    0x43, 0x58, 0x4C, 0x69, 0xA2, 0xF9, 0x11, 0x4D, 0x35, 0x1E, 0x09, 0x2D,
    0xCD, 0xE2, 0x18, 0x1A, 0x97, 0x15, 0x7D, 0xD8, 0x7A, 0xF1, 0xFA, 0xF2,
    0x3E, 0xA3, 0x19, 0xF5, 0xF3, 0x65, 0x9A, 0x54, 0xF4, 0x82, 0x15, 0xD4,
    0x57, 0x84, 0xBB, 0x9F, 0x6F, 0xF2, 0x7A, 0x2A, 0xE3, 0x1C, 0xA3, 0xE8,
    0x46, 0x4B, 0xCD, 0x41, 0xBA, 0x09, 0x50, 0x75, 0x79, 0x16, 0x04, 0xF3,
    0xF6, 0x0A, 0x2D, 0x68, 0xBC, 0x22, 0x11, 0xC9, 0xE7, 0xF2, 0xD9, 0xEF,
    0x79, 0x72, 0x72, 0x56, 0x5E, 0x56, 0xAB, 0x54, 0x9B, 0xD6, 0x86, 0xB1,
    0x41, 0x35, 0xC6, 0x53, 0x41, 0xB8, 0x87, 0xD7, 0xA8, 0x74, 0x61, 0x16,
    0xB5, 0x14, 0x6E, 0x6F, 0xA3, 0xAF, 0xE5, 0xB6, 0xF4, 0x44, 0x3E, 0x95,
    0x92, 0x71, 0x57, 0xD7, 0xB1, 0xAA, 0xA2, 0x58, 0x9F, 0x92, 0x30, 0x2D,
    0x93, 0x2D, 0x2A, 0x03, 0x93, 0xBB, 0x05, 0xB8, 0x4D, 0x83, 0x14, 0x8E,
    0x5E, 0xBF, 0x3F, 0x67, 0xA3, 0x68, 0xE7, 0x08, 0xC0, 0xB4, 0x62, 0x9F,
    0xC9, 0x6B, 0x70, 0x12, 0xE6, 0xB9, 0x03, 0x99, 0x74, 0xA5, 0x01, 0x87,
    0x54, 0x4C, 0x22, 0xFF, 0x40, 0x3F, 0xD0, 0x1D, 0x1D, 0xFE, 0xDD, 0x84,
    0x9A, 0xA3, 0xE6, 0x52, 0x68, 0x52, 0x7D, 0x3A, 0xB8, 0x7A, 0x03, 0xE1,
    0x29, 0x86, 0xD2, 0x80, 0x0B, 0x28, 0x9A, 0x6B, 0x3A, 0x3E, 0xBD, 0x3E,
    0x86, 0x14, 0xE4, 0x3F, 0x93, 0x1B, 0xB3, 0x5D, 0x55, 0x36, 0xDC, 0x79,
    0xF5, 0x3A, 0x2B, 0x97, 0x01, 0xBD, 0x30, 0x46, 0xAC, 0x87, 0x14, 0xBF,
    0xFD, 0x3D, 0x7A, 0xCF, 0xC6, 0x0A, 0x69, 0xB5, 0xAE, 0x37, 0x67, 0x3B,
    0xC8, 0xB3, 0xC4, 0xEA, 0x21, 0x16, 0xB8, 0xCB, 0xF7, 0x94, 0xAC, 0xCA,
    0x1A, 0x6E, 0x7B, 0x24, 0x08, 0xF0, 0x63, 0xAD, 0x81, 0x0D, 0x35, 0x11,
    0x59, 0x6A, 0x21, 0x91, 0x14, 0x04, 0x48, 0x69, 0x1F, 0xC2, 0x9C, 0x69,
    0xC9, 0x32, 0x43, 0xD9, 0x50, 0xDE, 0xFF, 0x62, 0xCD, 0x51, 0x32, 0x23,
    0x74, 0xE7, 0x7C, 0xB6, 0xB9, 0x29, 0xEC, 0xC2, 0x4C, 0x8C, 0x02, 0x29,
    0xC5, 0x00, 0x0E, 0xCD, 0x3E, 0xB4, 0x16, 0x46, 0x59, 0x48, 0xAC, 0xD5,
    0x1E, 0x69, 0xDB, 0xA8, 0xAA, 0x01, 0x2A, 0x3E, 0xA3, 0x80, 0x01, 0x67,
    0x59, 0x12, 0x40, 0xD4, 0xC5, 0x1C, 0x5D, 0xD9, 0x96, 0x62, 0x5D, 0x68,
    0x42, 0x07, 0xF6, 0x23, 0x64, 0x89, 0xCA, 0xCB, 0x56, 0xD1, 0x13, 0x89,
    0xE2, 0xBB, 0x4A, 0x4F, 0xE4, 0xB7, 0x72, 0x42, 0x55, 0xE4, 0x3B, 0xC4,
    0x97, 0x09, 0x2E, 0xEA, 0xE8, 0x09, 0x50, 0x92, 0x41, 0x29, 0x1A, 0x30,
    0x15, 0x96, 0x1B, 0xF7, 0xF5, 0xE9, 0x74, 0x5A, 0xC7, 0x6F, 0xB5, 0x75,
    0x38, 0x41, 0x59, 0x81, 0xAF, 0xAF, 0xE3, 0x90, 0xA3, 0x0A, 0x2C, 0x7C,
    0xB7, 0x70, 0x56, 0x5D, 0x74, 0xA1, 0xBF, 0x15, 0x6F, 0x6A, 0x55, 0xE9,
    0xAC, 0xF0, 0xB9, 0xBC, 0xED, 0xBD, 0x9D, 0x15, 0x10, 0x19, 0xE2, 0x57,
    0x59, 0xC8, 0x34, 0x90, 0x86, 0x9D, 0x72, 0x23, 0xAB, 0x92, 0xC2, 0x32,
    0x2E, 0xD8, 0x71, 0x96, 0x4E, 0x8C, 0x19, 0xB0, 0xEE, 0x08, 0x4B, 0xE9,
    0xCA, 0xA1, 0x96, 0xB2, 0x5B, 0x87, 0x5B, 0x85, 0x7D, 0x38, 0x98, 0x41,
    0xCA, 0xBC, 0xFD, 0xF1, 0x87, 0x9C, 0x2D, 0x6F, 0x7B, 0x49, 0xB1, 0xB8,
    0xF0, 0x79, 0xFE, 0xD4, 0x9A, 0xD7, 0xB4, 0xD2, 0xE8, 0x57, 0xE2, 0xCB,
    0x5E, 0x23, 0xFF, 0x8C, 0x9D, 0x7F, 0xCE, 0xD6, 0xC0, 0xD8, 0xA1, 0x11,
    0x15, 0x6E, 0x26, 0x46, 0xF5, 0x17, 0x1A, 0xF3, 0xB1, 0xBC, 0x94, 0xDF,
    0x16, 0x1A, 0x0D, 0xCF, 0xE7, 0x5F, 0x52, 0x28, 0xA0, 0xA3, 0xCC, 0x1F,
    0x05, 0x24, 0xA1, 0x58, 0x6A, 0x34, 0xC8, 0x17, 0x72, 0xDF, 0x08, 0xD8,
    0x30, 0x6D, 0x60, 0x9A, 0x6D, 0xD9, 0x5B, 0xF6, 0x2E, 0x8E, 0xEC, 0x2F,
    0xE9, 0xFE, 0x2A, 0xED, 0xFD, 0x45, 0x7B, 0x86, 0x55, 0x70, 0x5E, 0xB5,
    0xAA, 0xA8, 0xA4, 0x36, 0xB8, 0x4F, 0x7C, 0x04, 0xD7, 0xF3, 0x06, 0xCB,
    0x6C, 0xAB, 0x41, 0xFE, 0xED, 0x45, 0x1D, 0xA3, 0x5B, 0xF9, 0x22, 0x49,
    0x1F, 0xB8, 0x87, 0x51, 0x75, 0x41, 0x65, 0x02, 0xD7, 0x53, 0x7D, 0x42,
    0x93, 0x3B, 0xCD, 0xF9, 0x92, 0x33, 0x7C, 0xC5, 0x83, 0x0A, 0x40, 0x7E,
    0xBD, 0x29, 0x17, 0x02, 0xFB, 0x7B, 0xD0, 0x2F, 0xA3, 0xF8, 0xCA, 0x7F,
    0x35, 0xD9, 0x2E, 0xE7, 0x13, 0x10, 0x0C, 0x80, 0x8B, 0x1D, 0x45, 0x52,
    0x5E, 0x59, 0xC6, 0xAC, 0xBC, 0xB2, 0xA4, 0x52, 0xFE, 0xCA, 0x62, 0xDE,
    0xF8, 0xE4, 0x5F, 0x65, 0xCA, 0xFF, 0xC3, 0x42, 0xB1, 0x91, 0xC9, 0x4F,
    0x4E, 0xB8, 0xB7, 0xFA, 0x11, 0x6A, 0x3D, 0x8A, 0xDA, 0xBD, 0xFF, 0x7F,
    0xFF, 0x01, 0x13, 0xB6, 0xC2, 0x59, 0x8D, 0x29, 0x00, 0x00};

#define SPIFFS_MAXLENGTH_FILEPATH 32
const char *excludeListFile = "/.exclude.files";

typedef struct ExcludeListS {
    char *item;
    ExcludeListS *next;
} ExcludeList;

static ExcludeList *excludes = NULL;

static bool matchWild(const char *pattern, const char *testee) {
  const char *nxPat = NULL, *nxTst = NULL;

  while (*testee) {
    if (( *pattern == '?' ) || (*pattern == *testee)){
      pattern++;testee++;
      continue;
    }
    if (*pattern=='*'){
      nxPat=pattern++; nxTst=testee;
      continue;
    }
    if (nxPat){ 
      pattern = nxPat+1; testee=++nxTst;
      continue;
    }
    return false;
  }
  while (*pattern=='*'){pattern++;}  
  return (*pattern == 0);
}

static bool addExclude(const char *item){
    size_t len = strlen(item);
    if(!len){
        return false;
    }
    ExcludeList *e = (ExcludeList *)malloc(sizeof(ExcludeList));
    if(!e){
        return false;
    }
    e->item = (char *)malloc(len+1);
    if(!e->item){
        free(e);
        return false;
    }
    memcpy(e->item, item, len+1);
    e->next = excludes;
    excludes = e;
    return true;
}

static void loadExcludeList(fs::FS &_fs, const char *filename){
    static char linebuf[SPIFFS_MAXLENGTH_FILEPATH];
    fs::File excludeFile=_fs.open(filename, "r");
    if(!excludeFile){
        //addExclude("/*.js.gz");
        return;
    }
#ifdef ESP32
    if(excludeFile.isDirectory()){
      excludeFile.close();
      return;
    }
#endif
    if (excludeFile.size() > 0){
      uint8_t idx;
      bool isOverflowed = false;
      while (excludeFile.available()){
        linebuf[0] = '\0';
        idx = 0;
        int lastChar;
        do {
          lastChar = excludeFile.read();
          if(lastChar != '\r'){
            linebuf[idx++] = (char) lastChar;
          }
        } while ((lastChar >= 0) && (lastChar != '\n') && (idx < SPIFFS_MAXLENGTH_FILEPATH));

        if(isOverflowed){
          isOverflowed = (lastChar != '\n');
          continue;
        }
        isOverflowed = (idx >= SPIFFS_MAXLENGTH_FILEPATH);
        linebuf[idx-1] = '\0';
        if(!addExclude(linebuf)){
            excludeFile.close();
            return;
        }
      }
    }
    excludeFile.close();
}

static bool isExcluded(fs::FS &_fs, const char *filename) {
  if(excludes == NULL){
      loadExcludeList(_fs, excludeListFile);
  }
  ExcludeList *e = excludes;
  while(e){
    if (matchWild(e->item, filename)){
      return true;
    }
    e = e->next;
  }
  return false;
}

// WEB HANDLER IMPLEMENTATION

#ifdef ESP32
SPIFFSEditor::SPIFFSEditor(const fs::FS& fs, const String& username, const String& password)
#else
SPIFFSEditor::SPIFFSEditor(const String& username, const String& password, const fs::FS& fs)
#endif
:_fs(fs)
,_username(username)
,_password(password)
,_authenticated(false)
,_startTime(0)
{}

bool SPIFFSEditor::canHandle(AsyncWebServerRequest *request){
  if(request->url().equalsIgnoreCase("/edit")){
    if(request->method() == HTTP_GET){
      if(request->hasParam("list"))
        return true;
      if(request->hasParam("edit")){
        request->_tempFile = _fs.open(request->arg("edit"), "r");
        if(!request->_tempFile){
          return false;
        }
#ifdef ESP32
        if(request->_tempFile.isDirectory()){
          request->_tempFile.close();
          return false;
        }
#endif
      }
      if(request->hasParam("download")){
        request->_tempFile = _fs.open(request->arg("download"), "r");
        if(!request->_tempFile){
          return false;
        }
#ifdef ESP32
        if(request->_tempFile.isDirectory()){
          request->_tempFile.close();
          return false;
        }
#endif
      }
      request->addInterestingHeader("If-Modified-Since");
      return true;
    }
    else if(request->method() == HTTP_POST)
      return true;
    else if(request->method() == HTTP_DELETE)
      return true;
    else if(request->method() == HTTP_PUT)
      return true;

  }
  return false;
}


void SPIFFSEditor::handleRequest(AsyncWebServerRequest *request){
  if(_username.length() && _password.length() && !request->authenticate(_username.c_str(), _password.c_str()))
    return request->requestAuthentication();

  if(request->method() == HTTP_GET){
    if(request->hasParam("list")){
      String path = request->getParam("list")->value();
#ifdef ESP32
      File dir = _fs.open(path);
#else
      Dir dir = _fs.openDir(path);
#endif
      path = String();
      String output = "[";
#ifdef ESP32
      File entry = dir.openNextFile();
      while(entry){
#else
      while(dir.next()){
        fs::File entry = dir.openFile("r");
#endif
        if (isExcluded(_fs, entry.name())) {
#ifdef ESP32
            entry = dir.openNextFile();
#endif
            continue;
        }
        if (output != "[") output += ',';
        output += "{\"type\":\"";
        output += "file";
        output += "\",\"name\":\"";
        output += String(entry.name());
        output += "\",\"size\":";
        output += String(entry.size());
        output += "}";
#ifdef ESP32
        entry = dir.openNextFile();
#else
        entry.close();
#endif
      }
#ifdef ESP32
      dir.close();
#endif
      output += "]";
      request->send(200, "application/json", output);
      output = String();
    }
    else if(request->hasParam("edit") || request->hasParam("download")){
      request->send(request->_tempFile, request->_tempFile.name(), String(), request->hasParam("download"));
    }
    else {
      const char * buildTime = __DATE__ " " __TIME__ " GMT";
      if (request->header("If-Modified-Since").equals(buildTime)) {
        request->send(304);
      } else {
        AsyncWebServerResponse *response = request->beginResponse_P(200, "text/html", edit_htm_gz, edit_htm_gz_len);
        response->addHeader("Content-Encoding", "gzip");
        response->addHeader("Last-Modified", buildTime);
        request->send(response);
      }
    }
  } else if(request->method() == HTTP_DELETE){
    if(request->hasParam("path", true)){
        _fs.remove(request->getParam("path", true)->value());
      request->send(200, "", "DELETE: "+request->getParam("path", true)->value());
    } else
      request->send(404);
  } else if(request->method() == HTTP_POST){
    if(request->hasParam("data", true, true) && _fs.exists(request->getParam("data", true, true)->value()))
      request->send(200, "", "UPLOADED: "+request->getParam("data", true, true)->value());
    else
      request->send(500);
  } else if(request->method() == HTTP_PUT){
    if(request->hasParam("path", true)){
      String filename = request->getParam("path", true)->value();
      if(_fs.exists(filename)){
        request->send(200);
      } else {
        fs::File f = _fs.open(filename, "w");
        if(f){
          f.write((uint8_t)0x00);
          f.close();
          request->send(200, "", "CREATE: "+filename);
        } else {
          request->send(500);
        }
      }
    } else
      request->send(400);
  }
}

void SPIFFSEditor::handleUpload(AsyncWebServerRequest *request, const String& filename, size_t index, uint8_t *data, size_t len, bool final){
  if(!index){
    if(!_username.length() || request->authenticate(_username.c_str(),_password.c_str())){
      _authenticated = true;
      request->_tempFile = _fs.open(filename, "w");
      _startTime = millis();
    }
  }
  if(_authenticated && request->_tempFile){
    if(len){
      request->_tempFile.write(data,len);
    }
    if(final){
      request->_tempFile.close();
    }
  }
}
