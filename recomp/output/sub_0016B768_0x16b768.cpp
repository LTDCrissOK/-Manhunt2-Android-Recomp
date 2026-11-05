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

// Function: sub_0016B768
// Address: 0x16b768 - 0x16b7f0
void sub_0016B768_0x16b768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B768_0x16b768");
#endif

    switch (ctx->pc) {
        case 0x16b798u: goto label_16b798;
        default: break;
    }

    ctx->pc = 0x16b768u;

    // 0x16b768: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x16b768u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b76c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x16b76cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b770: 0x8d030140  lw          $v1, 0x140($t0)
    ctx->pc = 0x16b770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 320)));
    // 0x16b774: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16b774u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16b778: 0x8d020148  lw          $v0, 0x148($t0)
    ctx->pc = 0x16b778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 328)));
    // 0x16b77c: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x16b77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x16b780: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x16b780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16b784: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x16b784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16b788: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16B788u;
    {
        const bool branch_taken_0x16b788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B788u;
        // 0x16b78c: 0x8ca90000  lw          $t1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b788) {
            ctx->pc = 0x16B7CCu;
            goto label_16b7cc;
        }
    }
    ctx->pc = 0x16B790u;
    // 0x16b790: 0x8d040140  lw          $a0, 0x140($t0)
    ctx->pc = 0x16b790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 320)));
    // 0x16b794: 0x0  nop
    ctx->pc = 0x16b794u;
    // NOP
label_16b798:
    // 0x16b798: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x16b798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16b79c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x16b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x16b7a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16b7a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b7a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16b7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b7ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x16b7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x16b7b0: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x16b7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x16b7b4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16b7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16b7b8: 0x8d020148  lw          $v0, 0x148($t0)
    ctx->pc = 0x16b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 328)));
    // 0x16b7bc: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x16b7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16b7c0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x16B7C0u;
    {
        const bool branch_taken_0x16b7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b7c0) {
            ctx->pc = 0x16B7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B7C0u;
            // 0x16b7c4: 0x8d040140  lw          $a0, 0x140($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b798;
        }
    }
    ctx->pc = 0x16B7C8u;
    // 0x16b7c8: 0x8d030140  lw          $v1, 0x140($t0)
    ctx->pc = 0x16b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 320)));
label_16b7cc:
    // 0x16b7cc: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x16b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x16b7d0: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x16b7d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b7d4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x16b7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16b7d8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x16b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x16b7dc: 0x8d030148  lw          $v1, 0x148($t0)
    ctx->pc = 0x16b7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 328)));
    // 0x16b7e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16b7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x16B7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B7E4u;
        // 0x16b7e8: 0xad030148  sw          $v1, 0x148($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B7ECu;
    // 0x16b7ec: 0x0  nop
    ctx->pc = 0x16b7ecu;
    // NOP
    ctx->pc = 0x16b7f0u;
}
