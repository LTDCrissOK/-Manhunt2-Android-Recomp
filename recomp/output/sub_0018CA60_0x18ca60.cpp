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

// Function: sub_0018CA60
// Address: 0x18ca60 - 0x18cad8
void sub_0018CA60_0x18ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CA60_0x18ca60");
#endif

    switch (ctx->pc) {
        case 0x18ca60u: goto label_18ca60;
        case 0x18ca64u: goto label_18ca64;
        case 0x18ca68u: goto label_18ca68;
        case 0x18ca6cu: goto label_18ca6c;
        case 0x18ca70u: goto label_18ca70;
        case 0x18ca74u: goto label_18ca74;
        case 0x18ca78u: goto label_18ca78;
        case 0x18ca7cu: goto label_18ca7c;
        case 0x18ca80u: goto label_18ca80;
        case 0x18ca84u: goto label_18ca84;
        case 0x18ca88u: goto label_18ca88;
        case 0x18ca8cu: goto label_18ca8c;
        case 0x18ca90u: goto label_18ca90;
        case 0x18ca94u: goto label_18ca94;
        case 0x18ca98u: goto label_18ca98;
        case 0x18ca9cu: goto label_18ca9c;
        case 0x18caa0u: goto label_18caa0;
        case 0x18caa4u: goto label_18caa4;
        case 0x18caa8u: goto label_18caa8;
        case 0x18caacu: goto label_18caac;
        case 0x18cab0u: goto label_18cab0;
        case 0x18cab4u: goto label_18cab4;
        case 0x18cab8u: goto label_18cab8;
        case 0x18cabcu: goto label_18cabc;
        case 0x18cac0u: goto label_18cac0;
        case 0x18cac4u: goto label_18cac4;
        case 0x18cac8u: goto label_18cac8;
        case 0x18caccu: goto label_18cacc;
        case 0x18cad0u: goto label_18cad0;
        case 0x18cad4u: goto label_18cad4;
        default: break;
    }

    ctx->pc = 0x18ca60u;

label_18ca60:
    // 0x18ca60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18ca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18ca64:
    // 0x18ca64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18ca68:
    // 0x18ca68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18ca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18ca6c:
    // 0x18ca6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18ca6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18ca70:
    // 0x18ca70: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_18ca74:
    // 0x18ca74: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_18ca78:
    if (ctx->pc == 0x18CA78u) {
        ctx->pc = 0x18CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA74u;
        // 0x18ca78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CA7Cu;
        goto label_18ca7c;
    }
    ctx->pc = 0x18CA74u;
    {
        const bool branch_taken_0x18ca74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ca74) {
            ctx->pc = 0x18CA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CA74u;
            // 0x18ca78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CACCu;
            goto label_18cacc;
        }
    }
    ctx->pc = 0x18CA7Cu;
label_18ca7c:
    // 0x18ca7c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18ca80:
    // 0x18ca80: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x18ca80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_18ca84:
    // 0x18ca84: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_18ca88:
    if (ctx->pc == 0x18CA88u) {
        ctx->pc = 0x18CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA84u;
        // 0x18ca88: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CA8Cu;
        goto label_18ca8c;
    }
    ctx->pc = 0x18CA84u;
    {
        const bool branch_taken_0x18ca84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA84u;
        // 0x18ca88: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca84) {
            ctx->pc = 0x18CA9Cu;
            goto label_18ca9c;
        }
    }
    ctx->pc = 0x18CA8Cu;
label_18ca8c:
    // 0x18ca8c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18ca90:
    // 0x18ca90: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18ca94:
    // 0x18ca94: 0x40f809  jalr        $v0
label_18ca98:
    if (ctx->pc == 0x18CA98u) {
        ctx->pc = 0x18CA9Cu;
        goto label_18ca9c;
    }
    ctx->pc = 0x18CA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18CA9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CA94u, 0x18CA9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18CA9Cu;
label_18ca9c:
    // 0x18ca9c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18ca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_18caa0:
    // 0x18caa0: 0xc061a16  jal         func_186858
label_18caa4:
    if (ctx->pc == 0x18CAA4u) {
        ctx->pc = 0x18CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAA0u;
        // 0x18caa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CAA8u;
        goto label_18caa8;
    }
    ctx->pc = 0x18CAA0u;
    SET_GPR_U32(ctx, 31, 0x18CAA8u);
    ctx->pc = 0x18CAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CAA0u;
    // 0x18caa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18CAA0u, 0x18CAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CAA8u;
label_18caa8:
    // 0x18caa8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18caa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_18caac:
    // 0x18caac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18caacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18cab0:
    // 0x18cab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18cab4:
    // 0x18cab4: 0xc061a2a  jal         func_1868A8
label_18cab8:
    if (ctx->pc == 0x18CAB8u) {
        ctx->pc = 0x18CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAB4u;
        // 0x18cab8: 0xe4400028  swc1        $f0, 0x28($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CABCu;
        goto label_18cabc;
    }
    ctx->pc = 0x18CAB4u;
    SET_GPR_U32(ctx, 31, 0x18CABCu);
    ctx->pc = 0x18CAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CAB4u;
    // 0x18cab8: 0xe4400028  swc1        $f0, 0x28($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18CAB4u, 0x18CABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CABCu;
label_18cabc:
    // 0x18cabc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18cabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18cac0:
    // 0x18cac0: 0xc071154  jal         func_1C4550
label_18cac4:
    if (ctx->pc == 0x18CAC4u) {
        ctx->pc = 0x18CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAC0u;
        // 0x18cac4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CAC8u;
        goto label_18cac8;
    }
    ctx->pc = 0x18CAC0u;
    SET_GPR_U32(ctx, 31, 0x18CAC8u);
    ctx->pc = 0x18CAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CAC0u;
    // 0x18cac4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4550u, 0x18CAC0u, 0x18CAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CAC8u;
label_18cac8:
    // 0x18cac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18cac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18cacc:
    // 0x18cacc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18caccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18cad0:
    // 0x18cad0: 0x3e00008  jr          $ra
label_18cad4:
    if (ctx->pc == 0x18CAD4u) {
        ctx->pc = 0x18CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAD0u;
        // 0x18cad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CAD8u;
        goto label_fallthrough_0x18cad0;
    }
    ctx->pc = 0x18CAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAD0u;
        // 0x18cad4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18cad0:
    ctx->pc = 0x18CAD8u;
}
