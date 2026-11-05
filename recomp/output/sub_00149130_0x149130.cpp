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

// Function: sub_00149130
// Address: 0x149130 - 0x1491b0
void sub_00149130_0x149130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149130_0x149130");
#endif

    switch (ctx->pc) {
        case 0x149150u: goto label_149150;
        case 0x149170u: goto label_149170;
        case 0x149178u: goto label_149178;
        case 0x149198u: goto label_149198;
        default: break;
    }

    ctx->pc = 0x149130u;

    // 0x149130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149134: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x149134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x149138: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x149138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14913c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x14913cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x149140: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x149140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x149144: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x149144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x149148: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x149148u;
    SET_GPR_U32(ctx, 31, 0x149150u);
    ctx->pc = 0x14914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149148u;
    // 0x14914c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x149148u, 0x149150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149150u;
label_149150:
    // 0x149150: 0x24030514  addiu       $v1, $zero, 0x514
    ctx->pc = 0x149150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
    // 0x149154: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x149154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149158: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x149158u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14915c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14915Cu;
    {
        const bool branch_taken_0x14915c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14915c) {
            ctx->pc = 0x149160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14915Cu;
            // 0x149160: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x149164u;
            goto label_149164;
        }
    }
    ctx->pc = 0x149164u;
label_149164:
    // 0x149164: 0x8010  mfhi        $s0
    ctx->pc = 0x149164u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x149168: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x149168u;
    SET_GPR_U32(ctx, 31, 0x149170u);
    ctx->pc = 0x14916Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149168u;
    // 0x14916c: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x149168u, 0x149170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149170u;
label_149170:
    // 0x149170: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x149170u;
    SET_GPR_U32(ctx, 31, 0x149178u);
    ctx->pc = 0x149174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149170u;
    // 0x149174: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x149170u, 0x149178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149178u;
label_149178:
    // 0x149178: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x149178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x14917c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14917cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x149180: 0x2238818  mult        $s1, $s1, $v1
    ctx->pc = 0x149180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x149184: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x149184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149188: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x149188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14918c: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x14918cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x149190: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x149190u;
    SET_GPR_U32(ctx, 31, 0x149198u);
    ctx->pc = 0x149194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149190u;
    // 0x149194: 0xae4204f4  sw          $v0, 0x4F4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x149190u, 0x149198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149198u;
label_149198:
    // 0x149198: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x149198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14919c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14919cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1491a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1491a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1491a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1491a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1491a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1491A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1491ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1491A8u;
        // 0x1491ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1491A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1491B0u;
}
