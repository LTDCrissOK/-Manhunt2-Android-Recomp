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

// Function: sub_003ED600
// Address: 0x3ed600 - 0x3ed640
void sub_003ED600_0x3ed600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED600_0x3ed600");
#endif

    switch (ctx->pc) {
        case 0x3ed628u: goto label_3ed628;
        default: break;
    }

    ctx->pc = 0x3ed600u;

    // 0x3ed600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ed600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ed604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ed604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ed608: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ed608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3ed60c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ed60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed610: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3ed610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3ed614: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3ED614u;
    {
        const bool branch_taken_0x3ed614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED614u;
        // 0x3ed618: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed614) {
            ctx->pc = 0x3ED62Cu;
            goto label_3ed62c;
        }
    }
    ctx->pc = 0x3ED61Cu;
    // 0x3ed61c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x3ed61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3ed620: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3ED620u;
    SET_GPR_U32(ctx, 31, 0x3ED628u);
    ctx->pc = 0x3ED624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED620u;
    // 0x3ed624: 0xa42018  mult        $a0, $a1, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3ED620u, 0x3ED628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED628u;
label_3ed628:
    // 0x3ed628: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3ed628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_3ed62c:
    // 0x3ed62c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ed62cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ed630: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ed630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ed634: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED634u;
        // 0x3ed638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED63Cu;
    // 0x3ed63c: 0x0  nop
    ctx->pc = 0x3ed63cu;
    // NOP
    ctx->pc = 0x3ed640u;
}
