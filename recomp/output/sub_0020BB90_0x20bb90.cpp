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

// Function: sub_0020BB90
// Address: 0x20bb90 - 0x20bbd0
void sub_0020BB90_0x20bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BB90_0x20bb90");
#endif

    switch (ctx->pc) {
        case 0x20bbb0u: goto label_20bbb0;
        case 0x20bbbcu: goto label_20bbbc;
        default: break;
    }

    ctx->pc = 0x20bb90u;

    // 0x20bb90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20bb94: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x20bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x20bb98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20bb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20bb9c: 0x244215a0  addiu       $v0, $v0, 0x15A0
    ctx->pc = 0x20bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5536));
    // 0x20bba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20bba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bba4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20bba8: 0xc0d75e8  jal         func_35D7A0
    ctx->pc = 0x20BBA8u;
    SET_GPR_U32(ctx, 31, 0x20BBB0u);
    ctx->pc = 0x20BBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BBA8u;
    // 0x20bbac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7A0u, 0x20BBA8u, 0x20BBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BBB0u;
label_20bbb0:
    // 0x20bbb0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x20bbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x20bbb4: 0xc0d75ee  jal         func_35D7B8
    ctx->pc = 0x20BBB4u;
    SET_GPR_U32(ctx, 31, 0x20BBBCu);
    ctx->pc = 0x20BBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BBB4u;
    // 0x20bbb8: 0x2484e498  addiu       $a0, $a0, -0x1B68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7B8u, 0x20BBB4u, 0x20BBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BBBCu;
label_20bbbc:
    // 0x20bbbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20bbbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bbc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20bbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20bbc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20bbc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20bbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x20BBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBC8u;
        // 0x20bbcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BBD0u;
}
