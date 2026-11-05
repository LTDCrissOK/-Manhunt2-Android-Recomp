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

// Function: sub_003370E0
// Address: 0x3370e0 - 0x337140
void sub_003370E0_0x3370e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003370E0_0x3370e0");
#endif

    switch (ctx->pc) {
        case 0x3370f4u: goto label_3370f4;
        case 0x337124u: goto label_337124;
        default: break;
    }

    ctx->pc = 0x3370e0u;

    // 0x3370e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3370e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3370e4: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3370E4u;
    {
        const bool branch_taken_0x3370e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3370E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3370E4u;
        // 0x3370e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3370e4) {
            ctx->pc = 0x3370FCu;
            goto label_3370fc;
        }
    }
    ctx->pc = 0x3370ECu;
    // 0x3370ec: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x3370ECu;
    SET_GPR_U32(ctx, 31, 0x3370F4u);
    ctx->pc = 0x3370F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3370ECu;
    // 0x3370f0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x3370ECu, 0x3370F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3370F4u;
label_3370f4:
    // 0x3370f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3370F4u;
    {
        const bool branch_taken_0x3370f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3370F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3370F4u;
        // 0x3370f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3370f4) {
            ctx->pc = 0x337128u;
            goto label_337128;
        }
    }
    ctx->pc = 0x3370FCu;
label_3370fc:
    // 0x3370fc: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x3370fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x337100: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x337100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x337104: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x337104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x337108: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x337108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33710c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33710Cu;
    {
        const bool branch_taken_0x33710c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x337110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33710Cu;
        // 0x337110: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33710c) {
            ctx->pc = 0x337128u;
            goto label_337128;
        }
    }
    ctx->pc = 0x337114u;
    // 0x337114: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x337114u;
    {
        const bool branch_taken_0x337114 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x337118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337114u;
        // 0x337118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337114) {
            ctx->pc = 0x337128u;
            goto label_337128;
        }
    }
    ctx->pc = 0x33711Cu;
    // 0x33711c: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x33711Cu;
    SET_GPR_U32(ctx, 31, 0x337124u);
    ctx->pc = 0x337120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33711Cu;
    // 0x337120: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x33711Cu, 0x337124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337124u;
label_337124:
    // 0x337124: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x337124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337128:
    // 0x337128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x337128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33712c: 0x3e00008  jr          $ra
    ctx->pc = 0x33712Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33712Cu;
        // 0x337130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33712Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337134u;
    // 0x337134: 0x0  nop
    ctx->pc = 0x337134u;
    // NOP
    // 0x337138: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x337138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33713c: 0x0  nop
    ctx->pc = 0x33713cu;
    // NOP
    ctx->pc = 0x337140u;
}
