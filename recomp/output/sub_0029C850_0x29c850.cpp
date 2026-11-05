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

// Function: sub_0029C850
// Address: 0x29c850 - 0x29c8b8
void sub_0029C850_0x29c850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C850_0x29c850");
#endif

    switch (ctx->pc) {
        case 0x29c870u: goto label_29c870;
        case 0x29c87cu: goto label_29c87c;
        default: break;
    }

    ctx->pc = 0x29c850u;

    // 0x29c850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c858: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29c858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29c85c: 0x24900108  addiu       $s0, $a0, 0x108
    ctx->pc = 0x29c85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 264));
    // 0x29c860: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29c860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29c864: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29c864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c868: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29c868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x29c86c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29c86cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29c870:
    // 0x29c870: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x29c870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29c874: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29C874u;
    SET_GPR_U32(ctx, 31, 0x29C87Cu);
    ctx->pc = 0x29C878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C874u;
    // 0x29c878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29C874u, 0x29C87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C87Cu;
label_29c87c:
    // 0x29c87c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29c880: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C880u;
    {
        const bool branch_taken_0x29c880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C880u;
        // 0x29c884: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c880) {
            ctx->pc = 0x29C890u;
            goto label_29c890;
        }
    }
    ctx->pc = 0x29C888u;
    // 0x29c888: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29C888u;
    {
        const bool branch_taken_0x29c888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C888u;
        // 0x29c88c: 0x8e02fffc  lw          $v0, -0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c888) {
            ctx->pc = 0x29C8A0u;
            goto label_29c8a0;
        }
    }
    ctx->pc = 0x29C890u;
label_29c890:
    // 0x29c890: 0x2a220032  slti        $v0, $s1, 0x32
    ctx->pc = 0x29c890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x29c894: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x29C894u;
    {
        const bool branch_taken_0x29c894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C894u;
        // 0x29c898: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c894) {
            ctx->pc = 0x29C870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c870;
        }
    }
    ctx->pc = 0x29C89Cu;
    // 0x29c89c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29c89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c8a0:
    // 0x29c8a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c8a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c8a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29c8a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29c8a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29c8a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c8ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29c8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29c8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x29C8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8B0u;
        // 0x29c8b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C8B8u;
}
