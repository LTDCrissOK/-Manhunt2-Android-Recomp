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

// Function: sub_003DBDC8
// Address: 0x3dbdc8 - 0x3dbe38
void sub_003DBDC8_0x3dbdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBDC8_0x3dbdc8");
#endif

    switch (ctx->pc) {
        case 0x3dbdf8u: goto label_3dbdf8;
        case 0x3dbe28u: goto label_3dbe28;
        default: break;
    }

    ctx->pc = 0x3dbdc8u;

    // 0x3dbdc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dbdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dbdcc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3dbdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3dbdd0: 0x244205f0  addiu       $v0, $v0, 0x5F0
    ctx->pc = 0x3dbdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1520));
    // 0x3dbdd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dbdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dbdd8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3dbdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3dbddc: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x3dbddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3dbde0: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x3DBDE0u;
    {
        const bool branch_taken_0x3dbde0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBDE0u;
        // 0x3dbde4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbde0) {
            ctx->pc = 0x3DBE10u;
            goto label_3dbe10;
        }
    }
    ctx->pc = 0x3DBDE8u;
    // 0x3dbde8: 0x24860410  addiu       $a2, $a0, 0x410
    ctx->pc = 0x3dbde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1040));
    // 0x3dbdec: 0x50e60009  beql        $a3, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DBDECu;
    {
        const bool branch_taken_0x3dbdec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x3dbdec) {
            ctx->pc = 0x3DBDF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBDECu;
            // 0x3dbdf0: 0x24420638  addiu       $v0, $v0, 0x638 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBE14u;
            goto label_3dbe14;
        }
    }
    ctx->pc = 0x3DBDF4u;
    // 0x3dbdf4: 0x24c6ffc0  addiu       $a2, $a2, -0x40
    ctx->pc = 0x3dbdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967232));
label_3dbdf8:
    // 0x3dbdf8: 0x0  nop
    ctx->pc = 0x3dbdf8u;
    // NOP
    // 0x3dbdfc: 0x0  nop
    ctx->pc = 0x3dbdfcu;
    // NOP
    // 0x3dbe00: 0x0  nop
    ctx->pc = 0x3dbe00u;
    // NOP
    // 0x3dbe04: 0x0  nop
    ctx->pc = 0x3dbe04u;
    // NOP
    // 0x3dbe08: 0x54e6fffb  bnel        $a3, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DBE08u;
    {
        const bool branch_taken_0x3dbe08 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x3dbe08) {
            ctx->pc = 0x3DBE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBE08u;
            // 0x3dbe0c: 0x24c6ffc0  addiu       $a2, $a2, -0x40 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967232));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBDF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dbdf8;
        }
    }
    ctx->pc = 0x3DBE10u;
label_3dbe10:
    // 0x3dbe10: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x3dbe10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
label_3dbe14:
    // 0x3dbe14: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3dbe14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3dbe18: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DBE18u;
    {
        const bool branch_taken_0x3dbe18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBE18u;
        // 0x3dbe1c: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbe18) {
            ctx->pc = 0x3DBE28u;
            goto label_3dbe28;
        }
    }
    ctx->pc = 0x3DBE20u;
    // 0x3dbe20: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DBE20u;
    SET_GPR_U32(ctx, 31, 0x3DBE28u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DBE20u, 0x3DBE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBE28u;
label_3dbe28:
    // 0x3dbe28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dbe28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dbe2c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBE2Cu;
        // 0x3dbe30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBE34u;
    // 0x3dbe34: 0x0  nop
    ctx->pc = 0x3dbe34u;
    // NOP
    ctx->pc = 0x3dbe38u;
}
