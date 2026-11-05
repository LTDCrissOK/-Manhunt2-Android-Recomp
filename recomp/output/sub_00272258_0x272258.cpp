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

// Function: sub_00272258
// Address: 0x272258 - 0x2722e8
void sub_00272258_0x272258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272258_0x272258");
#endif

    switch (ctx->pc) {
        case 0x272298u: goto label_272298;
        case 0x2722a0u: goto label_2722a0;
        default: break;
    }

    ctx->pc = 0x272258u;

    // 0x272258: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x272258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27225c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x27225cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x272260: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x272260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x272264: 0x24424778  addiu       $v0, $v0, 0x4778
    ctx->pc = 0x272264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18296));
    // 0x272268: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x272268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x27226c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x27226cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x272270: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x272270u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B477Cu));
    // 0x272274: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x272274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x272278: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x272278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x27227c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x27227cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x272280: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x272280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x272284: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x272284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x272288: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x272288u;
    {
        const bool branch_taken_0x272288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272288u;
        // 0x27228c: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272288) {
            ctx->pc = 0x2722D8u;
            goto label_2722d8;
        }
    }
    ctx->pc = 0x272290u;
    // 0x272290: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x272290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x272294: 0x0  nop
    ctx->pc = 0x272294u;
    // NOP
label_272298:
    // 0x272298: 0xc09c70a  jal         func_271C28
    ctx->pc = 0x272298u;
    SET_GPR_U32(ctx, 31, 0x2722A0u);
    ctx->pc = 0x27229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272298u;
    // 0x27229c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271C28u, 0x272298u, 0x2722A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2722A0u;
label_2722a0:
    // 0x2722a0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2722a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2722a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2722A4u;
    {
        const bool branch_taken_0x2722a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2722a4) {
            ctx->pc = 0x2722A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2722A4u;
            // 0x2722a8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2722B8u;
            goto label_2722b8;
        }
    }
    ctx->pc = 0x2722ACu;
    // 0x2722ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2722acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2722b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2722B0u;
    {
        const bool branch_taken_0x2722b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2722B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722B0u;
        // 0x2722b4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2722b0) {
            ctx->pc = 0x2722C8u;
            goto label_2722c8;
        }
    }
    ctx->pc = 0x2722B8u;
label_2722b8:
    // 0x2722b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2722B8u;
    {
        const bool branch_taken_0x2722b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2722BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722B8u;
        // 0x2722bc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2722b8) {
            ctx->pc = 0x2722CCu;
            goto label_2722cc;
        }
    }
    ctx->pc = 0x2722C0u;
    // 0x2722c0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2722c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2722c4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2722c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2722c8:
    // 0x2722c8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2722c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2722cc:
    // 0x2722cc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2722ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2722d0: 0x1462fff1  bne         $v1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2722D0u;
    {
        const bool branch_taken_0x2722d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2722D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722D0u;
        // 0x2722d4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2722d0) {
            ctx->pc = 0x272298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272298;
        }
    }
    ctx->pc = 0x2722D8u;
label_2722d8:
    // 0x2722d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2722d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2722dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2722DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2722E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722DCu;
        // 0x2722e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2722DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2722E4u;
    // 0x2722e4: 0x0  nop
    ctx->pc = 0x2722e4u;
    // NOP
    ctx->pc = 0x2722e8u;
}
