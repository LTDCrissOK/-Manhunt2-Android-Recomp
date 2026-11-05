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

// Function: sub_0014C378
// Address: 0x14c378 - 0x14c3d0
void sub_0014C378_0x14c378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C378_0x14c378");
#endif

    switch (ctx->pc) {
        case 0x14c394u: goto label_14c394;
        default: break;
    }

    ctx->pc = 0x14c378u;

    // 0x14c378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14c378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14c37c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14c37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14c380: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14c380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14c384: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x14c384u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14c388: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14c388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14c38c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x14C38Cu;
    SET_GPR_U32(ctx, 31, 0x14C394u);
    ctx->pc = 0x14C390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C38Cu;
    // 0x14c390: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x14C38Cu, 0x14C394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C394u;
label_14c394:
    // 0x14c394: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14c394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14c398: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14c398u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14c39c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14C39Cu;
    {
        const bool branch_taken_0x14c39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c39c) {
            ctx->pc = 0x14C3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C39Cu;
            // 0x14c3a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C3A4u;
            goto label_14c3a4;
        }
    }
    ctx->pc = 0x14C3A4u;
label_14c3a4:
    // 0x14c3a4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x14c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14c3a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14c3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c3ac: 0x2010  mfhi        $a0
    ctx->pc = 0x14c3acu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x14c3b0: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x14c3b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x14c3b4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x14c3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x14c3b8: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x14c3b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x14c3bc: 0xa22404f0  sb          $a0, 0x4F0($s1)
    ctx->pc = 0x14c3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1264), (uint8_t)GPR_U32(ctx, 4));
    // 0x14c3c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14c3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c3c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14c3c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14c3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x14C3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C3C8u;
        // 0x14c3cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C3D0u;
}
