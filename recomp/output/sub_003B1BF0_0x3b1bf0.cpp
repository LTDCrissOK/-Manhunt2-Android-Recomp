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

// Function: sub_003B1BF0
// Address: 0x3b1bf0 - 0x3b1c30
void sub_003B1BF0_0x3b1bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1BF0_0x3b1bf0");
#endif

    switch (ctx->pc) {
        case 0x3b1c14u: goto label_3b1c14;
        default: break;
    }

    ctx->pc = 0x3b1bf0u;

    // 0x3b1bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b1bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b1bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b1bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b1bf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1bfc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3b1bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3b1c00: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x3b1c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x3b1c04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B1C04u;
    {
        const bool branch_taken_0x3b1c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1C04u;
        // 0x3b1c08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1c04) {
            ctx->pc = 0x3B1C14u;
            goto label_3b1c14;
        }
    }
    ctx->pc = 0x3B1C0Cu;
    // 0x3b1c0c: 0xc0ecba0  jal         func_3B2E80
    ctx->pc = 0x3B1C0Cu;
    SET_GPR_U32(ctx, 31, 0x3B1C14u);
    ctx->pc = 0x3B1C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1C0Cu;
    // 0x3b1c10: 0xae0001b0  sw          $zero, 0x1B0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2E80u, 0x3B1C0Cu, 0x3B1C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1C14u;
label_3b1c14:
    // 0x3b1c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1c18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b1c18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1c1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3b1c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b1c20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b1c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1c24: 0x24060a28  addiu       $a2, $zero, 0xA28
    ctx->pc = 0x3b1c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x3b1c28: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3B1C28u;
    ctx->pc = 0x3B1C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1C28u;
    // 0x3b1c2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3B1C30u;
}
