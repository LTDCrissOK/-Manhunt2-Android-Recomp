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

// Function: sub_0016AF80
// Address: 0x16af80 - 0x16afc0
void sub_0016AF80_0x16af80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AF80_0x16af80");
#endif

    switch (ctx->pc) {
        case 0x16af98u: goto label_16af98;
        case 0x16afa8u: goto label_16afa8;
        default: break;
    }

    ctx->pc = 0x16af80u;

    // 0x16af80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16af80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16af84: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16af84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16af88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16af88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16af8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16af8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16af90: 0xc041ea4  jal         func_107A90
    ctx->pc = 0x16AF90u;
    SET_GPR_U32(ctx, 31, 0x16AF98u);
    ctx->pc = 0x16AF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF90u;
    // 0x16af94: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107A90u, 0x16AF90u, 0x16AF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AF98u;
label_16af98:
    // 0x16af98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16af98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16af9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16afa0: 0xc045edc  jal         func_117B70
    ctx->pc = 0x16AFA0u;
    SET_GPR_U32(ctx, 31, 0x16AFA8u);
    ctx->pc = 0x16AFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AFA0u;
    // 0x16afa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x16AFA0u, 0x16AFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AFA8u;
label_16afa8:
    // 0x16afa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16afa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16afac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16afacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16afb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16afb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16afb4: 0x3e00008  jr          $ra
    ctx->pc = 0x16AFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFB4u;
        // 0x16afb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AFBCu;
    // 0x16afbc: 0x0  nop
    ctx->pc = 0x16afbcu;
    // NOP
    ctx->pc = 0x16afc0u;
}
