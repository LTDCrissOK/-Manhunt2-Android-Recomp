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

// Function: sub_0023AC48
// Address: 0x23ac48 - 0x23aeb0
void sub_0023AC48_0x23ac48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AC48_0x23ac48");
#endif

    switch (ctx->pc) {
        case 0x23ac48u: goto label_23ac48;
        case 0x23ac4cu: goto label_23ac4c;
        case 0x23ac50u: goto label_23ac50;
        case 0x23ac54u: goto label_23ac54;
        case 0x23ac58u: goto label_23ac58;
        case 0x23ac5cu: goto label_23ac5c;
        case 0x23ac60u: goto label_23ac60;
        case 0x23ac64u: goto label_23ac64;
        case 0x23ac68u: goto label_23ac68;
        case 0x23ac6cu: goto label_23ac6c;
        case 0x23ac70u: goto label_23ac70;
        case 0x23ac74u: goto label_23ac74;
        case 0x23ac78u: goto label_23ac78;
        case 0x23ac7cu: goto label_23ac7c;
        case 0x23ac80u: goto label_23ac80;
        case 0x23ac84u: goto label_23ac84;
        case 0x23ac88u: goto label_23ac88;
        case 0x23ac8cu: goto label_23ac8c;
        case 0x23ac90u: goto label_23ac90;
        case 0x23ac94u: goto label_23ac94;
        case 0x23ac98u: goto label_23ac98;
        case 0x23ac9cu: goto label_23ac9c;
        case 0x23aca0u: goto label_23aca0;
        case 0x23aca4u: goto label_23aca4;
        case 0x23aca8u: goto label_23aca8;
        case 0x23acacu: goto label_23acac;
        case 0x23acb0u: goto label_23acb0;
        case 0x23acb4u: goto label_23acb4;
        case 0x23acb8u: goto label_23acb8;
        case 0x23acbcu: goto label_23acbc;
        case 0x23acc0u: goto label_23acc0;
        case 0x23acc4u: goto label_23acc4;
        case 0x23acc8u: goto label_23acc8;
        case 0x23acccu: goto label_23accc;
        case 0x23acd0u: goto label_23acd0;
        case 0x23acd4u: goto label_23acd4;
        case 0x23acd8u: goto label_23acd8;
        case 0x23acdcu: goto label_23acdc;
        case 0x23ace0u: goto label_23ace0;
        case 0x23ace4u: goto label_23ace4;
        case 0x23ace8u: goto label_23ace8;
        case 0x23acecu: goto label_23acec;
        case 0x23acf0u: goto label_23acf0;
        case 0x23acf4u: goto label_23acf4;
        case 0x23acf8u: goto label_23acf8;
        case 0x23acfcu: goto label_23acfc;
        case 0x23ad00u: goto label_23ad00;
        case 0x23ad04u: goto label_23ad04;
        case 0x23ad08u: goto label_23ad08;
        case 0x23ad0cu: goto label_23ad0c;
        case 0x23ad10u: goto label_23ad10;
        case 0x23ad14u: goto label_23ad14;
        case 0x23ad18u: goto label_23ad18;
        case 0x23ad1cu: goto label_23ad1c;
        case 0x23ad20u: goto label_23ad20;
        case 0x23ad24u: goto label_23ad24;
        case 0x23ad28u: goto label_23ad28;
        case 0x23ad2cu: goto label_23ad2c;
        case 0x23ad30u: goto label_23ad30;
        case 0x23ad34u: goto label_23ad34;
        case 0x23ad38u: goto label_23ad38;
        case 0x23ad3cu: goto label_23ad3c;
        case 0x23ad40u: goto label_23ad40;
        case 0x23ad44u: goto label_23ad44;
        case 0x23ad48u: goto label_23ad48;
        case 0x23ad4cu: goto label_23ad4c;
        case 0x23ad50u: goto label_23ad50;
        case 0x23ad54u: goto label_23ad54;
        case 0x23ad58u: goto label_23ad58;
        case 0x23ad5cu: goto label_23ad5c;
        case 0x23ad60u: goto label_23ad60;
        case 0x23ad64u: goto label_23ad64;
        case 0x23ad68u: goto label_23ad68;
        case 0x23ad6cu: goto label_23ad6c;
        case 0x23ad70u: goto label_23ad70;
        case 0x23ad74u: goto label_23ad74;
        case 0x23ad78u: goto label_23ad78;
        case 0x23ad7cu: goto label_23ad7c;
        case 0x23ad80u: goto label_23ad80;
        case 0x23ad84u: goto label_23ad84;
        case 0x23ad88u: goto label_23ad88;
        case 0x23ad8cu: goto label_23ad8c;
        case 0x23ad90u: goto label_23ad90;
        case 0x23ad94u: goto label_23ad94;
        case 0x23ad98u: goto label_23ad98;
        case 0x23ad9cu: goto label_23ad9c;
        case 0x23ada0u: goto label_23ada0;
        case 0x23ada4u: goto label_23ada4;
        case 0x23ada8u: goto label_23ada8;
        case 0x23adacu: goto label_23adac;
        case 0x23adb0u: goto label_23adb0;
        case 0x23adb4u: goto label_23adb4;
        case 0x23adb8u: goto label_23adb8;
        case 0x23adbcu: goto label_23adbc;
        case 0x23adc0u: goto label_23adc0;
        case 0x23adc4u: goto label_23adc4;
        case 0x23adc8u: goto label_23adc8;
        case 0x23adccu: goto label_23adcc;
        case 0x23add0u: goto label_23add0;
        case 0x23add4u: goto label_23add4;
        case 0x23add8u: goto label_23add8;
        case 0x23addcu: goto label_23addc;
        case 0x23ade0u: goto label_23ade0;
        case 0x23ade4u: goto label_23ade4;
        case 0x23ade8u: goto label_23ade8;
        case 0x23adecu: goto label_23adec;
        case 0x23adf0u: goto label_23adf0;
        case 0x23adf4u: goto label_23adf4;
        case 0x23adf8u: goto label_23adf8;
        case 0x23adfcu: goto label_23adfc;
        case 0x23ae00u: goto label_23ae00;
        case 0x23ae04u: goto label_23ae04;
        case 0x23ae08u: goto label_23ae08;
        case 0x23ae0cu: goto label_23ae0c;
        case 0x23ae10u: goto label_23ae10;
        case 0x23ae14u: goto label_23ae14;
        case 0x23ae18u: goto label_23ae18;
        case 0x23ae1cu: goto label_23ae1c;
        case 0x23ae20u: goto label_23ae20;
        case 0x23ae24u: goto label_23ae24;
        case 0x23ae28u: goto label_23ae28;
        case 0x23ae2cu: goto label_23ae2c;
        case 0x23ae30u: goto label_23ae30;
        case 0x23ae34u: goto label_23ae34;
        case 0x23ae38u: goto label_23ae38;
        case 0x23ae3cu: goto label_23ae3c;
        case 0x23ae40u: goto label_23ae40;
        case 0x23ae44u: goto label_23ae44;
        case 0x23ae48u: goto label_23ae48;
        case 0x23ae4cu: goto label_23ae4c;
        case 0x23ae50u: goto label_23ae50;
        case 0x23ae54u: goto label_23ae54;
        case 0x23ae58u: goto label_23ae58;
        case 0x23ae5cu: goto label_23ae5c;
        case 0x23ae60u: goto label_23ae60;
        case 0x23ae64u: goto label_23ae64;
        case 0x23ae68u: goto label_23ae68;
        case 0x23ae6cu: goto label_23ae6c;
        case 0x23ae70u: goto label_23ae70;
        case 0x23ae74u: goto label_23ae74;
        case 0x23ae78u: goto label_23ae78;
        case 0x23ae7cu: goto label_23ae7c;
        case 0x23ae80u: goto label_23ae80;
        case 0x23ae84u: goto label_23ae84;
        case 0x23ae88u: goto label_23ae88;
        case 0x23ae8cu: goto label_23ae8c;
        case 0x23ae90u: goto label_23ae90;
        case 0x23ae94u: goto label_23ae94;
        case 0x23ae98u: goto label_23ae98;
        case 0x23ae9cu: goto label_23ae9c;
        case 0x23aea0u: goto label_23aea0;
        case 0x23aea4u: goto label_23aea4;
        case 0x23aea8u: goto label_23aea8;
        case 0x23aeacu: goto label_23aeac;
        default: break;
    }

    ctx->pc = 0x23ac48u;

label_23ac48:
    // 0x23ac48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ac48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23ac4c:
    // 0x23ac4c: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x23ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_23ac50:
    // 0x23ac50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ac50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23ac54:
    // 0x23ac54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23ac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23ac58:
    // 0x23ac58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23ac58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23ac5c:
    // 0x23ac5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23ac5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23ac60:
    // 0x23ac60: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23ac60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23ac64:
    // 0x23ac64: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x23ac64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_23ac68:
    // 0x23ac68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23ac68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23ac6c:
    // 0x23ac6c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23ac6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_23ac70:
    // 0x23ac70: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x23ac70u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_23ac74:
    // 0x23ac74: 0xe61406ec  swc1        $f20, 0x6EC($s0)
    ctx->pc = 0x23ac74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1772), bits); }
label_23ac78:
    // 0x23ac78: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23ac7c:
    // 0x23ac7c: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x23ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_23ac80:
    // 0x23ac80: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_23ac84:
    if (ctx->pc == 0x23AC84u) {
        ctx->pc = 0x23AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC80u;
        // 0x23ac84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AC88u;
        goto label_23ac88;
    }
    ctx->pc = 0x23AC80u;
    {
        const bool branch_taken_0x23ac80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC80u;
        // 0x23ac84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac80) {
            ctx->pc = 0x23ACA8u;
            goto label_23aca8;
        }
    }
    ctx->pc = 0x23AC88u;
label_23ac88:
    // 0x23ac88: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x23ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
label_23ac8c:
    // 0x23ac8c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x23ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_23ac90:
    // 0x23ac90: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x23ac90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23ac94:
    // 0x23ac94: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x23ac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23ac98:
    // 0x23ac98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x23ac98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23ac9c:
    // 0x23ac9c: 0x0  nop
    ctx->pc = 0x23ac9cu;
    // NOP
label_23aca0:
    // 0x23aca0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_23aca4:
    if (ctx->pc == 0x23ACA4u) {
        ctx->pc = 0x23ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACA0u;
        // 0x23aca4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ACA8u;
        goto label_23aca8;
    }
    ctx->pc = 0x23ACA0u;
    {
        const bool branch_taken_0x23aca0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23aca0) {
            ctx->pc = 0x23ACA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23ACA0u;
            // 0x23aca4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ACA8u;
            goto label_23aca8;
        }
    }
    ctx->pc = 0x23ACA8u;
label_23aca8:
    // 0x23aca8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_23acac:
    if (ctx->pc == 0x23ACACu) {
        ctx->pc = 0x23ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACA8u;
        // 0x23acac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ACB0u;
        goto label_23acb0;
    }
    ctx->pc = 0x23ACA8u;
    {
        const bool branch_taken_0x23aca8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACA8u;
        // 0x23acac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aca8) {
            ctx->pc = 0x23ACBCu;
            goto label_23acbc;
        }
    }
    ctx->pc = 0x23ACB0u;
label_23acb0:
    // 0x23acb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23acb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23acb4:
    // 0x23acb4: 0xc08bf70  jal         func_22FDC0
label_23acb8:
    if (ctx->pc == 0x23ACB8u) {
        ctx->pc = 0x23ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACB4u;
        // 0x23acb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ACBCu;
        goto label_23acbc;
    }
    ctx->pc = 0x23ACB4u;
    SET_GPR_U32(ctx, 31, 0x23ACBCu);
    ctx->pc = 0x23ACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ACB4u;
    // 0x23acb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x23ACB4u, 0x23ACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ACBCu;
label_23acbc:
    // 0x23acbc: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x23acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_23acc0:
    // 0x23acc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23acc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23acc4:
    // 0x23acc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23acc8:
    // 0x23acc8: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x23acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_23accc:
    // 0x23accc: 0x40f809  jalr        $v0
label_23acd0:
    if (ctx->pc == 0x23ACD0u) {
        ctx->pc = 0x23ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACCCu;
        // 0x23acd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ACD4u;
        goto label_23acd4;
    }
    ctx->pc = 0x23ACCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23ACD4u);
        ctx->pc = 0x23ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACCCu;
        // 0x23acd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ACCCu, 0x23ACD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23ACD4u;
label_23acd4:
    // 0x23acd4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_23acd8:
    if (ctx->pc == 0x23ACD8u) {
        ctx->pc = 0x23ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACD4u;
        // 0x23acd8: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ACDCu;
        goto label_23acdc;
    }
    ctx->pc = 0x23ACD4u;
    {
        const bool branch_taken_0x23acd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACD4u;
        // 0x23acd8: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23acd4) {
            ctx->pc = 0x23AD00u;
            goto label_23ad00;
        }
    }
    ctx->pc = 0x23ACDCu;
label_23acdc:
    // 0x23acdc: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23acdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23ace0:
    // 0x23ace0: 0x5440006d  bnel        $v0, $zero, . + 4 + (0x6D << 2)
label_23ace4:
    if (ctx->pc == 0x23ACE4u) {
        ctx->pc = 0x23ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACE0u;
        // 0x23ace4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ACE8u;
        goto label_23ace8;
    }
    ctx->pc = 0x23ACE0u;
    {
        const bool branch_taken_0x23ace0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ace0) {
            ctx->pc = 0x23ACE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23ACE0u;
            // 0x23ace4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AE98u;
            goto label_23ae98;
        }
    }
    ctx->pc = 0x23ACE8u;
label_23ace8:
    // 0x23ace8: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x23ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_23acec:
    // 0x23acec: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x23acecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_23acf0:
    // 0x23acf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23acf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_23acf4:
    // 0x23acf4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23acf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23acf8:
    // 0x23acf8: 0x10000066  b           . + 4 + (0x66 << 2)
label_23acfc:
    if (ctx->pc == 0x23ACFCu) {
        ctx->pc = 0x23ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACF8u;
        // 0x23acfc: 0xae0311c0  sw          $v1, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD00u;
        goto label_23ad00;
    }
    ctx->pc = 0x23ACF8u;
    {
        const bool branch_taken_0x23acf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACF8u;
        // 0x23acfc: 0xae0311c0  sw          $v1, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23acf8) {
            ctx->pc = 0x23AE94u;
            goto label_23ae94;
        }
    }
    ctx->pc = 0x23AD00u;
label_23ad00:
    // 0x23ad00: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23ad00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23ad04:
    // 0x23ad04: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_23ad08:
    if (ctx->pc == 0x23AD08u) {
        ctx->pc = 0x23AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD04u;
        // 0x23ad08: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD0Cu;
        goto label_23ad0c;
    }
    ctx->pc = 0x23AD04u;
    {
        const bool branch_taken_0x23ad04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ad04) {
            ctx->pc = 0x23AD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AD04u;
            // 0x23ad08: 0x8e020334  lw          $v0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AD18u;
            goto label_23ad18;
        }
    }
    ctx->pc = 0x23AD0Cu;
label_23ad0c:
    // 0x23ad0c: 0xc0bd62c  jal         func_2F58B0
label_23ad10:
    if (ctx->pc == 0x23AD10u) {
        ctx->pc = 0x23AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD0Cu;
        // 0x23ad10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD14u;
        goto label_23ad14;
    }
    ctx->pc = 0x23AD0Cu;
    SET_GPR_U32(ctx, 31, 0x23AD14u);
    ctx->pc = 0x23AD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD0Cu;
    // 0x23ad10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x23AD0Cu, 0x23AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD14u;
label_23ad14:
    // 0x23ad14: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x23ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23ad18:
    // 0x23ad18: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x23ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23ad1c:
    // 0x23ad1c: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x23ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_23ad20:
    // 0x23ad20: 0x5064005d  beql        $v1, $a0, . + 4 + (0x5D << 2)
label_23ad24:
    if (ctx->pc == 0x23AD24u) {
        ctx->pc = 0x23AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD20u;
        // 0x23ad24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD28u;
        goto label_23ad28;
    }
    ctx->pc = 0x23AD20u;
    {
        const bool branch_taken_0x23ad20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x23ad20) {
            ctx->pc = 0x23AD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AD20u;
            // 0x23ad24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AE98u;
            goto label_23ae98;
        }
    }
    ctx->pc = 0x23AD28u;
label_23ad28:
    // 0x23ad28: 0x8e040ff4  lw          $a0, 0xFF4($s0)
    ctx->pc = 0x23ad28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
label_23ad2c:
    // 0x23ad2c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_23ad30:
    if (ctx->pc == 0x23AD30u) {
        ctx->pc = 0x23AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD2Cu;
        // 0x23ad30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD34u;
        goto label_23ad34;
    }
    ctx->pc = 0x23AD2Cu;
    {
        const bool branch_taken_0x23ad2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD2Cu;
        // 0x23ad30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad2c) {
            ctx->pc = 0x23AD40u;
            goto label_23ad40;
        }
    }
    ctx->pc = 0x23AD34u;
label_23ad34:
    // 0x23ad34: 0xc0619d2  jal         func_186748
label_23ad38:
    if (ctx->pc == 0x23AD38u) {
        ctx->pc = 0x23AD3Cu;
        goto label_23ad3c;
    }
    ctx->pc = 0x23AD34u;
    SET_GPR_U32(ctx, 31, 0x23AD3Cu);
    ctx->pc = 0x186748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186748u, 0x23AD34u, 0x23AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD3Cu;
label_23ad3c:
    // 0x23ad3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23ad3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ad40:
    // 0x23ad40: 0xc6000374  lwc1        $f0, 0x374($s0)
    ctx->pc = 0x23ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23ad44:
    // 0x23ad44: 0xc60103a0  lwc1        $f1, 0x3A0($s0)
    ctx->pc = 0x23ad44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23ad48:
    // 0x23ad48: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23ad4c:
    // 0x23ad4c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x23ad4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_23ad50:
    // 0x23ad50: 0xe60006e8  swc1        $f0, 0x6E8($s0)
    ctx->pc = 0x23ad50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1768), bits); }
label_23ad54:
    // 0x23ad54: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23ad54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23ad58:
    // 0x23ad58: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_23ad5c:
    if (ctx->pc == 0x23AD5Cu) {
        ctx->pc = 0x23AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD58u;
        // 0x23ad5c: 0xe60106e4  swc1        $f1, 0x6E4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1764), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD60u;
        goto label_23ad60;
    }
    ctx->pc = 0x23AD58u;
    {
        const bool branch_taken_0x23ad58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD58u;
        // 0x23ad5c: 0xe60106e4  swc1        $f1, 0x6E4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1764), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad58) {
            ctx->pc = 0x23ADB4u;
            goto label_23adb4;
        }
    }
    ctx->pc = 0x23AD60u;
label_23ad60:
    // 0x23ad60: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_23ad64:
    if (ctx->pc == 0x23AD64u) {
        ctx->pc = 0x23AD68u;
        goto label_23ad68;
    }
    ctx->pc = 0x23AD60u;
    {
        const bool branch_taken_0x23ad60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ad60) {
            ctx->pc = 0x23AD7Cu;
            goto label_23ad7c;
        }
    }
    ctx->pc = 0x23AD68u;
label_23ad68:
    // 0x23ad68: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23ad68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23ad6c:
    // 0x23ad6c: 0xc06981a  jal         func_1A6068
label_23ad70:
    if (ctx->pc == 0x23AD70u) {
        ctx->pc = 0x23AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD6Cu;
        // 0x23ad70: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD74u;
        goto label_23ad74;
    }
    ctx->pc = 0x23AD6Cu;
    SET_GPR_U32(ctx, 31, 0x23AD74u);
    ctx->pc = 0x23AD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD6Cu;
    // 0x23ad70: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6068u, 0x23AD6Cu, 0x23AD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD74u;
label_23ad74:
    // 0x23ad74: 0x10000038  b           . + 4 + (0x38 << 2)
label_23ad78:
    if (ctx->pc == 0x23AD78u) {
        ctx->pc = 0x23AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD74u;
        // 0x23ad78: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD7Cu;
        goto label_23ad7c;
    }
    ctx->pc = 0x23AD74u;
    {
        const bool branch_taken_0x23ad74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD74u;
        // 0x23ad78: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad74) {
            ctx->pc = 0x23AE58u;
            goto label_23ae58;
        }
    }
    ctx->pc = 0x23AD7Cu;
label_23ad7c:
    // 0x23ad7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ad7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23ad80:
    // 0x23ad80: 0x0  nop
    ctx->pc = 0x23ad80u;
    // NOP
label_23ad84:
    // 0x23ad84: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x23ad84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23ad88:
    // 0x23ad88: 0x0  nop
    ctx->pc = 0x23ad88u;
    // NOP
label_23ad8c:
    // 0x23ad8c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_23ad90:
    if (ctx->pc == 0x23AD90u) {
        ctx->pc = 0x23AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD8Cu;
        // 0x23ad90: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD94u;
        goto label_23ad94;
    }
    ctx->pc = 0x23AD8Cu;
    {
        const bool branch_taken_0x23ad8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD8Cu;
        // 0x23ad90: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad8c) {
            ctx->pc = 0x23ADA4u;
            goto label_23ada4;
        }
    }
    ctx->pc = 0x23AD94u;
label_23ad94:
    // 0x23ad94: 0xc06981a  jal         func_1A6068
label_23ad98:
    if (ctx->pc == 0x23AD98u) {
        ctx->pc = 0x23AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD94u;
        // 0x23ad98: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD9Cu;
        goto label_23ad9c;
    }
    ctx->pc = 0x23AD94u;
    SET_GPR_U32(ctx, 31, 0x23AD9Cu);
    ctx->pc = 0x23AD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD94u;
    // 0x23ad98: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6068u, 0x23AD94u, 0x23AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AD9Cu;
label_23ad9c:
    // 0x23ad9c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_23ada0:
    if (ctx->pc == 0x23ADA0u) {
        ctx->pc = 0x23ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD9Cu;
        // 0x23ada0: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ADA4u;
        goto label_23ada4;
    }
    ctx->pc = 0x23AD9Cu;
    {
        const bool branch_taken_0x23ad9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD9Cu;
        // 0x23ada0: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad9c) {
            ctx->pc = 0x23AE58u;
            goto label_23ae58;
        }
    }
    ctx->pc = 0x23ADA4u;
label_23ada4:
    // 0x23ada4: 0xc06981a  jal         func_1A6068
label_23ada8:
    if (ctx->pc == 0x23ADA8u) {
        ctx->pc = 0x23ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADA4u;
        // 0x23ada8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ADACu;
        goto label_23adac;
    }
    ctx->pc = 0x23ADA4u;
    SET_GPR_U32(ctx, 31, 0x23ADACu);
    ctx->pc = 0x23ADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ADA4u;
    // 0x23ada8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6068u, 0x23ADA4u, 0x23ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ADACu;
label_23adac:
    // 0x23adac: 0x1000002a  b           . + 4 + (0x2A << 2)
label_23adb0:
    if (ctx->pc == 0x23ADB0u) {
        ctx->pc = 0x23ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADACu;
        // 0x23adb0: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ADB4u;
        goto label_23adb4;
    }
    ctx->pc = 0x23ADACu;
    {
        const bool branch_taken_0x23adac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADACu;
        // 0x23adb0: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23adac) {
            ctx->pc = 0x23AE58u;
            goto label_23ae58;
        }
    }
    ctx->pc = 0x23ADB4u;
label_23adb4:
    // 0x23adb4: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_23adb8:
    if (ctx->pc == 0x23ADB8u) {
        ctx->pc = 0x23ADBCu;
        goto label_23adbc;
    }
    ctx->pc = 0x23ADB4u;
    {
        const bool branch_taken_0x23adb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23adb4) {
            ctx->pc = 0x23ADF4u;
            goto label_23adf4;
        }
    }
    ctx->pc = 0x23ADBCu;
label_23adbc:
    // 0x23adbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23adbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23adc0:
    // 0x23adc0: 0x0  nop
    ctx->pc = 0x23adc0u;
    // NOP
label_23adc4:
    // 0x23adc4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x23adc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23adc8:
    // 0x23adc8: 0x0  nop
    ctx->pc = 0x23adc8u;
    // NOP
label_23adcc:
    // 0x23adcc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_23add0:
    if (ctx->pc == 0x23ADD0u) {
        ctx->pc = 0x23ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADCCu;
        // 0x23add0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ADD4u;
        goto label_23add4;
    }
    ctx->pc = 0x23ADCCu;
    {
        const bool branch_taken_0x23adcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADCCu;
        // 0x23add0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23adcc) {
            ctx->pc = 0x23ADE4u;
            goto label_23ade4;
        }
    }
    ctx->pc = 0x23ADD4u;
label_23add4:
    // 0x23add4: 0xc06981a  jal         func_1A6068
label_23add8:
    if (ctx->pc == 0x23ADD8u) {
        ctx->pc = 0x23ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADD4u;
        // 0x23add8: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ADDCu;
        goto label_23addc;
    }
    ctx->pc = 0x23ADD4u;
    SET_GPR_U32(ctx, 31, 0x23ADDCu);
    ctx->pc = 0x23ADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ADD4u;
    // 0x23add8: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6068u, 0x23ADD4u, 0x23ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ADDCu;
label_23addc:
    // 0x23addc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_23ade0:
    if (ctx->pc == 0x23ADE0u) {
        ctx->pc = 0x23ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADDCu;
        // 0x23ade0: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ADE4u;
        goto label_23ade4;
    }
    ctx->pc = 0x23ADDCu;
    {
        const bool branch_taken_0x23addc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADDCu;
        // 0x23ade0: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23addc) {
            ctx->pc = 0x23AE58u;
            goto label_23ae58;
        }
    }
    ctx->pc = 0x23ADE4u;
label_23ade4:
    // 0x23ade4: 0xc06981a  jal         func_1A6068
label_23ade8:
    if (ctx->pc == 0x23ADE8u) {
        ctx->pc = 0x23ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADE4u;
        // 0x23ade8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ADECu;
        goto label_23adec;
    }
    ctx->pc = 0x23ADE4u;
    SET_GPR_U32(ctx, 31, 0x23ADECu);
    ctx->pc = 0x23ADE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ADE4u;
    // 0x23ade8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6068u, 0x23ADE4u, 0x23ADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ADECu;
label_23adec:
    // 0x23adec: 0x1000001a  b           . + 4 + (0x1A << 2)
label_23adf0:
    if (ctx->pc == 0x23ADF0u) {
        ctx->pc = 0x23ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADECu;
        // 0x23adf0: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ADF4u;
        goto label_23adf4;
    }
    ctx->pc = 0x23ADECu;
    {
        const bool branch_taken_0x23adec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADECu;
        // 0x23adf0: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23adec) {
            ctx->pc = 0x23AE58u;
            goto label_23ae58;
        }
    }
    ctx->pc = 0x23ADF4u;
label_23adf4:
    // 0x23adf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23adf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23adf8:
    // 0x23adf8: 0x0  nop
    ctx->pc = 0x23adf8u;
    // NOP
label_23adfc:
    // 0x23adfc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x23adfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23ae00:
    // 0x23ae00: 0x0  nop
    ctx->pc = 0x23ae00u;
    // NOP
label_23ae04:
    // 0x23ae04: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_23ae08:
    if (ctx->pc == 0x23AE08u) {
        ctx->pc = 0x23AE0Cu;
        goto label_23ae0c;
    }
    ctx->pc = 0x23AE04u;
    {
        const bool branch_taken_0x23ae04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ae04) {
            ctx->pc = 0x23AE34u;
            goto label_23ae34;
        }
    }
    ctx->pc = 0x23AE0Cu;
label_23ae0c:
    // 0x23ae0c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_23ae10:
    if (ctx->pc == 0x23AE10u) {
        ctx->pc = 0x23AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE0Cu;
        // 0x23ae10: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE14u;
        goto label_23ae14;
    }
    ctx->pc = 0x23AE0Cu;
    {
        const bool branch_taken_0x23ae0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE0Cu;
        // 0x23ae10: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae0c) {
            ctx->pc = 0x23AE24u;
            goto label_23ae24;
        }
    }
    ctx->pc = 0x23AE14u;
label_23ae14:
    // 0x23ae14: 0xc06981a  jal         func_1A6068
label_23ae18:
    if (ctx->pc == 0x23AE18u) {
        ctx->pc = 0x23AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE14u;
        // 0x23ae18: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE1Cu;
        goto label_23ae1c;
    }
    ctx->pc = 0x23AE14u;
    SET_GPR_U32(ctx, 31, 0x23AE1Cu);
    ctx->pc = 0x23AE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE14u;
    // 0x23ae18: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6068u, 0x23AE14u, 0x23AE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE1Cu;
label_23ae1c:
    // 0x23ae1c: 0x1000000e  b           . + 4 + (0xE << 2)
label_23ae20:
    if (ctx->pc == 0x23AE20u) {
        ctx->pc = 0x23AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE1Cu;
        // 0x23ae20: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE24u;
        goto label_23ae24;
    }
    ctx->pc = 0x23AE1Cu;
    {
        const bool branch_taken_0x23ae1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE1Cu;
        // 0x23ae20: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae1c) {
            ctx->pc = 0x23AE58u;
            goto label_23ae58;
        }
    }
    ctx->pc = 0x23AE24u;
label_23ae24:
    // 0x23ae24: 0xc06981a  jal         func_1A6068
label_23ae28:
    if (ctx->pc == 0x23AE28u) {
        ctx->pc = 0x23AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE24u;
        // 0x23ae28: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE2Cu;
        goto label_23ae2c;
    }
    ctx->pc = 0x23AE24u;
    SET_GPR_U32(ctx, 31, 0x23AE2Cu);
    ctx->pc = 0x23AE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE24u;
    // 0x23ae28: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6068u, 0x23AE24u, 0x23AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE2Cu;
label_23ae2c:
    // 0x23ae2c: 0x1000000a  b           . + 4 + (0xA << 2)
label_23ae30:
    if (ctx->pc == 0x23AE30u) {
        ctx->pc = 0x23AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE2Cu;
        // 0x23ae30: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE34u;
        goto label_23ae34;
    }
    ctx->pc = 0x23AE2Cu;
    {
        const bool branch_taken_0x23ae2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE2Cu;
        // 0x23ae30: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae2c) {
            ctx->pc = 0x23AE58u;
            goto label_23ae58;
        }
    }
    ctx->pc = 0x23AE34u;
label_23ae34:
    // 0x23ae34: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_23ae38:
    if (ctx->pc == 0x23AE38u) {
        ctx->pc = 0x23AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE34u;
        // 0x23ae38: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE3Cu;
        goto label_23ae3c;
    }
    ctx->pc = 0x23AE34u;
    {
        const bool branch_taken_0x23ae34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE34u;
        // 0x23ae38: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae34) {
            ctx->pc = 0x23AE4Cu;
            goto label_23ae4c;
        }
    }
    ctx->pc = 0x23AE3Cu;
label_23ae3c:
    // 0x23ae3c: 0xc06981a  jal         func_1A6068
label_23ae40:
    if (ctx->pc == 0x23AE40u) {
        ctx->pc = 0x23AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE3Cu;
        // 0x23ae40: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE44u;
        goto label_23ae44;
    }
    ctx->pc = 0x23AE3Cu;
    SET_GPR_U32(ctx, 31, 0x23AE44u);
    ctx->pc = 0x23AE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE3Cu;
    // 0x23ae40: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6068u, 0x23AE3Cu, 0x23AE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE44u;
label_23ae44:
    // 0x23ae44: 0x10000004  b           . + 4 + (0x4 << 2)
label_23ae48:
    if (ctx->pc == 0x23AE48u) {
        ctx->pc = 0x23AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE44u;
        // 0x23ae48: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE4Cu;
        goto label_23ae4c;
    }
    ctx->pc = 0x23AE44u;
    {
        const bool branch_taken_0x23ae44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE44u;
        // 0x23ae48: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae44) {
            ctx->pc = 0x23AE58u;
            goto label_23ae58;
        }
    }
    ctx->pc = 0x23AE4Cu;
label_23ae4c:
    // 0x23ae4c: 0xc06981a  jal         func_1A6068
label_23ae50:
    if (ctx->pc == 0x23AE50u) {
        ctx->pc = 0x23AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE4Cu;
        // 0x23ae50: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE54u;
        goto label_23ae54;
    }
    ctx->pc = 0x23AE4Cu;
    SET_GPR_U32(ctx, 31, 0x23AE54u);
    ctx->pc = 0x23AE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE4Cu;
    // 0x23ae50: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6068u, 0x23AE4Cu, 0x23AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE54u;
label_23ae54:
    // 0x23ae54: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x23ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_23ae58:
    // 0x23ae58: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23ae58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23ae5c:
    // 0x23ae5c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_23ae60:
    if (ctx->pc == 0x23AE60u) {
        ctx->pc = 0x23AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE5Cu;
        // 0x23ae60: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE64u;
        goto label_23ae64;
    }
    ctx->pc = 0x23AE5Cu;
    {
        const bool branch_taken_0x23ae5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ae5c) {
            ctx->pc = 0x23AE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AE5Cu;
            // 0x23ae60: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AE7Cu;
            goto label_23ae7c;
        }
    }
    ctx->pc = 0x23AE64u;
label_23ae64:
    // 0x23ae64: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x23ae64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23ae68:
    // 0x23ae68: 0x8c64014c  lw          $a0, 0x14C($v1)
    ctx->pc = 0x23ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
label_23ae6c:
    // 0x23ae6c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x23ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_23ae70:
    // 0x23ae70: 0x54820001  bnel        $a0, $v0, . + 4 + (0x1 << 2)
label_23ae74:
    if (ctx->pc == 0x23AE74u) {
        ctx->pc = 0x23AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE70u;
        // 0x23ae74: 0xac64015c  sw          $a0, 0x15C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE78u;
        goto label_23ae78;
    }
    ctx->pc = 0x23AE70u;
    {
        const bool branch_taken_0x23ae70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x23ae70) {
            ctx->pc = 0x23AE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AE70u;
            // 0x23ae74: 0xac64015c  sw          $a0, 0x15C($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 348), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AE78u;
            goto label_23ae78;
        }
    }
    ctx->pc = 0x23AE78u;
label_23ae78:
    // 0x23ae78: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23ae78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23ae7c:
    // 0x23ae7c: 0xc06a23e  jal         func_1A88F8
label_23ae80:
    if (ctx->pc == 0x23AE80u) {
        ctx->pc = 0x23AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE7Cu;
        // 0x23ae80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE84u;
        goto label_23ae84;
    }
    ctx->pc = 0x23AE7Cu;
    SET_GPR_U32(ctx, 31, 0x23AE84u);
    ctx->pc = 0x23AE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE7Cu;
    // 0x23ae80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x23AE7Cu, 0x23AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE84u;
label_23ae84:
    // 0x23ae84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ae84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ae88:
    // 0x23ae88: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x23ae88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_23ae8c:
    // 0x23ae8c: 0xc08fed2  jal         func_23FB48
label_23ae90:
    if (ctx->pc == 0x23AE90u) {
        ctx->pc = 0x23AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE8Cu;
        // 0x23ae90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE94u;
        goto label_23ae94;
    }
    ctx->pc = 0x23AE8Cu;
    SET_GPR_U32(ctx, 31, 0x23AE94u);
    ctx->pc = 0x23AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AE8Cu;
    // 0x23ae90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23AE8Cu, 0x23AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AE94u;
label_23ae94:
    // 0x23ae94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ae94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23ae98:
    // 0x23ae98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23ae98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23ae9c:
    // 0x23ae9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23ae9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23aea0:
    // 0x23aea0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23aea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23aea4:
    // 0x23aea4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x23aea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23aea8:
    // 0x23aea8: 0x3e00008  jr          $ra
label_23aeac:
    if (ctx->pc == 0x23AEACu) {
        ctx->pc = 0x23AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AEA8u;
        // 0x23aeac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AEB0u;
        goto label_fallthrough_0x23aea8;
    }
    ctx->pc = 0x23AEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AEA8u;
        // 0x23aeac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AEA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23aea8:
    ctx->pc = 0x23AEB0u;
}
