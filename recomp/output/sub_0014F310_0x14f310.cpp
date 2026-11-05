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

// Function: sub_0014F310
// Address: 0x14f310 - 0x14f370
void sub_0014F310_0x14f310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F310_0x14f310");
#endif

    switch (ctx->pc) {
        case 0x14f330u: goto label_14f330;
        case 0x14f33cu: goto label_14f33c;
        case 0x14f358u: goto label_14f358;
        default: break;
    }

    ctx->pc = 0x14f310u;

    // 0x14f310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14f314: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14f314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14f318: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14f318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14f31c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14f31cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f320: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14f320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14f324: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14f324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f328: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14F328u;
    SET_GPR_U32(ctx, 31, 0x14F330u);
    ctx->pc = 0x14F32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F328u;
    // 0x14f32c: 0x30b000ff  andi        $s0, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14F328u, 0x14F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F330u;
label_14f330:
    // 0x14f330: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14f330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f334: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x14F334u;
    SET_GPR_U32(ctx, 31, 0x14F33Cu);
    ctx->pc = 0x14F338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F334u;
    // 0x14f338: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x14F334u, 0x14F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F33Cu;
label_14f33c:
    // 0x14f33c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x14f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14f340: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14f340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f344: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x14f344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x14f348: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14f348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f34c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x14f34cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x14f350: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14F350u;
    SET_GPR_U32(ctx, 31, 0x14F358u);
    ctx->pc = 0x14F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F350u;
    // 0x14f354: 0xae220518  sw          $v0, 0x518($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1304), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14F350u, 0x14F358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F358u;
label_14f358:
    // 0x14f358: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14f358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f35c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14f35cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14f360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f364: 0x3e00008  jr          $ra
    ctx->pc = 0x14F364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F364u;
        // 0x14f368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F36Cu;
    // 0x14f36c: 0x0  nop
    ctx->pc = 0x14f36cu;
    // NOP
    ctx->pc = 0x14f370u;
}
