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

// Function: sub_002AC438
// Address: 0x2ac438 - 0x2ac488
void sub_002AC438_0x2ac438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC438_0x2ac438");
#endif

    switch (ctx->pc) {
        case 0x2ac45cu: goto label_2ac45c;
        case 0x2ac464u: goto label_2ac464;
        case 0x2ac46cu: goto label_2ac46c;
        case 0x2ac474u: goto label_2ac474;
        default: break;
    }

    ctx->pc = 0x2ac438u;

    // 0x2ac438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ac438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ac43c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ac43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ac440: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ac440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ac444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ac444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac448: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2ac448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2ac44c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2AC44Cu;
    {
        const bool branch_taken_0x2ac44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ac44c) {
            ctx->pc = 0x2AC450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC44Cu;
            // 0x2ac450: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC47Cu;
            goto label_2ac47c;
        }
    }
    ctx->pc = 0x2AC454u;
    // 0x2ac454: 0xc0ab126  jal         func_2AC498
    ctx->pc = 0x2AC454u;
    SET_GPR_U32(ctx, 31, 0x2AC45Cu);
    ctx->pc = 0x2AC498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC498u, 0x2AC454u, 0x2AC45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC45Cu;
label_2ac45c:
    // 0x2ac45c: 0xc0f8ee0  jal         func_3E3B80
    ctx->pc = 0x2AC45Cu;
    SET_GPR_U32(ctx, 31, 0x2AC464u);
    ctx->pc = 0x2AC460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC45Cu;
    // 0x2ac460: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3B80u, 0x2AC45Cu, 0x2AC464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC464u;
label_2ac464:
    // 0x2ac464: 0xc0f8f18  jal         func_3E3C60
    ctx->pc = 0x2AC464u;
    SET_GPR_U32(ctx, 31, 0x2AC46Cu);
    ctx->pc = 0x2AC468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC464u;
    // 0x2ac468: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3C60u, 0x2AC464u, 0x2AC46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC46Cu;
label_2ac46c:
    // 0x2ac46c: 0xc0ab434  jal         func_2AD0D0
    ctx->pc = 0x2AC46Cu;
    SET_GPR_U32(ctx, 31, 0x2AC474u);
    ctx->pc = 0x2AC470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC46Cu;
    // 0x2ac470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD0D0u, 0x2AC46Cu, 0x2AC474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC474u;
label_2ac474:
    // 0x2ac474: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2ac474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2ac478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ac47c:
    // 0x2ac47c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ac47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ac480: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC480u;
        // 0x2ac484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC488u;
}
