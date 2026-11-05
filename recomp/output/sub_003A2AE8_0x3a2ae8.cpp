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

// Function: sub_003A2AE8
// Address: 0x3a2ae8 - 0x3a2bb8
void sub_003A2AE8_0x3a2ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2AE8_0x3a2ae8");
#endif

    switch (ctx->pc) {
        case 0x3a2b30u: goto label_3a2b30;
        case 0x3a2b40u: goto label_3a2b40;
        case 0x3a2b50u: goto label_3a2b50;
        case 0x3a2b5cu: goto label_3a2b5c;
        case 0x3a2b78u: goto label_3a2b78;
        case 0x3a2b8cu: goto label_3a2b8c;
        default: break;
    }

    ctx->pc = 0x3a2ae8u;

    // 0x3a2ae8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a2ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a2aec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a2aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2af0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a2af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3a2af4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x3a2af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x3a2af8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3a2af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3a2afc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3a2afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3a2b00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a2b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2b04: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3a2b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3a2b08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a2b08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2b0c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3a2b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3a2b10: 0x34139000  ori         $s3, $zero, 0x9000
    ctx->pc = 0x3a2b10u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x3a2b14: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3a2b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3a2b18: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3a2b18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2b1c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3a2b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x3a2b20: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x3a2b20u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x3a2b24: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x3a2b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x3a2b28: 0x24160009  addiu       $s6, $zero, 0x9
    ctx->pc = 0x3a2b28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3a2b2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3a2b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3a2b30:
    // 0x3a2b30: 0x14540017  bne         $v0, $s4, . + 4 + (0x17 << 2)
    ctx->pc = 0x3A2B30u;
    {
        const bool branch_taken_0x3a2b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x3A2B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B30u;
        // 0x3a2b34: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2b30) {
            ctx->pc = 0x3A2B90u;
            goto label_3a2b90;
        }
    }
    ctx->pc = 0x3A2B38u;
    // 0x3a2b38: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A2B38u;
    SET_GPR_U32(ctx, 31, 0x3A2B40u);
    ctx->pc = 0x3A2B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2B38u;
    // 0x3a2b3c: 0x24041100  addiu       $a0, $zero, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A2B38u, 0x3A2B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2B40u;
label_3a2b40:
    // 0x3a2b40: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3a2b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x3a2b44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a2b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2b48: 0xc0e8d8a  jal         func_3A3628
    ctx->pc = 0x3A2B48u;
    SET_GPR_U32(ctx, 31, 0x3A2B50u);
    ctx->pc = 0x3A2B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2B48u;
    // 0x3a2b4c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3628u, 0x3A2B48u, 0x3A2B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2B50u;
label_3a2b50:
    // 0x3a2b50: 0x24041101  addiu       $a0, $zero, 0x1101
    ctx->pc = 0x3a2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4353));
    // 0x3a2b54: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A2B54u;
    SET_GPR_U32(ctx, 31, 0x3A2B5Cu);
    ctx->pc = 0x3A2B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2B54u;
    // 0x3a2b58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A2B54u, 0x3A2B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2B5Cu;
label_3a2b5c:
    // 0x3a2b5c: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2B5Cu;
    {
        const bool branch_taken_0x3a2b5c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3a2b5c) {
            ctx->pc = 0x3A2B70u;
            goto label_3a2b70;
        }
    }
    ctx->pc = 0x3A2B64u;
    // 0x3a2b64: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x3a2b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x3a2b68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2B68u;
    {
        const bool branch_taken_0x3a2b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B68u;
        // 0x3a2b6c: 0xa2360002  sb          $s6, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2b68) {
            ctx->pc = 0x3A2B8Cu;
            goto label_3a2b8c;
        }
    }
    ctx->pc = 0x3A2B70u;
label_3a2b70:
    // 0x3a2b70: 0xc0e8aa4  jal         func_3A2A90
    ctx->pc = 0x3A2B70u;
    SET_GPR_U32(ctx, 31, 0x3A2B78u);
    ctx->pc = 0x3A2B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2B70u;
    // 0x3a2b74: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2A90u, 0x3A2B70u, 0x3A2B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2B78u;
label_3a2b78:
    // 0x3a2b78: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x3a2b78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3a2b7c: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3A2B7Cu;
    {
        const bool branch_taken_0x3a2b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2b7c) {
            ctx->pc = 0x3A2B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2B7Cu;
            // 0x3a2b80: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2b30;
        }
    }
    ctx->pc = 0x3A2B84u;
    // 0x3a2b84: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3A2B84u;
    SET_GPR_U32(ctx, 31, 0x3A2B8Cu);
    ctx->pc = 0x3A2B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2B84u;
    // 0x3a2b88: 0x26a4d300  addiu       $a0, $s5, -0x2D00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3A2B84u, 0x3A2B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2B8Cu;
label_3a2b8c:
    // 0x3a2b8c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a2b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a2b90:
    // 0x3a2b90: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3a2b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a2b94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3a2b94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a2b98: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3a2b98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a2b9c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3a2b9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a2ba0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3a2ba0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a2ba4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3a2ba4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a2ba8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3a2ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3a2bac: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2BACu;
        // 0x3a2bb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2BB4u;
    // 0x3a2bb4: 0x0  nop
    ctx->pc = 0x3a2bb4u;
    // NOP
    ctx->pc = 0x3a2bb8u;
}
