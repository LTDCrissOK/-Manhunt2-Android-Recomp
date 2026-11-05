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

// Function: sub_00246A58
// Address: 0x246a58 - 0x246b08
void sub_00246A58_0x246a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246A58_0x246a58");
#endif

    switch (ctx->pc) {
        case 0x246a58u: goto label_246a58;
        case 0x246a5cu: goto label_246a5c;
        case 0x246a60u: goto label_246a60;
        case 0x246a64u: goto label_246a64;
        case 0x246a68u: goto label_246a68;
        case 0x246a6cu: goto label_246a6c;
        case 0x246a70u: goto label_246a70;
        case 0x246a74u: goto label_246a74;
        case 0x246a78u: goto label_246a78;
        case 0x246a7cu: goto label_246a7c;
        case 0x246a80u: goto label_246a80;
        case 0x246a84u: goto label_246a84;
        case 0x246a88u: goto label_246a88;
        case 0x246a8cu: goto label_246a8c;
        case 0x246a90u: goto label_246a90;
        case 0x246a94u: goto label_246a94;
        case 0x246a98u: goto label_246a98;
        case 0x246a9cu: goto label_246a9c;
        case 0x246aa0u: goto label_246aa0;
        case 0x246aa4u: goto label_246aa4;
        case 0x246aa8u: goto label_246aa8;
        case 0x246aacu: goto label_246aac;
        case 0x246ab0u: goto label_246ab0;
        case 0x246ab4u: goto label_246ab4;
        case 0x246ab8u: goto label_246ab8;
        case 0x246abcu: goto label_246abc;
        case 0x246ac0u: goto label_246ac0;
        case 0x246ac4u: goto label_246ac4;
        case 0x246ac8u: goto label_246ac8;
        case 0x246accu: goto label_246acc;
        case 0x246ad0u: goto label_246ad0;
        case 0x246ad4u: goto label_246ad4;
        case 0x246ad8u: goto label_246ad8;
        case 0x246adcu: goto label_246adc;
        case 0x246ae0u: goto label_246ae0;
        case 0x246ae4u: goto label_246ae4;
        case 0x246ae8u: goto label_246ae8;
        case 0x246aecu: goto label_246aec;
        case 0x246af0u: goto label_246af0;
        case 0x246af4u: goto label_246af4;
        case 0x246af8u: goto label_246af8;
        case 0x246afcu: goto label_246afc;
        case 0x246b00u: goto label_246b00;
        case 0x246b04u: goto label_246b04;
        default: break;
    }

    ctx->pc = 0x246a58u;

label_246a58:
    // 0x246a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_246a5c:
    // 0x246a5c: 0x240207ce  addiu       $v0, $zero, 0x7CE
    ctx->pc = 0x246a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1998));
label_246a60:
    // 0x246a60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_246a64:
    // 0x246a64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x246a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_246a68:
    // 0x246a68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x246a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_246a6c:
    // 0x246a6c: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x246a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_246a70:
    // 0x246a70: 0x8c6400f0  lw          $a0, 0xF0($v1)
    ctx->pc = 0x246a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_246a74:
    // 0x246a74: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_246a78:
    if (ctx->pc == 0x246A78u) {
        ctx->pc = 0x246A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A74u;
        // 0x246a78: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A7Cu;
        goto label_246a7c;
    }
    ctx->pc = 0x246A74u;
    {
        const bool branch_taken_0x246a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x246A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A74u;
        // 0x246a78: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a74) {
            ctx->pc = 0x246A98u;
            goto label_246a98;
        }
    }
    ctx->pc = 0x246A7Cu;
label_246a7c:
    // 0x246a7c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x246a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_246a80:
    // 0x246a80: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x246a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_246a84:
    // 0x246a84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x246a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_246a88:
    // 0x246a88: 0x24a55b40  addiu       $a1, $a1, 0x5B40
    ctx->pc = 0x246a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
label_246a8c:
    // 0x246a8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x246a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_246a90:
    // 0x246a90: 0xc0b15e8  jal         func_2C57A0
label_246a94:
    if (ctx->pc == 0x246A94u) {
        ctx->pc = 0x246A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A90u;
        // 0x246a94: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246A98u;
        goto label_246a98;
    }
    ctx->pc = 0x246A90u;
    SET_GPR_U32(ctx, 31, 0x246A98u);
    ctx->pc = 0x246A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A90u;
    // 0x246a94: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x246A90u, 0x246A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246A98u;
label_246a98:
    // 0x246a98: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x246a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_246a9c:
    // 0x246a9c: 0xc069b78  jal         func_1A6DE0
label_246aa0:
    if (ctx->pc == 0x246AA0u) {
        ctx->pc = 0x246AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246A9Cu;
        // 0x246aa0: 0x240505af  addiu       $a1, $zero, 0x5AF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1455));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AA4u;
        goto label_246aa4;
    }
    ctx->pc = 0x246A9Cu;
    SET_GPR_U32(ctx, 31, 0x246AA4u);
    ctx->pc = 0x246AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246A9Cu;
    // 0x246aa0: 0x240505af  addiu       $a1, $zero, 0x5AF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1455));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6DE0u, 0x246A9Cu, 0x246AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AA4u;
label_246aa4:
    // 0x246aa4: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x246aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_246aa8:
    // 0x246aa8: 0xc06a05e  jal         func_1A8178
label_246aac:
    if (ctx->pc == 0x246AACu) {
        ctx->pc = 0x246AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AA8u;
        // 0x246aac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AB0u;
        goto label_246ab0;
    }
    ctx->pc = 0x246AA8u;
    SET_GPR_U32(ctx, 31, 0x246AB0u);
    ctx->pc = 0x246AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246AA8u;
    // 0x246aac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x246AA8u, 0x246AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AB0u;
label_246ab0:
    // 0x246ab0: 0xc06a328  jal         func_1A8CA0
label_246ab4:
    if (ctx->pc == 0x246AB4u) {
        ctx->pc = 0x246AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AB0u;
        // 0x246ab4: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AB8u;
        goto label_246ab8;
    }
    ctx->pc = 0x246AB0u;
    SET_GPR_U32(ctx, 31, 0x246AB8u);
    ctx->pc = 0x246AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246AB0u;
    // 0x246ab4: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x246AB0u, 0x246AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AB8u;
label_246ab8:
    // 0x246ab8: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x246ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_246abc:
    // 0x246abc: 0xc0757d2  jal         func_1D5F48
label_246ac0:
    if (ctx->pc == 0x246AC0u) {
        ctx->pc = 0x246AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246ABCu;
        // 0x246ac0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AC4u;
        goto label_246ac4;
    }
    ctx->pc = 0x246ABCu;
    SET_GPR_U32(ctx, 31, 0x246AC4u);
    ctx->pc = 0x246AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246ABCu;
    // 0x246ac0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x246ABCu, 0x246AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AC4u;
label_246ac4:
    // 0x246ac4: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x246ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_246ac8:
    // 0x246ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246acc:
    // 0x246acc: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x246accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_246ad0:
    // 0x246ad0: 0x40f809  jalr        $v0
label_246ad4:
    if (ctx->pc == 0x246AD4u) {
        ctx->pc = 0x246AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AD0u;
        // 0x246ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246AD8u;
        goto label_246ad8;
    }
    ctx->pc = 0x246AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246AD8u);
        ctx->pc = 0x246AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AD0u;
        // 0x246ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246AD0u, 0x246AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246AD8u;
label_246ad8:
    // 0x246ad8: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x246ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_246adc:
    // 0x246adc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246ae0:
    // 0x246ae0: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x246ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_246ae4:
    // 0x246ae4: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x246ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_246ae8:
    // 0x246ae8: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x246ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_246aec:
    // 0x246aec: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x246aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_246af0:
    // 0x246af0: 0x40f809  jalr        $v0
label_246af4:
    if (ctx->pc == 0x246AF4u) {
        ctx->pc = 0x246AF8u;
        goto label_246af8;
    }
    ctx->pc = 0x246AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246AF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246AF0u, 0x246AF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246AF8u;
label_246af8:
    // 0x246af8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_246afc:
    // 0x246afc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x246afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_246b00:
    // 0x246b00: 0x3e00008  jr          $ra
label_246b04:
    if (ctx->pc == 0x246B04u) {
        ctx->pc = 0x246B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B00u;
        // 0x246b04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B08u;
        goto label_fallthrough_0x246b00;
    }
    ctx->pc = 0x246B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B00u;
        // 0x246b04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x246b00:
    ctx->pc = 0x246B08u;
}
