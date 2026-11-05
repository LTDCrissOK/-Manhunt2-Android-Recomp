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

// Function: sub_0011CDF0
// Address: 0x11cdf0 - 0x11ce68
void sub_0011CDF0_0x11cdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CDF0_0x11cdf0");
#endif

    switch (ctx->pc) {
        case 0x11ce28u: goto label_11ce28;
        case 0x11ce34u: goto label_11ce34;
        case 0x11ce44u: goto label_11ce44;
        default: break;
    }

    ctx->pc = 0x11cdf0u;

    // 0x11cdf0: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x11cdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x11cdf4: 0xffb00220  sd          $s0, 0x220($sp)
    ctx->pc = 0x11cdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 16));
    // 0x11cdf8: 0xffb10228  sd          $s1, 0x228($sp)
    ctx->pc = 0x11cdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 17));
    // 0x11cdfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11cdfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce00: 0xffb20230  sd          $s2, 0x230($sp)
    ctx->pc = 0x11ce00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 18));
    // 0x11ce04: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x11ce04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x11ce08: 0xffb30238  sd          $s3, 0x238($sp)
    ctx->pc = 0x11ce08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 19));
    // 0x11ce0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11ce0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce10: 0xffbf0240  sd          $ra, 0x240($sp)
    ctx->pc = 0x11ce10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 31));
    // 0x11ce14: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x11ce14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11ce18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11ce1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce20: 0xc09e06e  jal         func_2781B8
    ctx->pc = 0x11CE20u;
    SET_GPR_U32(ctx, 31, 0x11CE28u);
    ctx->pc = 0x11CE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE20u;
    // 0x11ce24: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2781B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2781B8u, 0x11CE20u, 0x11CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE28u;
label_11ce28:
    // 0x11ce28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11ce28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce2c: 0xc0474f2  jal         func_11D3C8
    ctx->pc = 0x11CE2Cu;
    SET_GPR_U32(ctx, 31, 0x11CE34u);
    ctx->pc = 0x11CE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE2Cu;
    // 0x11ce30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D3C8u, 0x11CE2Cu, 0x11CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE34u;
label_11ce34:
    // 0x11ce34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ce34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11ce38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce3c: 0xc047500  jal         func_11D400
    ctx->pc = 0x11CE3Cu;
    SET_GPR_U32(ctx, 31, 0x11CE44u);
    ctx->pc = 0x11CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE3Cu;
    // 0x11ce40: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D400u, 0x11CE3Cu, 0x11CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE44u;
label_11ce44:
    // 0x11ce44: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x11ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x11ce48: 0xdfb00220  ld          $s0, 0x220($sp)
    ctx->pc = 0x11ce48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x11ce4c: 0xdfb10228  ld          $s1, 0x228($sp)
    ctx->pc = 0x11ce4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x11ce50: 0xdfb20230  ld          $s2, 0x230($sp)
    ctx->pc = 0x11ce50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x11ce54: 0xdfb30238  ld          $s3, 0x238($sp)
    ctx->pc = 0x11ce54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x11ce58: 0xdfbf0240  ld          $ra, 0x240($sp)
    ctx->pc = 0x11ce58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x11ce5c: 0x3e00008  jr          $ra
    ctx->pc = 0x11CE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CE5Cu;
        // 0x11ce60: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CE64u;
    // 0x11ce64: 0x0  nop
    ctx->pc = 0x11ce64u;
    // NOP
    ctx->pc = 0x11ce68u;
}
