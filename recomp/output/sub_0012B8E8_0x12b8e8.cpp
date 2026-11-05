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

// Function: sub_0012B8E8
// Address: 0x12b8e8 - 0x12b958
void sub_0012B8E8_0x12b8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B8E8_0x12b8e8");
#endif

    switch (ctx->pc) {
        case 0x12b904u: goto label_12b904;
        case 0x12b92cu: goto label_12b92c;
        default: break;
    }

    ctx->pc = 0x12b8e8u;

    // 0x12b8e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b8ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b8f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12b8f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b8fc: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12B8FCu;
    SET_GPR_U32(ctx, 31, 0x12B904u);
    ctx->pc = 0x12B900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B8FCu;
    // 0x12b900: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12B8FCu, 0x12B904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B904u;
label_12b904:
    // 0x12b904: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12b904u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b908: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12b908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12b90c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12B90Cu;
    {
        const bool branch_taken_0x12b90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B90Cu;
        // 0x12b910: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b90c) {
            ctx->pc = 0x12B940u;
            goto label_12b940;
        }
    }
    ctx->pc = 0x12B914u;
    // 0x12b914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b918: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12b918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12b91c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12b91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b920: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x12b920u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12b924: 0xc04b104  jal         func_12C410
    ctx->pc = 0x12B924u;
    SET_GPR_U32(ctx, 31, 0x12B92Cu);
    ctx->pc = 0x12B928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B924u;
    // 0x12b928: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C410u, 0x12B924u, 0x12B92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B92Cu;
label_12b92c:
    // 0x12b92c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12b92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12b930: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12b930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12b934: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x12b934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12b938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12B938u;
    {
        const bool branch_taken_0x12b938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B938u;
        // 0x12b93c: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b938) {
            ctx->pc = 0x12B944u;
            goto label_12b944;
        }
    }
    ctx->pc = 0x12B940u;
label_12b940:
    // 0x12b940: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12b940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b944:
    // 0x12b944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b948: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b94c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b950: 0x3e00008  jr          $ra
    ctx->pc = 0x12B950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B950u;
        // 0x12b954: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B958u;
}
