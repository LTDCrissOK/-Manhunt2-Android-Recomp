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

// Function: sub_003AB858
// Address: 0x3ab858 - 0x3ab8e0
void sub_003AB858_0x3ab858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB858_0x3ab858");
#endif

    switch (ctx->pc) {
        case 0x3ab8c8u: goto label_3ab8c8;
        default: break;
    }

    ctx->pc = 0x3ab858u;

    // 0x3ab858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ab858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ab85c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ab85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ab860: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ab860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab864: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AB864u;
    {
        const bool branch_taken_0x3ab864 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB864u;
        // 0x3ab868: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab864) {
            ctx->pc = 0x3AB890u;
            goto label_3ab890;
        }
    }
    ctx->pc = 0x3AB86Cu;
    // 0x3ab86c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ab86cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3ab870: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3ab870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3ab874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab878: 0x2484f088  addiu       $a0, $a0, -0xF78
    ctx->pc = 0x3ab878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963336));
    // 0x3ab87c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ab87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ab880: 0x24a5f098  addiu       $a1, $a1, -0xF68
    ctx->pc = 0x3ab880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963352));
    // 0x3ab884: 0x80ead68  j           func_3AB5A0
    ctx->pc = 0x3AB884u;
    ctx->pc = 0x3AB888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB884u;
    // 0x3ab888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB5A0u;
    sub_003AB5A0_0x3ab5a0(rdram, ctx, runtime); return;
    ctx->pc = 0x3AB88Cu;
    // 0x3ab88c: 0x0  nop
    ctx->pc = 0x3ab88cu;
    // NOP
label_3ab890:
    // 0x3ab890: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x3ab890u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3ab894: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AB894u;
    {
        const bool branch_taken_0x3ab894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB894u;
        // 0x3ab898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab894) {
            ctx->pc = 0x3AB8C0u;
            goto label_3ab8c0;
        }
    }
    ctx->pc = 0x3AB89Cu;
    // 0x3ab89c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ab89cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3ab8a0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3ab8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3ab8a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab8a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab8a8: 0x2484f0b8  addiu       $a0, $a0, -0xF48
    ctx->pc = 0x3ab8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963384));
    // 0x3ab8ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ab8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ab8b0: 0x24a5f0c8  addiu       $a1, $a1, -0xF38
    ctx->pc = 0x3ab8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963400));
    // 0x3ab8b4: 0x80ead68  j           func_3AB5A0
    ctx->pc = 0x3AB8B4u;
    ctx->pc = 0x3AB8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB8B4u;
    // 0x3ab8b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB5A0u;
    sub_003AB5A0_0x3ab5a0(rdram, ctx, runtime); return;
    ctx->pc = 0x3AB8BCu;
    // 0x3ab8bc: 0x0  nop
    ctx->pc = 0x3ab8bcu;
    // NOP
label_3ab8c0:
    // 0x3ab8c0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3AB8C0u;
    SET_GPR_U32(ctx, 31, 0x3AB8C8u);
    ctx->pc = 0x3AB8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB8C0u;
    // 0x3ab8c4: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3AB8C0u, 0x3AB8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB8C8u;
label_3ab8c8:
    // 0x3ab8c8: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3ab8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ab8cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ab8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ab8d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB8D4u;
        // 0x3ab8d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB8DCu;
    // 0x3ab8dc: 0x0  nop
    ctx->pc = 0x3ab8dcu;
    // NOP
    ctx->pc = 0x3ab8e0u;
}
