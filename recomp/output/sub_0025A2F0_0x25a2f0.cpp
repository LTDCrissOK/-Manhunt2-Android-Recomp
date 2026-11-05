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

// Function: sub_0025A2F0
// Address: 0x25a2f0 - 0x25a368
void sub_0025A2F0_0x25a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A2F0_0x25a2f0");
#endif

    switch (ctx->pc) {
        case 0x25a318u: goto label_25a318;
        case 0x25a340u: goto label_25a340;
        default: break;
    }

    ctx->pc = 0x25a2f0u;

    // 0x25a2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25a2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25a2f4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x25a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x25a2f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25a2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25a2fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x25a2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x25a300: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x25a300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a304: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25a304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25a308: 0x24519968  addiu       $s1, $v0, -0x6698
    ctx->pc = 0x25a308u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941032));
    // 0x25a30c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x25a30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x25a310: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25a310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a314: 0x0  nop
    ctx->pc = 0x25a314u;
    // NOP
label_25a318:
    // 0x25a318: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x25a318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x25a31c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x25a31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x25a320: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x25a320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25a324: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25a324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25a328: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x25a328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25a32c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x25a32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a330: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25a330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a334: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x25a334u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x25a338: 0xc0968da  jal         func_25A368
    ctx->pc = 0x25A338u;
    SET_GPR_U32(ctx, 31, 0x25A340u);
    ctx->pc = 0x25A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A338u;
    // 0x25a33c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A368u, 0x25A338u, 0x25A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A340u;
label_25a340:
    // 0x25a340: 0x2e02001e  sltiu       $v0, $s0, 0x1E
    ctx->pc = 0x25a340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x25a344: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x25A344u;
    {
        const bool branch_taken_0x25a344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A344u;
        // 0x25a348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a344) {
            ctx->pc = 0x25A318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a318;
        }
    }
    ctx->pc = 0x25A34Cu;
    // 0x25a34c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25a34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a350: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x25a350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25a354: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25a354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a358: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x25a358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25a35c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A35Cu;
        // 0x25a360: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A364u;
    // 0x25a364: 0x0  nop
    ctx->pc = 0x25a364u;
    // NOP
    ctx->pc = 0x25a368u;
}
