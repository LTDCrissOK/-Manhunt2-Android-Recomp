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

// Function: sub_00289F90
// Address: 0x289f90 - 0x28a010
void sub_00289F90_0x289f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289F90_0x289f90");
#endif

    switch (ctx->pc) {
        case 0x289fb0u: goto label_289fb0;
        case 0x289fc8u: goto label_289fc8;
        case 0x289fe4u: goto label_289fe4;
        case 0x289ff4u: goto label_289ff4;
        case 0x289ffcu: goto label_289ffc;
        default: break;
    }

    ctx->pc = 0x289f90u;

    // 0x289f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x289f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x289f94: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x289f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x289f98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x289f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x289f9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x289f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fa0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x289fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x289fa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fa8: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x289FA8u;
    SET_GPR_U32(ctx, 31, 0x289FB0u);
    ctx->pc = 0x289FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289FA8u;
    // 0x289fac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x289FA8u, 0x289FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289FB0u;
label_289fb0:
    // 0x289fb0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x289fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x289fb4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289fb8: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x289fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x289fbc: 0x24a5aeb8  addiu       $a1, $a1, -0x5148
    ctx->pc = 0x289fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946488));
    // 0x289fc0: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289FC0u;
    SET_GPR_U32(ctx, 31, 0x289FC8u);
    ctx->pc = 0x289FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289FC0u;
    // 0x289fc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289FC0u, 0x289FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289FC8u;
label_289fc8:
    // 0x289fc8: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x289fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x289fcc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x289fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x289fd0: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x289fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x289fd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x289fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fdc: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x289FDCu;
    SET_GPR_U32(ctx, 31, 0x289FE4u);
    ctx->pc = 0x289FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289FDCu;
    // 0x289fe0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x289FDCu, 0x289FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289FE4u;
label_289fe4:
    // 0x289fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fe8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x289fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x289fec: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x289FECu;
    SET_GPR_U32(ctx, 31, 0x289FF4u);
    ctx->pc = 0x289FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289FECu;
    // 0x289ff0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x289FECu, 0x289FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289FF4u;
label_289ff4:
    // 0x289ff4: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x289FF4u;
    SET_GPR_U32(ctx, 31, 0x289FFCu);
    ctx->pc = 0x289FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289FF4u;
    // 0x289ff8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x289FF4u, 0x289FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289FFCu;
label_289ffc:
    // 0x289ffc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x289ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a000: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a004: 0x3e00008  jr          $ra
    ctx->pc = 0x28A004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A004u;
        // 0x28a008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A00Cu;
    // 0x28a00c: 0x0  nop
    ctx->pc = 0x28a00cu;
    // NOP
    ctx->pc = 0x28a010u;
}
