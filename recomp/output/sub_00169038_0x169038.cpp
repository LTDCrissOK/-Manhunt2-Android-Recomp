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

// Function: sub_00169038
// Address: 0x169038 - 0x169120
void sub_00169038_0x169038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169038_0x169038");
#endif

    switch (ctx->pc) {
        case 0x169074u: goto label_169074;
        case 0x169080u: goto label_169080;
        case 0x169090u: goto label_169090;
        case 0x1690acu: goto label_1690ac;
        case 0x1690c0u: goto label_1690c0;
        case 0x1690e4u: goto label_1690e4;
        case 0x1690ecu: goto label_1690ec;
        case 0x1690f4u: goto label_1690f4;
        default: break;
    }

    ctx->pc = 0x169038u;

    // 0x169038: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x169038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16903c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16903cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x169040: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x169040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x169044: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x169044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169048: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x169048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16904c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x16904cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169050: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x169050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x169054: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x169054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169058: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x169058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16905c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16905cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169060: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x169060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x169064: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x169064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x169068: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x169068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x16906c: 0xc0f6730  jal         func_3D9CC0
    ctx->pc = 0x16906Cu;
    SET_GPR_U32(ctx, 31, 0x169074u);
    ctx->pc = 0x169070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16906Cu;
    // 0x169070: 0xae25032c  sw          $a1, 0x32C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9CC0u, 0x16906Cu, 0x169074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169074u;
label_169074:
    // 0x169074: 0xa6220320  sh          $v0, 0x320($s1)
    ctx->pc = 0x169074u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 800), (uint16_t)GPR_U32(ctx, 2));
    // 0x169078: 0xc05a31e  jal         func_168C78
    ctx->pc = 0x169078u;
    SET_GPR_U32(ctx, 31, 0x169080u);
    ctx->pc = 0x16907Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169078u;
    // 0x16907c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168C78u, 0x169078u, 0x169080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169080u;
label_169080:
    // 0x169080: 0x96340320  lhu         $s4, 0x320($s1)
    ctx->pc = 0x169080u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x169084: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x169084u;
    {
        const bool branch_taken_0x169084 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x169088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169084u;
        // 0x169088: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169084) {
            ctx->pc = 0x1690D0u;
            goto label_1690d0;
        }
    }
    ctx->pc = 0x16908Cu;
    // 0x16908c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16908cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169090:
    // 0x169090: 0x8e300324  lw          $s0, 0x324($s1)
    ctx->pc = 0x169090u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 804)));
    // 0x169094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169098: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x169098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x16909c: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x16909cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1690a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1690a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1690a4: 0xc05a312  jal         func_168C48
    ctx->pc = 0x1690A4u;
    SET_GPR_U32(ctx, 31, 0x1690ACu);
    ctx->pc = 0x1690A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1690A4u;
    // 0x1690a8: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168C48u, 0x1690A4u, 0x1690ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1690ACu;
label_1690ac:
    // 0x1690ac: 0xae160000  sw          $s6, 0x0($s0)
    ctx->pc = 0x1690acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
    // 0x1690b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1690b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1690b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1690b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1690b8: 0xc0f7124  jal         func_3DC490
    ctx->pc = 0x1690B8u;
    SET_GPR_U32(ctx, 31, 0x1690C0u);
    ctx->pc = 0x1690BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1690B8u;
    // 0x1690bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC490u, 0x1690B8u, 0x1690C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1690C0u;
label_1690c0:
    // 0x1690c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1690c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1690c4: 0x254102b  sltu        $v0, $s2, $s4
    ctx->pc = 0x1690c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1690c8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1690C8u;
    {
        const bool branch_taken_0x1690c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1690CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690C8u;
        // 0x1690cc: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690c8) {
            ctx->pc = 0x169090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169090;
        }
    }
    ctx->pc = 0x1690D0u;
label_1690d0:
    // 0x1690d0: 0x8e220224  lw          $v0, 0x224($s1)
    ctx->pc = 0x1690d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x1690d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1690D4u;
    {
        const bool branch_taken_0x1690d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1690d4) {
            ctx->pc = 0x1690E4u;
            goto label_1690e4;
        }
    }
    ctx->pc = 0x1690DCu;
    // 0x1690dc: 0xc05a448  jal         func_169120
    ctx->pc = 0x1690DCu;
    SET_GPR_U32(ctx, 31, 0x1690E4u);
    ctx->pc = 0x1690E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1690DCu;
    // 0x1690e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169120u, 0x1690DCu, 0x1690E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1690E4u;
label_1690e4:
    // 0x1690e4: 0xc05a488  jal         func_169220
    ctx->pc = 0x1690E4u;
    SET_GPR_U32(ctx, 31, 0x1690ECu);
    ctx->pc = 0x1690E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1690E4u;
    // 0x1690e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169220u, 0x1690E4u, 0x1690ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1690ECu;
label_1690ec:
    // 0x1690ec: 0xc05a4c0  jal         func_169300
    ctx->pc = 0x1690ECu;
    SET_GPR_U32(ctx, 31, 0x1690F4u);
    ctx->pc = 0x1690F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1690ECu;
    // 0x1690f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169300u, 0x1690ECu, 0x1690F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1690F4u;
label_1690f4:
    // 0x1690f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1690f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1690f8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1690f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1690fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1690fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169100: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x169100u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x169104: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x169104u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169108: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x169108u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16910c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x16910cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x169110: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x169110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x169114: 0x3e00008  jr          $ra
    ctx->pc = 0x169114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169114u;
        // 0x169118: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16911Cu;
    // 0x16911c: 0x0  nop
    ctx->pc = 0x16911cu;
    // NOP
    ctx->pc = 0x169120u;
}
