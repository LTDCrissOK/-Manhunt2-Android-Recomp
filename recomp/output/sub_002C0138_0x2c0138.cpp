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

// Function: sub_002C0138
// Address: 0x2c0138 - 0x2c0178
void sub_002C0138_0x2c0138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0138_0x2c0138");
#endif

    switch (ctx->pc) {
        case 0x2c014cu: goto label_2c014c;
        default: break;
    }

    ctx->pc = 0x2c0138u;

    // 0x2c0138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c013c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c013cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c0140: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c0140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2c0144: 0xc0b0018  jal         func_2C0060
    ctx->pc = 0x2C0144u;
    SET_GPR_U32(ctx, 31, 0x2C014Cu);
    ctx->pc = 0x2C0148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0144u;
    // 0x2c0148: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0060u, 0x2C0144u, 0x2C014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C014Cu;
label_2c014c:
    // 0x2c014c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2c014cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2c0150: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c0150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0154: 0x24633d10  addiu       $v1, $v1, 0x3D10
    ctx->pc = 0x2c0154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15632));
    // 0x2c0158: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2c0158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2c015c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2c015cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2c0160: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x2c0160u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0164: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c0164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0168: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c0168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c016c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C016Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C016Cu;
        // 0x2c0170: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C016Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0174u;
    // 0x2c0174: 0x0  nop
    ctx->pc = 0x2c0174u;
    // NOP
    ctx->pc = 0x2c0178u;
}
