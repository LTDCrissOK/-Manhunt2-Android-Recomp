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

// Function: sub_0029C780
// Address: 0x29c780 - 0x29c7e0
void sub_0029C780_0x29c780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C780_0x29c780");
#endif

    switch (ctx->pc) {
        case 0x29c7a8u: goto label_29c7a8;
        case 0x29c7bcu: goto label_29c7bc;
        default: break;
    }

    ctx->pc = 0x29c780u;

    // 0x29c780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c784: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29c784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29c788: 0x3c11004c  lui         $s1, 0x4C
    ctx->pc = 0x29c788u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)76 << 16));
    // 0x29c78c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c790: 0x8e221830  lw          $v0, 0x1830($s1)
    ctx->pc = 0x29c790u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C1830u));
    // 0x29c794: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x29c794u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x29c798: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29C798u;
    {
        const bool branch_taken_0x29c798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C798u;
        // 0x29c79c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c798) {
            ctx->pc = 0x29C7BCu;
            goto label_29c7bc;
        }
    }
    ctx->pc = 0x29C7A0u;
    // 0x29c7a0: 0xc0a6d9a  jal         func_29B668
    ctx->pc = 0x29C7A0u;
    SET_GPR_U32(ctx, 31, 0x29C7A8u);
    ctx->pc = 0x29C7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C7A0u;
    // 0x29c7a4: 0x26041268  addiu       $a0, $s0, 0x1268 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B668u, 0x29C7A0u, 0x29C7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C7A8u;
label_29c7a8:
    // 0x29c7a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c7ac: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x29c7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x29c7b0: 0xae221830  sw          $v0, 0x1830($s1)
    ctx->pc = 0x29c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6192), GPR_U32(ctx, 2));
    // 0x29c7b4: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x29C7B4u;
    SET_GPR_U32(ctx, 31, 0x29C7BCu);
    ctx->pc = 0x29C7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C7B4u;
    // 0x29c7b8: 0x2484c758  addiu       $a0, $a0, -0x38A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x29C7B4u, 0x29C7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C7BCu;
label_29c7bc:
    // 0x29c7bc: 0x26021268  addiu       $v0, $s0, 0x1268
    ctx->pc = 0x29c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4712));
    // 0x29c7c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29c7c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29c7c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c7c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c7c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29c7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x29C7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C7CCu;
        // 0x29c7d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C7D4u;
    // 0x29c7d4: 0x0  nop
    ctx->pc = 0x29c7d4u;
    // NOP
    // 0x29c7d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29c7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29c7dc: 0x0  nop
    ctx->pc = 0x29c7dcu;
    // NOP
    ctx->pc = 0x29c7e0u;
}
