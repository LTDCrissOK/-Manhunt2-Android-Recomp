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

// Function: sub_0035D658
// Address: 0x35d658 - 0x35d6b8
void sub_0035D658_0x35d658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D658_0x35d658");
#endif

    switch (ctx->pc) {
        case 0x35d678u: goto label_35d678;
        default: break;
    }

    ctx->pc = 0x35d658u;

    // 0x35d658: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x35d658u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d65c: 0x85020004  lh          $v0, 0x4($t0)
    ctx->pc = 0x35d65cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x35d660: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x35D660u;
    {
        const bool branch_taken_0x35d660 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x35D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D660u;
        // 0x35d664: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d660) {
            ctx->pc = 0x35D6ACu;
            goto label_35d6ac;
        }
    }
    ctx->pc = 0x35D668u;
    // 0x35d668: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x35d668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x35d66c: 0x24490c11  addiu       $t1, $v0, 0xC11
    ctx->pc = 0x35d66cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 3089));
    // 0x35d670: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x35d670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35d674: 0x0  nop
    ctx->pc = 0x35d674u;
    // NOP
label_35d678:
    // 0x35d678: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x35d678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x35d67c: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x35d67cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35d680: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x35d680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x35d684: 0x892821  addu        $a1, $a0, $t1
    ctx->pc = 0x35d684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x35d688: 0x2483ffe0  addiu       $v1, $a0, -0x20
    ctx->pc = 0x35d688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x35d68c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x35d68cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35d690: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x35d690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x35d694: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x35d694u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x35d698: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x35d698u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35d69c: 0x85020004  lh          $v0, 0x4($t0)
    ctx->pc = 0x35d69cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x35d6a0: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x35d6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x35d6a4: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x35D6A4u;
    {
        const bool branch_taken_0x35d6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d6a4) {
            ctx->pc = 0x35D6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D6A4u;
            // 0x35d6a8: 0x8d060000  lw          $a2, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d678;
        }
    }
    ctx->pc = 0x35D6ACu;
label_35d6ac:
    // 0x35d6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x35D6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D6B4u;
    // 0x35d6b4: 0x0  nop
    ctx->pc = 0x35d6b4u;
    // NOP
    ctx->pc = 0x35d6b8u;
}
