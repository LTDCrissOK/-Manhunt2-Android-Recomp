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

// Function: sub_00195C50
// Address: 0x195c50 - 0x195cc8
void sub_00195C50_0x195c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195C50_0x195c50");
#endif

    switch (ctx->pc) {
        case 0x195c50u: goto label_195c50;
        case 0x195c54u: goto label_195c54;
        case 0x195c58u: goto label_195c58;
        case 0x195c5cu: goto label_195c5c;
        case 0x195c60u: goto label_195c60;
        case 0x195c64u: goto label_195c64;
        case 0x195c68u: goto label_195c68;
        case 0x195c6cu: goto label_195c6c;
        case 0x195c70u: goto label_195c70;
        case 0x195c74u: goto label_195c74;
        case 0x195c78u: goto label_195c78;
        case 0x195c7cu: goto label_195c7c;
        case 0x195c80u: goto label_195c80;
        case 0x195c84u: goto label_195c84;
        case 0x195c88u: goto label_195c88;
        case 0x195c8cu: goto label_195c8c;
        case 0x195c90u: goto label_195c90;
        case 0x195c94u: goto label_195c94;
        case 0x195c98u: goto label_195c98;
        case 0x195c9cu: goto label_195c9c;
        case 0x195ca0u: goto label_195ca0;
        case 0x195ca4u: goto label_195ca4;
        case 0x195ca8u: goto label_195ca8;
        case 0x195cacu: goto label_195cac;
        case 0x195cb0u: goto label_195cb0;
        case 0x195cb4u: goto label_195cb4;
        case 0x195cb8u: goto label_195cb8;
        case 0x195cbcu: goto label_195cbc;
        case 0x195cc0u: goto label_195cc0;
        case 0x195cc4u: goto label_195cc4;
        default: break;
    }

    ctx->pc = 0x195c50u;

label_195c50:
    // 0x195c50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x195c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_195c54:
    // 0x195c54: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x195c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_195c58:
    // 0x195c58: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x195c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_195c5c:
    // 0x195c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x195c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_195c60:
    // 0x195c60: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x195c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_195c64:
    // 0x195c64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x195c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_195c68:
    // 0x195c68: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x195c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_195c6c:
    // 0x195c6c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x195c6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_195c70:
    // 0x195c70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x195c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_195c74:
    // 0x195c74: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x195c74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_195c78:
    // 0x195c78: 0xc06faee  jal         func_1BEBB8
label_195c7c:
    if (ctx->pc == 0x195C7Cu) {
        ctx->pc = 0x195C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C78u;
        // 0x195c7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195C80u;
        goto label_195c80;
    }
    ctx->pc = 0x195C78u;
    SET_GPR_U32(ctx, 31, 0x195C80u);
    ctx->pc = 0x195C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195C78u;
    // 0x195c7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x195C78u, 0x195C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195C80u;
label_195c80:
    // 0x195c80: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x195c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_195c84:
    // 0x195c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195c88:
    // 0x195c88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x195c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195c8c:
    // 0x195c8c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x195c8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_195c90:
    // 0x195c90: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x195c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_195c94:
    // 0x195c94: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x195c94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_195c98:
    // 0x195c98: 0x60f809  jalr        $v1
label_195c9c:
    if (ctx->pc == 0x195C9Cu) {
        ctx->pc = 0x195C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C98u;
        // 0x195c9c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CA0u;
        goto label_195ca0;
    }
    ctx->pc = 0x195C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x195CA0u);
        ctx->pc = 0x195C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195C98u;
        // 0x195c9c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195C98u, 0x195CA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195CA0u;
label_195ca0:
    // 0x195ca0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x195ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_195ca4:
    // 0x195ca4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x195ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_195ca8:
    // 0x195ca8: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x195ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_195cac:
    // 0x195cac: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x195cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_195cb0:
    // 0x195cb0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x195cb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_195cb4:
    // 0x195cb4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x195cb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_195cb8:
    // 0x195cb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x195cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_195cbc:
    // 0x195cbc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x195cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_195cc0:
    // 0x195cc0: 0x3e00008  jr          $ra
label_195cc4:
    if (ctx->pc == 0x195CC4u) {
        ctx->pc = 0x195CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CC0u;
        // 0x195cc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CC8u;
        goto label_fallthrough_0x195cc0;
    }
    ctx->pc = 0x195CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CC0u;
        // 0x195cc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x195cc0:
    ctx->pc = 0x195CC8u;
}
