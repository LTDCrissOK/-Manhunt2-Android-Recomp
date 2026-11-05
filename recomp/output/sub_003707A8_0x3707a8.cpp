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

// Function: sub_003707A8
// Address: 0x3707a8 - 0x370800
void sub_003707A8_0x3707a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003707A8_0x3707a8");
#endif

    switch (ctx->pc) {
        case 0x3707f0u: goto label_3707f0;
        default: break;
    }

    ctx->pc = 0x3707a8u;

    // 0x3707a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3707a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3707ac: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3707acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3707b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3707b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3707b4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3707b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3707b8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3707B8u;
    {
        const bool branch_taken_0x3707b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3707b8) {
            ctx->pc = 0x3707BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3707B8u;
            // 0x3707bc: 0x3282b  sltu        $a1, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3707D0u;
            goto label_3707d0;
        }
    }
    ctx->pc = 0x3707C0u;
    // 0x3707c0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3707c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3707c4: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3707C4u;
    {
        const bool branch_taken_0x3707c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3707C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3707C4u;
        // 0x3707c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3707c4) {
            ctx->pc = 0x3707F4u;
            goto label_3707f4;
        }
    }
    ctx->pc = 0x3707CCu;
    // 0x3707cc: 0x3282b  sltu        $a1, $zero, $v1
    ctx->pc = 0x3707ccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3707d0:
    // 0x3707d0: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x3707d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x3707d4: 0x34a20004  ori         $v0, $a1, 0x4
    ctx->pc = 0x3707d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x3707d8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3707d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x3707dc: 0x46280b  movn        $a1, $v0, $a2
    ctx->pc = 0x3707dcu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x3707e0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3707e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3707e4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3707e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3707e8: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x3707E8u;
    SET_GPR_U32(ctx, 31, 0x3707F0u);
    ctx->pc = 0x3707ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3707E8u;
    // 0x3707ec: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x3707E8u, 0x3707F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3707F0u;
label_3707f0:
    // 0x3707f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3707f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3707f4:
    // 0x3707f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3707F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3707F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3707F4u;
        // 0x3707f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3707F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3707FCu;
    // 0x3707fc: 0x0  nop
    ctx->pc = 0x3707fcu;
    // NOP
    ctx->pc = 0x370800u;
}
