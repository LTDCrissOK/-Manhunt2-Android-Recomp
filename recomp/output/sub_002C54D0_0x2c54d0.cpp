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

// Function: sub_002C54D0
// Address: 0x2c54d0 - 0x2c5520
void sub_002C54D0_0x2c54d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C54D0_0x2c54d0");
#endif

    switch (ctx->pc) {
        case 0x2c54f0u: goto label_2c54f0;
        case 0x2c54fcu: goto label_2c54fc;
        case 0x2c5508u: goto label_2c5508;
        default: break;
    }

    ctx->pc = 0x2c54d0u;

    // 0x2c54d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c54d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c54d4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2c54d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2c54d8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c54d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c54dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c54dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54e0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c54e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c54e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c54e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54e8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C54E8u;
    SET_GPR_U32(ctx, 31, 0x2C54F0u);
    ctx->pc = 0x2C54ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C54E8u;
    // 0x2c54ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C54E8u, 0x2C54F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C54F0u;
label_2c54f0:
    // 0x2c54f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c54f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c54f4: 0xc0b1520  jal         func_2C5480
    ctx->pc = 0x2C54F4u;
    SET_GPR_U32(ctx, 31, 0x2C54FCu);
    ctx->pc = 0x2C54F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C54F4u;
    // 0x2c54f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5480u, 0x2C54F4u, 0x2C54FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C54FCu;
label_2c54fc:
    // 0x2c54fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c54fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5500: 0xc0b160a  jal         func_2C5828
    ctx->pc = 0x2C5500u;
    SET_GPR_U32(ctx, 31, 0x2C5508u);
    ctx->pc = 0x2C5504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5500u;
    // 0x2c5504: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5828u, 0x2C5500u, 0x2C5508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5508u;
label_2c5508:
    // 0x2c5508: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c5508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c550c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2c550cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c5510: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c5510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c5514: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5514u;
        // 0x2c5518: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C551Cu;
    // 0x2c551c: 0x0  nop
    ctx->pc = 0x2c551cu;
    // NOP
    ctx->pc = 0x2c5520u;
}
