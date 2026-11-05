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

// Function: sub_0037C380
// Address: 0x37c380 - 0x37c3e8
void sub_0037C380_0x37c380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C380_0x37c380");
#endif

    switch (ctx->pc) {
        case 0x37c3a0u: goto label_37c3a0;
        default: break;
    }

    ctx->pc = 0x37c380u;

    // 0x37c380: 0x2ca20041  sltiu       $v0, $a1, 0x41
    ctx->pc = 0x37c380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x37c384: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x37c384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x37c388: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x37c388u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x37c38c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x37c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x37c390: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37c390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x37c394: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x37C394u;
    {
        const bool branch_taken_0x37c394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C394u;
        // 0x37c398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c394) {
            ctx->pc = 0x37C3B8u;
            goto label_37c3b8;
        }
    }
    ctx->pc = 0x37C39Cu;
    // 0x37c39c: 0x0  nop
    ctx->pc = 0x37c39cu;
    // NOP
label_37c3a0:
    // 0x37c3a0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x37c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x37c3a4: 0x0  nop
    ctx->pc = 0x37c3a4u;
    // NOP
    // 0x37c3a8: 0x0  nop
    ctx->pc = 0x37c3a8u;
    // NOP
    // 0x37c3ac: 0x0  nop
    ctx->pc = 0x37c3acu;
    // NOP
    // 0x37c3b0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x37C3B0u;
    {
        const bool branch_taken_0x37c3b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C3B0u;
        // 0x37c3b4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c3b0) {
            ctx->pc = 0x37C3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37c3a0;
        }
    }
    ctx->pc = 0x37C3B8u;
label_37c3b8:
    // 0x37c3b8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x37c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x37c3bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37c3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c3c0: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x37c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x37c3c4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x37c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x37c3c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x37c3cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x37c3ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c3d0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x37c3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x37c3d4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x37c3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x37c3d8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x37c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x37c3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x37C3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C3DCu;
        // 0x37c3e0: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C3E4u;
    // 0x37c3e4: 0x0  nop
    ctx->pc = 0x37c3e4u;
    // NOP
    ctx->pc = 0x37c3e8u;
}
