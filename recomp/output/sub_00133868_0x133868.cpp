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

// Function: sub_00133868
// Address: 0x133868 - 0x1338a8
void sub_00133868_0x133868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133868_0x133868");
#endif

    switch (ctx->pc) {
        case 0x133884u: goto label_133884;
        case 0x133894u: goto label_133894;
        default: break;
    }

    ctx->pc = 0x133868u;

    // 0x133868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13386c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13386cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133870: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133874: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x133874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x133878: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x133878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13387c: 0xc041e24  jal         func_107890
    ctx->pc = 0x13387Cu;
    SET_GPR_U32(ctx, 31, 0x133884u);
    ctx->pc = 0x133880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13387Cu;
    // 0x133880: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107890u, 0x13387Cu, 0x133884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133884u;
label_133884:
    // 0x133884: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x133884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x133888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13388c: 0xc04c00c  jal         func_130030
    ctx->pc = 0x13388Cu;
    SET_GPR_U32(ctx, 31, 0x133894u);
    ctx->pc = 0x133890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13388Cu;
    // 0x133890: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130030u, 0x13388Cu, 0x133894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133894u;
label_133894:
    // 0x133894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133898: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x133898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13389c: 0x3e00008  jr          $ra
    ctx->pc = 0x13389Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1338A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13389Cu;
        // 0x1338a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13389Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1338A4u;
    // 0x1338a4: 0x0  nop
    ctx->pc = 0x1338a4u;
    // NOP
    ctx->pc = 0x1338a8u;
}
