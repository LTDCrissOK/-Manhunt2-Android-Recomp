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

// Function: sub_00107318
// Address: 0x107318 - 0x107358
void sub_00107318_0x107318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107318_0x107318");
#endif

    switch (ctx->pc) {
        case 0x10733cu: goto label_10733c;
        default: break;
    }

    ctx->pc = 0x107318u;

    // 0x107318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10731c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10731cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107320: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x107320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x107324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107328: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x107328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10732c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x10732Cu;
    {
        const bool branch_taken_0x10732c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10732c) {
            ctx->pc = 0x107330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10732Cu;
            // 0x107330: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107348u;
            goto label_107348;
        }
    }
    ctx->pc = 0x107334u;
    // 0x107334: 0xc0ab42c  jal         func_2AD0B0
    ctx->pc = 0x107334u;
    SET_GPR_U32(ctx, 31, 0x10733Cu);
    ctx->pc = 0x2AD0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD0B0u, 0x107334u, 0x10733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10733Cu;
label_10733c:
    // 0x10733c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10733cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107340: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x107340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x107344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107348:
    // 0x107348: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x107348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10734c: 0x3e00008  jr          $ra
    ctx->pc = 0x10734Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10734Cu;
        // 0x107350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10734Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107354u;
    // 0x107354: 0x0  nop
    ctx->pc = 0x107354u;
    // NOP
    ctx->pc = 0x107358u;
}
