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

// Function: sub_0028A190
// Address: 0x28a190 - 0x28a218
void sub_0028A190_0x28a190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A190_0x28a190");
#endif

    switch (ctx->pc) {
        case 0x28a1b4u: goto label_28a1b4;
        case 0x28a1d0u: goto label_28a1d0;
        case 0x28a1e8u: goto label_28a1e8;
        case 0x28a1f8u: goto label_28a1f8;
        case 0x28a200u: goto label_28a200;
        default: break;
    }

    ctx->pc = 0x28a190u;

    // 0x28a190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28a190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28a194: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28a194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28a198: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a19c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a1a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28a1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28a1a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a1a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28a1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28a1ac: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x28A1ACu;
    SET_GPR_U32(ctx, 31, 0x28A1B4u);
    ctx->pc = 0x28A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A1ACu;
    // 0x28a1b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x28A1ACu, 0x28A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A1B4u;
label_28a1b4:
    // 0x28a1b4: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x28a1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x28a1b8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x28a1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x28a1bc: 0x2610aeb8  addiu       $s0, $s0, -0x5148
    ctx->pc = 0x28a1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946488));
    // 0x28a1c0: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x28a1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x28a1c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28a1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a1c8: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A1C8u;
    SET_GPR_U32(ctx, 31, 0x28A1D0u);
    ctx->pc = 0x28A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A1C8u;
    // 0x28a1cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A1C8u, 0x28A1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A1D0u;
label_28a1d0:
    // 0x28a1d0: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x28a1d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x28a1d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28a1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a1d8: 0x2631dce0  addiu       $s1, $s1, -0x2320
    ctx->pc = 0x28a1d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958304));
    // 0x28a1dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a1e0: 0xc0b6e0e  jal         func_2DB838
    ctx->pc = 0x28A1E0u;
    SET_GPR_U32(ctx, 31, 0x28A1E8u);
    ctx->pc = 0x28A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A1E0u;
    // 0x28a1e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB838u, 0x28A1E0u, 0x28A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A1E8u;
label_28a1e8:
    // 0x28a1e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a1ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28a1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a1f0: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28A1F0u;
    SET_GPR_U32(ctx, 31, 0x28A1F8u);
    ctx->pc = 0x28A1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A1F0u;
    // 0x28a1f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28A1F0u, 0x28A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A1F8u;
label_28a1f8:
    // 0x28a1f8: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x28A1F8u;
    SET_GPR_U32(ctx, 31, 0x28A200u);
    ctx->pc = 0x28A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A1F8u;
    // 0x28a1fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x28A1F8u, 0x28A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A200u;
label_28a200:
    // 0x28a200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a204: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28a204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a208: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28a208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a20c: 0x3e00008  jr          $ra
    ctx->pc = 0x28A20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A20Cu;
        // 0x28a210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A214u;
    // 0x28a214: 0x0  nop
    ctx->pc = 0x28a214u;
    // NOP
    ctx->pc = 0x28a218u;
}
