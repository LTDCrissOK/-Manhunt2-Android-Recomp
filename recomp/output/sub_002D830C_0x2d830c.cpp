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

// Function: sub_002D830C
// Address: 0x2d830c - 0x2d832c
void sub_002D830C_0x2d830c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D830C_0x2d830c");
#endif

    ctx->pc = 0x2d830cu;

    // 0x2d830c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2d830cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2d8310: 0x244710c0  addiu       $a3, $v0, 0x10C0
    ctx->pc = 0x2d8310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4288));
    // 0x2d8314: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x2d8314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2d8318: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x2d8318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2d831c: 0xa8a30003  swl         $v1, 0x3($a1)
    ctx->pc = 0x2d831cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8320: 0xb8a30000  swr         $v1, 0x0($a1)
    ctx->pc = 0x2d8320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2d8324: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D832Cu;
}
