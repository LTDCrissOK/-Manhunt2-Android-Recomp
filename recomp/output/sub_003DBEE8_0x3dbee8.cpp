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

// Function: sub_003DBEE8
// Address: 0x3dbee8 - 0x3dbf58
void sub_003DBEE8_0x3dbee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBEE8_0x3dbee8");
#endif

    switch (ctx->pc) {
        case 0x3dbf18u: goto label_3dbf18;
        case 0x3dbf48u: goto label_3dbf48;
        default: break;
    }

    ctx->pc = 0x3dbee8u;

    // 0x3dbee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dbee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dbeec: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3dbeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3dbef0: 0x24420698  addiu       $v0, $v0, 0x698
    ctx->pc = 0x3dbef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1688));
    // 0x3dbef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dbef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dbef8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3dbef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3dbefc: 0x24860210  addiu       $a2, $a0, 0x210
    ctx->pc = 0x3dbefcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
    // 0x3dbf00: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x3dbf00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3dbf04: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3DBF04u;
    {
        const bool branch_taken_0x3dbf04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBF04u;
        // 0x3dbf08: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbf04) {
            ctx->pc = 0x3DBF30u;
            goto label_3dbf30;
        }
    }
    ctx->pc = 0x3DBF0Cu;
    // 0x3dbf0c: 0x50e60009  beql        $a3, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DBF0Cu;
    {
        const bool branch_taken_0x3dbf0c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x3dbf0c) {
            ctx->pc = 0x3DBF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBF0Cu;
            // 0x3dbf10: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBF34u;
            goto label_3dbf34;
        }
    }
    ctx->pc = 0x3DBF14u;
    // 0x3dbf14: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x3dbf14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
label_3dbf18:
    // 0x3dbf18: 0x0  nop
    ctx->pc = 0x3dbf18u;
    // NOP
    // 0x3dbf1c: 0x0  nop
    ctx->pc = 0x3dbf1cu;
    // NOP
    // 0x3dbf20: 0x0  nop
    ctx->pc = 0x3dbf20u;
    // NOP
    // 0x3dbf24: 0x0  nop
    ctx->pc = 0x3dbf24u;
    // NOP
    // 0x3dbf28: 0x54e6fffb  bnel        $a3, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DBF28u;
    {
        const bool branch_taken_0x3dbf28 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x3dbf28) {
            ctx->pc = 0x3DBF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBF28u;
            // 0x3dbf2c: 0x24c6ffe0  addiu       $a2, $a2, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dbf18;
        }
    }
    ctx->pc = 0x3DBF30u;
label_3dbf30:
    // 0x3dbf30: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x3dbf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
label_3dbf34:
    // 0x3dbf34: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3dbf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3dbf38: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DBF38u;
    {
        const bool branch_taken_0x3dbf38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBF38u;
        // 0x3dbf3c: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbf38) {
            ctx->pc = 0x3DBF48u;
            goto label_3dbf48;
        }
    }
    ctx->pc = 0x3DBF40u;
    // 0x3dbf40: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DBF40u;
    SET_GPR_U32(ctx, 31, 0x3DBF48u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DBF40u, 0x3DBF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBF48u;
label_3dbf48:
    // 0x3dbf48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dbf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dbf4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBF4Cu;
        // 0x3dbf50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBF54u;
    // 0x3dbf54: 0x0  nop
    ctx->pc = 0x3dbf54u;
    // NOP
    ctx->pc = 0x3dbf58u;
}
