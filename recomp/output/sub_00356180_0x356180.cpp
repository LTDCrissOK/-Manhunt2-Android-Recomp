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

// Function: sub_00356180
// Address: 0x356180 - 0x356208
void sub_00356180_0x356180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356180_0x356180");
#endif

    switch (ctx->pc) {
        case 0x3561c8u: goto label_3561c8;
        case 0x3561d0u: goto label_3561d0;
        default: break;
    }

    ctx->pc = 0x356180u;

    // 0x356180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x356180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x356184: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x356184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x356188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x356188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35618c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35618cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x356190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x356190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356194: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x356194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x356198: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x356198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x35619c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35619cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3561a0: 0x241201ff  addiu       $s2, $zero, 0x1FF
    ctx->pc = 0x3561a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x3561a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3561a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3561a8: 0x241300b4  addiu       $s3, $zero, 0xB4
    ctx->pc = 0x3561a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x3561ac: 0xae020804  sw          $v0, 0x804($s0)
    ctx->pc = 0x3561acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2052), GPR_U32(ctx, 2));
    // 0x3561b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3561b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3561b4: 0xae000808  sw          $zero, 0x808($s0)
    ctx->pc = 0x3561b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2056), GPR_U32(ctx, 0));
    // 0x3561b8: 0xae00080c  sw          $zero, 0x80C($s0)
    ctx->pc = 0x3561b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2060), GPR_U32(ctx, 0));
    // 0x3561bc: 0xae000810  sw          $zero, 0x810($s0)
    ctx->pc = 0x3561bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 0));
    // 0x3561c0: 0xa2000814  sb          $zero, 0x814($s0)
    ctx->pc = 0x3561c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2068), (uint8_t)GPR_U32(ctx, 0));
    // 0x3561c4: 0x0  nop
    ctx->pc = 0x3561c4u;
    // NOP
label_3561c8:
    // 0x3561c8: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x3561C8u;
    SET_GPR_U32(ctx, 31, 0x3561D0u);
    ctx->pc = 0x3561CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3561C8u;
    // 0x3561cc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x3561C8u, 0x3561D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3561D0u;
label_3561d0:
    // 0x3561d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3561d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3561d4: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x3561d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3561d8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3561d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3561dc: 0x641fffa  bgez        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3561DCu;
    {
        const bool branch_taken_0x3561dc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x3561E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3561DCu;
        // 0x3561e0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3561dc) {
            ctx->pc = 0x3561C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3561c8;
        }
    }
    ctx->pc = 0x3561E4u;
    // 0x3561e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3561e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3561e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3561e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3561ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3561ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3561f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3561f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3561f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3561f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3561f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3561f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3561fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3561FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3561FCu;
        // 0x356200: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3561FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356204u;
    // 0x356204: 0x0  nop
    ctx->pc = 0x356204u;
    // NOP
    ctx->pc = 0x356208u;
}
