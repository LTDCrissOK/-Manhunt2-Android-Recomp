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

// Function: sub_001A86C0
// Address: 0x1a86c0 - 0x1a8710
void sub_001A86C0_0x1a86c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A86C0_0x1a86c0");
#endif

    switch (ctx->pc) {
        case 0x1a86f0u: goto label_1a86f0;
        case 0x1a86f8u: goto label_1a86f8;
        default: break;
    }

    ctx->pc = 0x1a86c0u;

    // 0x1a86c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a86c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a86c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a86c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a86c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a86c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a86cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a86ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a86d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a86d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a86d4: 0x94a2002a  lhu         $v0, 0x2A($a1)
    ctx->pc = 0x1a86d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x1a86d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a86d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a86dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A86DCu;
    {
        const bool branch_taken_0x1a86dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a86dc) {
            ctx->pc = 0x1A86F0u;
            goto label_1a86f0;
        }
    }
    ctx->pc = 0x1A86E4u;
    // 0x1a86e4: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x1a86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x1a86e8: 0xc07576c  jal         func_1D5DB0
    ctx->pc = 0x1A86E8u;
    SET_GPR_U32(ctx, 31, 0x1A86F0u);
    ctx->pc = 0x1A86ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86E8u;
    // 0x1a86ec: 0x8c440110  lw          $a0, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5DB0u, 0x1A86E8u, 0x1A86F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86F0u;
label_1a86f0:
    // 0x1a86f0: 0xc073db6  jal         func_1CF6D8
    ctx->pc = 0x1A86F0u;
    SET_GPR_U32(ctx, 31, 0x1A86F8u);
    ctx->pc = 0x1A86F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A86F0u;
    // 0x1a86f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF6D8u, 0x1A86F0u, 0x1A86F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A86F8u;
label_1a86f8:
    // 0x1a86f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a86f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1a86fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a86fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8700: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a8700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8704: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8704u;
        // 0x1a8708: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A870Cu;
    // 0x1a870c: 0x0  nop
    ctx->pc = 0x1a870cu;
    // NOP
    ctx->pc = 0x1a8710u;
}
