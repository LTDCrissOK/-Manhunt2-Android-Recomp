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

// Function: sub_001680F8
// Address: 0x1680f8 - 0x168198
void sub_001680F8_0x1680f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001680F8_0x1680f8");
#endif

    switch (ctx->pc) {
        case 0x16811cu: goto label_16811c;
        case 0x168138u: goto label_168138;
        case 0x168144u: goto label_168144;
        case 0x168154u: goto label_168154;
        case 0x168164u: goto label_168164;
        case 0x16816cu: goto label_16816c;
        case 0x168180u: goto label_168180;
        default: break;
    }

    ctx->pc = 0x1680f8u;

    // 0x1680f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1680f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1680fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1680fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168100: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x168100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168104: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x168104u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x168108: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x168108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16810c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16810cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x168110: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x168110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x168114: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x168114u;
    SET_GPR_U32(ctx, 31, 0x16811Cu);
    ctx->pc = 0x168118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168114u;
    // 0x168118: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x168114u, 0x16811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16811Cu;
label_16811c:
    // 0x16811c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16811cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168120: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x168120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x168124: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x168124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x168128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16812c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168130: 0xc04d74a  jal         func_135D28
    ctx->pc = 0x168130u;
    SET_GPR_U32(ctx, 31, 0x168138u);
    ctx->pc = 0x168134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168130u;
    // 0x168134: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D28u, 0x168130u, 0x168138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168138u;
label_168138:
    // 0x168138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16813c: 0xc04f12a  jal         func_13C4A8
    ctx->pc = 0x16813Cu;
    SET_GPR_U32(ctx, 31, 0x168144u);
    ctx->pc = 0x168140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16813Cu;
    // 0x168140: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4A8u, 0x16813Cu, 0x168144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168144u;
label_168144:
    // 0x168144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168148: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x168148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16814c: 0xc04f10c  jal         func_13C430
    ctx->pc = 0x16814Cu;
    SET_GPR_U32(ctx, 31, 0x168154u);
    ctx->pc = 0x168150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16814Cu;
    // 0x168150: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C430u, 0x16814Cu, 0x168154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168154u;
label_168154:
    // 0x168154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168158: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x168158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16815c: 0xc04f118  jal         func_13C460
    ctx->pc = 0x16815Cu;
    SET_GPR_U32(ctx, 31, 0x168164u);
    ctx->pc = 0x168160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16815Cu;
    // 0x168160: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x16815Cu, 0x168164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168164u;
label_168164:
    // 0x168164: 0xc04d7c0  jal         func_135F00
    ctx->pc = 0x168164u;
    SET_GPR_U32(ctx, 31, 0x16816Cu);
    ctx->pc = 0x168168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168164u;
    // 0x168168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F00u, 0x168164u, 0x16816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16816Cu;
label_16816c:
    // 0x16816c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16816Cu;
    {
        const bool branch_taken_0x16816c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16816Cu;
        // 0x168170: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16816c) {
            ctx->pc = 0x168184u;
            goto label_168184;
        }
    }
    ctx->pc = 0x168174u;
    // 0x168174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168178: 0xc04f42e  jal         func_13D0B8
    ctx->pc = 0x168178u;
    SET_GPR_U32(ctx, 31, 0x168180u);
    ctx->pc = 0x16817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168178u;
    // 0x16817c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D0B8u, 0x168178u, 0x168180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168180u;
label_168180:
    // 0x168180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x168180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_168184:
    // 0x168184: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168188: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x168188u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16818c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16818cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168190: 0x3e00008  jr          $ra
    ctx->pc = 0x168190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168190u;
        // 0x168194: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168198u;
}
