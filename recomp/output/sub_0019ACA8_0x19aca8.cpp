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

// Function: sub_0019ACA8
// Address: 0x19aca8 - 0x19aed0
void sub_0019ACA8_0x19aca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019ACA8_0x19aca8");
#endif

    switch (ctx->pc) {
        case 0x19acc0u: goto label_19acc0;
        case 0x19acccu: goto label_19accc;
        case 0x19acd4u: goto label_19acd4;
        case 0x19ace4u: goto label_19ace4;
        case 0x19acf4u: goto label_19acf4;
        case 0x19ad04u: goto label_19ad04;
        case 0x19ad14u: goto label_19ad14;
        case 0x19ad24u: goto label_19ad24;
        case 0x19ad2cu: goto label_19ad2c;
        case 0x19ad3cu: goto label_19ad3c;
        case 0x19ad58u: goto label_19ad58;
        case 0x19ad60u: goto label_19ad60;
        case 0x19ad70u: goto label_19ad70;
        case 0x19ad98u: goto label_19ad98;
        case 0x19ada8u: goto label_19ada8;
        case 0x19adb8u: goto label_19adb8;
        case 0x19ae28u: goto label_19ae28;
        case 0x19aea8u: goto label_19aea8;
        case 0x19aeb0u: goto label_19aeb0;
        default: break;
    }

    ctx->pc = 0x19aca8u;

    // 0x19aca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19aca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19acac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19acacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19acb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19acb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19acb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19acb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19acb8: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19ACB8u;
    SET_GPR_U32(ctx, 31, 0x19ACC0u);
    ctx->pc = 0x19ACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ACB8u;
    // 0x19acbc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19ACB8u, 0x19ACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ACC0u;
label_19acc0:
    // 0x19acc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19acc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acc4: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19ACC4u;
    SET_GPR_U32(ctx, 31, 0x19ACCCu);
    ctx->pc = 0x19ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ACC4u;
    // 0x19acc8: 0xac400158  sw          $zero, 0x158($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19ACC4u, 0x19ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ACCCu;
label_19accc:
    // 0x19accc: 0xc06d9b2  jal         func_1B66C8
    ctx->pc = 0x19ACCCu;
    SET_GPR_U32(ctx, 31, 0x19ACD4u);
    ctx->pc = 0x19ACD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ACCCu;
    // 0x19acd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B66C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B66C8u, 0x19ACCCu, 0x19ACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ACD4u;
label_19acd4:
    // 0x19acd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19ACD4u;
    {
        const bool branch_taken_0x19acd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19acd4) {
            ctx->pc = 0x19ACECu;
            goto label_19acec;
        }
    }
    ctx->pc = 0x19ACDCu;
    // 0x19acdc: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19ACDCu;
    SET_GPR_U32(ctx, 31, 0x19ACE4u);
    ctx->pc = 0x19ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ACDCu;
    // 0x19ace0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19ACDCu, 0x19ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ACE4u;
label_19ace4:
    // 0x19ace4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ace8: 0xac43021c  sw          $v1, 0x21C($v0)
    ctx->pc = 0x19ace8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 3));
label_19acec:
    // 0x19acec: 0xc06766e  jal         func_19D9B8
    ctx->pc = 0x19ACECu;
    SET_GPR_U32(ctx, 31, 0x19ACF4u);
    ctx->pc = 0x19ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ACECu;
    // 0x19acf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B8u, 0x19ACECu, 0x19ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ACF4u;
label_19acf4:
    // 0x19acf4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19ACF4u;
    {
        const bool branch_taken_0x19acf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19acf4) {
            ctx->pc = 0x19AD0Cu;
            goto label_19ad0c;
        }
    }
    ctx->pc = 0x19ACFCu;
    // 0x19acfc: 0xc0676b8  jal         func_19DAE0
    ctx->pc = 0x19ACFCu;
    SET_GPR_U32(ctx, 31, 0x19AD04u);
    ctx->pc = 0x19AD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ACFCu;
    // 0x19ad00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DAE0u, 0x19ACFCu, 0x19AD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD04u;
label_19ad04:
    // 0x19ad04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19AD04u;
    {
        const bool branch_taken_0x19ad04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ad04) {
            ctx->pc = 0x19AD1Cu;
            goto label_19ad1c;
        }
    }
    ctx->pc = 0x19AD0Cu;
label_19ad0c:
    // 0x19ad0c: 0xc0675e0  jal         func_19D780
    ctx->pc = 0x19AD0Cu;
    SET_GPR_U32(ctx, 31, 0x19AD14u);
    ctx->pc = 0x19AD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD0Cu;
    // 0x19ad10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D780u, 0x19AD0Cu, 0x19AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD14u;
label_19ad14:
    // 0x19ad14: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x19AD14u;
    {
        const bool branch_taken_0x19ad14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD14u;
        // 0x19ad18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad14) {
            ctx->pc = 0x19AEBCu;
            goto label_19aebc;
        }
    }
    ctx->pc = 0x19AD1Cu;
label_19ad1c:
    // 0x19ad1c: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19AD1Cu;
    SET_GPR_U32(ctx, 31, 0x19AD24u);
    ctx->pc = 0x19AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD1Cu;
    // 0x19ad20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19AD1Cu, 0x19AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD24u;
label_19ad24:
    // 0x19ad24: 0xc06e0e6  jal         func_1B8398
    ctx->pc = 0x19AD24u;
    SET_GPR_U32(ctx, 31, 0x19AD2Cu);
    ctx->pc = 0x19AD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD24u;
    // 0x19ad28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8398u, 0x19AD24u, 0x19AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD2Cu;
label_19ad2c:
    // 0x19ad2c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x19AD2Cu;
    {
        const bool branch_taken_0x19ad2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD2Cu;
        // 0x19ad30: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad2c) {
            ctx->pc = 0x19ADC0u;
            goto label_19adc0;
        }
    }
    ctx->pc = 0x19AD34u;
    // 0x19ad34: 0xc061a26  jal         func_186898
    ctx->pc = 0x19AD34u;
    SET_GPR_U32(ctx, 31, 0x19AD3Cu);
    ctx->pc = 0x19AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD34u;
    // 0x19ad38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19AD34u, 0x19AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD3Cu;
label_19ad3c:
    // 0x19ad3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19ad3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19ad40: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x19ad40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x19ad44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19ad44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19ad48: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19AD48u;
    {
        const bool branch_taken_0x19ad48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ad48) {
            ctx->pc = 0x19AD68u;
            goto label_19ad68;
        }
    }
    ctx->pc = 0x19AD50u;
    // 0x19ad50: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19AD50u;
    SET_GPR_U32(ctx, 31, 0x19AD58u);
    ctx->pc = 0x19AD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD50u;
    // 0x19ad54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19AD50u, 0x19AD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD58u;
label_19ad58:
    // 0x19ad58: 0xc06d9b2  jal         func_1B66C8
    ctx->pc = 0x19AD58u;
    SET_GPR_U32(ctx, 31, 0x19AD60u);
    ctx->pc = 0x19AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD58u;
    // 0x19ad5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B66C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B66C8u, 0x19AD58u, 0x19AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD60u;
label_19ad60:
    // 0x19ad60: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19AD60u;
    {
        const bool branch_taken_0x19ad60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ad60) {
            ctx->pc = 0x19ADB0u;
            goto label_19adb0;
        }
    }
    ctx->pc = 0x19AD68u;
label_19ad68:
    // 0x19ad68: 0xc061a1a  jal         func_186868
    ctx->pc = 0x19AD68u;
    SET_GPR_U32(ctx, 31, 0x19AD70u);
    ctx->pc = 0x19AD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD68u;
    // 0x19ad6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186868u, 0x19AD68u, 0x19AD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD70u;
label_19ad70:
    // 0x19ad70: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x19ad70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19ad74: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x19ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x19ad78: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x19ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19ad7c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x19ad7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x19ad80: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19AD80u;
    {
        const bool branch_taken_0x19ad80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD80u;
        // 0x19ad84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad80) {
            ctx->pc = 0x19ADA0u;
            goto label_19ada0;
        }
    }
    ctx->pc = 0x19AD88u;
    // 0x19ad88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19ad88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19ad8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19ad8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ad90: 0xc0671ca  jal         func_19C728
    ctx->pc = 0x19AD90u;
    SET_GPR_U32(ctx, 31, 0x19AD98u);
    ctx->pc = 0x19AD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD90u;
    // 0x19ad94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C728u, 0x19AD90u, 0x19AD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD98u;
label_19ad98:
    // 0x19ad98: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x19AD98u;
    {
        const bool branch_taken_0x19ad98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ad98) {
            ctx->pc = 0x19AEA8u;
            goto label_19aea8;
        }
    }
    ctx->pc = 0x19ADA0u;
label_19ada0:
    // 0x19ada0: 0xc06724e  jal         func_19C938
    ctx->pc = 0x19ADA0u;
    SET_GPR_U32(ctx, 31, 0x19ADA8u);
    ctx->pc = 0x19ADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ADA0u;
    // 0x19ada4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C938u, 0x19ADA0u, 0x19ADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ADA8u;
label_19ada8:
    // 0x19ada8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x19ADA8u;
    {
        const bool branch_taken_0x19ada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ada8) {
            ctx->pc = 0x19AEA8u;
            goto label_19aea8;
        }
    }
    ctx->pc = 0x19ADB0u;
label_19adb0:
    // 0x19adb0: 0xc067598  jal         func_19D660
    ctx->pc = 0x19ADB0u;
    SET_GPR_U32(ctx, 31, 0x19ADB8u);
    ctx->pc = 0x19ADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ADB0u;
    // 0x19adb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D660u, 0x19ADB0u, 0x19ADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ADB8u;
label_19adb8:
    // 0x19adb8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x19ADB8u;
    {
        const bool branch_taken_0x19adb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19adb8) {
            ctx->pc = 0x19AEA8u;
            goto label_19aea8;
        }
    }
    ctx->pc = 0x19ADC0u;
label_19adc0:
    // 0x19adc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19adc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19adc4: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x19adc8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19ADC8u;
    {
        const bool branch_taken_0x19adc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADC8u;
        // 0x19adcc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19adc8) {
            ctx->pc = 0x19ADE4u;
            goto label_19ade4;
        }
    }
    ctx->pc = 0x19ADD0u;
    // 0x19add0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19add0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19add4: 0x0  nop
    ctx->pc = 0x19add4u;
    // NOP
    // 0x19add8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19add8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19addc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19ADDCu;
    {
        const bool branch_taken_0x19addc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19addc) {
            ctx->pc = 0x19ADFCu;
            goto label_19adfc;
        }
    }
    ctx->pc = 0x19ADE4u;
label_19ade4:
    // 0x19ade4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ade4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19ade8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19ade8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19adec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19adecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19adf0: 0x0  nop
    ctx->pc = 0x19adf0u;
    // NOP
    // 0x19adf4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19adf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19adf8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19adf8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19adfc:
    // 0x19adfc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19adfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19ae00: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19ae00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19ae04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ae04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ae08: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x19ae08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ae0c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19ae0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x19ae10: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19ae10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ae14: 0x0  nop
    ctx->pc = 0x19ae14u;
    // NOP
    // 0x19ae18: 0x45030028  bc1tl       . + 4 + (0x28 << 2)
    ctx->pc = 0x19AE18u;
    {
        const bool branch_taken_0x19ae18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ae18) {
            ctx->pc = 0x19AE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AE18u;
            // 0x19ae1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AEBCu;
            goto label_19aebc;
        }
    }
    ctx->pc = 0x19AE20u;
    // 0x19ae20: 0xc061a26  jal         func_186898
    ctx->pc = 0x19AE20u;
    SET_GPR_U32(ctx, 31, 0x19AE28u);
    ctx->pc = 0x19AE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AE20u;
    // 0x19ae24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19AE20u, 0x19AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AE28u;
label_19ae28:
    // 0x19ae28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19ae2c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x19ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x19ae30: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x19ae30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19ae34: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x19AE34u;
    {
        const bool branch_taken_0x19ae34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE34u;
        // 0x19ae38: 0x8e222b00  lw          $v0, 0x2B00($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae34) {
            ctx->pc = 0x19AEB8u;
            goto label_19aeb8;
        }
    }
    ctx->pc = 0x19AE3Cu;
    // 0x19ae3c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AE3Cu;
    {
        const bool branch_taken_0x19ae3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE3Cu;
        // 0x19ae40: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae3c) {
            ctx->pc = 0x19AE58u;
            goto label_19ae58;
        }
    }
    ctx->pc = 0x19AE44u;
    // 0x19ae44: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19ae44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19ae48: 0x0  nop
    ctx->pc = 0x19ae48u;
    // NOP
    // 0x19ae4c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19ae4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19ae50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19AE50u;
    {
        const bool branch_taken_0x19ae50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ae50) {
            ctx->pc = 0x19AE70u;
            goto label_19ae70;
        }
    }
    ctx->pc = 0x19AE58u;
label_19ae58:
    // 0x19ae58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ae58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19ae5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19ae5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19ae60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19ae60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19ae64: 0x0  nop
    ctx->pc = 0x19ae64u;
    // NOP
    // 0x19ae68: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19ae68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x19ae6c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19ae6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19ae70:
    // 0x19ae70: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19ae70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19ae74: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19ae74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19ae78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ae78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ae7c: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x19ae7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ae80: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19ae80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x19ae84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19ae84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ae88: 0x0  nop
    ctx->pc = 0x19ae88u;
    // NOP
    // 0x19ae8c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x19AE8Cu;
    {
        const bool branch_taken_0x19ae8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE8Cu;
        // 0x19ae90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae8c) {
            ctx->pc = 0x19AEB8u;
            goto label_19aeb8;
        }
    }
    ctx->pc = 0x19AE94u;
    // 0x19ae94: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x19ae94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x19ae98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19ae98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19ae9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ae9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aea0: 0xc06749e  jal         func_19D278
    ctx->pc = 0x19AEA0u;
    SET_GPR_U32(ctx, 31, 0x19AEA8u);
    ctx->pc = 0x19AEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AEA0u;
    // 0x19aea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D278u, 0x19AEA0u, 0x19AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AEA8u;
label_19aea8:
    // 0x19aea8: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19AEA8u;
    SET_GPR_U32(ctx, 31, 0x19AEB0u);
    ctx->pc = 0x19AEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AEA8u;
    // 0x19aeac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19AEA8u, 0x19AEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AEB0u;
label_19aeb0:
    // 0x19aeb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19aeb4: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x19aeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
label_19aeb8:
    // 0x19aeb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19aeb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19aebc:
    // 0x19aebc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19aebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19aec0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19aec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19aec4: 0x3e00008  jr          $ra
    ctx->pc = 0x19AEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEC4u;
        // 0x19aec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AECCu;
    // 0x19aecc: 0x0  nop
    ctx->pc = 0x19aeccu;
    // NOP
    ctx->pc = 0x19aed0u;
}
