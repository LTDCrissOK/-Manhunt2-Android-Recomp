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

// Function: sub_001F77D8
// Address: 0x1f77d8 - 0x1f7858
void sub_001F77D8_0x1f77d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F77D8_0x1f77d8");
#endif

    switch (ctx->pc) {
        case 0x1f7808u: goto label_1f7808;
        case 0x1f7818u: goto label_1f7818;
        default: break;
    }

    ctx->pc = 0x1f77d8u;

    // 0x1f77d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f77d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f77dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f77dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f77e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f77e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f77e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f77e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f77e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f77e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f77ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f77ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f77f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f77f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f77f4: 0x8e227ab0  lw          $v0, 0x7AB0($s1)
    ctx->pc = 0x1f77f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31408)));
    // 0x1f77f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F77F8u;
    {
        const bool branch_taken_0x1f77f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F77FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F77F8u;
        // 0x1f77fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f77f8) {
            ctx->pc = 0x1F7838u;
            goto label_1f7838;
        }
    }
    ctx->pc = 0x1F7800u;
    // 0x1f7800: 0x2413002c  addiu       $s3, $zero, 0x2C
    ctx->pc = 0x1f7800u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f7804: 0x26307718  addiu       $s0, $s1, 0x7718
    ctx->pc = 0x1f7804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 30488));
label_1f7808:
    // 0x1f7808: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f7808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f780c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f780cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7810: 0xc07c48c  jal         func_1F1230
    ctx->pc = 0x1F7810u;
    SET_GPR_U32(ctx, 31, 0x1F7818u);
    ctx->pc = 0x1F7814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7810u;
    // 0x1f7814: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1230u, 0x1F7810u, 0x1F7818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7818u;
label_1f7818:
    // 0x1f7818: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f7818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f781c: 0x731018  mult        $v0, $v1, $s3
    ctx->pc = 0x1f781cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f7820: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1f7820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f7824: 0xa0604fb8  sb          $zero, 0x4FB8($v1)
    ctx->pc = 0x1f7824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20408), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f7828: 0x8e227ab0  lw          $v0, 0x7AB0($s1)
    ctx->pc = 0x1f7828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31408)));
    // 0x1f782c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1f782cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f7830: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F7830u;
    {
        const bool branch_taken_0x1f7830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7830u;
        // 0x1f7834: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7830) {
            ctx->pc = 0x1F7808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7808;
        }
    }
    ctx->pc = 0x1F7838u;
label_1f7838:
    // 0x1f7838: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f783c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f783cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7840: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f7840u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7844: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f7844u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f7848: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f7848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f784c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F784Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F784Cu;
        // 0x1f7850: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F784Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7854u;
    // 0x1f7854: 0x0  nop
    ctx->pc = 0x1f7854u;
    // NOP
    ctx->pc = 0x1f7858u;
}
