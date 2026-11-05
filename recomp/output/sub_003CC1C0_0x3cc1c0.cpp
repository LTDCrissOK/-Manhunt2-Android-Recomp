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

// Function: sub_003CC1C0
// Address: 0x3cc1c0 - 0x3cc240
void sub_003CC1C0_0x3cc1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC1C0_0x3cc1c0");
#endif

    switch (ctx->pc) {
        case 0x3cc1f8u: goto label_3cc1f8;
        case 0x3cc21cu: goto label_3cc21c;
        case 0x3cc22cu: goto label_3cc22c;
        default: break;
    }

    ctx->pc = 0x3cc1c0u;

    // 0x3cc1c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3cc1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3cc1c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3cc1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3cc1c8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3cc1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3cc1cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3cc1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc1d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3cc1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3cc1d4: 0xffa50088  sd          $a1, 0x88($sp)
    ctx->pc = 0x3cc1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 5));
    // 0x3cc1d8: 0xffa60090  sd          $a2, 0x90($sp)
    ctx->pc = 0x3cc1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 6));
    // 0x3cc1dc: 0xffa70098  sd          $a3, 0x98($sp)
    ctx->pc = 0x3cc1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 7));
    // 0x3cc1e0: 0xffa800a0  sd          $t0, 0xA0($sp)
    ctx->pc = 0x3cc1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 8));
    // 0x3cc1e4: 0xffa900a8  sd          $t1, 0xA8($sp)
    ctx->pc = 0x3cc1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 9));
    // 0x3cc1e8: 0xffaa00b0  sd          $t2, 0xB0($sp)
    ctx->pc = 0x3cc1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 10));
    // 0x3cc1ec: 0xffab00b8  sd          $t3, 0xB8($sp)
    ctx->pc = 0x3cc1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 11));
    // 0x3cc1f0: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3CC1F0u;
    SET_GPR_U32(ctx, 31, 0x3CC1F8u);
    ctx->pc = 0x3CC1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC1F0u;
    // 0x3cc1f4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3CC1F0u, 0x3CC1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC1F8u;
label_3cc1f8:
    // 0x3cc1f8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3cc1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3cc1fc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3cc1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x3cc200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3cc200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc204: 0x2484c080  addiu       $a0, $a0, -0x3F80
    ctx->pc = 0x3cc204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951040));
    // 0x3cc208: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3cc208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc20c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3cc20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc210: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3cc210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x3cc214: 0xc0f2cba  jal         func_3CB2E8
    ctx->pc = 0x3CC214u;
    SET_GPR_U32(ctx, 31, 0x3CC21Cu);
    ctx->pc = 0x3CC218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC214u;
    // 0x3cc218: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CB2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CB2E8u, 0x3CC214u, 0x3CC21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC21Cu;
label_3cc21c:
    // 0x3cc21c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CC21Cu;
    {
        const bool branch_taken_0x3cc21c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC21Cu;
        // 0x3cc220: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc21c) {
            ctx->pc = 0x3CC230u;
            goto label_3cc230;
        }
    }
    ctx->pc = 0x3CC224u;
    // 0x3cc224: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3CC224u;
    SET_GPR_U32(ctx, 31, 0x3CC22Cu);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3CC224u, 0x3CC22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC22Cu;
label_3cc22c:
    // 0x3cc22c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3cc22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3cc230:
    // 0x3cc230: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3cc230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cc234: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3cc234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cc238: 0x3e00008  jr          $ra
    ctx->pc = 0x3CC238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC238u;
        // 0x3cc23c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC240u;
}
