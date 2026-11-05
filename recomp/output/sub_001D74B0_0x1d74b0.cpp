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

// Function: sub_001D74B0
// Address: 0x1d74b0 - 0x1d7510
void sub_001D74B0_0x1d74b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D74B0_0x1d74b0");
#endif

    switch (ctx->pc) {
        case 0x1d74ccu: goto label_1d74cc;
        case 0x1d74d4u: goto label_1d74d4;
        case 0x1d74f0u: goto label_1d74f0;
        default: break;
    }

    ctx->pc = 0x1d74b0u;

    // 0x1d74b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d74b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d74b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d74b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d74b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d74b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d74bc: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1d74bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1d74c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d74c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d74c4: 0xc0a0382  jal         func_280E08
    ctx->pc = 0x1D74C4u;
    SET_GPR_U32(ctx, 31, 0x1D74CCu);
    ctx->pc = 0x1D74C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74C4u;
    // 0x1d74c8: 0x3c110058  lui         $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280E08u, 0x1D74C4u, 0x1D74CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74CCu;
label_1d74cc:
    // 0x1d74cc: 0xc075dfe  jal         func_1D77F8
    ctx->pc = 0x1D74CCu;
    SET_GPR_U32(ctx, 31, 0x1D74D4u);
    ctx->pc = 0x1D77F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77F8u, 0x1D74CCu, 0x1D74D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74D4u;
label_1d74d4:
    // 0x1d74d4: 0x9203b44c  lbu         $v1, -0x4BB4($s0)
    ctx->pc = 0x1d74d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294947916)));
    // 0x1d74d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d74d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d74dc: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1d74dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1d74e0: 0xa202b44c  sb          $v0, -0x4BB4($s0)
    ctx->pc = 0x1d74e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294947916), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d74e4: 0xa2238d50  sb          $v1, -0x72B0($s1)
    ctx->pc = 0x1d74e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294937936), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d74e8: 0xc07f482  jal         func_1FD208
    ctx->pc = 0x1D74E8u;
    SET_GPR_U32(ctx, 31, 0x1D74F0u);
    ctx->pc = 0x1D74ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D74E8u;
    // 0x1d74ec: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD208u, 0x1D74E8u, 0x1D74F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74F0u;
label_1d74f0:
    // 0x1d74f0: 0x92228d50  lbu         $v0, -0x72B0($s1)
    ctx->pc = 0x1d74f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294937936)));
    // 0x1d74f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d74f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d74f8: 0xa202b44c  sb          $v0, -0x4BB4($s0)
    ctx->pc = 0x1d74f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294947916), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d74fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d74fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7504: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7504u;
        // 0x1d7508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D750Cu;
    // 0x1d750c: 0x0  nop
    ctx->pc = 0x1d750cu;
    // NOP
    ctx->pc = 0x1d7510u;
}
