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

// Function: sub_00215108
// Address: 0x215108 - 0x215150
void sub_00215108_0x215108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215108_0x215108");
#endif

    switch (ctx->pc) {
        case 0x21512cu: goto label_21512c;
        case 0x215138u: goto label_215138;
        default: break;
    }

    ctx->pc = 0x215108u;

    // 0x215108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21510c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21510cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215110: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x215110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x215114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x215114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215118: 0x8e0201a4  lw          $v0, 0x1A4($s0)
    ctx->pc = 0x215118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x21511c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21511Cu;
    {
        const bool branch_taken_0x21511c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21511c) {
            ctx->pc = 0x215120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21511Cu;
            // 0x215120: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215140u;
            goto label_215140;
        }
    }
    ctx->pc = 0x215124u;
    // 0x215124: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x215124u;
    SET_GPR_U32(ctx, 31, 0x21512Cu);
    ctx->pc = 0x215128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215124u;
    // 0x215128: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x215124u, 0x21512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21512Cu;
label_21512c:
    // 0x21512c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21512cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215130: 0xc0b4ad8  jal         func_2D2B60
    ctx->pc = 0x215130u;
    SET_GPR_U32(ctx, 31, 0x215138u);
    ctx->pc = 0x215134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215130u;
    // 0x215134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2B60u, 0x215130u, 0x215138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215138u;
label_215138:
    // 0x215138: 0xae0201a4  sw          $v0, 0x1A4($s0)
    ctx->pc = 0x215138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
    // 0x21513c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21513cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_215140:
    // 0x215140: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x215140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215144: 0x3e00008  jr          $ra
    ctx->pc = 0x215144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215144u;
        // 0x215148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21514Cu;
    // 0x21514c: 0x0  nop
    ctx->pc = 0x21514cu;
    // NOP
    ctx->pc = 0x215150u;
}
