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

// Function: sub_0014F548
// Address: 0x14f548 - 0x14f5a8
void sub_0014F548_0x14f548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F548_0x14f548");
#endif

    switch (ctx->pc) {
        case 0x14f568u: goto label_14f568;
        case 0x14f574u: goto label_14f574;
        case 0x14f590u: goto label_14f590;
        default: break;
    }

    ctx->pc = 0x14f548u;

    // 0x14f548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14f54c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14f54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14f550: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14f550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14f554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14f554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f558: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14f558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14f55c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14f55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f560: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14F560u;
    SET_GPR_U32(ctx, 31, 0x14F568u);
    ctx->pc = 0x14F564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F560u;
    // 0x14f564: 0x30b000ff  andi        $s0, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14F560u, 0x14F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F568u;
label_14f568:
    // 0x14f568: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14f568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f56c: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x14F56Cu;
    SET_GPR_U32(ctx, 31, 0x14F574u);
    ctx->pc = 0x14F570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F56Cu;
    // 0x14f570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x14F56Cu, 0x14F574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F574u;
label_14f574:
    // 0x14f574: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x14f574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14f578: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14f578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f57c: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x14f57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x14f580: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14f580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f584: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x14f584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x14f588: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14F588u;
    SET_GPR_U32(ctx, 31, 0x14F590u);
    ctx->pc = 0x14F58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F588u;
    // 0x14f58c: 0xae220510  sw          $v0, 0x510($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1296), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14F588u, 0x14F590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F590u;
label_14f590:
    // 0x14f590: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14f590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f594: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14f594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f598: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14f598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f59c: 0x3e00008  jr          $ra
    ctx->pc = 0x14F59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F59Cu;
        // 0x14f5a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F5A4u;
    // 0x14f5a4: 0x0  nop
    ctx->pc = 0x14f5a4u;
    // NOP
    ctx->pc = 0x14f5a8u;
}
