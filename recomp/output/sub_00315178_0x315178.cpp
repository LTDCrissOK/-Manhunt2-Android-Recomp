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

// Function: sub_00315178
// Address: 0x315178 - 0x3151c0
void sub_00315178_0x315178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315178_0x315178");
#endif

    switch (ctx->pc) {
        case 0x3151a0u: goto label_3151a0;
        default: break;
    }

    ctx->pc = 0x315178u;

    // 0x315178: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x315178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31517c: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31517Cu;
    {
        const bool branch_taken_0x31517c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x315180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31517Cu;
        // 0x315180: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31517c) {
            ctx->pc = 0x3151B8u;
            goto label_3151b8;
        }
    }
    ctx->pc = 0x315184u;
    // 0x315184: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x315184u;
    {
        const bool branch_taken_0x315184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x315184) {
            ctx->pc = 0x3151B8u;
            goto label_3151b8;
        }
    }
    ctx->pc = 0x31518Cu;
    // 0x31518c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x31518cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x315190: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x315190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x315194: 0x24422190  addiu       $v0, $v0, 0x2190
    ctx->pc = 0x315194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8592));
    // 0x315198: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x315198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31519c: 0x0  nop
    ctx->pc = 0x31519cu;
    // NOP
label_3151a0:
    // 0x3151a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3151a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3151a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3151a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3151a8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3151a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3151ac: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3151acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3151b0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3151B0u;
    {
        const bool branch_taken_0x3151b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3151B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151B0u;
        // 0x3151b4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3151b0) {
            ctx->pc = 0x3151A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3151a0;
        }
    }
    ctx->pc = 0x3151B8u;
label_3151b8:
    // 0x3151b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3151B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3151BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3151B8u;
        // 0x3151bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3151B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3151C0u;
}
