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

// Function: sub_00139270
// Address: 0x139270 - 0x139310
void sub_00139270_0x139270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139270_0x139270");
#endif

    switch (ctx->pc) {
        case 0x139284u: goto label_139284;
        case 0x139298u: goto label_139298;
        case 0x1392a8u: goto label_1392a8;
        case 0x1392d8u: goto label_1392d8;
        case 0x1392e0u: goto label_1392e0;
        case 0x1392e8u: goto label_1392e8;
        case 0x1392f0u: goto label_1392f0;
        case 0x1392fcu: goto label_1392fc;
        default: break;
    }

    ctx->pc = 0x139270u;

    // 0x139270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x139274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139278: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x139278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13927c: 0xc04d6b0  jal         func_135AC0
    ctx->pc = 0x13927Cu;
    SET_GPR_U32(ctx, 31, 0x139284u);
    ctx->pc = 0x139280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13927Cu;
    // 0x139280: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135AC0u, 0x13927Cu, 0x139284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139284u;
label_139284:
    // 0x139284: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x139284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x139288: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x139288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x13928c: 0x24630648  addiu       $v1, $v1, 0x648
    ctx->pc = 0x13928cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1608));
    // 0x139290: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x139290u;
    SET_GPR_U32(ctx, 31, 0x139298u);
    ctx->pc = 0x139294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139290u;
    // 0x139294: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x139290u, 0x139298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139298u;
label_139298:
    // 0x139298: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x139298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13929c: 0x260204f0  addiu       $v0, $s0, 0x4F0
    ctx->pc = 0x13929cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1264));
    // 0x1392a0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1392a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1392a4: 0x0  nop
    ctx->pc = 0x1392a4u;
    // NOP
label_1392a8:
    // 0x1392a8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1392a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1392ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1392acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1392b0: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1392b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1392b4: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1392b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1392b8: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1392b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1392bc: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1392bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1392c0: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x1392c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x1392c4: 0x1464fff8  bne         $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1392C4u;
    {
        const bool branch_taken_0x1392c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1392C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1392C4u;
        // 0x1392c8: 0x2442005c  addiu       $v0, $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1392c4) {
            ctx->pc = 0x1392A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1392a8;
        }
    }
    ctx->pc = 0x1392CCu;
    // 0x1392cc: 0xae000ab8  sw          $zero, 0xAB8($s0)
    ctx->pc = 0x1392ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 0));
    // 0x1392d0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1392D0u;
    SET_GPR_U32(ctx, 31, 0x1392D8u);
    ctx->pc = 0x1392D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1392D0u;
    // 0x1392d4: 0x26040ad0  addiu       $a0, $s0, 0xAD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1392D0u, 0x1392D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1392D8u;
label_1392d8:
    // 0x1392d8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1392D8u;
    SET_GPR_U32(ctx, 31, 0x1392E0u);
    ctx->pc = 0x1392DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1392D8u;
    // 0x1392dc: 0x26040ae0  addiu       $a0, $s0, 0xAE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1392D8u, 0x1392E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1392E0u;
label_1392e0:
    // 0x1392e0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1392E0u;
    SET_GPR_U32(ctx, 31, 0x1392E8u);
    ctx->pc = 0x1392E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1392E0u;
    // 0x1392e4: 0x26040af0  addiu       $a0, $s0, 0xAF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1392E0u, 0x1392E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1392E8u;
label_1392e8:
    // 0x1392e8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1392E8u;
    SET_GPR_U32(ctx, 31, 0x1392F0u);
    ctx->pc = 0x1392ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1392E8u;
    // 0x1392ec: 0x26040b00  addiu       $a0, $s0, 0xB00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1392E8u, 0x1392F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1392F0u;
label_1392f0:
    // 0x1392f0: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x1392f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x1392f4: 0xc04e572  jal         func_1395C8
    ctx->pc = 0x1392F4u;
    SET_GPR_U32(ctx, 31, 0x1392FCu);
    ctx->pc = 0x1392F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1392F4u;
    // 0x1392f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1395C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1395C8u, 0x1392F4u, 0x1392FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1392FCu;
label_1392fc:
    // 0x1392fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1392fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139300: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x139300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139308: 0x3e00008  jr          $ra
    ctx->pc = 0x139308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139308u;
        // 0x13930c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139310u;
}
