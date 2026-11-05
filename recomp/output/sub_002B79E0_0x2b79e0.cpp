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

// Function: sub_002B79E0
// Address: 0x2b79e0 - 0x2b7a48
void sub_002B79E0_0x2b79e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B79E0_0x2b79e0");
#endif

    switch (ctx->pc) {
        case 0x2b79f4u: goto label_2b79f4;
        case 0x2b79fcu: goto label_2b79fc;
        case 0x2b7a10u: goto label_2b7a10;
        case 0x2b7a28u: goto label_2b7a28;
        case 0x2b7a30u: goto label_2b7a30;
        default: break;
    }

    ctx->pc = 0x2b79e0u;

    // 0x2b79e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b79e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b79e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b79e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b79e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b79e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b79ec: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B79ECu;
    SET_GPR_U32(ctx, 31, 0x2B79F4u);
    ctx->pc = 0x2B79F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B79ECu;
    // 0x2b79f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B79ECu, 0x2B79F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B79F4u;
label_2b79f4:
    // 0x2b79f4: 0xc0ace0e  jal         func_2B3838
    ctx->pc = 0x2B79F4u;
    SET_GPR_U32(ctx, 31, 0x2B79FCu);
    ctx->pc = 0x2B79F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B79F4u;
    // 0x2b79f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3838u, 0x2B79F4u, 0x2B79FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B79FCu;
label_2b79fc:
    // 0x2b79fc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2b79fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2b7a00: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2B7A00u;
    {
        const bool branch_taken_0x2b7a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B7A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A00u;
        // 0x2b7a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a00) {
            ctx->pc = 0x2B7A38u;
            goto label_2b7a38;
        }
    }
    ctx->pc = 0x2B7A08u;
    // 0x2b7a08: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B7A08u;
    SET_GPR_U32(ctx, 31, 0x2B7A10u);
    ctx->pc = 0x2B7A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7A08u;
    // 0x2b7a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B7A08u, 0x2B7A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A10u;
label_2b7a10:
    // 0x2b7a10: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b7a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b7a14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b7a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b7a18: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B7A18u;
    {
        const bool branch_taken_0x2b7a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A18u;
        // 0x2b7a1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a18) {
            ctx->pc = 0x2B7A38u;
            goto label_2b7a38;
        }
    }
    ctx->pc = 0x2B7A20u;
    // 0x2b7a20: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B7A20u;
    SET_GPR_U32(ctx, 31, 0x2B7A28u);
    ctx->pc = 0x2B7A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7A20u;
    // 0x2b7a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B7A20u, 0x2B7A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A28u;
label_2b7a28:
    // 0x2b7a28: 0xc0ad3fa  jal         func_2B4FE8
    ctx->pc = 0x2B7A28u;
    SET_GPR_U32(ctx, 31, 0x2B7A30u);
    ctx->pc = 0x2B7A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7A28u;
    // 0x2b7a2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4FE8u, 0x2B7A28u, 0x2B7A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7A30u;
label_2b7a30:
    // 0x2b7a30: 0xae025908  sw          $v0, 0x5908($s0)
    ctx->pc = 0x2b7a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22792), GPR_U32(ctx, 2));
    // 0x2b7a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b7a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b7a38:
    // 0x2b7a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7a3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b7a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7a40: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A40u;
        // 0x2b7a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7A48u;
}
