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

// Function: sub_003B20E8
// Address: 0x3b20e8 - 0x3b2120
void sub_003B20E8_0x3b20e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B20E8_0x3b20e8");
#endif

    switch (ctx->pc) {
        case 0x3b2100u: goto label_3b2100;
        case 0x3b2108u: goto label_3b2108;
        default: break;
    }

    ctx->pc = 0x3b20e8u;

    // 0x3b20e8: 0x808301a5  lb          $v1, 0x1A5($a0)
    ctx->pc = 0x3b20e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 421)));
    // 0x3b20ec: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B20ECu;
    {
        const bool branch_taken_0x3b20ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B20ECu;
        // 0x3b20f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b20ec) {
            ctx->pc = 0x3B20F8u;
            goto label_3b20f8;
        }
    }
    ctx->pc = 0x3B20F4u;
    // 0x3b20f4: 0x8c8201f0  lw          $v0, 0x1F0($a0)
    ctx->pc = 0x3b20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 496)));
label_3b20f8:
    // 0x3b20f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B20F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B20F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2100u;
label_3b2100:
    // 0x3b2100: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2100u;
        // 0x3b2104: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2108u;
label_3b2108:
    // 0x3b2108: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x3b2108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3b210c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x3b210cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3b2110: 0xb0820a27  sdl         $v0, 0xA27($a0)
    ctx->pc = 0x3b2110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3b2114: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2114u;
        // 0x3b2118: 0xb4820a20  sdr         $v0, 0xA20($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B211Cu;
    // 0x3b211c: 0x0  nop
    ctx->pc = 0x3b211cu;
    // NOP
    ctx->pc = 0x3b2120u;
}
