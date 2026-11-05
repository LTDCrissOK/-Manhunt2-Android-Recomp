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

// Function: sub_00259248
// Address: 0x259248 - 0x2592d8
void sub_00259248_0x259248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259248_0x259248");
#endif

    switch (ctx->pc) {
        case 0x259288u: goto label_259288;
        case 0x259290u: goto label_259290;
        default: break;
    }

    ctx->pc = 0x259248u;

    // 0x259248: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25924c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x25924cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x259250: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x259250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x259254: 0x24423d20  addiu       $v0, $v0, 0x3D20
    ctx->pc = 0x259254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
    // 0x259258: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x259258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x25925c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x25925cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x259260: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x259260u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B3D24u));
    // 0x259264: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x259264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x259268: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x259268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x25926c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x25926cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x259270: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x259270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x259274: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x259274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x259278: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x259278u;
    {
        const bool branch_taken_0x259278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259278u;
        // 0x25927c: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259278) {
            ctx->pc = 0x2592C8u;
            goto label_2592c8;
        }
    }
    ctx->pc = 0x259280u;
    // 0x259280: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x259280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x259284: 0x0  nop
    ctx->pc = 0x259284u;
    // NOP
label_259288:
    // 0x259288: 0xc09640a  jal         func_259028
    ctx->pc = 0x259288u;
    SET_GPR_U32(ctx, 31, 0x259290u);
    ctx->pc = 0x25928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259288u;
    // 0x25928c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259028u, 0x259288u, 0x259290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259290u;
label_259290:
    // 0x259290: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x259290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x259294: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x259294u;
    {
        const bool branch_taken_0x259294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259294) {
            ctx->pc = 0x259298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259294u;
            // 0x259298: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2592A8u;
            goto label_2592a8;
        }
    }
    ctx->pc = 0x25929Cu;
    // 0x25929c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x25929cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2592a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2592A0u;
    {
        const bool branch_taken_0x2592a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2592A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592A0u;
        // 0x2592a4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592a0) {
            ctx->pc = 0x2592B8u;
            goto label_2592b8;
        }
    }
    ctx->pc = 0x2592A8u;
label_2592a8:
    // 0x2592a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2592A8u;
    {
        const bool branch_taken_0x2592a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2592ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592A8u;
        // 0x2592ac: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592a8) {
            ctx->pc = 0x2592BCu;
            goto label_2592bc;
        }
    }
    ctx->pc = 0x2592B0u;
    // 0x2592b0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2592b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2592b4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2592b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2592b8:
    // 0x2592b8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2592b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2592bc:
    // 0x2592bc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2592bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2592c0: 0x1462fff1  bne         $v1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2592C0u;
    {
        const bool branch_taken_0x2592c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2592C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592C0u;
        // 0x2592c4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2592c0) {
            ctx->pc = 0x259288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259288;
        }
    }
    ctx->pc = 0x2592C8u;
label_2592c8:
    // 0x2592c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2592c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2592cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2592CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2592D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2592CCu;
        // 0x2592d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2592CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2592D4u;
    // 0x2592d4: 0x0  nop
    ctx->pc = 0x2592d4u;
    // NOP
    ctx->pc = 0x2592d8u;
}
