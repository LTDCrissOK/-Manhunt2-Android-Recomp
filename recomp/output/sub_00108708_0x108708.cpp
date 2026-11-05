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

// Function: sub_00108708
// Address: 0x108708 - 0x108760
void sub_00108708_0x108708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108708_0x108708");
#endif

    switch (ctx->pc) {
        case 0x10872cu: goto label_10872c;
        case 0x108748u: goto label_108748;
        default: break;
    }

    ctx->pc = 0x108708u;

    // 0x108708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10870c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10870cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108710: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x108710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x108714: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108718: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x108718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10871c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10871cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108720: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x108720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x108724: 0xc042240  jal         func_108900
    ctx->pc = 0x108724u;
    SET_GPR_U32(ctx, 31, 0x10872Cu);
    ctx->pc = 0x108728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108724u;
    // 0x108728: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108900u, 0x108724u, 0x10872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10872Cu;
label_10872c:
    // 0x10872c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10872cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x108730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108734: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x108734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x108738: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x108738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10873c: 0xac52000c  sw          $s2, 0xC($v0)
    ctx->pc = 0x10873cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 18));
    // 0x108740: 0xc0422a8  jal         func_108AA0
    ctx->pc = 0x108740u;
    SET_GPR_U32(ctx, 31, 0x108748u);
    ctx->pc = 0x108744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108740u;
    // 0x108744: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x108740u, 0x108748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108748u;
label_108748:
    // 0x108748: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10874c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10874cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108750: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x108750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108754: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x108754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x108758: 0x3e00008  jr          $ra
    ctx->pc = 0x108758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108758u;
        // 0x10875c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108760u;
}
