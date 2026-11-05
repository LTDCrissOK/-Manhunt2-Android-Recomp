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

// Function: sub_00167390
// Address: 0x167390 - 0x1673f0
void sub_00167390_0x167390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167390_0x167390");
#endif

    switch (ctx->pc) {
        case 0x1673bcu: goto label_1673bc;
        case 0x1673c8u: goto label_1673c8;
        case 0x1673d8u: goto label_1673d8;
        default: break;
    }

    ctx->pc = 0x167390u;

    // 0x167390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x167390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x167394: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x167394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x167398: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x167398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16739c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16739cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1673a0: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1673a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1673a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1673a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1673a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1673a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1673ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1673acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1673b0: 0x8e2303bc  lw          $v1, 0x3BC($s1)
    ctx->pc = 0x1673b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 956)));
    // 0x1673b4: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1673B4u;
    SET_GPR_U32(ctx, 31, 0x1673BCu);
    ctx->pc = 0x1673B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1673B4u;
    // 0x1673b8: 0x43800b  movn        $s0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1673B4u, 0x1673BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1673BCu;
label_1673bc:
    // 0x1673bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1673bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1673c0: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x1673C0u;
    SET_GPR_U32(ctx, 31, 0x1673C8u);
    ctx->pc = 0x1673C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1673C0u;
    // 0x1673c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x1673C0u, 0x1673C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1673C8u;
label_1673c8:
    // 0x1673c8: 0xae2203c4  sw          $v0, 0x3C4($s1)
    ctx->pc = 0x1673c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 964), GPR_U32(ctx, 2));
    // 0x1673cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1673ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1673d0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1673D0u;
    SET_GPR_U32(ctx, 31, 0x1673D8u);
    ctx->pc = 0x1673D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1673D0u;
    // 0x1673d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1673D0u, 0x1673D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1673D8u;
label_1673d8:
    // 0x1673d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1673d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1673dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1673dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1673e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1673e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1673e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1673E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1673E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1673E4u;
        // 0x1673e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1673E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1673ECu;
    // 0x1673ec: 0x0  nop
    ctx->pc = 0x1673ecu;
    // NOP
    ctx->pc = 0x1673f0u;
}
