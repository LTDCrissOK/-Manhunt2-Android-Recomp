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

// Function: sub_001BCA60
// Address: 0x1bca60 - 0x1bcae8
void sub_001BCA60_0x1bca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCA60_0x1bca60");
#endif

    switch (ctx->pc) {
        case 0x1bca60u: goto label_1bca60;
        case 0x1bca64u: goto label_1bca64;
        case 0x1bca68u: goto label_1bca68;
        case 0x1bca6cu: goto label_1bca6c;
        case 0x1bca70u: goto label_1bca70;
        case 0x1bca74u: goto label_1bca74;
        case 0x1bca78u: goto label_1bca78;
        case 0x1bca7cu: goto label_1bca7c;
        case 0x1bca80u: goto label_1bca80;
        case 0x1bca84u: goto label_1bca84;
        case 0x1bca88u: goto label_1bca88;
        case 0x1bca8cu: goto label_1bca8c;
        case 0x1bca90u: goto label_1bca90;
        case 0x1bca94u: goto label_1bca94;
        case 0x1bca98u: goto label_1bca98;
        case 0x1bca9cu: goto label_1bca9c;
        case 0x1bcaa0u: goto label_1bcaa0;
        case 0x1bcaa4u: goto label_1bcaa4;
        case 0x1bcaa8u: goto label_1bcaa8;
        case 0x1bcaacu: goto label_1bcaac;
        case 0x1bcab0u: goto label_1bcab0;
        case 0x1bcab4u: goto label_1bcab4;
        case 0x1bcab8u: goto label_1bcab8;
        case 0x1bcabcu: goto label_1bcabc;
        case 0x1bcac0u: goto label_1bcac0;
        case 0x1bcac4u: goto label_1bcac4;
        case 0x1bcac8u: goto label_1bcac8;
        case 0x1bcaccu: goto label_1bcacc;
        case 0x1bcad0u: goto label_1bcad0;
        case 0x1bcad4u: goto label_1bcad4;
        case 0x1bcad8u: goto label_1bcad8;
        case 0x1bcadcu: goto label_1bcadc;
        case 0x1bcae0u: goto label_1bcae0;
        case 0x1bcae4u: goto label_1bcae4;
        default: break;
    }

    ctx->pc = 0x1bca60u;

label_1bca60:
    // 0x1bca60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bca64:
    // 0x1bca64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bca68:
    // 0x1bca68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bca6c:
    // 0x1bca6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bca6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bca70:
    // 0x1bca70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1bca74:
    // 0x1bca74: 0x261101e0  addiu       $s1, $s0, 0x1E0
    ctx->pc = 0x1bca74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
label_1bca78:
    // 0x1bca78: 0x26050130  addiu       $a1, $s0, 0x130
    ctx->pc = 0x1bca78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_1bca7c:
    // 0x1bca7c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1bca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1bca80:
    // 0x1bca80: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1bca80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1bca84:
    // 0x1bca84: 0x8c44010c  lw          $a0, 0x10C($v0)
    ctx->pc = 0x1bca84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_1bca88:
    // 0x1bca88: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x1bca88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_1bca8c:
    // 0x1bca8c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_1bca90:
    if (ctx->pc == 0x1BCA90u) {
        ctx->pc = 0x1BCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA8Cu;
        // 0x1bca90: 0x8c840098  lw          $a0, 0x98($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA94u;
        goto label_1bca94;
    }
    ctx->pc = 0x1BCA8Cu;
    {
        const bool branch_taken_0x1bca8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA8Cu;
        // 0x1bca90: 0x8c840098  lw          $a0, 0x98($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca8c) {
            ctx->pc = 0x1BCAD0u;
            goto label_1bcad0;
        }
    }
    ctx->pc = 0x1BCA94u;
label_1bca94:
    // 0x1bca94: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1bca94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1bca98:
    // 0x1bca98: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1bca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1bca9c:
    // 0x1bca9c: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
label_1bcaa0:
    if (ctx->pc == 0x1BCAA0u) {
        ctx->pc = 0x1BCAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA9Cu;
        // 0x1bcaa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAA4u;
        goto label_1bcaa4;
    }
    ctx->pc = 0x1BCA9Cu;
    {
        const bool branch_taken_0x1bca9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bca9c) {
            ctx->pc = 0x1BCAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCA9Cu;
            // 0x1bcaa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCAD4u;
            goto label_1bcad4;
        }
    }
    ctx->pc = 0x1BCAA4u;
label_1bcaa4:
    // 0x1bcaa4: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_1bcaa8:
    if (ctx->pc == 0x1BCAA8u) {
        ctx->pc = 0x1BCAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAA4u;
        // 0x1bcaa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAACu;
        goto label_1bcaac;
    }
    ctx->pc = 0x1BCAA4u;
    {
        const bool branch_taken_0x1bcaa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcaa4) {
            ctx->pc = 0x1BCAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCAA4u;
            // 0x1bcaa8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCAD4u;
            goto label_1bcad4;
        }
    }
    ctx->pc = 0x1BCAACu;
label_1bcaac:
    // 0x1bcaac: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1bcaacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1bcab0:
    // 0x1bcab0: 0x8e030394  lw          $v1, 0x394($s0)
    ctx->pc = 0x1bcab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
label_1bcab4:
    // 0x1bcab4: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1bcab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1bcab8:
    // 0x1bcab8: 0x40f809  jalr        $v0
label_1bcabc:
    if (ctx->pc == 0x1BCABCu) {
        ctx->pc = 0x1BCABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAB8u;
        // 0x1bcabc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAC0u;
        goto label_1bcac0;
    }
    ctx->pc = 0x1BCAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCAC0u);
        ctx->pc = 0x1BCABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAB8u;
        // 0x1bcabc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCAB8u, 0x1BCAC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BCAC0u;
label_1bcac0:
    // 0x1bcac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bcac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bcac4:
    // 0x1bcac4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bcac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bcac8:
    // 0x1bcac8: 0xc070dd4  jal         func_1C3750
label_1bcacc:
    if (ctx->pc == 0x1BCACCu) {
        ctx->pc = 0x1BCACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAC8u;
        // 0x1bcacc: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAD0u;
        goto label_1bcad0;
    }
    ctx->pc = 0x1BCAC8u;
    SET_GPR_U32(ctx, 31, 0x1BCAD0u);
    ctx->pc = 0x1BCACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCAC8u;
    // 0x1bcacc: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3750u, 0x1BCAC8u, 0x1BCAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCAD0u;
label_1bcad0:
    // 0x1bcad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bcad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bcad4:
    // 0x1bcad4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bcad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bcad8:
    // 0x1bcad8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bcad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bcadc:
    // 0x1bcadc: 0x3e00008  jr          $ra
label_1bcae0:
    if (ctx->pc == 0x1BCAE0u) {
        ctx->pc = 0x1BCAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCADCu;
        // 0x1bcae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCAE4u;
        goto label_1bcae4;
    }
    ctx->pc = 0x1BCADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCADCu;
        // 0x1bcae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCAE4u;
label_1bcae4:
    // 0x1bcae4: 0x0  nop
    ctx->pc = 0x1bcae4u;
    // NOP
    ctx->pc = 0x1bcae8u;
}
