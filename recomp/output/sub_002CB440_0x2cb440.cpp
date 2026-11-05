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

// Function: sub_002CB440
// Address: 0x2cb440 - 0x2cb4c0
void sub_002CB440_0x2cb440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB440_0x2cb440");
#endif

    switch (ctx->pc) {
        case 0x2cb47cu: goto label_2cb47c;
        case 0x2cb488u: goto label_2cb488;
        case 0x2cb490u: goto label_2cb490;
        case 0x2cb498u: goto label_2cb498;
        default: break;
    }

    ctx->pc = 0x2cb440u;

    // 0x2cb440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb444: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2cb444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb448: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2cb448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2cb44c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cb44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cb450: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2cb450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb454: 0x1e200003  bgtz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB454u;
    {
        const bool branch_taken_0x2cb454 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x2CB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB454u;
        // 0x2cb458: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb454) {
            ctx->pc = 0x2CB464u;
            goto label_2cb464;
        }
    }
    ctx->pc = 0x2CB45Cu;
    // 0x2cb45c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2CB45Cu;
    {
        const bool branch_taken_0x2cb45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB45Cu;
        // 0x2cb460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb45c) {
            ctx->pc = 0x2CB4A8u;
            goto label_2cb4a8;
        }
    }
    ctx->pc = 0x2CB464u;
label_2cb464:
    // 0x2cb464: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2cb464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2cb468: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cb468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb46c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2cb46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2cb470: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x2cb470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x2cb474: 0xc0f2708  jal         func_3C9C20
    ctx->pc = 0x2CB474u;
    SET_GPR_U32(ctx, 31, 0x2CB47Cu);
    ctx->pc = 0x2CB478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB474u;
    // 0x2cb478: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9C20u, 0x2CB474u, 0x2CB47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB47Cu;
label_2cb47c:
    // 0x2cb47c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cb47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb480: 0xc0f2758  jal         func_3C9D60
    ctx->pc = 0x2CB480u;
    SET_GPR_U32(ctx, 31, 0x2CB488u);
    ctx->pc = 0x2CB484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB480u;
    // 0x2cb484: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9D60u, 0x2CB480u, 0x2CB488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB488u;
label_2cb488:
    // 0x2cb488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cb488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb48c: 0x0  nop
    ctx->pc = 0x2cb48cu;
    // NOP
label_2cb490:
    // 0x2cb490: 0xc0f2750  jal         func_3C9D40
    ctx->pc = 0x2CB490u;
    SET_GPR_U32(ctx, 31, 0x2CB498u);
    ctx->pc = 0x2CB494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB490u;
    // 0x2cb494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9D40u, 0x2CB490u, 0x2CB498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB498u;
label_2cb498:
    // 0x2cb498: 0x0  nop
    ctx->pc = 0x2cb498u;
    // NOP
    // 0x2cb49c: 0x0  nop
    ctx->pc = 0x2cb49cu;
    // NOP
    // 0x2cb4a0: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CB4A0u;
    {
        const bool branch_taken_0x2cb4a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2CB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4A0u;
        // 0x2cb4a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb4a0) {
            ctx->pc = 0x2CB490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb490;
        }
    }
    ctx->pc = 0x2CB4A8u;
label_2cb4a8:
    // 0x2cb4a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cb4a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb4ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2cb4acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cb4b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cb4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4B4u;
        // 0x2cb4b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB4BCu;
    // 0x2cb4bc: 0x0  nop
    ctx->pc = 0x2cb4bcu;
    // NOP
    ctx->pc = 0x2cb4c0u;
}
