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

// Function: sub_0014C238
// Address: 0x14c238 - 0x14c2b8
void sub_0014C238_0x14c238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C238_0x14c238");
#endif

    switch (ctx->pc) {
        case 0x14c258u: goto label_14c258;
        case 0x14c278u: goto label_14c278;
        case 0x14c284u: goto label_14c284;
        case 0x14c2a0u: goto label_14c2a0;
        default: break;
    }

    ctx->pc = 0x14c238u;

    // 0x14c238: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14c238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14c23c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14c23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14c240: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x14c240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14c244: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x14c244u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14c248: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14c248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14c24c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x14c24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x14c250: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x14C250u;
    SET_GPR_U32(ctx, 31, 0x14C258u);
    ctx->pc = 0x14C254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C250u;
    // 0x14c254: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x14C250u, 0x14C258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C258u;
label_14c258:
    // 0x14c258: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14c258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14c25c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14c25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c260: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14c260u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14c264: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14C264u;
    {
        const bool branch_taken_0x14c264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c264) {
            ctx->pc = 0x14C268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C264u;
            // 0x14c268: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C26Cu;
            goto label_14c26c;
        }
    }
    ctx->pc = 0x14C26Cu;
label_14c26c:
    // 0x14c26c: 0x8010  mfhi        $s0
    ctx->pc = 0x14c26cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x14c270: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14C270u;
    SET_GPR_U32(ctx, 31, 0x14C278u);
    ctx->pc = 0x14C274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C270u;
    // 0x14c274: 0x26100003  addiu       $s0, $s0, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14C270u, 0x14C278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C278u;
label_14c278:
    // 0x14c278: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14c278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c27c: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x14C27Cu;
    SET_GPR_U32(ctx, 31, 0x14C284u);
    ctx->pc = 0x14C280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C27Cu;
    // 0x14c280: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x14C27Cu, 0x14C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C284u;
label_14c284:
    // 0x14c284: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x14c284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14c288: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14c288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c28c: 0x2238818  mult        $s1, $s1, $v1
    ctx->pc = 0x14c28cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x14c290: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14c290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c294: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x14c294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x14c298: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14C298u;
    SET_GPR_U32(ctx, 31, 0x14C2A0u);
    ctx->pc = 0x14C29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C298u;
    // 0x14c29c: 0xae4204e8  sw          $v0, 0x4E8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1256), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14C298u, 0x14C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C2A0u;
label_14c2a0:
    // 0x14c2a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14c2a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c2a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14c2a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c2a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x14c2a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c2ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x14c2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14c2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x14C2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C2B0u;
        // 0x14c2b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C2B8u;
}
