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

// Function: sub_00110320
// Address: 0x110320 - 0x1103a0
void sub_00110320_0x110320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110320_0x110320");
#endif

    switch (ctx->pc) {
        case 0x110340u: goto label_110340;
        case 0x110368u: goto label_110368;
        case 0x110370u: goto label_110370;
        case 0x110384u: goto label_110384;
        default: break;
    }

    ctx->pc = 0x110320u;

    // 0x110320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x110320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x110324: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x110324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x110328: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x110328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11032c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11032cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110330: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x110330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110334: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x110334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x110338: 0xc05dd4a  jal         func_177528
    ctx->pc = 0x110338u;
    SET_GPR_U32(ctx, 31, 0x110340u);
    ctx->pc = 0x11033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110338u;
    // 0x11033c: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177528u, 0x110338u, 0x110340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110340u;
label_110340:
    // 0x110340: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x110340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x110344: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x110344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x110348: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x110348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x11034c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11034cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110350: 0x8c51020c  lw          $s1, 0x20C($v0)
    ctx->pc = 0x110350u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x110354: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x110354u;
    {
        const bool branch_taken_0x110354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x110358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110354u;
        // 0x110358: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110354) {
            ctx->pc = 0x110388u;
            goto label_110388;
        }
    }
    ctx->pc = 0x11035Cu;
    // 0x11035c: 0x8e3000b0  lw          $s0, 0xB0($s1)
    ctx->pc = 0x11035cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x110360: 0xc04391e  jal         func_10E478
    ctx->pc = 0x110360u;
    SET_GPR_U32(ctx, 31, 0x110368u);
    ctx->pc = 0x110364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110360u;
    // 0x110364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E478u, 0x110360u, 0x110368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110368u;
label_110368:
    // 0x110368: 0xc044258  jal         func_110960
    ctx->pc = 0x110368u;
    SET_GPR_U32(ctx, 31, 0x110370u);
    ctx->pc = 0x11036Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110368u;
    // 0x11036c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110960u, 0x110368u, 0x110370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110370u;
label_110370:
    // 0x110370: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x110370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x110374: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x110374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110378: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x110378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x11037c: 0xc04ad84  jal         func_12B610
    ctx->pc = 0x11037Cu;
    SET_GPR_U32(ctx, 31, 0x110384u);
    ctx->pc = 0x110380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11037Cu;
    // 0x110380: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B610u, 0x11037Cu, 0x110384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110384u;
label_110384:
    // 0x110384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110388:
    // 0x110388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x110388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11038c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11038cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110390: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x110390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x110394: 0x3e00008  jr          $ra
    ctx->pc = 0x110394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110394u;
        // 0x110398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11039Cu;
    // 0x11039c: 0x0  nop
    ctx->pc = 0x11039cu;
    // NOP
    ctx->pc = 0x1103a0u;
}
