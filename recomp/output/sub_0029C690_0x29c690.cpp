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

// Function: sub_0029C690
// Address: 0x29c690 - 0x29c708
void sub_0029C690_0x29c690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C690_0x29c690");
#endif

    switch (ctx->pc) {
        case 0x29c6b4u: goto label_29c6b4;
        case 0x29c6c0u: goto label_29c6c0;
        case 0x29c6ccu: goto label_29c6cc;
        case 0x29c6e0u: goto label_29c6e0;
        case 0x29c6f0u: goto label_29c6f0;
        default: break;
    }

    ctx->pc = 0x29c690u;

    // 0x29c690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29c690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29c694: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29c694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29c698: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29c698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x29c69c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x29c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29c6a0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29C6A0u;
    {
        const bool branch_taken_0x29c6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C6A0u;
        // 0x29c6a4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c6a0) {
            ctx->pc = 0x29C6F0u;
            goto label_29c6f0;
        }
    }
    ctx->pc = 0x29C6A8u;
    // 0x29c6a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29c6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6ac: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x29C6ACu;
    SET_GPR_U32(ctx, 31, 0x29C6B4u);
    ctx->pc = 0x29C6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C6ACu;
    // 0x29c6b0: 0x24450238  addiu       $a1, $v0, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x29C6ACu, 0x29C6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C6B4u;
label_29c6b4:
    // 0x29c6b4: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x29c6b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29c6b8: 0xc0d75d0  jal         func_35D740
    ctx->pc = 0x29C6B8u;
    SET_GPR_U32(ctx, 31, 0x29C6C0u);
    ctx->pc = 0x29C6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C6B8u;
    // 0x29c6bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D740u, 0x29C6B8u, 0x29C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C6C0u;
label_29c6c0:
    // 0x29c6c0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x29c6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c6c4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29C6C4u;
    SET_GPR_U32(ctx, 31, 0x29C6CCu);
    ctx->pc = 0x29C6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C6C4u;
    // 0x29c6c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29C6C4u, 0x29C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C6CCu;
label_29c6cc:
    // 0x29c6cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29c6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29c6d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C6D0u;
    {
        const bool branch_taken_0x29c6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C6D0u;
        // 0x29c6d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c6d0) {
            ctx->pc = 0x29C6E8u;
            goto label_29c6e8;
        }
    }
    ctx->pc = 0x29C6D8u;
    // 0x29c6d8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29C6D8u;
    SET_GPR_U32(ctx, 31, 0x29C6E0u);
    ctx->pc = 0x29C6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C6D8u;
    // 0x29c6dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29C6D8u, 0x29C6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C6E0u;
label_29c6e0:
    // 0x29c6e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29C6E0u;
    {
        const bool branch_taken_0x29c6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C6E0u;
        // 0x29c6e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c6e0) {
            ctx->pc = 0x29C6F4u;
            goto label_29c6f4;
        }
    }
    ctx->pc = 0x29C6E8u;
label_29c6e8:
    // 0x29c6e8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x29C6E8u;
    SET_GPR_U32(ctx, 31, 0x29C6F0u);
    ctx->pc = 0x29C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C6E8u;
    // 0x29c6ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29C6E8u, 0x29C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C6F0u;
label_29c6f0:
    // 0x29c6f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29c6f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c6f4:
    // 0x29c6f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29c6f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c6f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29c6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29c6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x29C6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C6FCu;
        // 0x29c700: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C704u;
    // 0x29c704: 0x0  nop
    ctx->pc = 0x29c704u;
    // NOP
    ctx->pc = 0x29c708u;
}
