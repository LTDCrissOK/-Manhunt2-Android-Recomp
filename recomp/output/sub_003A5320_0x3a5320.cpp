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

// Function: sub_003A5320
// Address: 0x3a5320 - 0x3a5360
void sub_003A5320_0x3a5320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5320_0x3a5320");
#endif

    switch (ctx->pc) {
        case 0x3a5334u: goto label_3a5334;
        default: break;
    }

    ctx->pc = 0x3a5320u;

    // 0x3a5320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a5320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a5324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a5324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a5328: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3a5328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3a532c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A532Cu;
    SET_GPR_U32(ctx, 31, 0x3A5334u);
    ctx->pc = 0x3A5330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A532Cu;
    // 0x3a5330: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A532Cu, 0x3A5334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5334u;
label_3a5334:
    // 0x3a5334: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x3a5334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3a5338: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A5338u;
    {
        const bool branch_taken_0x3a5338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5338u;
        // 0x3a533c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5338) {
            ctx->pc = 0x3A534Cu;
            goto label_3a534c;
        }
    }
    ctx->pc = 0x3A5340u;
    // 0x3a5340: 0x82020008  lb          $v0, 0x8($s0)
    ctx->pc = 0x3a5340u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3a5344: 0x3842002e  xori        $v0, $v0, 0x2E
    ctx->pc = 0x3a5344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)46);
    // 0x3a5348: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3a5348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3a534c:
    // 0x3a534c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a534cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a5350: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a5350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a5354: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5354u;
        // 0x3a5358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A535Cu;
    // 0x3a535c: 0x0  nop
    ctx->pc = 0x3a535cu;
    // NOP
    ctx->pc = 0x3a5360u;
}
