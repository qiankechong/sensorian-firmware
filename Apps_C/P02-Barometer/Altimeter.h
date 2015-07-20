#include <stdlib.h>


 unsigned int Altimeter[] = {
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1105, 0x4350, 0x64F7, 0x75DC, 0x7DFD, 0x75FD, 0x75DD, 0x75DC, 0x6DBC, 0x6D9C, 0x659C, 0x657C, 0x657C, 0x5D5B, 0x5D3B, 0x5D3B, 0x551B, 0x551A, 0x54FA, 0x54FA, 0x54FA, 0x4CDA, 0x4CD9, 0x4CB9, 0x4CB9, 
        0x4C99, 0x4499, 0x4498, 0x4478, 0x4478, 0x4478, 0x3C58, 0x3C58, 0x3C37, 0x3C37, 0x3437, 0x3417, 0x3417, 0x33F6, 0x33F6, 0x2BF6, 0x2BD6, 0x2BD6, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2374, 0x1AD1, 0x11EB, 0x0083, 0x0000, 0x0000, 0x0000, 
        0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x10A3, 0x5C54, 0x863D, 0x7E3D, 0x7E1D, 0x7E1D, 0x75FD, 0x75FD, 0x75DD, 0x6DBC, 0x6DBC, 0x6D9C, 0x659C, 0x657C, 0x5D5B, 0x5D5B, 0x5D3B, 0x551B, 0x551A, 0x54FA, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x44B9, 
        0x4499, 0x4499, 0x4478, 0x4478, 0x3C78, 0x3C58, 0x3C58, 0x3C37, 0x3C37, 0x3437, 0x3417, 0x3417, 0x3416, 0x33F6, 0x2BF6, 0x2BD6, 0x2BD6, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x124E, 0x0062, 0x0000, 
        0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x21C8, 0x85FC, 0x865E, 0x863E, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75FD, 0x75DD, 0x6DBC, 0x6DBC, 0x6D9C, 0x659C, 0x657C, 0x655B, 0x5D5B, 0x5D3B, 0x5D3B, 0x551A, 0x54FA, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x44B9, 
        0x4499, 0x4499, 0x4478, 0x4478, 0x3C78, 0x3C58, 0x3C58, 0x3C37, 0x3C37, 0x2B73, 0x2B73, 0x3417, 0x3416, 0x33F6, 0x2BF6, 0x2BD6, 0x2BD6, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B33, 0x00E5, 
        0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x29C8, 0x8E5D, 0x8E5E, 0x865E, 0x863E, 0x863D, 0x7E1D, 0x7E1D, 0x7DFD, 0x75FD, 0x75DD, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657C, 0x657B, 0x5D5B, 0x5D3B, 0x5D3B, 0x551B, 0x54FA, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x44B9, 
        0x4499, 0x4499, 0x4478, 0x4478, 0x3C78, 0x3C58, 0x3C58, 0x3C37, 0x2B93, 0x0188, 0x2331, 0x33D5, 0x3416, 0x33F6, 0x2BF6, 0x2BD6, 0x2BD6, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x00E5, 0x0000, 0x0000,
  0x0000, 0x10C3, 0x8E1C, 0x8E7E, 0x8E5E, 0x865E, 0x865E, 0x863D, 0x7E3D, 0x7E1D, 0x7E1D, 0x75FD, 0x75DD, 0x75DC, 0x6DBC, 0x6DBC, 0x659C, 0x657C, 0x657B, 0x5D5B, 0x5D3B, 0x5D3B, 0x551B, 0x54FA, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x44B9, 
        0x4499, 0x4499, 0x4478, 0x4478, 0x3C78, 0x3C58, 0x3C58, 0x2B93, 0x0188, 0x0187, 0x2331, 0x2B94, 0x33F6, 0x33F6, 0x2BF6, 0x2BD6, 0x2BD6, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B33, 0x0062, 0x0000,
  0x0000, 0x6C74, 0x967E, 0x8E7E, 0x8E5E, 0x8E5E, 0x865E, 0x863D, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75FD, 0x75DC, 0x6DBC, 0x6DBC, 0x659C, 0x657C, 0x657B, 0x5D5B, 0x5D3B, 0x5D3B, 0x551B, 0x551A, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x44B9, 
        0x4499, 0x4499, 0x4478, 0x4478, 0x3C78, 0x3C58, 0x2B93, 0x0188, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x33F6, 0x2BF6, 0x2BD6, 0x2BD6, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x124D, 0x0000,
  0x1925, 0x969E, 0x967E, 0x8E7E, 0x8E7E, 0x8E5E, 0x865E, 0x863E, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75FD, 0x75DD, 0x6DBC, 0x6DBC, 0x6D9C, 0x659C, 0x657C, 0x5D5B, 0x5D5B, 0x5D3B, 0x551B, 0x551A, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x44B9, 
        0x4499, 0x4499, 0x4478, 0x4478, 0x3C78, 0x2B93, 0x0188, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2B94, 0x2BF6, 0x2BD6, 0x2BD6, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x0083,
  0x53B0, 0x969E, 0x969E, 0x967E, 0x8E7E, 0x8E5E, 0x8E5E, 0x865E, 0x863D, 0x7E3D, 0x7E1D, 0x7DFD, 0x75FD, 0x75DD, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657C, 0x5D5B, 0x5D5B, 0x5D3B, 0x551B, 0x551A, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x44B9, 
        0x4499, 0x4499, 0x4478, 0x4478, 0x3393, 0x0188, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2B94, 0x2BD6, 0x2BD6, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x09CB,
  0x7D58, 0x969E, 0x969E, 0x967E, 0x8E7E, 0x8E7E, 0x8E5E, 0x865E, 0x863D, 0x7E3D, 0x7E1D, 0x7E1D, 0x75FD, 0x75DD, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657C, 0x5D5B, 0x5D5B, 0x5D3B, 0x551B, 0x551A, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x44B9, 
        0x4499, 0x4499, 0x4478, 0x33B3, 0x0188, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2BB5, 0x2BD6, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x12B0,
  0x9E7D, 0x969E, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x8E5E, 0x865E, 0x863D, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75DD, 0x75DC, 0x6DBC, 0x6DBC, 0x659C, 0x657C, 0x655B, 0x5D5B, 0x5D3B, 0x551B, 0x551A, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x44B9, 
        0x4499, 0x4499, 0x3393, 0x0188, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2353, 0x2BB5, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B33,
  0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x967E, 0x8E7E, 0x8E7E, 0x8E5E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FD, 0x75DC, 0x6DBC, 0x6DBC, 0x659C, 0x657C, 0x657B, 0x5D5B, 0x5D3B, 0x5D1B, 0x551A, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x44B9, 
        0x4499, 0x33B3, 0x0188, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2352, 0x2352, 0x2BD5, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xA6DE, 0x9EBE, 0x969E, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x8E5E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x7DFD, 0x75FD, 0x75DC, 0x6DBC, 0x6DBC, 0x659C, 0x657C, 0x657B, 0x5D5B, 0x5D3B, 0x5D3B, 0x551A, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x44B9, 
        0x33B3, 0x0188, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2352, 0x2332, 0x2353, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xA6DE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x967E, 0x8E7E, 0x8E5E, 0x865E, 0x863D, 0x863D, 0x7E1D, 0x7DFD, 0x75FD, 0x75DC, 0x6DBC, 0x6DBC, 0x659C, 0x657C, 0x657B, 0x5D5B, 0x5D3B, 0x5D3B, 0x551A, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x33B3, 
        0x0188, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2352, 0x2332, 0x1B32, 0x2373, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xA6DE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x967E, 0x8E7E, 0x8E7E, 0x865E, 0x863D, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75DC, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657B, 0x5D5B, 0x5D3B, 0x5D3B, 0x551A, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x33B3, 0x0188, 
        0x0187, 0x0187, 0x0188, 0x7452, 0x1A09, 0x11E9, 0x432D, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x33D4, 0x2373, 0x3BF5, 0x2332, 0x1B32, 0x1B11, 0x2374, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xA6DE, 0x9EBE, 0x9EBE, 0x96BE, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x8E5E, 0x865D, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75DD, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657B, 0x5D5B, 0x5D5B, 0x5D3B, 0x551A, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x33B3, 0x0188, 0x0187, 
        0x0187, 0x0187, 0x5BAF, 0xFFFF, 0xD6FB, 0xBE39, 0x09C9, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x33D5, 0x5497, 0x64D8, 0x33B4, 0x1B32, 0x1B11, 0x1B11, 0x2394, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xA6DE, 0x9EBE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x8E5E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FD, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657B, 0x5D5B, 0x5D5B, 0x5D3B, 0x551A, 0x54FA, 0x54FA, 0x4CDA, 0x33B3, 0x0188, 0x0187, 0x0187, 
        0x3AED, 0x63F0, 0xBE39, 0xFFFF, 0xC67A, 0x09C8, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x3C15, 0x64D8, 0x4C36, 0x3BD4, 0x1B11, 0x1AF1, 0x1B11, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xA6DE, 0x9EDE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x969E, 0x8E7E, 0x8E5E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FD, 0x75DC, 0x6DBC, 0x6DBC, 0x659C, 0x657B, 0x5D5B, 0x5D5B, 0x5D3B, 0x551A, 0x54FA, 0x54FA, 0x3BB3, 0x0188, 0x0187, 0x0187, 0x3AED, 
        0xD6DB, 0xD6BB, 0xEF7D, 0xC67A, 0x09C8, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x4C56, 0x5CB7, 0x64F8, 0x33B4, 0x1AF1, 0x1AF0, 0x1B32, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xA6FE, 0xA6DE, 0x9EBE, 0x9EBE, 0x96BE, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x7DFD, 0x75FD, 0x75DC, 0x6DBC, 0x6DBC, 0x659C, 0x657B, 0x5D5B, 0x5D5B, 0x5D3B, 0x551A, 0x551A, 0x3BD4, 0x0188, 0x0187, 0x4B4E, 0x2A6B, 0xE73D, 
        0xFFFF, 0xF7BE, 0x430D, 0x09C8, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2373, 0x3BF5, 0x64F8, 0x6CF8, 0x2B72, 0x2B52, 0x1AD0, 0x2353, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAEFE, 0xA6DE, 0x9EBE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x865D, 0x7E3D, 0x7E1D, 0x7E1D, 0x75FD, 0x75DC, 0x6DBC, 0x6DBC, 0x659C, 0x657B, 0x655B, 0x5D5B, 0x5D3B, 0x551B, 0x551A, 0x3C15, 0x01A8, 0x0187, 0x7472, 0xE73D, 0x7C72, 
        0xFFFF, 0xC659, 0x09C8, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2352, 0x2B73, 0x64F8, 0x4C56, 0x64D8, 0x2B72, 0x1AD0, 0x2353, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAEFF, 0xA6DE, 0x9EDE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x865D, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75DC, 0x6DDC, 0x6DBC, 0x659C, 0x657B, 0x655B, 0x5D5B, 0x5D3B, 0x551B, 0x551A, 0x54FA, 0x3C15, 0x01A8, 0x0187, 0x7452, 0xFFFF, 
        0xC659, 0x09C8, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2352, 0x2332, 0x33B4, 0x6D18, 0x3BD4, 0x1AF0, 0x1B32, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAEFF, 0xA6DE, 0xA6DE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x8E5E, 0x865D, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75DC, 0x6DDC, 0x6DBC, 0x659C, 0x657B, 0x657B, 0x5D5B, 0x5D3B, 0x551B, 0x551A, 0x54FA, 0x4CDA, 0x3C15, 0x01A8, 0x0187, 0x538F, 
        0x09C8, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2352, 0x2332, 0x1B32, 0x33B3, 0x1AF1, 0x1B11, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAEFF, 0xA6DE, 0xA6DE, 0x9EDE, 0x9EBE, 0x96BE, 0x969E, 0x969E, 0x8E7E, 0x8E5E, 0x865D, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75DC, 0x6DDC, 0x6DBC, 0x659C, 0x657B, 0x657B, 0x5D5B, 0x5D3B, 0x551B, 0x551A, 0x54FA, 0x4CDA, 0x4CDA, 0x3C15, 0x01A8, 0x0187, 
        0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2352, 0x2332, 0x1B32, 0x1B11, 0x1B11, 0x2395, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAEFF, 0xA6DE, 0xA6DE, 0x9EDE, 0x9EBE, 0x96BE, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x75FD, 0x75DC, 0x6DDC, 0x6DBC, 0x659C, 0x657B, 0x657B, 0x5D5B, 0x5D3B, 0x551B, 0x551A, 0x54FA, 0x4CDA, 0x4CDA, 0x3BD4, 0x01A8, 0x0187, 
        0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2352, 0x2332, 0x1B32, 0x1B11, 0x1B11, 0x2395, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAEFF, 0xA6FE, 0xA6DE, 0x9EDE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x75FD, 0x75DC, 0x6DDC, 0x6DBC, 0x659C, 0x659C, 0x657B, 0x5D5B, 0x5D3B, 0x553B, 0x551A, 0x54FA, 0x4CDA, 0x3BF4, 0x0188, 0x0187, 0x0187, 
        0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2352, 0x2332, 0x1B32, 0x1B11, 0x1AF1, 0x1B11, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAEFF, 0xA6FE, 0xA6DE, 0x9EDE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FC, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657B, 0x5D5B, 0x5D3B, 0x553B, 0x551A, 0x54FA, 0x3BF5, 0x0188, 0x0187, 0x0187, 0x0187, 
        0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2352, 0x2332, 0x1B32, 0x1B11, 0x1AF1, 0x1AF0, 0x1B32, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAF1F, 0xA6FE, 0xA6DE, 0xA6DE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FC, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657B, 0x5D5B, 0x5D3B, 0x553B, 0x551A, 0x3BF4, 0x0188, 0x0187, 0x0187, 0x0187, 0x0187, 
        0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2352, 0x2332, 0x1B32, 0x1B11, 0x1AF1, 0x1AF0, 0x1AD0, 0x2353, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAF1F, 0xA6FE, 0xA6DE, 0xA6DE, 0x9EDE, 0x9EBE, 0x96BE, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FC, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657B, 0x5D5B, 0x5D3B, 0x553B, 0x4415, 0x01A8, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 
        0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2352, 0x2332, 0x1B32, 0x1B11, 0x1AF1, 0x1AF0, 0x1AD0, 0x1AD0, 0x2374, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAF1F, 0xA6FE, 0xA6FE, 0xA6DE, 0x9EDE, 0x9EBE, 0x96BE, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x865D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FC, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657B, 0x5D5B, 0x5D3B, 0x4415, 0x01A8, 0x0188, 0x0187, 0x09C9, 0x0188, 0x0187, 0x0187, 
        0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2352, 0x2332, 0x1B32, 0x1B11, 0x1AF1, 0x1B11, 0x1AD0, 0x12D0, 0x1AD0, 0x2374, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAF1F, 0xA6FE, 0xA6FE, 0xA6DE, 0x9EDE, 0x9EBE, 0x96BE, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x865D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FC, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657B, 0x5D5B, 0x4435, 0x01A8, 0x0188, 0x0188, 0x32AC, 0xDF1C, 0x9D76, 0x0187, 0x0187, 
        0x0187, 0x0187, 0x0167, 0x0167, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2352, 0x2332, 0x1B32, 0x1B11, 0x1B11, 0x64D7, 0x43F4, 0x12D0, 0x12AF, 0x1AF1, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xB71F, 0xA6FE, 0xA6FE, 0xA6DE, 0x9EDE, 0x9EBE, 0x96BE, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x865D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FC, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657B, 0x4435, 0x01A8, 0x0188, 0x0188, 0x0187, 0xBE59, 0xFFFF, 0xFFFF, 0xEF9E, 0x63F0, 
        0x0187, 0x09A8, 0xEF9E, 0xD6DB, 0xBE59, 0x4B4E, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x4C56, 0x5497, 0x5477, 0x1B32, 0x2B93, 0x6CF8, 0x7539, 0x7539, 0x1AD0, 0x12AF, 0x12AF, 0x1B12, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xB71F, 0xAEFE, 0xA6FE, 0xA6DE, 0x9EDE, 0x9EBE, 0x96BE, 0x969E, 0x8E9E, 0x8E7E, 0x865D, 0x865D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FC, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x4455, 0x01A8, 0x01A8, 0x0188, 0x0188, 0x4B4E, 0xD6DB, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
        0x7452, 0x19E9, 0xFFFF, 0xFFFF, 0xF7BE, 0x32CC, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x4C77, 0x64D8, 0x5497, 0x2352, 0x64F8, 0x6D19, 0x7539, 0x7518, 0x3393, 0x12AF, 0x12AF, 0x12AF, 0x1B33, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xB71F, 0xAEFE, 0xA6FE, 0xA6DE, 0x9EDE, 0x9EBE, 0x96BE, 0x969E, 0x8E9E, 0x8E7E, 0x865D, 0x865D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FC, 0x6DDC, 0x6DBC, 0x6D9C, 0x4455, 0x01A8, 0x01A8, 0x122A, 0x63F0, 0x09C8, 0x84D3, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
        0xFFFF, 0xE73D, 0xFFFF, 0xE73C, 0x32AC, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2B73, 0x5497, 0x64F8, 0x64D8, 0x6D19, 0x6D19, 0x7539, 0x7539, 0x4C35, 0x2311, 0x3372, 0x12AF, 0x12AF, 0x1B54, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xB71F, 0xAEFE, 0xA6FE, 0xA6DE, 0x9EDE, 0x9EBE, 0x96BE, 0x969E, 0x8E9E, 0x8E7E, 0x865D, 0x865D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FC, 0x6DDC, 0x6DBC, 0x6D9C, 0x126C, 0x01A8, 0x1A2A, 0xE75D, 0xFFFF, 0xD6FC, 0x3AED, 0xC67A, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
        0xFFFF, 0xFFFF, 0xC67A, 0x1209, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2373, 0x5CB7, 0x64F8, 0x6D19, 0x6D19, 0x7539, 0x7518, 0x3372, 0x7518, 0x7D59, 0x3372, 0x12AF, 0x1B12, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xB71F, 0xAEFE, 0xA6FE, 0xA6DE, 0x9EDE, 0x9EBE, 0x96BE, 0x969E, 0x8E9E, 0x8E7E, 0x865D, 0x865D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FC, 0x6DDC, 0x6DBC, 0x6D9C, 0x5D3A, 0x124B, 0x01A8, 0x32CC, 0xEF7E, 0xFFFF, 0xFFFF, 0xD6DB, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 
        0xFFFF, 0xFFFF, 0xC67A, 0x09A8, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x2353, 0x5CB7, 0x64F8, 0x6D19, 0x6D19, 0x7539, 0x6D18, 0x7539, 0x7D59, 0x5455, 0x12AF, 0x1AF0, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xB71F, 0xA6FE, 0xA6FE, 0xA6DE, 0x9EDE, 0x9EBE, 0x96BE, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x865D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FC, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x5D3A, 0x124C, 0x01A8, 0x2AAC, 0xEF7D, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xC659, 0xE75D, 
        0xFFFF, 0xFFFF, 0xFFFF, 0x9D76, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2373, 0x4415, 0x64F8, 0x64F8, 0x64F8, 0x5CB7, 0x7539, 0x7539, 0x7D59, 0x64D7, 0x12D0, 0x12D0, 0x1B74, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAF1F, 0xA6FE, 0xA6FE, 0xA6DE, 0x9EDE, 0x9EBE, 0x96BE, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x865D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FC, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657B, 0x5D1A, 0x124C, 0x0188, 0x2A8B, 0xE75D, 0xFFFF, 0xFFFF, 0xFFFF, 0xE75D, 0x3AED, 
        0x9D56, 0xFFFF, 0xFFFF, 0xFFFF, 0x7452, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2B94, 0x5CD8, 0x64F8, 0x5CB8, 0x3393, 0x64F8, 0x7539, 0x7539, 0x7518, 0x2310, 0x12AF, 0x2353, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAF1F, 0xA6FE, 0xA6FE, 0xA6DE, 0x9EDE, 0x9EBE, 0x96BE, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x865D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FC, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657B, 0x5D5B, 0x551A, 0x124C, 0x0188, 0x2A8B, 0xE75D, 0xFFFF, 0xFFFF, 0xFFFF, 0xEF7E, 
        0x32CC, 0x3B0D, 0xDEFC, 0xFFFF, 0xFFFF, 0x432E, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x5477, 0x64D8, 0x5477, 0x2352, 0x5C97, 0x6D19, 0x7539, 0x7539, 0x2B72, 0x12AF, 0x1B33, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAF1F, 0xA6FE, 0xA6DE, 0xA6DE, 0x9EDE, 0x9EBE, 0x96BE, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x865D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FC, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657B, 0x5D5B, 0x5D3B, 0x54FA, 0x124C, 0x0188, 0x226B, 0xE73D, 0xFFFF, 0xD6BB, 0xFFFF, 
        0xF79E, 0x3AED, 0x09A8, 0x84D4, 0xFFDF, 0xEF9E, 0x226B, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x3C15, 0x5CD8, 0x4436, 0x2332, 0x4C56, 0x6D19, 0x64D8, 0x7539, 0x43F4, 0x12D0, 0x1B12, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAF1F, 0xA6FE, 0xA6DE, 0xA6DE, 0x9EBE, 0x9EBE, 0x96BE, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FC, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657B, 0x5D5B, 0x5D3B, 0x553B, 0x54F9, 0x126C, 0x0187, 0x224A, 0xE73C, 0x5BD0, 0x8D14, 
        0xFFFF, 0xF7BE, 0x432E, 0x0187, 0x2A8B, 0xCE9A, 0xA5B7, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x5497, 0x3BF5, 0x2352, 0x3BF5, 0x64F8, 0x5497, 0x43F4, 0x5476, 0x1AD0, 0x1AF1, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAEFF, 0xA6FE, 0xA6DE, 0x9EDE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FC, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657B, 0x5D5B, 0x5D3B, 0x553B, 0x551A, 0x54D9, 0x1A6C, 0x0187, 0x224A, 0xDF1C, 0x6C11, 
        0xA596, 0xFFFF, 0xF7DF, 0x4B6F, 0x0187, 0x0187, 0x1A4A, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2B94, 0x2373, 0x33B4, 0x64F8, 0x64D8, 0x33B4, 0x5CB7, 0x1AF1, 0x1AF0, 0x2394, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAEFF, 0xA6FE, 0xA6DE, 0x9EDE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x75FD, 0x75DC, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657B, 0x5D5B, 0x5D3B, 0x553B, 0x551A, 0x54FA, 0x4CD9, 0x228B, 0x0187, 0x224A, 0xDF1C, 
        0x7C93, 0xF79E, 0xFFFF, 0xFFDF, 0x5BD0, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2B94, 0x5CB8, 0x64F8, 0x4C56, 0x64D8, 0x2352, 0x1AF0, 0x2374, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAEFF, 0xA6DE, 0xA6DE, 0x9EDE, 0x9EBE, 0x96BE, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x75FD, 0x75DC, 0x6DDC, 0x6DBC, 0x659C, 0x657B, 0x657B, 0x5D5B, 0x5D3B, 0x551B, 0x551A, 0x7556, 0xC5EA, 0xE623, 0x42C6, 0x0187, 0x1A2A, 
        0xDF1C, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x430D, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x5477, 0x64D8, 0x64F8, 0x64F8, 0x3393, 0x1AF1, 0x2353, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAEFF, 0xA6DE, 0xA6DE, 0x9EDE, 0x9EBE, 0x96BE, 0x969E, 0x969E, 0x8E7E, 0x8E5E, 0x865D, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75DC, 0x6DDC, 0x6DBC, 0x659C, 0x657B, 0x657B, 0x5D5B, 0x5D3B, 0x5D3A, 0x8D93, 0xEE44, 0xFE60, 0xFE60, 0xF641, 0x42E6, 0x0187, 
        0x1A2A, 0xD6FC, 0xFFFF, 0xFFFF, 0xDF1C, 0x09A8, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x4416, 0x64D8, 0x64F8, 0x4415, 0x1B11, 0x2352, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAEFF, 0xA6DE, 0xA6DE, 0x9EBE, 0x9EBE, 0x96BE, 0x969E, 0x8E7E, 0x8E7E, 0x8E5E, 0x865D, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75DC, 0x6DDC, 0x6DBC, 0x659C, 0x657B, 0x657B, 0x5D5B, 0x5D3B, 0x8596, 0xEE44, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0xF641, 0x4AE6, 
        0x0187, 0x1A09, 0xD6DB, 0xFFFF, 0x84B3, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x33B4, 0x64D8, 0x4C56, 0x1B32, 0x2332, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAEFF, 0xA6DE, 0x9EDE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x865D, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75DC, 0x6DDC, 0x6DBC, 0x659C, 0x657B, 0x655B, 0x5D5B, 0x6D59, 0xCE0A, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0xFE40, 
        0x4B06, 0x0187, 0x1209, 0xD6DB, 0xF79E, 0x1A2A, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x4C56, 0x5497, 0x2352, 0x2332, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xAEFE, 0xA6DE, 0x9EDE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x865D, 0x7E3D, 0x7E1D, 0x7E1D, 0x75FD, 0x75DC, 0x6DBC, 0x6DBC, 0x659C, 0x657B, 0x655B, 0x5D5B, 0x8596, 0xFE61, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0xF621, 
        0x3AA6, 0x0187, 0x0187, 0x11E9, 0xCEBB, 0xB5F8, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2BB4, 0x5CB8, 0x2B93, 0x2332, 0x2332, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xA6FE, 0xA6DE, 0x9EBE, 0x9EBE, 0x96BE, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x7DFD, 0x75FD, 0x75DC, 0x6DBC, 0x6DBC, 0x659C, 0x657B, 0x5D5B, 0x5D5B, 0xA5F0, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0xF621, 0x3A86, 
        0x0187, 0x0187, 0x0187, 0x0187, 0x11E9, 0xCE9A, 0x5BAF, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x4456, 0x33D5, 0x2352, 0x2332, 0x1B32, 0x1B32, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xA6DE, 0x9EDE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x969E, 0x8E7E, 0x8E5E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FD, 0x75DC, 0x6DBC, 0x6DBC, 0x659C, 0x657B, 0x5D5B, 0x5D5B, 0xC60C, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0xF621, 0x3A86, 0x0187, 
        0x0188, 0x6C52, 0xADD7, 0x538F, 0x0187, 0x11E9, 0x84F4, 0x0167, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x3C15, 0x2373, 0x33B4, 0x5477, 0x2B73, 0x1B11, 0x2332, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xA6DE, 0x9EBE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x8E5E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FD, 0x75DC, 0x6DBC, 0x6D9C, 0x659C, 0x657B, 0x5D5B, 0x5D5B, 0xBE0C, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0xF641, 0x3A86, 0x0187, 0x1209, 
        0xADF8, 0xE75D, 0xFFFF, 0xFFFF, 0x6C31, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2B94, 0x5CD8, 0x64F8, 0x64D8, 0x2B72, 0x1AF1, 0x2353, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xA6DE, 0x9EBE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x8E5E, 0x865D, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75DD, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657B, 0x5D5B, 0x5D5B, 0xA5D1, 0xFE61, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0x73C5, 0x0187, 0x09A8, 
        0xBE39, 0x6C11, 0xF7DF, 0xFFFF, 0xFFFF, 0x2AAC, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x4C77, 0x64D8, 0x5497, 0x5476, 0x2B72, 0x1AF1, 0x2374, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xA6DE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x967E, 0x8E7E, 0x8E7E, 0x865E, 0x865D, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75DC, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657B, 0x5D5B, 0x5D3B, 0x8595, 0xDE47, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0x7BC5, 0x0187, 
        0x09A8, 0xADD7, 0xB618, 0xFFFF, 0xF7DF, 0x4B6E, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x5497, 0x64D8, 0x5477, 0x33B4, 0x1B11, 0x2373, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xA6DE, 0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x967E, 0x8E7E, 0x8E5E, 0x865E, 0x863D, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75DC, 0x6DDC, 0x6DBC, 0x659C, 0x657C, 0x657B, 0x5D5B, 0x5D3B, 0x5D3A, 0xBDEC, 0xE645, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0x7BE5, 
        0x0187, 0x09A8, 0xB618, 0xFFFF, 0xDF1C, 0x1A2A, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x4436, 0x64D8, 0x4415, 0x1B32, 0x2353, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0xA6DE, 0x9EBE, 0x969E, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x8E5E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x7DFD, 0x75FD, 0x75DC, 0x6DBC, 0x6DBC, 0x659C, 0x657C, 0x657B, 0x5D5B, 0x5D3B, 0x5D3B, 0x7576, 0xC60B, 0xD627, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 0xFE60, 
        0x7C05, 0x0187, 0x01A8, 0xB5F8, 0xE75D, 0xADD7, 0x09A8, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x33D5, 0x5497, 0x5477, 0x2332, 0x2352, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0x9EBE, 0x9EBE, 0x969E, 0x969E, 0x967E, 0x8E7E, 0x8E7E, 0x8E5E, 0x865D, 0x863D, 0x7E3D, 0x7E1D, 0x75FD, 0x75FD, 0x75DC, 0x6DBC, 0x6DBC, 0x659C, 0x657C, 0x657B, 0x5D5B, 0x5D3B, 0x5D1B, 0x551A, 0x7D55, 0xC60A, 0xB5CC, 0xCDE8, 0xF642, 0xFE61, 0xEE24, 
        0xB5AB, 0x4B8D, 0x0187, 0x0188, 0xA597, 0x32CC, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x4436, 0x2373, 0x2352, 0x2BB5, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B54,
  0x9E7D, 0x969E, 0x969E, 0x969E, 0x8E7E, 0x8E7E, 0x8E5E, 0x865E, 0x865D, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75FD, 0x75DC, 0x6DBC, 0x6DBC, 0x659C, 0x657C, 0x657B, 0x5D5B, 0x5D3B, 0x551B, 0x551A, 0x54FA, 0x5D18, 0xA5AE, 0xCE09, 0xB5AB, 0xA58D, 0xA58D, 
        0xADAC, 0x956F, 0x2B51, 0x0187, 0x0188, 0x8D14, 0x1A2A, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x3BF5, 0x33B4, 0x2353, 0x2BB5, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x1B33,
  0x7D78, 0x969E, 0x969E, 0x967E, 0x8E7E, 0x8E7E, 0x8E5E, 0x865E, 0x863D, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75DD, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657C, 0x5D5B, 0x5D5B, 0x5D3B, 0x551B, 0x551A, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x54D8, 0x64F6, 0x54B8, 
        0x4499, 0x4499, 0x4478, 0x2B51, 0x0187, 0x0188, 0x5BD0, 0x0167, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x33D5, 0x2373, 0x2B94, 0x2BD6, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x12B0,
  0x53B0, 0x969E, 0x969E, 0x967E, 0x8E7E, 0x8E5E, 0x8E5E, 0x865E, 0x863D, 0x7E3D, 0x7E1D, 0x7DFD, 0x75FD, 0x75DD, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657C, 0x5D5B, 0x5D5B, 0x5D3B, 0x551B, 0x551A, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x44B9, 
        0x4499, 0x4499, 0x4478, 0x4478, 0x2B51, 0x0187, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2373, 0x2B94, 0x2BD6, 0x2BD6, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x09CB,
  0x1925, 0x969E, 0x967E, 0x8E7E, 0x8E7E, 0x8E5E, 0x865E, 0x863E, 0x863D, 0x7E1D, 0x7E1D, 0x7DFD, 0x75FD, 0x75DD, 0x6DBC, 0x6DBC, 0x6D9C, 0x659C, 0x657C, 0x5D5B, 0x5D5B, 0x5D3B, 0x551B, 0x551A, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x44B9, 
        0x4499, 0x4499, 0x4478, 0x4478, 0x3C78, 0x2B52, 0x0187, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x2B94, 0x2BF6, 0x2BD6, 0x2BD6, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x1B54, 0x0083,
  0x0000, 0x6C74, 0x967E, 0x8E7E, 0x8E5E, 0x8E5E, 0x865E, 0x863D, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75FD, 0x75DC, 0x6DBC, 0x6DBC, 0x659C, 0x659C, 0x657B, 0x5D5B, 0x5D3B, 0x5D3B, 0x551B, 0x551A, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x44B9, 
        0x4499, 0x4499, 0x4478, 0x4478, 0x3C78, 0x3C58, 0x2B52, 0x0187, 0x0187, 0x0187, 0x2331, 0x2B94, 0x2B94, 0x33F6, 0x2BF6, 0x2BD6, 0x2BD6, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B54, 0x124D, 0x0000,
  0x0000, 0x10C3, 0x8E1C, 0x8E7E, 0x8E5E, 0x865E, 0x865E, 0x863D, 0x7E3D, 0x7E1D, 0x7E1D, 0x75FD, 0x75DD, 0x75DC, 0x6DBC, 0x6DBC, 0x659C, 0x657C, 0x657B, 0x5D5B, 0x5D3B, 0x5D3B, 0x551B, 0x54FA, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x44B9, 
        0x4499, 0x4499, 0x4478, 0x4478, 0x3C78, 0x3C58, 0x3C58, 0x2B52, 0x0188, 0x0187, 0x2331, 0x2B94, 0x33D6, 0x33F6, 0x2BF6, 0x2BD6, 0x2BD6, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x1B33, 0x0062, 0x0000,
  0x0000, 0x0000, 0x29C8, 0x8E5D, 0x8E5E, 0x865E, 0x863E, 0x863D, 0x7E3D, 0x7E1D, 0x7DFD, 0x75FD, 0x75DD, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657C, 0x657B, 0x5D5B, 0x5D3B, 0x5D3B, 0x551B, 0x54FA, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x44B9, 
        0x4499, 0x4499, 0x4478, 0x4478, 0x3C78, 0x3C58, 0x3C58, 0x3C37, 0x2B52, 0x0188, 0x2331, 0x2BD5, 0x3416, 0x33F6, 0x2BF6, 0x2BD6, 0x2BD6, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B74, 0x1B54, 
        0x00E5, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x21C8, 0x85FC, 0x865E, 0x863E, 0x863D, 0x7E1D, 0x7E1D, 0x75FD, 0x75FD, 0x75DD, 0x6DDC, 0x6DBC, 0x6D9C, 0x659C, 0x657C, 0x655B, 0x5D5B, 0x5D3B, 0x5D3B, 0x551A, 0x54FA, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x44B9, 
        0x4499, 0x4499, 0x4478, 0x4478, 0x3C78, 0x3C58, 0x3C58, 0x3C37, 0x3C37, 0x2B52, 0x2352, 0x3417, 0x3416, 0x33F6, 0x2BF6, 0x2BD6, 0x2BD6, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x1B74, 0x1B33, 0x00E5, 
        0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x10A3, 0x5C54, 0x863D, 0x7E3D, 0x7E1D, 0x7E1D, 0x75FD, 0x75FD, 0x75DD, 0x6DBC, 0x6DBC, 0x6D9C, 0x659C, 0x657C, 0x655B, 0x5D5B, 0x5D3B, 0x5D1B, 0x551A, 0x54FA, 0x54FA, 0x54FA, 0x4CDA, 0x4CDA, 0x4CB9, 0x4CB9, 0x44B9, 
        0x4499, 0x4499, 0x4478, 0x4478, 0x3C78, 0x3C58, 0x3C58, 0x3C37, 0x3C37, 0x3437, 0x3417, 0x3417, 0x3416, 0x33F6, 0x2BF6, 0x2BD6, 0x2BD6, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2395, 0x2395, 0x2395, 0x2374, 0x2374, 0x124E, 0x0062, 0x0000, 
        0x0000, 0x0000, 0x0000,
  0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1105, 0x4350, 0x64F7, 0x75DC, 0x7DFD, 0x75FD, 0x75DD, 0x75DC, 0x6DBC, 0x6D9C, 0x659C, 0x657C, 0x657C, 0x5D5B, 0x5D3B, 0x5D3B, 0x551B, 0x551A, 0x54FA, 0x54FA, 0x54FA, 0x4CDA, 0x4CD9, 0x4CB9, 0x4CB9, 
        0x4C99, 0x4499, 0x4498, 0x4478, 0x4478, 0x4478, 0x3C58, 0x3C58, 0x3C37, 0x3C37, 0x3437, 0x3417, 0x3417, 0x33F6, 0x33F6, 0x2BF6, 0x2BD6, 0x2BD6, 0x2BD6, 0x2BB5, 0x2BB5, 0x23B5, 0x2395, 0x2374, 0x1AD1, 0x11EB, 0x0083, 0x0000, 0x0000, 0x0000, 
        0x0000, 0x0000, 0x0000
};

  // 64, // xSize
  // 64, // ySize
  // 128, // BytesPerLine
  // 16, // BitsPerPixel