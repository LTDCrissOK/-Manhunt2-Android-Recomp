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

// Function: sub_003AAD38
// Address: 0x3aad38 - 0x3aadb8
void sub_003AAD38_0x3aad38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAD38_0x3aad38");
#endif

    ctx->pc = 0x3aad38u;

    // 0x3aad38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aad38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aad3c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AAD3Cu;
    {
        const bool branch_taken_0x3aad3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD3Cu;
        // 0x3aad40: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aad3c) {
            ctx->pc = 0x3AAD60u;
            goto label_3aad60;
        }
    }
    ctx->pc = 0x3AAD44u;
    // 0x3aad44: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aad44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3aad48: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aad48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3aad4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aad4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aad50: 0x2484ef90  addiu       $a0, $a0, -0x1070
    ctx->pc = 0x3aad50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963088));
    // 0x3aad54: 0x24a5eef0  addiu       $a1, $a1, -0x1110
    ctx->pc = 0x3aad54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
    // 0x3aad58: 0x80eaa6e  j           func_3AA9B8
    ctx->pc = 0x3AAD58u;
    ctx->pc = 0x3AAD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAD58u;
    // 0x3aad5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA9B8u;
    sub_003AA9B8_0x3aa9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x3AAD60u;
label_3aad60:
    // 0x3aad60: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3aad60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3aad64: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AAD64u;
    {
        const bool branch_taken_0x3aad64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aad64) {
            ctx->pc = 0x3AAD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAD64u;
            // 0x3aad68: 0x8c820020  lw          $v0, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAD88u;
            goto label_3aad88;
        }
    }
    ctx->pc = 0x3AAD6Cu;
    // 0x3aad6c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3aad70: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aad70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3aad74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aad74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aad78: 0x2484efa0  addiu       $a0, $a0, -0x1060
    ctx->pc = 0x3aad78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963104));
    // 0x3aad7c: 0x24a5ef70  addiu       $a1, $a1, -0x1090
    ctx->pc = 0x3aad7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963056));
    // 0x3aad80: 0x80eaa6e  j           func_3AA9B8
    ctx->pc = 0x3AAD80u;
    ctx->pc = 0x3AAD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAD80u;
    // 0x3aad84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA9B8u;
    sub_003AA9B8_0x3aa9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x3AAD88u;
label_3aad88:
    // 0x3aad88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aad88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aad8c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x3aad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x3aad90: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x3aad90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x3aad94: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3aad94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3aad98: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x3aad98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x3aad9c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x3aad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x3aada0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x3aada0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x3aada4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x3aada4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x3aada8: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x3aada8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x3aadac: 0x3e00008  jr          $ra
    ctx->pc = 0x3AADACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADACu;
        // 0x3aadb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AADACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AADB4u;
    // 0x3aadb4: 0x0  nop
    ctx->pc = 0x3aadb4u;
    // NOP
    ctx->pc = 0x3aadb8u;
}
