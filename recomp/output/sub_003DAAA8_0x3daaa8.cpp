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

// Function: sub_003DAAA8
// Address: 0x3daaa8 - 0x3dab38
void sub_003DAAA8_0x3daaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAAA8_0x3daaa8");
#endif

    switch (ctx->pc) {
        case 0x3daad8u: goto label_3daad8;
        case 0x3daae8u: goto label_3daae8;
        case 0x3daaf0u: goto label_3daaf0;
        case 0x3dab20u: goto label_3dab20;
        default: break;
    }

    ctx->pc = 0x3daaa8u;

    // 0x3daaa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3daaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3daaac: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3daaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3daab0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3daab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3daab4: 0x244202d8  addiu       $v0, $v0, 0x2D8
    ctx->pc = 0x3daab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x3daab8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3daab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3daabc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3daabcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3daac0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3daac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3daac4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3daac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3daac8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x3daac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x3daacc: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x3daaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3daad0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DAAD0u;
    SET_GPR_U32(ctx, 31, 0x3DAAD8u);
    ctx->pc = 0x3DAAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAAD0u;
    // 0x3daad4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DAAD0u, 0x3DAAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAAD8u;
label_3daad8:
    // 0x3daad8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3daad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3daadc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DAADCu;
    {
        const bool branch_taken_0x3daadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAADCu;
        // 0x3daae0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3daadc) {
            ctx->pc = 0x3DAB00u;
            goto label_3dab00;
        }
    }
    ctx->pc = 0x3DAAE4u;
    // 0x3daae4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3daae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3daae8:
    // 0x3daae8: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x3DAAE8u;
    SET_GPR_U32(ctx, 31, 0x3DAAF0u);
    ctx->pc = 0x3DAAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAAE8u;
    // 0x3daaec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x3DAAE8u, 0x3DAAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAAF0u;
label_3daaf0:
    // 0x3daaf0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3daaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3daaf4: 0x0  nop
    ctx->pc = 0x3daaf4u;
    // NOP
    // 0x3daaf8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DAAF8u;
    {
        const bool branch_taken_0x3daaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3daaf8) {
            ctx->pc = 0x3DAAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DAAF8u;
            // 0x3daafc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DAAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3daae8;
        }
    }
    ctx->pc = 0x3DAB00u;
label_3dab00:
    // 0x3dab00: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x3dab00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x3dab04: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3dab04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3dab08: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3dab08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3dab0c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3dab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3dab10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DAB10u;
    {
        const bool branch_taken_0x3dab10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DAB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB10u;
        // 0x3dab14: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dab10) {
            ctx->pc = 0x3DAB20u;
            goto label_3dab20;
        }
    }
    ctx->pc = 0x3DAB18u;
    // 0x3dab18: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DAB18u;
    SET_GPR_U32(ctx, 31, 0x3DAB20u);
    ctx->pc = 0x3DAB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAB18u;
    // 0x3dab1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DAB18u, 0x3DAB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAB20u;
label_3dab20:
    // 0x3dab20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dab20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dab24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dab24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dab28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dab28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dab2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAB2Cu;
        // 0x3dab30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAB34u;
    // 0x3dab34: 0x0  nop
    ctx->pc = 0x3dab34u;
    // NOP
    ctx->pc = 0x3dab38u;
}
