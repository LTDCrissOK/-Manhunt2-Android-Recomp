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

// Function: sub_003C7768
// Address: 0x3c7768 - 0x3c77f0
void sub_003C7768_0x3c7768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7768_0x3c7768");
#endif

    ctx->pc = 0x3c7768u;

    // 0x3c7768: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c7768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3c776c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3c776cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3c7770: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C7770u;
    {
        const bool branch_taken_0x3c7770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7770u;
        // 0x3c7774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7770) {
            ctx->pc = 0x3C7780u;
            goto label_3c7780;
        }
    }
    ctx->pc = 0x3C7778u;
    // 0x3c7778: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3c7778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c777c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3c777cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_3c7780:
    // 0x3c7780: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3c7780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x3c7784: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3c7784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3c7788: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C7788u;
    {
        const bool branch_taken_0x3c7788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7788) {
            ctx->pc = 0x3C7798u;
            goto label_3c7798;
        }
    }
    ctx->pc = 0x3C7790u;
    // 0x3c7790: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3c7790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3c7794: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3c7794u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_3c7798:
    // 0x3c7798: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x3c7798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x3c779c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3c779cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3c77a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C77A0u;
    {
        const bool branch_taken_0x3c77a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c77a0) {
            ctx->pc = 0x3C77B0u;
            goto label_3c77b0;
        }
    }
    ctx->pc = 0x3C77A8u;
    // 0x3c77a8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3c77a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3c77ac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3c77acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3c77b0:
    // 0x3c77b0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x3c77b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x3c77b4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3c77b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3c77b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C77B8u;
    {
        const bool branch_taken_0x3c77b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c77b8) {
            ctx->pc = 0x3C77C8u;
            goto label_3c77c8;
        }
    }
    ctx->pc = 0x3C77C0u;
    // 0x3c77c0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3c77c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3c77c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3c77c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3c77c8:
    // 0x3c77c8: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C77C8u;
    {
        const bool branch_taken_0x3c77c8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3C77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C77C8u;
        // 0x3c77cc: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c77c8) {
            ctx->pc = 0x3C77E0u;
            goto label_3c77e0;
        }
    }
    ctx->pc = 0x3C77D0u;
    // 0x3c77d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3c77d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3c77d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3c77d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3c77d8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3C77D8u;
    {
        const bool branch_taken_0x3c77d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C77DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C77D8u;
        // 0x3c77dc: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c77d8) {
            ctx->pc = 0x3C77E4u;
            goto label_3c77e4;
        }
    }
    ctx->pc = 0x3C77E0u;
label_3c77e0:
    // 0x3c77e0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3c77e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c77e4:
    // 0x3c77e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C77E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C77E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C77ECu;
    // 0x3c77ec: 0x0  nop
    ctx->pc = 0x3c77ecu;
    // NOP
    ctx->pc = 0x3c77f0u;
}
