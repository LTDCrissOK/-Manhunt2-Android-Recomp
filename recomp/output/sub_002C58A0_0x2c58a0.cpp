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

// Function: sub_002C58A0
// Address: 0x2c58a0 - 0x2c58f0
void sub_002C58A0_0x2c58a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C58A0_0x2c58a0");
#endif

    switch (ctx->pc) {
        case 0x2c58c0u: goto label_2c58c0;
        case 0x2c58ccu: goto label_2c58cc;
        case 0x2c58d8u: goto label_2c58d8;
        default: break;
    }

    ctx->pc = 0x2c58a0u;

    // 0x2c58a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c58a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c58a4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2c58a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2c58a8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c58a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c58ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c58acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c58b0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c58b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c58b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c58b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c58b8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C58B8u;
    SET_GPR_U32(ctx, 31, 0x2C58C0u);
    ctx->pc = 0x2C58BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C58B8u;
    // 0x2c58bc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C58B8u, 0x2C58C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C58C0u;
label_2c58c0:
    // 0x2c58c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c58c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c58c4: 0xc0b1612  jal         func_2C5848
    ctx->pc = 0x2C58C4u;
    SET_GPR_U32(ctx, 31, 0x2C58CCu);
    ctx->pc = 0x2C58C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C58C4u;
    // 0x2c58c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5848u, 0x2C58C4u, 0x2C58CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C58CCu;
label_2c58cc:
    // 0x2c58cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c58ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c58d0: 0xc0b160a  jal         func_2C5828
    ctx->pc = 0x2C58D0u;
    SET_GPR_U32(ctx, 31, 0x2C58D8u);
    ctx->pc = 0x2C58D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C58D0u;
    // 0x2c58d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5828u, 0x2C58D0u, 0x2C58D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C58D8u;
label_2c58d8:
    // 0x2c58d8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c58d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c58dc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2c58dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c58e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c58e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c58e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C58E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C58E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C58E4u;
        // 0x2c58e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C58E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C58ECu;
    // 0x2c58ec: 0x0  nop
    ctx->pc = 0x2c58ecu;
    // NOP
    ctx->pc = 0x2c58f0u;
}
