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

// Function: sub_003CD800
// Address: 0x3cd800 - 0x3cd878
void sub_003CD800_0x3cd800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD800_0x3cd800");
#endif

    switch (ctx->pc) {
        case 0x3cd840u: goto label_3cd840;
        case 0x3cd858u: goto label_3cd858;
        default: break;
    }

    ctx->pc = 0x3cd800u;

    // 0x3cd800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3cd800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3cd804: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3cd804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3cd808: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3cd808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3cd80c: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x3cd80cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
    // 0x3cd810: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3cd810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3cd814: 0x8e02d698  lw          $v0, -0x2968($s0)
    ctx->pc = 0x3cd814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42D698u));
    // 0x3cd818: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3CD818u;
    {
        const bool branch_taken_0x3cd818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3CD81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD818u;
        // 0x3cd81c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd818) {
            ctx->pc = 0x3CD864u;
            goto label_3cd864;
        }
    }
    ctx->pc = 0x3CD820u;
    // 0x3cd820: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3cd820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3cd824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cd824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cd828: 0x24421c80  addiu       $v0, $v0, 0x1C80
    ctx->pc = 0x3cd828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7296));
    // 0x3cd82c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3cd82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3cd830: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3cd830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3cd834: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cd834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd838: 0xc0f2668  jal         func_3C99A0
    ctx->pc = 0x3CD838u;
    SET_GPR_U32(ctx, 31, 0x3CD840u);
    ctx->pc = 0x3CD83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD838u;
    // 0x3cd83c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99A0u, 0x3CD838u, 0x3CD840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD840u;
label_3cd840:
    // 0x3cd840: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3cd840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3cd844: 0xae02d698  sw          $v0, -0x2968($s0)
    ctx->pc = 0x3cd844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294956696), GPR_U32(ctx, 2));
    // 0x3cd848: 0x24631c90  addiu       $v1, $v1, 0x1C90
    ctx->pc = 0x3cd848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7312));
    // 0x3cd84c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cd84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd850: 0xc0f2668  jal         func_3C99A0
    ctx->pc = 0x3CD850u;
    SET_GPR_U32(ctx, 31, 0x3CD858u);
    ctx->pc = 0x3CD854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD850u;
    // 0x3cd854: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99A0u, 0x3CD850u, 0x3CD858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD858u;
label_3cd858:
    // 0x3cd858: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3cd858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3cd85c: 0xac62d69c  sw          $v0, -0x2964($v1)
    ctx->pc = 0x3cd85cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x42D69Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42D69Cu, _value); } while (0);
    // 0x3cd860: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3cd860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3cd864:
    // 0x3cd864: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3cd864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cd868: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD868u;
        // 0x3cd86c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD870u;
    // 0x3cd870: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3cd870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3cd874: 0x0  nop
    ctx->pc = 0x3cd874u;
    // NOP
    ctx->pc = 0x3cd878u;
}
