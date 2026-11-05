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

// Function: sub_003A09F0
// Address: 0x3a09f0 - 0x3a0a48
void sub_003A09F0_0x3a09f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A09F0_0x3a09f0");
#endif

    switch (ctx->pc) {
        case 0x3a0a14u: goto label_3a0a14;
        case 0x3a0a24u: goto label_3a0a24;
        case 0x3a0a2cu: goto label_3a0a2c;
        default: break;
    }

    ctx->pc = 0x3a09f0u;

    // 0x3a09f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a09f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a09f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a09f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a09f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a09f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a09fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a09fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a0a00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a0a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0a04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a0a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a0a08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a0a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a0a0c: 0xc0ecbe4  jal         func_3B2F90
    ctx->pc = 0x3A0A0Cu;
    SET_GPR_U32(ctx, 31, 0x3A0A14u);
    ctx->pc = 0x3A0A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0A0Cu;
    // 0x3a0a10: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F90u, 0x3A0A0Cu, 0x3A0A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0A14u;
label_3a0a14:
    // 0x3a0a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a0a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0a18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a0a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0a1c: 0xc0e8292  jal         func_3A0A48
    ctx->pc = 0x3A0A1Cu;
    SET_GPR_U32(ctx, 31, 0x3A0A24u);
    ctx->pc = 0x3A0A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0A1Cu;
    // 0x3a0a20: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0A48u, 0x3A0A1Cu, 0x3A0A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0A24u;
label_3a0a24:
    // 0x3a0a24: 0xc0ecbea  jal         func_3B2FA8
    ctx->pc = 0x3A0A24u;
    SET_GPR_U32(ctx, 31, 0x3A0A2Cu);
    ctx->pc = 0x3A0A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0A24u;
    // 0x3a0a28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FA8u, 0x3A0A24u, 0x3A0A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0A2Cu;
label_3a0a2c:
    // 0x3a0a2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a0a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a0a30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a0a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0a34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a0a34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a0a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0a3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a0a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a0a40: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0A40u;
        // 0x3a0a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0A48u;
}
