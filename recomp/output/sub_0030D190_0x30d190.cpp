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

// Function: sub_0030D190
// Address: 0x30d190 - 0x30d208
void sub_0030D190_0x30d190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D190_0x30d190");
#endif

    switch (ctx->pc) {
        case 0x30d1c0u: goto label_30d1c0;
        case 0x30d1dcu: goto label_30d1dc;
        default: break;
    }

    ctx->pc = 0x30d190u;

    // 0x30d190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30d190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30d194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30d194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30d198: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30d198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30d19c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30d19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30d1a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30d1a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x30d1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x30d1a8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x30d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30d1ac: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30D1ACu;
    {
        const bool branch_taken_0x30d1ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D1ACu;
        // 0x30d1b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d1ac) {
            ctx->pc = 0x30D1ECu;
            goto label_30d1ec;
        }
    }
    ctx->pc = 0x30D1B4u;
    // 0x30d1b4: 0x3c120031  lui         $s2, 0x31
    ctx->pc = 0x30d1b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49 << 16));
    // 0x30d1b8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x30d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x30d1bc: 0x0  nop
    ctx->pc = 0x30d1bcu;
    // NOP
label_30d1c0:
    // 0x30d1c0: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x30d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x30d1c4: 0x2645cf30  addiu       $a1, $s2, -0x30D0
    ctx->pc = 0x30d1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954800));
    // 0x30d1c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30d1c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30d1d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30d1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30d1d4: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30D1D4u;
    SET_GPR_U32(ctx, 31, 0x30D1DCu);
    ctx->pc = 0x30D1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D1D4u;
    // 0x30d1d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30D1D4u, 0x30D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D1DCu;
label_30d1dc:
    // 0x30d1dc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x30d1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x30d1e0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x30d1e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30d1e4: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x30D1E4u;
    {
        const bool branch_taken_0x30d1e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d1e4) {
            ctx->pc = 0x30D1E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D1E4u;
            // 0x30d1e8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d1c0;
        }
    }
    ctx->pc = 0x30D1ECu;
label_30d1ec:
    // 0x30d1ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30d1ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d1f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30d1f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30d1f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30d1f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d1f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x30d1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x30D1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D1FCu;
        // 0x30d200: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D204u;
    // 0x30d204: 0x0  nop
    ctx->pc = 0x30d204u;
    // NOP
    ctx->pc = 0x30d208u;
}
