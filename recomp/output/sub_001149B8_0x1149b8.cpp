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

// Function: sub_001149B8
// Address: 0x1149b8 - 0x114a00
void sub_001149B8_0x1149b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001149B8_0x1149b8");
#endif

    switch (ctx->pc) {
        case 0x1149d0u: goto label_1149d0;
        case 0x1149dcu: goto label_1149dc;
        case 0x1149ecu: goto label_1149ec;
        default: break;
    }

    ctx->pc = 0x1149b8u;

    // 0x1149b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1149b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1149bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1149bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1149c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1149c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1149c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1149c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1149c8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1149C8u;
    SET_GPR_U32(ctx, 31, 0x1149D0u);
    ctx->pc = 0x1149CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149C8u;
    // 0x1149cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1149C8u, 0x1149D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149D0u;
label_1149d0:
    // 0x1149d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1149d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1149d4: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x1149D4u;
    SET_GPR_U32(ctx, 31, 0x1149DCu);
    ctx->pc = 0x1149D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149D4u;
    // 0x1149d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x1149D4u, 0x1149DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149DCu;
label_1149dc:
    // 0x1149dc: 0xae020204  sw          $v0, 0x204($s0)
    ctx->pc = 0x1149dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 2));
    // 0x1149e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1149e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1149e4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1149E4u;
    SET_GPR_U32(ctx, 31, 0x1149ECu);
    ctx->pc = 0x1149E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1149E4u;
    // 0x1149e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1149E4u, 0x1149ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1149ECu;
label_1149ec:
    // 0x1149ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1149ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1149f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1149f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1149f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1149F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1149F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1149F4u;
        // 0x1149f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1149F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1149FCu;
    // 0x1149fc: 0x0  nop
    ctx->pc = 0x1149fcu;
    // NOP
    ctx->pc = 0x114a00u;
}
