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

// Function: sub_00164578
// Address: 0x164578 - 0x1645e0
void sub_00164578_0x164578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164578_0x164578");
#endif

    switch (ctx->pc) {
        case 0x1645a0u: goto label_1645a0;
        case 0x1645b0u: goto label_1645b0;
        case 0x1645c4u: goto label_1645c4;
        default: break;
    }

    ctx->pc = 0x164578u;

    // 0x164578: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16457c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16457cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164580: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x164580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x164584: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x164584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164588: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x164588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16458c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16458cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164590: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x164590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x164594: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x164594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x164598: 0xc059862  jal         func_166188
    ctx->pc = 0x164598u;
    SET_GPR_U32(ctx, 31, 0x1645A0u);
    ctx->pc = 0x16459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164598u;
    // 0x16459c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166188u, 0x164598u, 0x1645A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1645A0u;
label_1645a0:
    // 0x1645a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1645a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1645a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645a8: 0xc059862  jal         func_166188
    ctx->pc = 0x1645A8u;
    SET_GPR_U32(ctx, 31, 0x1645B0u);
    ctx->pc = 0x1645ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1645A8u;
    // 0x1645ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166188u, 0x1645A8u, 0x1645B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1645B0u;
label_1645b0:
    // 0x1645b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1645b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1645b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645b8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1645b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1645bc: 0xc059826  jal         func_166098
    ctx->pc = 0x1645BCu;
    SET_GPR_U32(ctx, 31, 0x1645C4u);
    ctx->pc = 0x1645C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1645BCu;
    // 0x1645c0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166098u, 0x1645BCu, 0x1645C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1645C4u;
label_1645c4:
    // 0x1645c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1645c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1645c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1645c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1645cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1645ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1645d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1645d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1645d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1645d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1645d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1645D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1645DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1645D8u;
        // 0x1645dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1645D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1645E0u;
}
