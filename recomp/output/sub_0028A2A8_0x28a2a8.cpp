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

// Function: sub_0028A2A8
// Address: 0x28a2a8 - 0x28a328
void sub_0028A2A8_0x28a2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A2A8_0x28a2a8");
#endif

    switch (ctx->pc) {
        case 0x28a2c8u: goto label_28a2c8;
        case 0x28a2e0u: goto label_28a2e0;
        case 0x28a2fcu: goto label_28a2fc;
        case 0x28a30cu: goto label_28a30c;
        case 0x28a314u: goto label_28a314;
        default: break;
    }

    ctx->pc = 0x28a2a8u;

    // 0x28a2a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a2ac: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28a2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28a2b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a2b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a2b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28a2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28a2bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a2c0: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x28A2C0u;
    SET_GPR_U32(ctx, 31, 0x28A2C8u);
    ctx->pc = 0x28A2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A2C0u;
    // 0x28a2c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x28A2C0u, 0x28A2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A2C8u;
label_28a2c8:
    // 0x28a2c8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x28a2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x28a2cc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a2d0: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x28a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x28a2d4: 0x24a5aed8  addiu       $a1, $a1, -0x5128
    ctx->pc = 0x28a2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946520));
    // 0x28a2d8: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A2D8u;
    SET_GPR_U32(ctx, 31, 0x28A2E0u);
    ctx->pc = 0x28A2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A2D8u;
    // 0x28a2dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A2D8u, 0x28A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A2E0u;
label_28a2e0:
    // 0x28a2e0: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x28a2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x28a2e4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28a2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a2e8: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x28a2e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x28a2ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a2f4: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x28A2F4u;
    SET_GPR_U32(ctx, 31, 0x28A2FCu);
    ctx->pc = 0x28A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A2F4u;
    // 0x28a2f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x28A2F4u, 0x28A2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A2FCu;
label_28a2fc:
    // 0x28a2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a300: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28a300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a304: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28A304u;
    SET_GPR_U32(ctx, 31, 0x28A30Cu);
    ctx->pc = 0x28A308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A304u;
    // 0x28a308: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28A304u, 0x28A30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A30Cu;
label_28a30c:
    // 0x28a30c: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x28A30Cu;
    SET_GPR_U32(ctx, 31, 0x28A314u);
    ctx->pc = 0x28A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A30Cu;
    // 0x28a310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x28A30Cu, 0x28A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A314u;
label_28a314:
    // 0x28a314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a318: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a31c: 0x3e00008  jr          $ra
    ctx->pc = 0x28A31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A31Cu;
        // 0x28a320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A324u;
    // 0x28a324: 0x0  nop
    ctx->pc = 0x28a324u;
    // NOP
    ctx->pc = 0x28a328u;
}
