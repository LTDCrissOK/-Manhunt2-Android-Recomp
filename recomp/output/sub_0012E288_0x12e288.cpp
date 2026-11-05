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

// Function: sub_0012E288
// Address: 0x12e288 - 0x12e338
void sub_0012E288_0x12e288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E288_0x12e288");
#endif

    switch (ctx->pc) {
        case 0x12e2acu: goto label_12e2ac;
        case 0x12e2bcu: goto label_12e2bc;
        case 0x12e2c8u: goto label_12e2c8;
        case 0x12e2d8u: goto label_12e2d8;
        case 0x12e2e4u: goto label_12e2e4;
        case 0x12e2ecu: goto label_12e2ec;
        case 0x12e2f8u: goto label_12e2f8;
        case 0x12e300u: goto label_12e300;
        case 0x12e30cu: goto label_12e30c;
        case 0x12e320u: goto label_12e320;
        default: break;
    }

    ctx->pc = 0x12e288u;

    // 0x12e288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e28c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12e290: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12e290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12e294: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12e294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e298: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12e298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e29c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e2a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12e2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12e2a4: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12E2A4u;
    SET_GPR_U32(ctx, 31, 0x12E2ACu);
    ctx->pc = 0x12E2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2A4u;
    // 0x12e2a8: 0x24050416  addiu       $a1, $zero, 0x416 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1046));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12E2A4u, 0x12E2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2ACu;
label_12e2ac:
    // 0x12e2ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2b0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x12e2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12e2b4: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12E2B4u;
    SET_GPR_U32(ctx, 31, 0x12E2BCu);
    ctx->pc = 0x12E2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2B4u;
    // 0x12e2b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12E2B4u, 0x12E2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2BCu;
label_12e2bc:
    // 0x12e2bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2c0: 0xc045f1a  jal         func_117C68
    ctx->pc = 0x12E2C0u;
    SET_GPR_U32(ctx, 31, 0x12E2C8u);
    ctx->pc = 0x12E2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2C0u;
    // 0x12e2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C68u, 0x12E2C0u, 0x12E2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2C8u;
label_12e2c8:
    // 0x12e2c8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x12e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12e2cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2d0: 0xc046044  jal         func_118110
    ctx->pc = 0x12E2D0u;
    SET_GPR_U32(ctx, 31, 0x12E2D8u);
    ctx->pc = 0x12E2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2D0u;
    // 0x12e2d4: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x12E2D0u, 0x12E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2D8u;
label_12e2d8:
    // 0x12e2d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e2dc: 0xc046030  jal         func_1180C0
    ctx->pc = 0x12E2DCu;
    SET_GPR_U32(ctx, 31, 0x12E2E4u);
    ctx->pc = 0x12E2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2DCu;
    // 0x12e2e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x12E2DCu, 0x12E2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2E4u;
label_12e2e4:
    // 0x12e2e4: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x12E2E4u;
    SET_GPR_U32(ctx, 31, 0x12E2ECu);
    ctx->pc = 0x12E2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2E4u;
    // 0x12e2e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x12E2E4u, 0x12E2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2ECu;
label_12e2ec:
    // 0x12e2ec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x12e2ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x12e2f0: 0xc046290  jal         func_118A40
    ctx->pc = 0x12E2F0u;
    SET_GPR_U32(ctx, 31, 0x12E2F8u);
    ctx->pc = 0x12E2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2F0u;
    // 0x12e2f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x12E2F0u, 0x12E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E2F8u;
label_12e2f8:
    // 0x12e2f8: 0xc046002  jal         func_118008
    ctx->pc = 0x12E2F8u;
    SET_GPR_U32(ctx, 31, 0x12E300u);
    ctx->pc = 0x12E2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E2F8u;
    // 0x12e2fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x12E2F8u, 0x12E300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E300u;
label_12e300:
    // 0x12e300: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e304: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x12E304u;
    SET_GPR_U32(ctx, 31, 0x12E30Cu);
    ctx->pc = 0x12E308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E304u;
    // 0x12e308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x12E304u, 0x12E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E30Cu;
label_12e30c:
    // 0x12e30c: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x12e30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12e310: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12e310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e314: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x12e314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12e318: 0xc04c662  jal         func_131988
    ctx->pc = 0x12E318u;
    SET_GPR_U32(ctx, 31, 0x12E320u);
    ctx->pc = 0x12E31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E318u;
    // 0x12e31c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12E318u, 0x12E320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E320u;
label_12e320:
    // 0x12e320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e324: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e328: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12e328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e32c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12e32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e330: 0x3e00008  jr          $ra
    ctx->pc = 0x12E330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E330u;
        // 0x12e334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E338u;
}
