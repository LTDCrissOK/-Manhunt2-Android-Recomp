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

// Function: sub_0014F6A8
// Address: 0x14f6a8 - 0x14f708
void sub_0014F6A8_0x14f6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F6A8_0x14f6a8");
#endif

    switch (ctx->pc) {
        case 0x14f6c8u: goto label_14f6c8;
        case 0x14f6d4u: goto label_14f6d4;
        case 0x14f6f0u: goto label_14f6f0;
        default: break;
    }

    ctx->pc = 0x14f6a8u;

    // 0x14f6a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14f6ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14f6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14f6b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14f6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14f6b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14f6b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f6b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14f6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14f6bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14f6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f6c0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14F6C0u;
    SET_GPR_U32(ctx, 31, 0x14F6C8u);
    ctx->pc = 0x14F6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F6C0u;
    // 0x14f6c4: 0x30b000ff  andi        $s0, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14F6C0u, 0x14F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6C8u;
label_14f6c8:
    // 0x14f6c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14f6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f6cc: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x14F6CCu;
    SET_GPR_U32(ctx, 31, 0x14F6D4u);
    ctx->pc = 0x14F6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F6CCu;
    // 0x14f6d0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x14F6CCu, 0x14F6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6D4u;
label_14f6d4:
    // 0x14f6d4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x14f6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14f6d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14f6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f6dc: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x14f6dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x14f6e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14f6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f6e4: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x14f6e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x14f6e8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14F6E8u;
    SET_GPR_U32(ctx, 31, 0x14F6F0u);
    ctx->pc = 0x14F6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F6E8u;
    // 0x14f6ec: 0xae220514  sw          $v0, 0x514($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1300), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14F6E8u, 0x14F6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F6F0u;
label_14f6f0:
    // 0x14f6f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14f6f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f6f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14f6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f6f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14f6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x14F6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F6FCu;
        // 0x14f700: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F704u;
    // 0x14f704: 0x0  nop
    ctx->pc = 0x14f704u;
    // NOP
    ctx->pc = 0x14f708u;
}
