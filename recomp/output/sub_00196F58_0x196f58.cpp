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

// Function: sub_00196F58
// Address: 0x196f58 - 0x196fd0
void sub_00196F58_0x196f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196F58_0x196f58");
#endif

    switch (ctx->pc) {
        case 0x196f58u: goto label_196f58;
        case 0x196f5cu: goto label_196f5c;
        case 0x196f60u: goto label_196f60;
        case 0x196f64u: goto label_196f64;
        case 0x196f68u: goto label_196f68;
        case 0x196f6cu: goto label_196f6c;
        case 0x196f70u: goto label_196f70;
        case 0x196f74u: goto label_196f74;
        case 0x196f78u: goto label_196f78;
        case 0x196f7cu: goto label_196f7c;
        case 0x196f80u: goto label_196f80;
        case 0x196f84u: goto label_196f84;
        case 0x196f88u: goto label_196f88;
        case 0x196f8cu: goto label_196f8c;
        case 0x196f90u: goto label_196f90;
        case 0x196f94u: goto label_196f94;
        case 0x196f98u: goto label_196f98;
        case 0x196f9cu: goto label_196f9c;
        case 0x196fa0u: goto label_196fa0;
        case 0x196fa4u: goto label_196fa4;
        case 0x196fa8u: goto label_196fa8;
        case 0x196facu: goto label_196fac;
        case 0x196fb0u: goto label_196fb0;
        case 0x196fb4u: goto label_196fb4;
        case 0x196fb8u: goto label_196fb8;
        case 0x196fbcu: goto label_196fbc;
        case 0x196fc0u: goto label_196fc0;
        case 0x196fc4u: goto label_196fc4;
        case 0x196fc8u: goto label_196fc8;
        case 0x196fccu: goto label_196fcc;
        default: break;
    }

    ctx->pc = 0x196f58u;

label_196f58:
    // 0x196f58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x196f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_196f5c:
    // 0x196f5c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x196f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_196f60:
    // 0x196f60: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x196f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_196f64:
    // 0x196f64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196f68:
    // 0x196f68: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x196f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_196f6c:
    // 0x196f6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x196f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_196f70:
    // 0x196f70: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x196f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_196f74:
    // 0x196f74: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x196f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_196f78:
    // 0x196f78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x196f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_196f7c:
    // 0x196f7c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x196f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_196f80:
    // 0x196f80: 0xc06faee  jal         func_1BEBB8
label_196f84:
    if (ctx->pc == 0x196F84u) {
        ctx->pc = 0x196F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F80u;
        // 0x196f84: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196F88u;
        goto label_196f88;
    }
    ctx->pc = 0x196F80u;
    SET_GPR_U32(ctx, 31, 0x196F88u);
    ctx->pc = 0x196F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196F80u;
    // 0x196f84: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x196F80u, 0x196F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F88u;
label_196f88:
    // 0x196f88: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x196f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_196f8c:
    // 0x196f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196f90:
    // 0x196f90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x196f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_196f94:
    // 0x196f94: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x196f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_196f98:
    // 0x196f98: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x196f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_196f9c:
    // 0x196f9c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x196f9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_196fa0:
    // 0x196fa0: 0x60f809  jalr        $v1
label_196fa4:
    if (ctx->pc == 0x196FA4u) {
        ctx->pc = 0x196FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196FA0u;
        // 0x196fa4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196FA8u;
        goto label_196fa8;
    }
    ctx->pc = 0x196FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x196FA8u);
        ctx->pc = 0x196FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196FA0u;
        // 0x196fa4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196FA0u, 0x196FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196FA8u;
label_196fa8:
    // 0x196fa8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x196fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_196fac:
    // 0x196fac: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x196facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_196fb0:
    // 0x196fb0: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x196fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_196fb4:
    // 0x196fb4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x196fb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_196fb8:
    // 0x196fb8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x196fb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_196fbc:
    // 0x196fbc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x196fbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_196fc0:
    // 0x196fc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x196fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_196fc4:
    // 0x196fc4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x196fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_196fc8:
    // 0x196fc8: 0x3e00008  jr          $ra
label_196fcc:
    if (ctx->pc == 0x196FCCu) {
        ctx->pc = 0x196FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196FC8u;
        // 0x196fcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196FD0u;
        goto label_fallthrough_0x196fc8;
    }
    ctx->pc = 0x196FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196FC8u;
        // 0x196fcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x196fc8:
    ctx->pc = 0x196FD0u;
}
