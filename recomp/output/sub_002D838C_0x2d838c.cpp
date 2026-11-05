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

// Function: sub_002D838C
// Address: 0x2d838c - 0x2d83f0
void sub_002D838C_0x2d838c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D838C_0x2d838c");
#endif

    switch (ctx->pc) {
        case 0x2d83acu: goto label_2d83ac;
        default: break;
    }

    ctx->pc = 0x2d838cu;

    // 0x2d838c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2d838cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2d8390: 0x244710e0  addiu       $a3, $v0, 0x10E0
    ctx->pc = 0x2d8390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
    // 0x2d8394: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x2d8394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2d8398: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x2d8398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2d839c: 0xa8a30003  swl         $v1, 0x3($a1)
    ctx->pc = 0x2d839cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d83a0: 0xb8a30000  swr         $v1, 0x0($a1)
    ctx->pc = 0x2d83a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d83a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D83A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D83A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D83ACu;
label_2d83ac:
    // 0x2d83ac: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2d83acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2d83b0: 0x244710e8  addiu       $a3, $v0, 0x10E8
    ctx->pc = 0x2d83b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4328));
    // 0x2d83b4: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x2d83b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2d83b8: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x2d83b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2d83bc: 0xa8a30003  swl         $v1, 0x3($a1)
    ctx->pc = 0x2d83bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d83c0: 0xb8a30000  swr         $v1, 0x0($a1)
    ctx->pc = 0x2d83c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d83c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D83C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D83C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D83CCu;
    // 0x2d83cc: 0x0  nop
    ctx->pc = 0x2d83ccu;
    // NOP
    // 0x2d83d0: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x2d83d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2d83d4: 0x0  nop
    ctx->pc = 0x2d83d4u;
    // NOP
    // 0x2d83d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d83d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d83dc: 0x0  nop
    ctx->pc = 0x2d83dcu;
    // NOP
    // 0x2d83e0: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x2d83e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2d83e4: 0x0  nop
    ctx->pc = 0x2d83e4u;
    // NOP
    // 0x2d83e8: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x2d83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x2d83ec: 0x0  nop
    ctx->pc = 0x2d83ecu;
    // NOP
    ctx->pc = 0x2d83f0u;
}
