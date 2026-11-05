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

// Function: sub_0012E890
// Address: 0x12e890 - 0x12e8e8
void sub_0012E890_0x12e890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E890_0x12e890");
#endif

    switch (ctx->pc) {
        case 0x12e8acu: goto label_12e8ac;
        case 0x12e8bcu: goto label_12e8bc;
        case 0x12e8d0u: goto label_12e8d0;
        default: break;
    }

    ctx->pc = 0x12e890u;

    // 0x12e890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e894: 0x2405051d  addiu       $a1, $zero, 0x51D
    ctx->pc = 0x12e894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1309));
    // 0x12e898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e89c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12e8a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12e8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12e8a4: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12E8A4u;
    SET_GPR_U32(ctx, 31, 0x12E8ACu);
    ctx->pc = 0x12E8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E8A4u;
    // 0x12e8a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12E8A4u, 0x12E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8ACu;
label_12e8ac:
    // 0x12e8ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12e8acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8b0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x12e8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12e8b4: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12E8B4u;
    SET_GPR_U32(ctx, 31, 0x12E8BCu);
    ctx->pc = 0x12E8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E8B4u;
    // 0x12e8b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12E8B4u, 0x12E8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8BCu;
label_12e8bc:
    // 0x12e8bc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x12e8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12e8c0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x12e8c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8c4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x12e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12e8c8: 0xc04c662  jal         func_131988
    ctx->pc = 0x12E8C8u;
    SET_GPR_U32(ctx, 31, 0x12E8D0u);
    ctx->pc = 0x12E8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E8C8u;
    // 0x12e8cc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12E8C8u, 0x12E8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8D0u;
label_12e8d0:
    // 0x12e8d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e8d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e8d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e8d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12e8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x12E8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E8DCu;
        // 0x12e8e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E8E4u;
    // 0x12e8e4: 0x0  nop
    ctx->pc = 0x12e8e4u;
    // NOP
    ctx->pc = 0x12e8e8u;
}
