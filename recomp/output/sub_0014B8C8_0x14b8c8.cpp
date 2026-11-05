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

// Function: sub_0014B8C8
// Address: 0x14b8c8 - 0x14b940
void sub_0014B8C8_0x14b8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B8C8_0x14b8c8");
#endif

    switch (ctx->pc) {
        case 0x14b8dcu: goto label_14b8dc;
        case 0x14b8f8u: goto label_14b8f8;
        case 0x14b918u: goto label_14b918;
        case 0x14b928u: goto label_14b928;
        default: break;
    }

    ctx->pc = 0x14b8c8u;

    // 0x14b8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b8cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14b8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14b8d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14b8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14b8d4: 0xc04d6b0  jal         func_135AC0
    ctx->pc = 0x14B8D4u;
    SET_GPR_U32(ctx, 31, 0x14B8DCu);
    ctx->pc = 0x14B8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B8D4u;
    // 0x14b8d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135AC0u, 0x14B8D4u, 0x14B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B8DCu;
label_14b8dc:
    // 0x14b8dc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x14b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x14b8e0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x14b8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b8e4: 0x24420a20  addiu       $v0, $v0, 0xA20
    ctx->pc = 0x14b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2592));
    // 0x14b8e8: 0x260304e0  addiu       $v1, $s0, 0x4E0
    ctx->pc = 0x14b8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x14b8ec: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x14b8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x14b8f0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x14b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x14b8f4: 0x0  nop
    ctx->pc = 0x14b8f4u;
    // NOP
label_14b8f8:
    // 0x14b8f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x14b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x14b8fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14b900: 0x0  nop
    ctx->pc = 0x14b900u;
    // NOP
    // 0x14b904: 0x0  nop
    ctx->pc = 0x14b904u;
    // NOP
    // 0x14b908: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14B908u;
    {
        const bool branch_taken_0x14b908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x14B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B908u;
        // 0x14b90c: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b908) {
            ctx->pc = 0x14B8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b8f8;
        }
    }
    ctx->pc = 0x14B910u;
    // 0x14b910: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x14B910u;
    SET_GPR_U32(ctx, 31, 0x14B918u);
    ctx->pc = 0x14B914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B910u;
    // 0x14b914: 0x26040670  addiu       $a0, $s0, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x14B910u, 0x14B918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B918u;
label_14b918:
    // 0x14b918: 0xae000680  sw          $zero, 0x680($s0)
    ctx->pc = 0x14b918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 0));
    // 0x14b91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14b91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b920: 0xc052f32  jal         func_14BCC8
    ctx->pc = 0x14B920u;
    SET_GPR_U32(ctx, 31, 0x14B928u);
    ctx->pc = 0x14B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B920u;
    // 0x14b924: 0xae000460  sw          $zero, 0x460($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BCC8u, 0x14B920u, 0x14B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B928u;
label_14b928:
    // 0x14b928: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14b928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b92c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14b92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14b930: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14b930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b934: 0x3e00008  jr          $ra
    ctx->pc = 0x14B934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B934u;
        // 0x14b938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B93Cu;
    // 0x14b93c: 0x0  nop
    ctx->pc = 0x14b93cu;
    // NOP
    ctx->pc = 0x14b940u;
}
