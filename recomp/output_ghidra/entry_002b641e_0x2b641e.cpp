#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_002b641e
// Address: 0x2b641e - 0x2b6478
void entry_002b641e_0x2b641e(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b641e_0x2b641e");
#endif

    ctx->pc = 0x2b641eu;

    // 0x2b641e: 0x180040  sll         $zero, $t8, 1
    ctx->pc = 0x2b641eu;
    
    // 0x2b6422: 0x401040  .word       0x00401040                   # sll         $v0, $zero, 1 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6422u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
    // 0x2b6426: 0x71e03c02  .word       0x71E03C02                   # INVALID     $t7, $zero, 0x3C02 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2b6426u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2b642a: 0xa9280c0a  swl         $t0, 0xC0A($t1)
    ctx->pc = 0x2b642au;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 3082); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2b642e: 0x71e0a040  .word       0x71E0A040                   # madd        $s4, $t7, $zero # 00000040 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2b642eu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x2b6432: 0x802d0c0a  lb          $t5, 0xC0A($at)
    ctx->pc = 0x2b6432u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 3082)));
    // 0x2b6436: 0x6dee0040  ldr         $t6, 0x40($t7)
    ctx->pc = 0x2b6436u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x2b643a: 0x202d0c0a  addi        $t5, $at, 0xC0A
    ctx->pc = 0x2b643au;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)3082, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x2b643e: 0x202d0040  addi        $t5, $at, 0x40
    ctx->pc = 0x2b643eu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)64, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x2b6442: 0x71c20200  .word       0x71C20200                   # madd        $zero, $t6, $v0 # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2b6442u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x2b6446: 0x282d0c0a  slti        $t5, $at, 0xC0A
    ctx->pc = 0x2b6446u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)3082) ? 1 : 0);
    // 0x2b644a: 0xe0040  sll         $zero, $t6, 1
    ctx->pc = 0x2b644au;
    
    // 0x2b644e: 0x1f1040  sll         $v0, $ra, 1
    ctx->pc = 0x2b644eu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 31), 1));
    // 0x2b6452: 0x71e02403  .word       0x71E02403                   # INVALID     $t7, $zero, 0x2403 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2b6452u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 0); uint64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b6456: 0xc0a  .word       0x00000C0A                   # movz        $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6456u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
    // 0x2b645a: 0x802d0000  lb          $t5, 0x0($at)
    ctx->pc = 0x2b645au;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 0)));
    // 0x2b645e: 0x6dee0040  ldr         $t6, 0x40($t7)
    ctx->pc = 0x2b645eu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x2b6462: 0x202d0c0a  addi        $t5, $at, 0xC0A
    ctx->pc = 0x2b6462u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)3082, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x2b6466: 0x282d0200  slti        $t5, $at, 0x200
    ctx->pc = 0x2b6466u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x2b646a: 0x202d0040  addi        $t5, $at, 0x40
    ctx->pc = 0x2b646au;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)64, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x2b646e: 0x70960200  .word       0x70960200                   # madd        $zero, $a0, $s6 # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2b646eu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x2b6472: 0x10c0a  .word       0x00010C0A                   # movz        $at, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b6472u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
    // 0x2b6476: 0x202d2406  addi        $t5, $at, 0x2406
    ctx->pc = 0x2b6476u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)9222, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    ctx->pc = 0x2b6478u;
}
