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

// Function: sub_0027AC88
// Address: 0x27ac88 - 0x27b130
void sub_0027AC88_0x27ac88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AC88_0x27ac88");
#endif

    switch (ctx->pc) {
        case 0x27acacu: goto label_27acac;
        case 0x27acb8u: goto label_27acb8;
        case 0x27acc4u: goto label_27acc4;
        case 0x27acd0u: goto label_27acd0;
        case 0x27acdcu: goto label_27acdc;
        case 0x27ace8u: goto label_27ace8;
        case 0x27acf4u: goto label_27acf4;
        case 0x27ad00u: goto label_27ad00;
        case 0x27ad0cu: goto label_27ad0c;
        case 0x27ad18u: goto label_27ad18;
        case 0x27ad24u: goto label_27ad24;
        case 0x27ad30u: goto label_27ad30;
        case 0x27ad3cu: goto label_27ad3c;
        case 0x27ad48u: goto label_27ad48;
        case 0x27ad54u: goto label_27ad54;
        case 0x27ad60u: goto label_27ad60;
        case 0x27ad6cu: goto label_27ad6c;
        case 0x27ad78u: goto label_27ad78;
        case 0x27ad84u: goto label_27ad84;
        case 0x27ad90u: goto label_27ad90;
        case 0x27ad9cu: goto label_27ad9c;
        case 0x27ada8u: goto label_27ada8;
        case 0x27adb4u: goto label_27adb4;
        case 0x27adc0u: goto label_27adc0;
        case 0x27adccu: goto label_27adcc;
        case 0x27add8u: goto label_27add8;
        case 0x27ade4u: goto label_27ade4;
        case 0x27adf0u: goto label_27adf0;
        case 0x27adfcu: goto label_27adfc;
        case 0x27ae08u: goto label_27ae08;
        case 0x27ae14u: goto label_27ae14;
        case 0x27ae20u: goto label_27ae20;
        case 0x27ae2cu: goto label_27ae2c;
        case 0x27ae38u: goto label_27ae38;
        case 0x27ae44u: goto label_27ae44;
        case 0x27ae50u: goto label_27ae50;
        case 0x27ae5cu: goto label_27ae5c;
        case 0x27ae68u: goto label_27ae68;
        case 0x27ae74u: goto label_27ae74;
        case 0x27ae80u: goto label_27ae80;
        case 0x27ae8cu: goto label_27ae8c;
        case 0x27ae98u: goto label_27ae98;
        case 0x27aea4u: goto label_27aea4;
        case 0x27aeb0u: goto label_27aeb0;
        case 0x27aebcu: goto label_27aebc;
        case 0x27aec8u: goto label_27aec8;
        case 0x27aed4u: goto label_27aed4;
        case 0x27aee0u: goto label_27aee0;
        case 0x27aeecu: goto label_27aeec;
        case 0x27aef8u: goto label_27aef8;
        case 0x27af04u: goto label_27af04;
        case 0x27af10u: goto label_27af10;
        case 0x27af1cu: goto label_27af1c;
        case 0x27af28u: goto label_27af28;
        case 0x27af34u: goto label_27af34;
        case 0x27af40u: goto label_27af40;
        case 0x27af4cu: goto label_27af4c;
        case 0x27af58u: goto label_27af58;
        case 0x27af64u: goto label_27af64;
        case 0x27af70u: goto label_27af70;
        case 0x27af7cu: goto label_27af7c;
        case 0x27af88u: goto label_27af88;
        case 0x27af94u: goto label_27af94;
        case 0x27afa0u: goto label_27afa0;
        case 0x27afacu: goto label_27afac;
        case 0x27afb8u: goto label_27afb8;
        case 0x27afc4u: goto label_27afc4;
        case 0x27afd0u: goto label_27afd0;
        case 0x27afdcu: goto label_27afdc;
        case 0x27afe8u: goto label_27afe8;
        case 0x27aff4u: goto label_27aff4;
        case 0x27b000u: goto label_27b000;
        case 0x27b00cu: goto label_27b00c;
        case 0x27b018u: goto label_27b018;
        case 0x27b024u: goto label_27b024;
        case 0x27b030u: goto label_27b030;
        case 0x27b03cu: goto label_27b03c;
        case 0x27b048u: goto label_27b048;
        case 0x27b054u: goto label_27b054;
        case 0x27b060u: goto label_27b060;
        case 0x27b06cu: goto label_27b06c;
        case 0x27b078u: goto label_27b078;
        case 0x27b084u: goto label_27b084;
        case 0x27b090u: goto label_27b090;
        case 0x27b09cu: goto label_27b09c;
        case 0x27b0a8u: goto label_27b0a8;
        case 0x27b0b4u: goto label_27b0b4;
        case 0x27b0c0u: goto label_27b0c0;
        case 0x27b0ccu: goto label_27b0cc;
        case 0x27b0d8u: goto label_27b0d8;
        case 0x27b0e4u: goto label_27b0e4;
        case 0x27b0f0u: goto label_27b0f0;
        case 0x27b0fcu: goto label_27b0fc;
        case 0x27b108u: goto label_27b108;
        case 0x27b114u: goto label_27b114;
        case 0x27b120u: goto label_27b120;
        default: break;
    }

    ctx->pc = 0x27ac88u;

    // 0x27ac88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27ac88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27ac8c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x27ac8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27ac90: 0x14a20123  bne         $a1, $v0, . + 4 + (0x123 << 2)
    ctx->pc = 0x27AC90u;
    {
        const bool branch_taken_0x27ac90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x27AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC90u;
        // 0x27ac94: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac90) {
            ctx->pc = 0x27B120u;
            goto label_27b120;
        }
    }
    ctx->pc = 0x27AC98u;
    // 0x27ac98: 0x10800122  beqz        $a0, . + 4 + (0x122 << 2)
    ctx->pc = 0x27AC98u;
    {
        const bool branch_taken_0x27ac98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC98u;
        // 0x27ac9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac98) {
            ctx->pc = 0x27B124u;
            goto label_27b124;
        }
    }
    ctx->pc = 0x27ACA0u;
    // 0x27aca0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27aca4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27ACA4u;
    SET_GPR_U32(ctx, 31, 0x27ACACu);
    ctx->pc = 0x27ACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ACA4u;
    // 0x27aca8: 0x2484edc0  addiu       $a0, $a0, -0x1240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27ACA4u, 0x27ACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACACu;
label_27acac:
    // 0x27acac: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27acacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27acb0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27ACB0u;
    SET_GPR_U32(ctx, 31, 0x27ACB8u);
    ctx->pc = 0x27ACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ACB0u;
    // 0x27acb4: 0x2484edc8  addiu       $a0, $a0, -0x1238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27ACB0u, 0x27ACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACB8u;
label_27acb8:
    // 0x27acb8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27acbc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27ACBCu;
    SET_GPR_U32(ctx, 31, 0x27ACC4u);
    ctx->pc = 0x27ACC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ACBCu;
    // 0x27acc0: 0x2484edd0  addiu       $a0, $a0, -0x1230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27ACBCu, 0x27ACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACC4u;
label_27acc4:
    // 0x27acc4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27acc8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27ACC8u;
    SET_GPR_U32(ctx, 31, 0x27ACD0u);
    ctx->pc = 0x27ACCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ACC8u;
    // 0x27accc: 0x2484edd8  addiu       $a0, $a0, -0x1228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27ACC8u, 0x27ACD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACD0u;
label_27acd0:
    // 0x27acd0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27acd4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27ACD4u;
    SET_GPR_U32(ctx, 31, 0x27ACDCu);
    ctx->pc = 0x27ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ACD4u;
    // 0x27acd8: 0x2484ede0  addiu       $a0, $a0, -0x1220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27ACD4u, 0x27ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACDCu;
label_27acdc:
    // 0x27acdc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ace0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27ACE0u;
    SET_GPR_U32(ctx, 31, 0x27ACE8u);
    ctx->pc = 0x27ACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ACE0u;
    // 0x27ace4: 0x2484ede8  addiu       $a0, $a0, -0x1218 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27ACE0u, 0x27ACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACE8u;
label_27ace8:
    // 0x27ace8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27acec: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27ACECu;
    SET_GPR_U32(ctx, 31, 0x27ACF4u);
    ctx->pc = 0x27ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ACECu;
    // 0x27acf0: 0x2484edf0  addiu       $a0, $a0, -0x1210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27ACECu, 0x27ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACF4u;
label_27acf4:
    // 0x27acf4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27acf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27acf8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27ACF8u;
    SET_GPR_U32(ctx, 31, 0x27AD00u);
    ctx->pc = 0x27ACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ACF8u;
    // 0x27acfc: 0x2484edf8  addiu       $a0, $a0, -0x1208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27ACF8u, 0x27AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD00u;
label_27ad00:
    // 0x27ad00: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ad04: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AD04u;
    SET_GPR_U32(ctx, 31, 0x27AD0Cu);
    ctx->pc = 0x27AD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD04u;
    // 0x27ad08: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AD04u, 0x27AD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD0Cu;
label_27ad0c:
    // 0x27ad0c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ad10: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AD10u;
    SET_GPR_U32(ctx, 31, 0x27AD18u);
    ctx->pc = 0x27AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD10u;
    // 0x27ad14: 0x2484ee08  addiu       $a0, $a0, -0x11F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AD10u, 0x27AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD18u;
label_27ad18:
    // 0x27ad18: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ad1c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AD1Cu;
    SET_GPR_U32(ctx, 31, 0x27AD24u);
    ctx->pc = 0x27AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD1Cu;
    // 0x27ad20: 0x2484ee10  addiu       $a0, $a0, -0x11F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AD1Cu, 0x27AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD24u;
label_27ad24:
    // 0x27ad24: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ad24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ad28: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AD28u;
    SET_GPR_U32(ctx, 31, 0x27AD30u);
    ctx->pc = 0x27AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD28u;
    // 0x27ad2c: 0x2484ee18  addiu       $a0, $a0, -0x11E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AD28u, 0x27AD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD30u;
label_27ad30:
    // 0x27ad30: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ad30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ad34: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AD34u;
    SET_GPR_U32(ctx, 31, 0x27AD3Cu);
    ctx->pc = 0x27AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD34u;
    // 0x27ad38: 0x2484ee20  addiu       $a0, $a0, -0x11E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AD34u, 0x27AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD3Cu;
label_27ad3c:
    // 0x27ad3c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ad40: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AD40u;
    SET_GPR_U32(ctx, 31, 0x27AD48u);
    ctx->pc = 0x27AD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD40u;
    // 0x27ad44: 0x2484ee28  addiu       $a0, $a0, -0x11D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AD40u, 0x27AD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD48u;
label_27ad48:
    // 0x27ad48: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ad48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ad4c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AD4Cu;
    SET_GPR_U32(ctx, 31, 0x27AD54u);
    ctx->pc = 0x27AD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD4Cu;
    // 0x27ad50: 0x2484ee30  addiu       $a0, $a0, -0x11D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AD4Cu, 0x27AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD54u;
label_27ad54:
    // 0x27ad54: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ad58: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AD58u;
    SET_GPR_U32(ctx, 31, 0x27AD60u);
    ctx->pc = 0x27AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD58u;
    // 0x27ad5c: 0x2484ee38  addiu       $a0, $a0, -0x11C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AD58u, 0x27AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD60u;
label_27ad60:
    // 0x27ad60: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ad60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ad64: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AD64u;
    SET_GPR_U32(ctx, 31, 0x27AD6Cu);
    ctx->pc = 0x27AD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD64u;
    // 0x27ad68: 0x2484ee40  addiu       $a0, $a0, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AD64u, 0x27AD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD6Cu;
label_27ad6c:
    // 0x27ad6c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ad70: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AD70u;
    SET_GPR_U32(ctx, 31, 0x27AD78u);
    ctx->pc = 0x27AD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD70u;
    // 0x27ad74: 0x2484ee48  addiu       $a0, $a0, -0x11B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AD70u, 0x27AD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD78u;
label_27ad78:
    // 0x27ad78: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ad78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ad7c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AD7Cu;
    SET_GPR_U32(ctx, 31, 0x27AD84u);
    ctx->pc = 0x27AD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD7Cu;
    // 0x27ad80: 0x2484ee50  addiu       $a0, $a0, -0x11B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AD7Cu, 0x27AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD84u;
label_27ad84:
    // 0x27ad84: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ad84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ad88: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AD88u;
    SET_GPR_U32(ctx, 31, 0x27AD90u);
    ctx->pc = 0x27AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD88u;
    // 0x27ad8c: 0x2484ee58  addiu       $a0, $a0, -0x11A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AD88u, 0x27AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD90u;
label_27ad90:
    // 0x27ad90: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ad94: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AD94u;
    SET_GPR_U32(ctx, 31, 0x27AD9Cu);
    ctx->pc = 0x27AD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD94u;
    // 0x27ad98: 0x2484ee60  addiu       $a0, $a0, -0x11A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AD94u, 0x27AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD9Cu;
label_27ad9c:
    // 0x27ad9c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ad9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ada0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27ADA0u;
    SET_GPR_U32(ctx, 31, 0x27ADA8u);
    ctx->pc = 0x27ADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ADA0u;
    // 0x27ada4: 0x2484ee68  addiu       $a0, $a0, -0x1198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27ADA0u, 0x27ADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADA8u;
label_27ada8:
    // 0x27ada8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ada8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27adac: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27ADACu;
    SET_GPR_U32(ctx, 31, 0x27ADB4u);
    ctx->pc = 0x27ADB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ADACu;
    // 0x27adb0: 0x2484ee70  addiu       $a0, $a0, -0x1190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27ADACu, 0x27ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADB4u;
label_27adb4:
    // 0x27adb4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27adb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27adb8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27ADB8u;
    SET_GPR_U32(ctx, 31, 0x27ADC0u);
    ctx->pc = 0x27ADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ADB8u;
    // 0x27adbc: 0x2484ee78  addiu       $a0, $a0, -0x1188 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27ADB8u, 0x27ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADC0u;
label_27adc0:
    // 0x27adc0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27adc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27adc4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27ADC4u;
    SET_GPR_U32(ctx, 31, 0x27ADCCu);
    ctx->pc = 0x27ADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ADC4u;
    // 0x27adc8: 0x2484ee80  addiu       $a0, $a0, -0x1180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27ADC4u, 0x27ADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADCCu;
label_27adcc:
    // 0x27adcc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27adccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27add0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27ADD0u;
    SET_GPR_U32(ctx, 31, 0x27ADD8u);
    ctx->pc = 0x27ADD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ADD0u;
    // 0x27add4: 0x2484ee88  addiu       $a0, $a0, -0x1178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27ADD0u, 0x27ADD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADD8u;
label_27add8:
    // 0x27add8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27add8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27addc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27ADDCu;
    SET_GPR_U32(ctx, 31, 0x27ADE4u);
    ctx->pc = 0x27ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ADDCu;
    // 0x27ade0: 0x2484ee90  addiu       $a0, $a0, -0x1170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27ADDCu, 0x27ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADE4u;
label_27ade4:
    // 0x27ade4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ade8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27ADE8u;
    SET_GPR_U32(ctx, 31, 0x27ADF0u);
    ctx->pc = 0x27ADECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ADE8u;
    // 0x27adec: 0x2484ee98  addiu       $a0, $a0, -0x1168 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27ADE8u, 0x27ADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADF0u;
label_27adf0:
    // 0x27adf0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27adf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27adf4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27ADF4u;
    SET_GPR_U32(ctx, 31, 0x27ADFCu);
    ctx->pc = 0x27ADF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ADF4u;
    // 0x27adf8: 0x2484eea0  addiu       $a0, $a0, -0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27ADF4u, 0x27ADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADFCu;
label_27adfc:
    // 0x27adfc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27adfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ae00: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AE00u;
    SET_GPR_U32(ctx, 31, 0x27AE08u);
    ctx->pc = 0x27AE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AE00u;
    // 0x27ae04: 0x2484eea8  addiu       $a0, $a0, -0x1158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AE00u, 0x27AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE08u;
label_27ae08:
    // 0x27ae08: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ae08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ae0c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AE0Cu;
    SET_GPR_U32(ctx, 31, 0x27AE14u);
    ctx->pc = 0x27AE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AE0Cu;
    // 0x27ae10: 0x2484eeb0  addiu       $a0, $a0, -0x1150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AE0Cu, 0x27AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE14u;
label_27ae14:
    // 0x27ae14: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ae14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ae18: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AE18u;
    SET_GPR_U32(ctx, 31, 0x27AE20u);
    ctx->pc = 0x27AE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AE18u;
    // 0x27ae1c: 0x2484eeb8  addiu       $a0, $a0, -0x1148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AE18u, 0x27AE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE20u;
label_27ae20:
    // 0x27ae20: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ae24: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AE24u;
    SET_GPR_U32(ctx, 31, 0x27AE2Cu);
    ctx->pc = 0x27AE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AE24u;
    // 0x27ae28: 0x2484eec0  addiu       $a0, $a0, -0x1140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AE24u, 0x27AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE2Cu;
label_27ae2c:
    // 0x27ae2c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ae30: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AE30u;
    SET_GPR_U32(ctx, 31, 0x27AE38u);
    ctx->pc = 0x27AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AE30u;
    // 0x27ae34: 0x2484eec8  addiu       $a0, $a0, -0x1138 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AE30u, 0x27AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE38u;
label_27ae38:
    // 0x27ae38: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ae38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ae3c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AE3Cu;
    SET_GPR_U32(ctx, 31, 0x27AE44u);
    ctx->pc = 0x27AE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AE3Cu;
    // 0x27ae40: 0x2484eed0  addiu       $a0, $a0, -0x1130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AE3Cu, 0x27AE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE44u;
label_27ae44:
    // 0x27ae44: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ae44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ae48: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AE48u;
    SET_GPR_U32(ctx, 31, 0x27AE50u);
    ctx->pc = 0x27AE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AE48u;
    // 0x27ae4c: 0x2484eed8  addiu       $a0, $a0, -0x1128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AE48u, 0x27AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE50u;
label_27ae50:
    // 0x27ae50: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ae50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ae54: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AE54u;
    SET_GPR_U32(ctx, 31, 0x27AE5Cu);
    ctx->pc = 0x27AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AE54u;
    // 0x27ae58: 0x2484eee0  addiu       $a0, $a0, -0x1120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AE54u, 0x27AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE5Cu;
label_27ae5c:
    // 0x27ae5c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ae60: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AE60u;
    SET_GPR_U32(ctx, 31, 0x27AE68u);
    ctx->pc = 0x27AE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AE60u;
    // 0x27ae64: 0x2484eee8  addiu       $a0, $a0, -0x1118 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AE60u, 0x27AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE68u;
label_27ae68:
    // 0x27ae68: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ae6c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AE6Cu;
    SET_GPR_U32(ctx, 31, 0x27AE74u);
    ctx->pc = 0x27AE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AE6Cu;
    // 0x27ae70: 0x2484eef0  addiu       $a0, $a0, -0x1110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AE6Cu, 0x27AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE74u;
label_27ae74:
    // 0x27ae74: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ae78: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AE78u;
    SET_GPR_U32(ctx, 31, 0x27AE80u);
    ctx->pc = 0x27AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AE78u;
    // 0x27ae7c: 0x2484eef8  addiu       $a0, $a0, -0x1108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AE78u, 0x27AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE80u;
label_27ae80:
    // 0x27ae80: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ae84: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AE84u;
    SET_GPR_U32(ctx, 31, 0x27AE8Cu);
    ctx->pc = 0x27AE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AE84u;
    // 0x27ae88: 0x2484ef00  addiu       $a0, $a0, -0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AE84u, 0x27AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE8Cu;
label_27ae8c:
    // 0x27ae8c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ae90: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AE90u;
    SET_GPR_U32(ctx, 31, 0x27AE98u);
    ctx->pc = 0x27AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AE90u;
    // 0x27ae94: 0x2484ef08  addiu       $a0, $a0, -0x10F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AE90u, 0x27AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE98u;
label_27ae98:
    // 0x27ae98: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ae98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ae9c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AE9Cu;
    SET_GPR_U32(ctx, 31, 0x27AEA4u);
    ctx->pc = 0x27AEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AE9Cu;
    // 0x27aea0: 0x2484ef10  addiu       $a0, $a0, -0x10F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AE9Cu, 0x27AEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEA4u;
label_27aea4:
    // 0x27aea4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27aea8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AEA8u;
    SET_GPR_U32(ctx, 31, 0x27AEB0u);
    ctx->pc = 0x27AEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AEA8u;
    // 0x27aeac: 0x2484ef18  addiu       $a0, $a0, -0x10E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AEA8u, 0x27AEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEB0u;
label_27aeb0:
    // 0x27aeb0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27aeb4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AEB4u;
    SET_GPR_U32(ctx, 31, 0x27AEBCu);
    ctx->pc = 0x27AEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AEB4u;
    // 0x27aeb8: 0x2484ef20  addiu       $a0, $a0, -0x10E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AEB4u, 0x27AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEBCu;
label_27aebc:
    // 0x27aebc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27aebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27aec0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AEC0u;
    SET_GPR_U32(ctx, 31, 0x27AEC8u);
    ctx->pc = 0x27AEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AEC0u;
    // 0x27aec4: 0x2484ef28  addiu       $a0, $a0, -0x10D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AEC0u, 0x27AEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEC8u;
label_27aec8:
    // 0x27aec8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27aec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27aecc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AECCu;
    SET_GPR_U32(ctx, 31, 0x27AED4u);
    ctx->pc = 0x27AED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AECCu;
    // 0x27aed0: 0x2484ef30  addiu       $a0, $a0, -0x10D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AECCu, 0x27AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AED4u;
label_27aed4:
    // 0x27aed4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27aed8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AED8u;
    SET_GPR_U32(ctx, 31, 0x27AEE0u);
    ctx->pc = 0x27AEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AED8u;
    // 0x27aedc: 0x2484ef38  addiu       $a0, $a0, -0x10C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AED8u, 0x27AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEE0u;
label_27aee0:
    // 0x27aee0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27aee4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AEE4u;
    SET_GPR_U32(ctx, 31, 0x27AEECu);
    ctx->pc = 0x27AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AEE4u;
    // 0x27aee8: 0x2484ef40  addiu       $a0, $a0, -0x10C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AEE4u, 0x27AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEECu;
label_27aeec:
    // 0x27aeec: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27aeecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27aef0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AEF0u;
    SET_GPR_U32(ctx, 31, 0x27AEF8u);
    ctx->pc = 0x27AEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AEF0u;
    // 0x27aef4: 0x2484ef48  addiu       $a0, $a0, -0x10B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AEF0u, 0x27AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEF8u;
label_27aef8:
    // 0x27aef8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27aefc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AEFCu;
    SET_GPR_U32(ctx, 31, 0x27AF04u);
    ctx->pc = 0x27AF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AEFCu;
    // 0x27af00: 0x2484ef50  addiu       $a0, $a0, -0x10B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AEFCu, 0x27AF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF04u;
label_27af04:
    // 0x27af04: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27af04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27af08: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AF08u;
    SET_GPR_U32(ctx, 31, 0x27AF10u);
    ctx->pc = 0x27AF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AF08u;
    // 0x27af0c: 0x2484ef58  addiu       $a0, $a0, -0x10A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AF08u, 0x27AF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF10u;
label_27af10:
    // 0x27af10: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27af10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27af14: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AF14u;
    SET_GPR_U32(ctx, 31, 0x27AF1Cu);
    ctx->pc = 0x27AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AF14u;
    // 0x27af18: 0x2484ef60  addiu       $a0, $a0, -0x10A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AF14u, 0x27AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF1Cu;
label_27af1c:
    // 0x27af1c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27af1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27af20: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AF20u;
    SET_GPR_U32(ctx, 31, 0x27AF28u);
    ctx->pc = 0x27AF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AF20u;
    // 0x27af24: 0x2484ef68  addiu       $a0, $a0, -0x1098 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AF20u, 0x27AF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF28u;
label_27af28:
    // 0x27af28: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27af28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27af2c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AF2Cu;
    SET_GPR_U32(ctx, 31, 0x27AF34u);
    ctx->pc = 0x27AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AF2Cu;
    // 0x27af30: 0x2484ef70  addiu       $a0, $a0, -0x1090 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AF2Cu, 0x27AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF34u;
label_27af34:
    // 0x27af34: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27af34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27af38: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AF38u;
    SET_GPR_U32(ctx, 31, 0x27AF40u);
    ctx->pc = 0x27AF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AF38u;
    // 0x27af3c: 0x2484ef78  addiu       $a0, $a0, -0x1088 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AF38u, 0x27AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF40u;
label_27af40:
    // 0x27af40: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27af40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27af44: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AF44u;
    SET_GPR_U32(ctx, 31, 0x27AF4Cu);
    ctx->pc = 0x27AF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AF44u;
    // 0x27af48: 0x2484ef80  addiu       $a0, $a0, -0x1080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AF44u, 0x27AF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF4Cu;
label_27af4c:
    // 0x27af4c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27af4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27af50: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AF50u;
    SET_GPR_U32(ctx, 31, 0x27AF58u);
    ctx->pc = 0x27AF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AF50u;
    // 0x27af54: 0x2484ef88  addiu       $a0, $a0, -0x1078 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AF50u, 0x27AF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF58u;
label_27af58:
    // 0x27af58: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27af58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27af5c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AF5Cu;
    SET_GPR_U32(ctx, 31, 0x27AF64u);
    ctx->pc = 0x27AF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AF5Cu;
    // 0x27af60: 0x2484ef90  addiu       $a0, $a0, -0x1070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AF5Cu, 0x27AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF64u;
label_27af64:
    // 0x27af64: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27af64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27af68: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AF68u;
    SET_GPR_U32(ctx, 31, 0x27AF70u);
    ctx->pc = 0x27AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AF68u;
    // 0x27af6c: 0x2484ef98  addiu       $a0, $a0, -0x1068 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AF68u, 0x27AF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF70u;
label_27af70:
    // 0x27af70: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27af70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27af74: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AF74u;
    SET_GPR_U32(ctx, 31, 0x27AF7Cu);
    ctx->pc = 0x27AF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AF74u;
    // 0x27af78: 0x2484efa0  addiu       $a0, $a0, -0x1060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AF74u, 0x27AF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF7Cu;
label_27af7c:
    // 0x27af7c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27af7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27af80: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AF80u;
    SET_GPR_U32(ctx, 31, 0x27AF88u);
    ctx->pc = 0x27AF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AF80u;
    // 0x27af84: 0x2484efa8  addiu       $a0, $a0, -0x1058 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AF80u, 0x27AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF88u;
label_27af88:
    // 0x27af88: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27af88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27af8c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AF8Cu;
    SET_GPR_U32(ctx, 31, 0x27AF94u);
    ctx->pc = 0x27AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AF8Cu;
    // 0x27af90: 0x2484efb0  addiu       $a0, $a0, -0x1050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AF8Cu, 0x27AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF94u;
label_27af94:
    // 0x27af94: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27af94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27af98: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AF98u;
    SET_GPR_U32(ctx, 31, 0x27AFA0u);
    ctx->pc = 0x27AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AF98u;
    // 0x27af9c: 0x2484efb8  addiu       $a0, $a0, -0x1048 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AF98u, 0x27AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFA0u;
label_27afa0:
    // 0x27afa0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27afa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27afa4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AFA4u;
    SET_GPR_U32(ctx, 31, 0x27AFACu);
    ctx->pc = 0x27AFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AFA4u;
    // 0x27afa8: 0x2484efc0  addiu       $a0, $a0, -0x1040 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AFA4u, 0x27AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFACu;
label_27afac:
    // 0x27afac: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27afacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27afb0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AFB0u;
    SET_GPR_U32(ctx, 31, 0x27AFB8u);
    ctx->pc = 0x27AFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AFB0u;
    // 0x27afb4: 0x2484efc8  addiu       $a0, $a0, -0x1038 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AFB0u, 0x27AFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFB8u;
label_27afb8:
    // 0x27afb8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27afb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27afbc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AFBCu;
    SET_GPR_U32(ctx, 31, 0x27AFC4u);
    ctx->pc = 0x27AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AFBCu;
    // 0x27afc0: 0x2484efd0  addiu       $a0, $a0, -0x1030 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AFBCu, 0x27AFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFC4u;
label_27afc4:
    // 0x27afc4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27afc8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AFC8u;
    SET_GPR_U32(ctx, 31, 0x27AFD0u);
    ctx->pc = 0x27AFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AFC8u;
    // 0x27afcc: 0x2484efd8  addiu       $a0, $a0, -0x1028 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AFC8u, 0x27AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFD0u;
label_27afd0:
    // 0x27afd0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27afd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27afd4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AFD4u;
    SET_GPR_U32(ctx, 31, 0x27AFDCu);
    ctx->pc = 0x27AFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AFD4u;
    // 0x27afd8: 0x2484efe0  addiu       $a0, $a0, -0x1020 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AFD4u, 0x27AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFDCu;
label_27afdc:
    // 0x27afdc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27afe0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AFE0u;
    SET_GPR_U32(ctx, 31, 0x27AFE8u);
    ctx->pc = 0x27AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AFE0u;
    // 0x27afe4: 0x2484efe8  addiu       $a0, $a0, -0x1018 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AFE0u, 0x27AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFE8u;
label_27afe8:
    // 0x27afe8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27afec: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AFECu;
    SET_GPR_U32(ctx, 31, 0x27AFF4u);
    ctx->pc = 0x27AFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AFECu;
    // 0x27aff0: 0x2484eff0  addiu       $a0, $a0, -0x1010 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AFECu, 0x27AFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFF4u;
label_27aff4:
    // 0x27aff4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27aff8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27AFF8u;
    SET_GPR_U32(ctx, 31, 0x27B000u);
    ctx->pc = 0x27AFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AFF8u;
    // 0x27affc: 0x2484eff8  addiu       $a0, $a0, -0x1008 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27AFF8u, 0x27B000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B000u;
label_27b000:
    // 0x27b000: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b004: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B004u;
    SET_GPR_U32(ctx, 31, 0x27B00Cu);
    ctx->pc = 0x27B008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B004u;
    // 0x27b008: 0x2484f000  addiu       $a0, $a0, -0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B004u, 0x27B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B00Cu;
label_27b00c:
    // 0x27b00c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b010: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B010u;
    SET_GPR_U32(ctx, 31, 0x27B018u);
    ctx->pc = 0x27B014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B010u;
    // 0x27b014: 0x2484f008  addiu       $a0, $a0, -0xFF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B010u, 0x27B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B018u;
label_27b018:
    // 0x27b018: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b01c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B01Cu;
    SET_GPR_U32(ctx, 31, 0x27B024u);
    ctx->pc = 0x27B020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B01Cu;
    // 0x27b020: 0x2484f010  addiu       $a0, $a0, -0xFF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B01Cu, 0x27B024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B024u;
label_27b024:
    // 0x27b024: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b028: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B028u;
    SET_GPR_U32(ctx, 31, 0x27B030u);
    ctx->pc = 0x27B02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B028u;
    // 0x27b02c: 0x2484f018  addiu       $a0, $a0, -0xFE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B028u, 0x27B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B030u;
label_27b030:
    // 0x27b030: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b034: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B034u;
    SET_GPR_U32(ctx, 31, 0x27B03Cu);
    ctx->pc = 0x27B038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B034u;
    // 0x27b038: 0x2484f020  addiu       $a0, $a0, -0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B034u, 0x27B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B03Cu;
label_27b03c:
    // 0x27b03c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b03cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b040: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B040u;
    SET_GPR_U32(ctx, 31, 0x27B048u);
    ctx->pc = 0x27B044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B040u;
    // 0x27b044: 0x2484f028  addiu       $a0, $a0, -0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B040u, 0x27B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B048u;
label_27b048:
    // 0x27b048: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b04c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B04Cu;
    SET_GPR_U32(ctx, 31, 0x27B054u);
    ctx->pc = 0x27B050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B04Cu;
    // 0x27b050: 0x2484f030  addiu       $a0, $a0, -0xFD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B04Cu, 0x27B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B054u;
label_27b054:
    // 0x27b054: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b058: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B058u;
    SET_GPR_U32(ctx, 31, 0x27B060u);
    ctx->pc = 0x27B05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B058u;
    // 0x27b05c: 0x2484f038  addiu       $a0, $a0, -0xFC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B058u, 0x27B060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B060u;
label_27b060:
    // 0x27b060: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b064: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B064u;
    SET_GPR_U32(ctx, 31, 0x27B06Cu);
    ctx->pc = 0x27B068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B064u;
    // 0x27b068: 0x2484f040  addiu       $a0, $a0, -0xFC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B064u, 0x27B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B06Cu;
label_27b06c:
    // 0x27b06c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b070: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B070u;
    SET_GPR_U32(ctx, 31, 0x27B078u);
    ctx->pc = 0x27B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B070u;
    // 0x27b074: 0x2484f048  addiu       $a0, $a0, -0xFB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B070u, 0x27B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B078u;
label_27b078:
    // 0x27b078: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b07c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B07Cu;
    SET_GPR_U32(ctx, 31, 0x27B084u);
    ctx->pc = 0x27B080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B07Cu;
    // 0x27b080: 0x2484f050  addiu       $a0, $a0, -0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B07Cu, 0x27B084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B084u;
label_27b084:
    // 0x27b084: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b088: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B088u;
    SET_GPR_U32(ctx, 31, 0x27B090u);
    ctx->pc = 0x27B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B088u;
    // 0x27b08c: 0x2484f058  addiu       $a0, $a0, -0xFA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B088u, 0x27B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B090u;
label_27b090:
    // 0x27b090: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b094: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B094u;
    SET_GPR_U32(ctx, 31, 0x27B09Cu);
    ctx->pc = 0x27B098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B094u;
    // 0x27b098: 0x2484f060  addiu       $a0, $a0, -0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B094u, 0x27B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B09Cu;
label_27b09c:
    // 0x27b09c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b0a0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B0A0u;
    SET_GPR_U32(ctx, 31, 0x27B0A8u);
    ctx->pc = 0x27B0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B0A0u;
    // 0x27b0a4: 0x2484f068  addiu       $a0, $a0, -0xF98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B0A0u, 0x27B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0A8u;
label_27b0a8:
    // 0x27b0a8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b0ac: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B0ACu;
    SET_GPR_U32(ctx, 31, 0x27B0B4u);
    ctx->pc = 0x27B0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B0ACu;
    // 0x27b0b0: 0x2484f070  addiu       $a0, $a0, -0xF90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B0ACu, 0x27B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0B4u;
label_27b0b4:
    // 0x27b0b4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b0b8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B0B8u;
    SET_GPR_U32(ctx, 31, 0x27B0C0u);
    ctx->pc = 0x27B0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B0B8u;
    // 0x27b0bc: 0x2484f078  addiu       $a0, $a0, -0xF88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B0B8u, 0x27B0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0C0u;
label_27b0c0:
    // 0x27b0c0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b0c4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B0C4u;
    SET_GPR_U32(ctx, 31, 0x27B0CCu);
    ctx->pc = 0x27B0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B0C4u;
    // 0x27b0c8: 0x2484f080  addiu       $a0, $a0, -0xF80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B0C4u, 0x27B0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0CCu;
label_27b0cc:
    // 0x27b0cc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b0d0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B0D0u;
    SET_GPR_U32(ctx, 31, 0x27B0D8u);
    ctx->pc = 0x27B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B0D0u;
    // 0x27b0d4: 0x2484f088  addiu       $a0, $a0, -0xF78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B0D0u, 0x27B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0D8u;
label_27b0d8:
    // 0x27b0d8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b0dc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B0DCu;
    SET_GPR_U32(ctx, 31, 0x27B0E4u);
    ctx->pc = 0x27B0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B0DCu;
    // 0x27b0e0: 0x2484f090  addiu       $a0, $a0, -0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B0DCu, 0x27B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0E4u;
label_27b0e4:
    // 0x27b0e4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b0e8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B0E8u;
    SET_GPR_U32(ctx, 31, 0x27B0F0u);
    ctx->pc = 0x27B0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B0E8u;
    // 0x27b0ec: 0x2484f098  addiu       $a0, $a0, -0xF68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B0E8u, 0x27B0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0F0u;
label_27b0f0:
    // 0x27b0f0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b0f4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B0F4u;
    SET_GPR_U32(ctx, 31, 0x27B0FCu);
    ctx->pc = 0x27B0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B0F4u;
    // 0x27b0f8: 0x2484f0a0  addiu       $a0, $a0, -0xF60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B0F4u, 0x27B0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0FCu;
label_27b0fc:
    // 0x27b0fc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b100: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B100u;
    SET_GPR_U32(ctx, 31, 0x27B108u);
    ctx->pc = 0x27B104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B100u;
    // 0x27b104: 0x2484f0a8  addiu       $a0, $a0, -0xF58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B100u, 0x27B108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B108u;
label_27b108:
    // 0x27b108: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b10c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B10Cu;
    SET_GPR_U32(ctx, 31, 0x27B114u);
    ctx->pc = 0x27B110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B10Cu;
    // 0x27b110: 0x2484f0b0  addiu       $a0, $a0, -0xF50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B10Cu, 0x27B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B114u;
label_27b114:
    // 0x27b114: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27b114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27b118: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27B118u;
    SET_GPR_U32(ctx, 31, 0x27B120u);
    ctx->pc = 0x27B11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B118u;
    // 0x27b11c: 0x2484f0b8  addiu       $a0, $a0, -0xF48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27B118u, 0x27B120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B120u;
label_27b120:
    // 0x27b120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27b120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27b124:
    // 0x27b124: 0x3e00008  jr          $ra
    ctx->pc = 0x27B124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B124u;
        // 0x27b128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B12Cu;
    // 0x27b12c: 0x0  nop
    ctx->pc = 0x27b12cu;
    // NOP
    ctx->pc = 0x27b130u;
}
