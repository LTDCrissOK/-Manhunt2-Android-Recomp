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

// Function: sub_002EDA20
// Address: 0x2eda20 - 0x2edb08
void sub_002EDA20_0x2eda20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDA20_0x2eda20");
#endif

    switch (ctx->pc) {
        case 0x2eda4cu: goto label_2eda4c;
        case 0x2eda80u: goto label_2eda80;
        case 0x2edaa8u: goto label_2edaa8;
        case 0x2edad8u: goto label_2edad8;
        case 0x2edae0u: goto label_2edae0;
        case 0x2edaecu: goto label_2edaec;
        case 0x2edaf8u: goto label_2edaf8;
        default: break;
    }

    ctx->pc = 0x2eda20u;

    // 0x2eda20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eda20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eda24: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2eda24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2eda28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eda28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eda2c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2eda2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2eda30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eda30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eda34: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2eda34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2eda38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eda38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2eda3c: 0x5443002f  bnel        $v0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2EDA3Cu;
    {
        const bool branch_taken_0x2eda3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2eda3c) {
            ctx->pc = 0x2EDA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDA3Cu;
            // 0x2eda40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDAFCu;
            goto label_2edafc;
        }
    }
    ctx->pc = 0x2EDA44u;
    // 0x2eda44: 0xc0c1132  jal         func_3044C8
    ctx->pc = 0x2EDA44u;
    SET_GPR_U32(ctx, 31, 0x2EDA4Cu);
    ctx->pc = 0x3044C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3044C8u, 0x2EDA44u, 0x2EDA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA4Cu;
label_2eda4c:
    // 0x2eda4c: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x2eda4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2eda50: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x2eda50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x2eda54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2eda54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2eda58: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2eda58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2eda5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2eda5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eda60: 0xae0311c0  sw          $v1, 0x11C0($s0)
    ctx->pc = 0x2eda60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
    // 0x2eda64: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2eda64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x2eda68: 0x2442ffd9  addiu       $v0, $v0, -0x27
    ctx->pc = 0x2eda68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967257));
    // 0x2eda6c: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x2eda6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2eda70: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDA70u;
    {
        const bool branch_taken_0x2eda70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eda70) {
            ctx->pc = 0x2EDA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDA70u;
            // 0x2eda74: 0x92021171  lbu         $v0, 0x1171($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4465)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDA84u;
            goto label_2eda84;
        }
    }
    ctx->pc = 0x2EDA78u;
    // 0x2eda78: 0xc08e528  jal         func_2394A0
    ctx->pc = 0x2EDA78u;
    SET_GPR_U32(ctx, 31, 0x2EDA80u);
    ctx->pc = 0x2EDA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDA78u;
    // 0x2eda7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2394A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2394A0u, 0x2EDA78u, 0x2EDA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDA80u;
label_2eda80:
    // 0x2eda80: 0x92021171  lbu         $v0, 0x1171($s0)
    ctx->pc = 0x2eda80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4465)));
label_2eda84:
    // 0x2eda84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EDA84u;
    {
        const bool branch_taken_0x2eda84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eda84) {
            ctx->pc = 0x2EDAA0u;
            goto label_2edaa0;
        }
    }
    ctx->pc = 0x2EDA8Cu;
    // 0x2eda8c: 0xc6000374  lwc1        $f0, 0x374($s0)
    ctx->pc = 0x2eda8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eda90: 0xc60103a0  lwc1        $f1, 0x3A0($s0)
    ctx->pc = 0x2eda90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eda94: 0xae0003a0  sw          $zero, 0x3A0($s0)
    ctx->pc = 0x2eda94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
    // 0x2eda98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eda98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eda9c: 0xe6000374  swc1        $f0, 0x374($s0)
    ctx->pc = 0x2eda9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 884), bits); }
label_2edaa0:
    // 0x2edaa0: 0xc08bc02  jal         func_22F008
    ctx->pc = 0x2EDAA0u;
    SET_GPR_U32(ctx, 31, 0x2EDAA8u);
    ctx->pc = 0x2EDAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDAA0u;
    // 0x2edaa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F008u, 0x2EDAA0u, 0x2EDAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDAA8u;
label_2edaa8:
    // 0x2edaa8: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2edaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2edaac: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x2edaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x2edab0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2edab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2edab4: 0xae0211c0  sw          $v0, 0x11C0($s0)
    ctx->pc = 0x2edab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
    // 0x2edab8: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x2edab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2edabc: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x2edabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x2edac0: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x2edac0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2edac4: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2EDAC4u;
    {
        const bool branch_taken_0x2edac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edac4) {
            ctx->pc = 0x2EDAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDAC4u;
            // 0x2edac8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDAFCu;
            goto label_2edafc;
        }
    }
    ctx->pc = 0x2EDACCu;
    // 0x2edacc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2edaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edad0: 0xc08a15a  jal         func_228568
    ctx->pc = 0x2EDAD0u;
    SET_GPR_U32(ctx, 31, 0x2EDAD8u);
    ctx->pc = 0x2EDAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDAD0u;
    // 0x2edad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x2EDAD0u, 0x2EDAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDAD8u;
label_2edad8:
    // 0x2edad8: 0xc08dc8e  jal         func_237238
    ctx->pc = 0x2EDAD8u;
    SET_GPR_U32(ctx, 31, 0x2EDAE0u);
    ctx->pc = 0x2EDADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDAD8u;
    // 0x2edadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237238u, 0x2EDAD8u, 0x2EDAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDAE0u;
label_2edae0:
    // 0x2edae0: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x2edae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x2edae4: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x2EDAE4u;
    SET_GPR_U32(ctx, 31, 0x2EDAECu);
    ctx->pc = 0x2EDAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDAE4u;
    // 0x2edae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x2EDAE4u, 0x2EDAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDAECu;
label_2edaec:
    // 0x2edaec: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x2edaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2edaf0: 0xc0757d2  jal         func_1D5F48
    ctx->pc = 0x2EDAF0u;
    SET_GPR_U32(ctx, 31, 0x2EDAF8u);
    ctx->pc = 0x2EDAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDAF0u;
    // 0x2edaf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x2EDAF0u, 0x2EDAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDAF8u;
label_2edaf8:
    // 0x2edaf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2edaf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2edafc:
    // 0x2edafc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2edafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2edb00: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB00u;
        // 0x2edb04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDB08u;
}
