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

// Function: sub_002E4C18
// Address: 0x2e4c18 - 0x2e4c68
void sub_002E4C18_0x2e4c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4C18_0x2e4c18");
#endif

    switch (ctx->pc) {
        case 0x2e4c34u: goto label_2e4c34;
        case 0x2e4c54u: goto label_2e4c54;
        default: break;
    }

    ctx->pc = 0x2e4c18u;

    // 0x2e4c18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e4c1c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e4c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e4c20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4c24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e4c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e4c28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e4c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4c2c: 0xc0bf868  jal         func_2FE1A0
    ctx->pc = 0x2E4C2Cu;
    SET_GPR_U32(ctx, 31, 0x2E4C34u);
    ctx->pc = 0x2E4C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4C2Cu;
    // 0x2e4c30: 0xac45b958  sw          $a1, -0x46A8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949208), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2E4C2Cu, 0x2E4C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4C34u;
label_2e4c34:
    // 0x2e4c34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4C34u;
    {
        const bool branch_taken_0x2e4c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C34u;
        // 0x2e4c38: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4c34) {
            ctx->pc = 0x2E4C54u;
            goto label_2e4c54;
        }
    }
    ctx->pc = 0x2E4C3Cu;
    // 0x2e4c3c: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2e4c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2e4c40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e4c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e4c44: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4C44u;
    {
        const bool branch_taken_0x2e4c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e4c44) {
            ctx->pc = 0x2E4C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4C44u;
            // 0x2e4c48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4C58u;
            goto label_2e4c58;
        }
    }
    ctx->pc = 0x2E4C4Cu;
    // 0x2e4c4c: 0xc0bb688  jal         func_2EDA20
    ctx->pc = 0x2E4C4Cu;
    SET_GPR_U32(ctx, 31, 0x2E4C54u);
    ctx->pc = 0x2E4C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4C4Cu;
    // 0x2e4c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDA20u, 0x2E4C4Cu, 0x2E4C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4C54u;
label_2e4c54:
    // 0x2e4c54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e4c58:
    // 0x2e4c58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e4c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C5Cu;
        // 0x2e4c60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4C64u;
    // 0x2e4c64: 0x0  nop
    ctx->pc = 0x2e4c64u;
    // NOP
    ctx->pc = 0x2e4c68u;
}
