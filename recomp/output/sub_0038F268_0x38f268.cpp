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

// Function: sub_0038F268
// Address: 0x38f268 - 0x38f2c0
void sub_0038F268_0x38f268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F268_0x38f268");
#endif

    switch (ctx->pc) {
        case 0x38f278u: goto label_38f278;
        default: break;
    }

    ctx->pc = 0x38f268u;

    // 0x38f268: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x38f268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38f26c: 0x30a2000c  andi        $v0, $a1, 0xC
    ctx->pc = 0x38f26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x38f270: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38F270u;
    {
        const bool branch_taken_0x38f270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F270u;
        // 0x38f274: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f270) {
            ctx->pc = 0x38F294u;
            goto label_38f294;
        }
    }
    ctx->pc = 0x38F278u;
label_38f278:
    // 0x38f278: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x38f278u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x38f27c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x38f27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x38f280: 0x30a2000c  andi        $v0, $a1, 0xC
    ctx->pc = 0x38f280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x38f284: 0x0  nop
    ctx->pc = 0x38f284u;
    // NOP
    // 0x38f288: 0x0  nop
    ctx->pc = 0x38f288u;
    // NOP
    // 0x38f28c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38F28Cu;
    {
        const bool branch_taken_0x38f28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38f28c) {
            ctx->pc = 0x38F278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38f278;
        }
    }
    ctx->pc = 0x38F294u;
label_38f294:
    // 0x38f294: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x38F294u;
    {
        const bool branch_taken_0x38f294 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F294u;
        // 0x38f298: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f294) {
            ctx->pc = 0x38F2B0u;
            goto label_38f2b0;
        }
    }
    ctx->pc = 0x38F29Cu;
    // 0x38f29c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x38f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x38f2a0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x38f2a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x38f2a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x38f2a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38f2ac: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x38f2acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_38f2b0:
    // 0x38f2b0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x38f2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x38f2b4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x38f2b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x38F2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F2B8u;
        // 0x38f2bc: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F2C0u;
}
