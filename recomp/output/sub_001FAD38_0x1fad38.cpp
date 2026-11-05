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

// Function: sub_001FAD38
// Address: 0x1fad38 - 0x1fade8
void sub_001FAD38_0x1fad38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAD38_0x1fad38");
#endif

    switch (ctx->pc) {
        case 0x1fad98u: goto label_1fad98;
        case 0x1fadacu: goto label_1fadac;
        case 0x1fadb8u: goto label_1fadb8;
        case 0x1fadccu: goto label_1fadcc;
        default: break;
    }

    ctx->pc = 0x1fad38u;

    // 0x1fad38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fad38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fad3c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1fad3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1fad40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fad40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fad44: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fad44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fad48: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x1fad48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fad4c: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1fad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1fad50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fad50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fad54: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1fad54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1fad58: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fad58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fad5c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1fad5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1fad60: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x1fad60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1fad64: 0x8cc20e10  lw          $v0, 0xE10($a2)
    ctx->pc = 0x1fad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3600)));
    // 0x1fad68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAD68u;
    {
        const bool branch_taken_0x1fad68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAD68u;
        // 0x1fad6c: 0x34038e00  ori         $v1, $zero, 0x8E00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36352);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fad68) {
            ctx->pc = 0x1FAD88u;
            goto label_1fad88;
        }
    }
    ctx->pc = 0x1FAD70u;
    // 0x1fad70: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x1fad70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1fad74: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1fad74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1fad78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fad7c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1fad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1fad80: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1fad80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fad84: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1fad84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1fad88:
    // 0x1fad88: 0x90d00e1a  lbu         $s0, 0xE1A($a2)
    ctx->pc = 0x1fad88u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3610)));
    // 0x1fad8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fad8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fad90: 0xc07eab8  jal         func_1FAAE0
    ctx->pc = 0x1FAD90u;
    SET_GPR_U32(ctx, 31, 0x1FAD98u);
    ctx->pc = 0x1FAD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAD90u;
    // 0x1fad94: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAAE0u, 0x1FAD90u, 0x1FAD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAD98u;
label_1fad98:
    // 0x1fad98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fad98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fad9c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1fad9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fada0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fada0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fada4: 0xc07eac6  jal         func_1FAB18
    ctx->pc = 0x1FADA4u;
    SET_GPR_U32(ctx, 31, 0x1FADACu);
    ctx->pc = 0x1FADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FADA4u;
    // 0x1fada8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB18u, 0x1FADA4u, 0x1FADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FADACu;
label_1fadac:
    // 0x1fadac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fadacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fadb0: 0xc07eb3a  jal         func_1FACE8
    ctx->pc = 0x1FADB0u;
    SET_GPR_U32(ctx, 31, 0x1FADB8u);
    ctx->pc = 0x1FADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FADB0u;
    // 0x1fadb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FACE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FACE8u, 0x1FADB0u, 0x1FADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FADB8u;
label_1fadb8:
    // 0x1fadb8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fadb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fadbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FADBCu;
    {
        const bool branch_taken_0x1fadbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADBCu;
        // 0x1fadc0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fadbc) {
            ctx->pc = 0x1FADD0u;
            goto label_1fadd0;
        }
    }
    ctx->pc = 0x1FADC4u;
    // 0x1fadc4: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1FADC4u;
    SET_GPR_U32(ctx, 31, 0x1FADCCu);
    ctx->pc = 0x1FADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FADC4u;
    // 0x1fadc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1FADC4u, 0x1FADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FADCCu;
label_1fadcc:
    // 0x1fadcc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fadccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fadd0:
    // 0x1fadd0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fadd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fadd4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fadd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fadd8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fadd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1faddc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FADDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FADDCu;
        // 0x1fade0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FADDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FADE4u;
    // 0x1fade4: 0x0  nop
    ctx->pc = 0x1fade4u;
    // NOP
    ctx->pc = 0x1fade8u;
}
