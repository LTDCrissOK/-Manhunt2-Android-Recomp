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

// Function: sub_0013A6B0
// Address: 0x13a6b0 - 0x13a730
void sub_0013A6B0_0x13a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A6B0_0x13a6b0");
#endif

    switch (ctx->pc) {
        case 0x13a6d0u: goto label_13a6d0;
        case 0x13a6f0u: goto label_13a6f0;
        case 0x13a6f8u: goto label_13a6f8;
        case 0x13a718u: goto label_13a718;
        default: break;
    }

    ctx->pc = 0x13a6b0u;

    // 0x13a6b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13a6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13a6b4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13a6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13a6b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13a6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13a6bc: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x13a6bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13a6c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13a6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13a6c4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13a6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13a6c8: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x13A6C8u;
    SET_GPR_U32(ctx, 31, 0x13A6D0u);
    ctx->pc = 0x13A6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A6C8u;
    // 0x13a6cc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x13A6C8u, 0x13A6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A6D0u;
label_13a6d0:
    // 0x13a6d0: 0x24031b58  addiu       $v1, $zero, 0x1B58
    ctx->pc = 0x13a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7000));
    // 0x13a6d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a6d8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x13a6d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13a6dc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13A6DCu;
    {
        const bool branch_taken_0x13a6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a6dc) {
            ctx->pc = 0x13A6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A6DCu;
            // 0x13a6e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A6E4u;
            goto label_13a6e4;
        }
    }
    ctx->pc = 0x13A6E4u;
label_13a6e4:
    // 0x13a6e4: 0x8010  mfhi        $s0
    ctx->pc = 0x13a6e4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x13a6e8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x13A6E8u;
    SET_GPR_U32(ctx, 31, 0x13A6F0u);
    ctx->pc = 0x13A6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A6E8u;
    // 0x13a6ec: 0x261003e8  addiu       $s0, $s0, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13A6E8u, 0x13A6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A6F0u;
label_13a6f0:
    // 0x13a6f0: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x13A6F0u;
    SET_GPR_U32(ctx, 31, 0x13A6F8u);
    ctx->pc = 0x13A6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A6F0u;
    // 0x13a6f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x13A6F0u, 0x13A6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A6F8u;
label_13a6f8:
    // 0x13a6f8: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x13a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x13a6fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x13a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13a700: 0x2238818  mult        $s1, $s1, $v1
    ctx->pc = 0x13a700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x13a704: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13a704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a708: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13a708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a70c: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x13a70cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x13a710: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13A710u;
    SET_GPR_U32(ctx, 31, 0x13A718u);
    ctx->pc = 0x13A714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A710u;
    // 0x13a714: 0xae420510  sw          $v0, 0x510($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1296), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13A710u, 0x13A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A718u;
label_13a718:
    // 0x13a718: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13a718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a71c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13a71cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13a720: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13a720u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a724: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13a724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a728: 0x3e00008  jr          $ra
    ctx->pc = 0x13A728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A728u;
        // 0x13a72c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A730u;
}
