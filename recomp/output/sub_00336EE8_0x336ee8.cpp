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

// Function: sub_00336EE8
// Address: 0x336ee8 - 0x336f48
void sub_00336EE8_0x336ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336EE8_0x336ee8");
#endif

    switch (ctx->pc) {
        case 0x336efcu: goto label_336efc;
        case 0x336f04u: goto label_336f04;
        default: break;
    }

    ctx->pc = 0x336ee8u;

    // 0x336ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336eec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x336ef0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x336ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x336ef4: 0xc0cdd52  jal         func_337548
    ctx->pc = 0x336EF4u;
    SET_GPR_U32(ctx, 31, 0x336EFCu);
    ctx->pc = 0x336EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336EF4u;
    // 0x336ef8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337548u, 0x336EF4u, 0x336EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336EFCu;
label_336efc:
    // 0x336efc: 0xc0cdd3c  jal         func_3374F0
    ctx->pc = 0x336EFCu;
    SET_GPR_U32(ctx, 31, 0x336F04u);
    ctx->pc = 0x336F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336EFCu;
    // 0x336f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374F0u, 0x336EFCu, 0x336F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336F04u;
label_336f04:
    // 0x336f04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x336f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x336f08: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x336f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x336f0c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x336f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x336f10: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x336f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x336f14: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x336f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
    // 0x336f18: 0xae020484  sw          $v0, 0x484($s0)
    ctx->pc = 0x336f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1156), GPR_U32(ctx, 2));
    // 0x336f1c: 0xae0004a4  sw          $zero, 0x4A4($s0)
    ctx->pc = 0x336f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1188), GPR_U32(ctx, 0));
    // 0x336f20: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x336f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x336f24: 0xae04006c  sw          $a0, 0x6C($s0)
    ctx->pc = 0x336f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 4));
    // 0x336f28: 0xae000488  sw          $zero, 0x488($s0)
    ctx->pc = 0x336f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1160), GPR_U32(ctx, 0));
    // 0x336f2c: 0xae00048c  sw          $zero, 0x48C($s0)
    ctx->pc = 0x336f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1164), GPR_U32(ctx, 0));
    // 0x336f30: 0xae000480  sw          $zero, 0x480($s0)
    ctx->pc = 0x336f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1152), GPR_U32(ctx, 0));
    // 0x336f34: 0xae0004a0  sw          $zero, 0x4A0($s0)
    ctx->pc = 0x336f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1184), GPR_U32(ctx, 0));
    // 0x336f38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336f3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x336f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336f40: 0x3e00008  jr          $ra
    ctx->pc = 0x336F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F40u;
        // 0x336f44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336F48u;
}
