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

// Function: sub_00109098
// Address: 0x109098 - 0x1090e8
void sub_00109098_0x109098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109098_0x109098");
#endif

    switch (ctx->pc) {
        case 0x1090bcu: goto label_1090bc;
        case 0x1090ccu: goto label_1090cc;
        default: break;
    }

    ctx->pc = 0x109098u;

    // 0x109098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x109098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10909c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10909cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1090a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1090a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1090a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1090a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090a8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1090a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1090ac: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1090ACu;
    {
        const bool branch_taken_0x1090ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1090ac) {
            ctx->pc = 0x1090B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1090ACu;
            // 0x1090b0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1090D4u;
            goto label_1090d4;
        }
    }
    ctx->pc = 0x1090B4u;
    // 0x1090b4: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x1090B4u;
    SET_GPR_U32(ctx, 31, 0x1090BCu);
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x1090B4u, 0x1090BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090BCu;
label_1090bc:
    // 0x1090bc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1090bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1090c0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1090c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1090c4: 0xc042136  jal         func_1084D8
    ctx->pc = 0x1090C4u;
    SET_GPR_U32(ctx, 31, 0x1090CCu);
    ctx->pc = 0x1090C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1090C4u;
    // 0x1090c8: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x1090C4u, 0x1090CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090CCu;
label_1090cc:
    // 0x1090cc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1090ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1090d0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1090d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1090d4:
    // 0x1090d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1090d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1090d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1090d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1090dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1090DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1090E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090DCu;
        // 0x1090e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1090DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1090E4u;
    // 0x1090e4: 0x0  nop
    ctx->pc = 0x1090e4u;
    // NOP
    ctx->pc = 0x1090e8u;
}
