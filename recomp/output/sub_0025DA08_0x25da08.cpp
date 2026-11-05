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

// Function: sub_0025DA08
// Address: 0x25da08 - 0x25db30
void sub_0025DA08_0x25da08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DA08_0x25da08");
#endif

    switch (ctx->pc) {
        case 0x25da3cu: goto label_25da3c;
        case 0x25da50u: goto label_25da50;
        case 0x25da64u: goto label_25da64;
        case 0x25da6cu: goto label_25da6c;
        case 0x25daa4u: goto label_25daa4;
        case 0x25dab0u: goto label_25dab0;
        case 0x25dad4u: goto label_25dad4;
        case 0x25dadcu: goto label_25dadc;
        case 0x25daf0u: goto label_25daf0;
        case 0x25db04u: goto label_25db04;
        case 0x25db14u: goto label_25db14;
        default: break;
    }

    ctx->pc = 0x25da08u;

    // 0x25da08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25da08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25da0c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x25da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x25da10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25da10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25da14: 0x24422400  addiu       $v0, $v0, 0x2400
    ctx->pc = 0x25da14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9216));
    // 0x25da18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25da18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25da1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25da1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25da20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25da24: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x25da24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
    // 0x25da28: 0x8e04025c  lw          $a0, 0x25C($s0)
    ctx->pc = 0x25da28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 604)));
    // 0x25da2c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DA2Cu;
    {
        const bool branch_taken_0x25da2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA2Cu;
        // 0x25da30: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da2c) {
            ctx->pc = 0x25DA3Cu;
            goto label_25da3c;
        }
    }
    ctx->pc = 0x25DA34u;
    // 0x25da34: 0xc073db6  jal         func_1CF6D8
    ctx->pc = 0x25DA34u;
    SET_GPR_U32(ctx, 31, 0x25DA3Cu);
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x25DA34u, 0x25DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA3Cu;
label_25da3c:
    // 0x25da3c: 0x8e040258  lw          $a0, 0x258($s0)
    ctx->pc = 0x25da3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x25da40: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DA40u;
    {
        const bool branch_taken_0x25da40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da40) {
            ctx->pc = 0x25DA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DA40u;
            // 0x25da44: 0x8e050238  lw          $a1, 0x238($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DA54u;
            goto label_25da54;
        }
    }
    ctx->pc = 0x25DA48u;
    // 0x25da48: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x25DA48u;
    SET_GPR_U32(ctx, 31, 0x25DA50u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x25DA48u, 0x25DA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA50u;
label_25da50:
    // 0x25da50: 0x8e050238  lw          $a1, 0x238($s0)
    ctx->pc = 0x25da50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
label_25da54:
    // 0x25da54: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x25DA54u;
    {
        const bool branch_taken_0x25da54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da54) {
            ctx->pc = 0x25DA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DA54u;
            // 0x25da58: 0x8e050248  lw          $a1, 0x248($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DA74u;
            goto label_25da74;
        }
    }
    ctx->pc = 0x25DA5Cu;
    // 0x25da5c: 0xc084a46  jal         func_212918
    ctx->pc = 0x25DA5Cu;
    SET_GPR_U32(ctx, 31, 0x25DA64u);
    ctx->pc = 0x25DA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DA5Cu;
    // 0x25da60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212918u, 0x25DA5Cu, 0x25DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA64u;
label_25da64:
    // 0x25da64: 0xc0c3212  jal         func_30C848
    ctx->pc = 0x25DA64u;
    SET_GPR_U32(ctx, 31, 0x25DA6Cu);
    ctx->pc = 0x25DA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DA64u;
    // 0x25da68: 0x8e040238  lw          $a0, 0x238($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x25DA64u, 0x25DA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA6Cu;
label_25da6c:
    // 0x25da6c: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x25da6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    // 0x25da70: 0x8e050248  lw          $a1, 0x248($s0)
    ctx->pc = 0x25da70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
label_25da74:
    // 0x25da74: 0x50a0001a  beql        $a1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x25DA74u;
    {
        const bool branch_taken_0x25da74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da74) {
            ctx->pc = 0x25DA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DA74u;
            // 0x25da78: 0x8e05024c  lw          $a1, 0x24C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DAE0u;
            goto label_25dae0;
        }
    }
    ctx->pc = 0x25DA7Cu;
    // 0x25da7c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x25da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x25da80: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x25DA80u;
    {
        const bool branch_taken_0x25da80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da80) {
            ctx->pc = 0x25DA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DA80u;
            // 0x25da84: 0x8e05024c  lw          $a1, 0x24C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DAE0u;
            goto label_25dae0;
        }
    }
    ctx->pc = 0x25DA88u;
    // 0x25da88: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x25da88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x25da8c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x25da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x25da90: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x25da90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x25da94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25da94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25da98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x25da98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25da9c: 0xc0c580c  jal         func_316030
    ctx->pc = 0x25DA9Cu;
    SET_GPR_U32(ctx, 31, 0x25DAA4u);
    ctx->pc = 0x25DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DA9Cu;
    // 0x25daa0: 0xaca30028  sw          $v1, 0x28($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316030u, 0x25DA9Cu, 0x25DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DAA4u;
label_25daa4:
    // 0x25daa4: 0x8e050248  lw          $a1, 0x248($s0)
    ctx->pc = 0x25daa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x25daa8: 0xc0c8716  jal         func_321C58
    ctx->pc = 0x25DAA8u;
    SET_GPR_U32(ctx, 31, 0x25DAB0u);
    ctx->pc = 0x25DAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DAA8u;
    // 0x25daac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x25DAA8u, 0x25DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DAB0u;
label_25dab0:
    // 0x25dab0: 0x8e050248  lw          $a1, 0x248($s0)
    ctx->pc = 0x25dab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x25dab4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x25dab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25dab8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25DAB8u;
    {
        const bool branch_taken_0x25dab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAB8u;
        // 0x25dabc: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dab8) {
            ctx->pc = 0x25DAD4u;
            goto label_25dad4;
        }
    }
    ctx->pc = 0x25DAC0u;
    // 0x25dac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25dac4: 0xac62bce4  sw          $v0, -0x431C($v1)
    ctx->pc = 0x25dac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950116), GPR_U32(ctx, 2));
    // 0x25dac8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x25dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x25dacc: 0xc0c4858  jal         func_312160
    ctx->pc = 0x25DACCu;
    SET_GPR_U32(ctx, 31, 0x25DAD4u);
    ctx->pc = 0x25DAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DACCu;
    // 0x25dad0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312160u, 0x25DACCu, 0x25DAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DAD4u;
label_25dad4:
    // 0x25dad4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x25DAD4u;
    SET_GPR_U32(ctx, 31, 0x25DADCu);
    ctx->pc = 0x25DAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DAD4u;
    // 0x25dad8: 0x8e040248  lw          $a0, 0x248($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x25DAD4u, 0x25DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DADCu;
label_25dadc:
    // 0x25dadc: 0x8e05024c  lw          $a1, 0x24C($s0)
    ctx->pc = 0x25dadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
label_25dae0:
    // 0x25dae0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DAE0u;
    {
        const bool branch_taken_0x25dae0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAE0u;
        // 0x25dae4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dae0) {
            ctx->pc = 0x25DAF0u;
            goto label_25daf0;
        }
    }
    ctx->pc = 0x25DAE8u;
    // 0x25dae8: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x25DAE8u;
    SET_GPR_U32(ctx, 31, 0x25DAF0u);
    ctx->pc = 0x25DAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DAE8u;
    // 0x25daec: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x25DAE8u, 0x25DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DAF0u;
label_25daf0:
    // 0x25daf0: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x25daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x25daf4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25DAF4u;
    {
        const bool branch_taken_0x25daf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25daf4) {
            ctx->pc = 0x25DAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DAF4u;
            // 0x25daf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DB0Cu;
            goto label_25db0c;
        }
    }
    ctx->pc = 0x25DAFCu;
    // 0x25dafc: 0xc0d6538  jal         func_3594E0
    ctx->pc = 0x25DAFCu;
    SET_GPR_U32(ctx, 31, 0x25DB04u);
    ctx->pc = 0x25DB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DAFCu;
    // 0x25db00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3594E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3594E0u, 0x25DAFCu, 0x25DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB04u;
label_25db04:
    // 0x25db04: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x25db04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x25db08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25db08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25db0c:
    // 0x25db0c: 0xc08732c  jal         func_21CCB0
    ctx->pc = 0x25DB0Cu;
    SET_GPR_U32(ctx, 31, 0x25DB14u);
    ctx->pc = 0x25DB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DB0Cu;
    // 0x25db10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CCB0u, 0x25DB0Cu, 0x25DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB14u;
label_25db14:
    // 0x25db14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25db14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25db18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25db18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25db1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25db1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25db20: 0x3e00008  jr          $ra
    ctx->pc = 0x25DB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB20u;
        // 0x25db24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DB28u;
    // 0x25db28: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25db28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25db2c: 0x0  nop
    ctx->pc = 0x25db2cu;
    // NOP
    ctx->pc = 0x25db30u;
}
