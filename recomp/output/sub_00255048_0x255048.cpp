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

// Function: sub_00255048
// Address: 0x255048 - 0x255090
void sub_00255048_0x255048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255048_0x255048");
#endif

    switch (ctx->pc) {
        case 0x255068u: goto label_255068;
        case 0x255070u: goto label_255070;
        case 0x25507cu: goto label_25507c;
        default: break;
    }

    ctx->pc = 0x255048u;

    // 0x255048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x255048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25504c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25504cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x255050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x255050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255054: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x255054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x255058: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x255058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x25505c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25505cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255060: 0xc0484c0  jal         func_121300
    ctx->pc = 0x255060u;
    SET_GPR_U32(ctx, 31, 0x255068u);
    ctx->pc = 0x255064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255060u;
    // 0x255064: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121300u, 0x255060u, 0x255068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255068u;
label_255068:
    // 0x255068: 0xc094ee8  jal         func_253BA0
    ctx->pc = 0x255068u;
    SET_GPR_U32(ctx, 31, 0x255070u);
    ctx->pc = 0x25506Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255068u;
    // 0x25506c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253BA0u, 0x255068u, 0x255070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255070u;
label_255070:
    // 0x255070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x255070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255074: 0xc08b6b2  jal         func_22DAC8
    ctx->pc = 0x255074u;
    SET_GPR_U32(ctx, 31, 0x25507Cu);
    ctx->pc = 0x255078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255074u;
    // 0x255078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DAC8u, 0x255074u, 0x25507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25507Cu;
label_25507c:
    // 0x25507c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25507cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255080: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x255080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x255084: 0x3e00008  jr          $ra
    ctx->pc = 0x255084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255084u;
        // 0x255088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25508Cu;
    // 0x25508c: 0x0  nop
    ctx->pc = 0x25508cu;
    // NOP
    ctx->pc = 0x255090u;
}
