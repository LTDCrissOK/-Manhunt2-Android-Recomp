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

// Function: sub_001C71D0
// Address: 0x1c71d0 - 0x1c7278
void sub_001C71D0_0x1c71d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C71D0_0x1c71d0");
#endif

    switch (ctx->pc) {
        case 0x1c71f4u: goto label_1c71f4;
        case 0x1c7218u: goto label_1c7218;
        case 0x1c7238u: goto label_1c7238;
        case 0x1c7240u: goto label_1c7240;
        case 0x1c7248u: goto label_1c7248;
        case 0x1c7254u: goto label_1c7254;
        default: break;
    }

    ctx->pc = 0x1c71d0u;

    // 0x1c71d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c71d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c71d4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1c71d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1c71d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c71d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c71dc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c71dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c71e0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1c71e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1c71e4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1c71e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1c71e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c71e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c71ec: 0xc07a804  jal         func_1EA010
    ctx->pc = 0x1C71ECu;
    SET_GPR_U32(ctx, 31, 0x1C71F4u);
    ctx->pc = 0x1C71F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C71ECu;
    // 0x1c71f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA010u, 0x1C71ECu, 0x1C71F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71F4u;
label_1c71f4:
    // 0x1c71f4: 0x8e430318  lw          $v1, 0x318($s2)
    ctx->pc = 0x1c71f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 792)));
    // 0x1c71f8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c71fc: 0x8c710310  lw          $s1, 0x310($v1)
    ctx->pc = 0x1c71fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 784)));
    // 0x1c7200: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1c7200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c7204: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C7204u;
    {
        const bool branch_taken_0x1c7204 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7204u;
        // 0x1c7208: 0x8c700300  lw          $s0, 0x300($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7204) {
            ctx->pc = 0x1C725Cu;
            goto label_1c725c;
        }
    }
    ctx->pc = 0x1C720Cu;
    // 0x1c720c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1c720cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c7210: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1c7210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1c7214: 0x0  nop
    ctx->pc = 0x1c7214u;
    // NOP
label_1c7218:
    // 0x1c7218: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1c7218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c721c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c721cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7220: 0xafb0000c  sw          $s0, 0xC($sp)
    ctx->pc = 0x1c7220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
    // 0x1c7224: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1c7224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1c7228: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1c7228u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1c722c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1c722cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1c7230: 0xc07a846  jal         func_1EA118
    ctx->pc = 0x1C7230u;
    SET_GPR_U32(ctx, 31, 0x1C7238u);
    ctx->pc = 0x1C7234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7230u;
    // 0x1c7234: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA118u, 0x1C7230u, 0x1C7238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7238u;
label_1c7238:
    // 0x1c7238: 0xc0f7508  jal         func_3DD420
    ctx->pc = 0x1C7238u;
    SET_GPR_U32(ctx, 31, 0x1C7240u);
    ctx->pc = 0x1C723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7238u;
    // 0x1c723c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD420u, 0x1C7238u, 0x1C7240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7240u;
label_1c7240:
    // 0x1c7240: 0xc07a880  jal         func_1EA200
    ctx->pc = 0x1C7240u;
    SET_GPR_U32(ctx, 31, 0x1C7248u);
    ctx->pc = 0x1C7244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7240u;
    // 0x1c7244: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA200u, 0x1C7240u, 0x1C7248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7248u;
label_1c7248:
    // 0x1c7248: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c7248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c724c: 0xc071ad8  jal         func_1C6B60
    ctx->pc = 0x1C724Cu;
    SET_GPR_U32(ctx, 31, 0x1C7254u);
    ctx->pc = 0x1C7250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C724Cu;
    // 0x1c7250: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B60u, 0x1C724Cu, 0x1C7254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7254u;
label_1c7254:
    // 0x1c7254: 0x1633fff0  bne         $s1, $s3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C7254u;
    {
        const bool branch_taken_0x1c7254 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1C7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7254u;
        // 0x1c7258: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7254) {
            ctx->pc = 0x1C7218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7218;
        }
    }
    ctx->pc = 0x1C725Cu;
label_1c725c:
    // 0x1c725c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c725cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7260: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1c7260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c7264: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1c7264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7268: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1c7268u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c726c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c726cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c7270: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7270u;
        // 0x1c7274: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7278u;
}
