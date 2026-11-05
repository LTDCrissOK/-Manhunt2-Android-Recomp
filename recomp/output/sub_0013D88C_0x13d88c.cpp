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

// Function: sub_0013D88C
// Address: 0x13d88c - 0x13d99c
void sub_0013D88C_0x13d88c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D88C_0x13d88c");
#endif

    switch (ctx->pc) {
        case 0x13d8acu: goto label_13d8ac;
        case 0x13d8d4u: goto label_13d8d4;
        case 0x13d8fcu: goto label_13d8fc;
        case 0x13d92cu: goto label_13d92c;
        case 0x13d964u: goto label_13d964;
        default: break;
    }

    ctx->pc = 0x13d88cu;

    // 0x13d88c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x13d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x13d890: 0x2447e7a0  addiu       $a3, $v0, -0x1860
    ctx->pc = 0x13d890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
    // 0x13d894: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x13d894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13d898: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x13d898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13d89c: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x13d89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13d8a0: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x13d8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13d8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x13D8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D8ACu;
label_13d8ac:
    // 0x13d8ac: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x13d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x13d8b0: 0x2447e7a8  addiu       $a3, $v0, -0x1858
    ctx->pc = 0x13d8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961064));
    // 0x13d8b4: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x13d8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13d8b8: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x13d8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13d8bc: 0x80e40008  lb          $a0, 0x8($a3)
    ctx->pc = 0x13d8bcu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x43E7B0u));
    // 0x13d8c0: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x13d8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13d8c4: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x13d8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13d8c8: 0xa0c40008  sb          $a0, 0x8($a2)
    ctx->pc = 0x13d8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x13d8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x13D8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D8D4u;
label_13d8d4:
    // 0x13d8d4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x13d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x13d8d8: 0x2447e7b8  addiu       $a3, $v0, -0x1848
    ctx->pc = 0x13d8d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961080));
    // 0x13d8dc: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x13d8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x13d8e0: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x13d8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x13d8e4: 0x80e40004  lb          $a0, 0x4($a3)
    ctx->pc = 0x13d8e4u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x43E7BCu));
    // 0x13d8e8: 0xa8c30003  swl         $v1, 0x3($a2)
    ctx->pc = 0x13d8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13d8ec: 0xb8c30000  swr         $v1, 0x0($a2)
    ctx->pc = 0x13d8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13d8f0: 0xa0c40004  sb          $a0, 0x4($a2)
    ctx->pc = 0x13d8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x13d8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x13D8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D8FCu;
label_13d8fc:
    // 0x13d8fc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x13d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x13d900: 0x2447e7c0  addiu       $a3, $v0, -0x1840
    ctx->pc = 0x13d900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961088));
    // 0x13d904: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x13d904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x13d908: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x13d908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x13d90c: 0x80e40004  lb          $a0, 0x4($a3)
    ctx->pc = 0x13d90cu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x43E7C4u));
    // 0x13d910: 0x80e50005  lb          $a1, 0x5($a3)
    ctx->pc = 0x13d910u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x43E7C5u));
    // 0x13d914: 0xa8c30003  swl         $v1, 0x3($a2)
    ctx->pc = 0x13d914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13d918: 0xb8c30000  swr         $v1, 0x0($a2)
    ctx->pc = 0x13d918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13d91c: 0xa0c40004  sb          $a0, 0x4($a2)
    ctx->pc = 0x13d91cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x13d920: 0xa0c50005  sb          $a1, 0x5($a2)
    ctx->pc = 0x13d920u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x13d924: 0x3e00008  jr          $ra
    ctx->pc = 0x13D924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D92Cu;
label_13d92c:
    // 0x13d92c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x13d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x13d930: 0x2447e7c8  addiu       $a3, $v0, -0x1838
    ctx->pc = 0x13d930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961096));
    // 0x13d934: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x13d934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x13d938: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x13d938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x13d93c: 0x80e40004  lb          $a0, 0x4($a3)
    ctx->pc = 0x13d93cu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x43E7CCu));
    // 0x13d940: 0x80e50005  lb          $a1, 0x5($a3)
    ctx->pc = 0x13d940u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x43E7CDu));
    // 0x13d944: 0xa8c30003  swl         $v1, 0x3($a2)
    ctx->pc = 0x13d944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13d948: 0xb8c30000  swr         $v1, 0x0($a2)
    ctx->pc = 0x13d948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13d94c: 0xa0c40004  sb          $a0, 0x4($a2)
    ctx->pc = 0x13d94cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x13d950: 0xa0c50005  sb          $a1, 0x5($a2)
    ctx->pc = 0x13d950u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x13d954: 0x80e30006  lb          $v1, 0x6($a3)
    ctx->pc = 0x13d954u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x43E7CEu));
    // 0x13d958: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x13d958u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x13d95c: 0x3e00008  jr          $ra
    ctx->pc = 0x13D95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D964u;
label_13d964:
    // 0x13d964: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x13d964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x13d968: 0x2447e7d0  addiu       $a3, $v0, -0x1830
    ctx->pc = 0x13d968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x13d96c: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x13d96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x13d970: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x13d970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x13d974: 0x80e40004  lb          $a0, 0x4($a3)
    ctx->pc = 0x13d974u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x43E7D4u));
    // 0x13d978: 0x80e50005  lb          $a1, 0x5($a3)
    ctx->pc = 0x13d978u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x43E7D5u));
    // 0x13d97c: 0xa8c30003  swl         $v1, 0x3($a2)
    ctx->pc = 0x13d97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13d980: 0xb8c30000  swr         $v1, 0x0($a2)
    ctx->pc = 0x13d980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x13d984: 0xa0c40004  sb          $a0, 0x4($a2)
    ctx->pc = 0x13d984u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x13d988: 0xa0c50005  sb          $a1, 0x5($a2)
    ctx->pc = 0x13d988u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x13d98c: 0x80e30006  lb          $v1, 0x6($a3)
    ctx->pc = 0x13d98cu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x43E7D6u));
    // 0x13d990: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x13d990u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x13d994: 0x3e00008  jr          $ra
    ctx->pc = 0x13D994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D99Cu;
}
