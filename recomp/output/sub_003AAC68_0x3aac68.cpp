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

// Function: sub_003AAC68
// Address: 0x3aac68 - 0x3aacf0
void sub_003AAC68_0x3aac68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAC68_0x3aac68");
#endif

    switch (ctx->pc) {
        case 0x3aacd8u: goto label_3aacd8;
        default: break;
    }

    ctx->pc = 0x3aac68u;

    // 0x3aac68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aac68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aac6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aac6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3aac70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aac70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aac74: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AAC74u;
    {
        const bool branch_taken_0x3aac74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC74u;
        // 0x3aac78: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aac74) {
            ctx->pc = 0x3AACA0u;
            goto label_3aaca0;
        }
    }
    ctx->pc = 0x3AAC7Cu;
    // 0x3aac7c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aac7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3aac80: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aac80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3aac84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aac84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aac88: 0x2484ef50  addiu       $a0, $a0, -0x10B0
    ctx->pc = 0x3aac88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963024));
    // 0x3aac8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3aac8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aac90: 0x24a5eef0  addiu       $a1, $a1, -0x1110
    ctx->pc = 0x3aac90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962928));
    // 0x3aac94: 0x80eaa6e  j           func_3AA9B8
    ctx->pc = 0x3AAC94u;
    ctx->pc = 0x3AAC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAC94u;
    // 0x3aac98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA9B8u;
    sub_003AA9B8_0x3aa9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x3AAC9Cu;
    // 0x3aac9c: 0x0  nop
    ctx->pc = 0x3aac9cu;
    // NOP
label_3aaca0:
    // 0x3aaca0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3aaca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3aaca4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AACA4u;
    {
        const bool branch_taken_0x3aaca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AACA4u;
        // 0x3aaca8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaca4) {
            ctx->pc = 0x3AACD0u;
            goto label_3aacd0;
        }
    }
    ctx->pc = 0x3AACACu;
    // 0x3aacac: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aacacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3aacb0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aacb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3aacb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aacb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aacb8: 0x2484ef60  addiu       $a0, $a0, -0x10A0
    ctx->pc = 0x3aacb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963040));
    // 0x3aacbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3aacbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aacc0: 0x24a5ef70  addiu       $a1, $a1, -0x1090
    ctx->pc = 0x3aacc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963056));
    // 0x3aacc4: 0x80eaa6e  j           func_3AA9B8
    ctx->pc = 0x3AACC4u;
    ctx->pc = 0x3AACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AACC4u;
    // 0x3aacc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA9B8u;
    sub_003AA9B8_0x3aa9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x3AACCCu;
    // 0x3aaccc: 0x0  nop
    ctx->pc = 0x3aacccu;
    // NOP
label_3aacd0:
    // 0x3aacd0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3AACD0u;
    SET_GPR_U32(ctx, 31, 0x3AACD8u);
    ctx->pc = 0x3AACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AACD0u;
    // 0x3aacd4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3AACD0u, 0x3AACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AACD8u;
label_3aacd8:
    // 0x3aacd8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3aacd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3aacdc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3aacdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aace0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aace0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aace4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AACE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AACE4u;
        // 0x3aace8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AACE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AACECu;
    // 0x3aacec: 0x0  nop
    ctx->pc = 0x3aacecu;
    // NOP
    ctx->pc = 0x3aacf0u;
}
