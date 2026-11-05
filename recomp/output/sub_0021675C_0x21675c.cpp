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

// Function: sub_0021675C
// Address: 0x21675c - 0x2167a0
void sub_0021675C_0x21675c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021675C_0x21675c");
#endif

    switch (ctx->pc) {
        case 0x21677cu: goto label_21677c;
        default: break;
    }

    ctx->pc = 0x21675cu;

    // 0x21675c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x21675cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x216760: 0x24471560  addiu       $a3, $v0, 0x1560
    ctx->pc = 0x216760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 5472));
    // 0x216764: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x216764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x216768: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x216768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x21676c: 0xa8c30003  swl         $v1, 0x3($a2)
    ctx->pc = 0x21676cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x216770: 0xb8c30000  swr         $v1, 0x0($a2)
    ctx->pc = 0x216770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x216774: 0x3e00008  jr          $ra
    ctx->pc = 0x216774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21677Cu;
label_21677c:
    // 0x21677c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x21677cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x216780: 0x24471568  addiu       $a3, $v0, 0x1568
    ctx->pc = 0x216780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 5480));
    // 0x216784: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x216784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x216788: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x216788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x21678c: 0xa8c30003  swl         $v1, 0x3($a2)
    ctx->pc = 0x21678cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x216790: 0xb8c30000  swr         $v1, 0x0($a2)
    ctx->pc = 0x216790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x216794: 0x3e00008  jr          $ra
    ctx->pc = 0x216794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21679Cu;
    // 0x21679c: 0x0  nop
    ctx->pc = 0x21679cu;
    // NOP
    ctx->pc = 0x2167a0u;
}
