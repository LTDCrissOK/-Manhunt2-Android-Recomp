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

// Function: sub_003A2428
// Address: 0x3a2428 - 0x3a2490
void sub_003A2428_0x3a2428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2428_0x3a2428");
#endif

    switch (ctx->pc) {
        case 0x3a2428u: goto label_3a2428;
        case 0x3a242cu: goto label_3a242c;
        case 0x3a2430u: goto label_3a2430;
        case 0x3a2434u: goto label_3a2434;
        case 0x3a2438u: goto label_3a2438;
        case 0x3a243cu: goto label_3a243c;
        case 0x3a2440u: goto label_3a2440;
        case 0x3a2444u: goto label_3a2444;
        case 0x3a2448u: goto label_3a2448;
        case 0x3a244cu: goto label_3a244c;
        case 0x3a2450u: goto label_3a2450;
        case 0x3a2454u: goto label_3a2454;
        case 0x3a2458u: goto label_3a2458;
        case 0x3a245cu: goto label_3a245c;
        case 0x3a2460u: goto label_3a2460;
        case 0x3a2464u: goto label_3a2464;
        case 0x3a2468u: goto label_3a2468;
        case 0x3a246cu: goto label_3a246c;
        case 0x3a2470u: goto label_3a2470;
        case 0x3a2474u: goto label_3a2474;
        case 0x3a2478u: goto label_3a2478;
        case 0x3a247cu: goto label_3a247c;
        case 0x3a2480u: goto label_3a2480;
        case 0x3a2484u: goto label_3a2484;
        case 0x3a2488u: goto label_3a2488;
        case 0x3a248cu: goto label_3a248c;
        default: break;
    }

    ctx->pc = 0x3a2428u;

label_3a2428:
    // 0x3a2428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a2428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a242c:
    // 0x3a242c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a242cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3a2430:
    // 0x3a2430: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3a2430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a2434:
    // 0x3a2434: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3a2438:
    if (ctx->pc == 0x3A2438u) {
        ctx->pc = 0x3A2438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2434u;
        // 0x3a2438: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A243Cu;
        goto label_3a243c;
    }
    ctx->pc = 0x3A2434u;
    {
        const bool branch_taken_0x3a2434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2434u;
        // 0x3a2438: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2434) {
            ctx->pc = 0x3A2450u;
            goto label_3a2450;
        }
    }
    ctx->pc = 0x3A243Cu;
label_3a243c:
    // 0x3a243c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a243cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a2440:
    // 0x3a2440: 0xc0e8688  jal         func_3A1A20
label_3a2444:
    if (ctx->pc == 0x3A2444u) {
        ctx->pc = 0x3A2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2440u;
        // 0x3a2444: 0x2484c898  addiu       $a0, $a0, -0x3768 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2448u;
        goto label_3a2448;
    }
    ctx->pc = 0x3A2440u;
    SET_GPR_U32(ctx, 31, 0x3A2448u);
    ctx->pc = 0x3A2444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2440u;
    // 0x3a2444: 0x2484c898  addiu       $a0, $a0, -0x3768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1A20u, 0x3A2440u, 0x3A2448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2448u;
label_3a2448:
    // 0x3a2448: 0x1000000c  b           . + 4 + (0xC << 2)
label_3a244c:
    if (ctx->pc == 0x3A244Cu) {
        ctx->pc = 0x3A244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2448u;
        // 0x3a244c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2450u;
        goto label_3a2450;
    }
    ctx->pc = 0x3A2448u;
    {
        const bool branch_taken_0x3a2448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2448u;
        // 0x3a244c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2448) {
            ctx->pc = 0x3A247Cu;
            goto label_3a247c;
        }
    }
    ctx->pc = 0x3A2450u;
label_3a2450:
    // 0x3a2450: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a2450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a2454:
    // 0x3a2454: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x3a2454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_3a2458:
    // 0x3a2458: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a245c:
    if (ctx->pc == 0x3A245Cu) {
        ctx->pc = 0x3A245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2458u;
        // 0x3a245c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2460u;
        goto label_3a2460;
    }
    ctx->pc = 0x3A2458u;
    {
        const bool branch_taken_0x3a2458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2458) {
            ctx->pc = 0x3A245Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2458u;
            // 0x3a245c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2470u;
            goto label_3a2470;
        }
    }
    ctx->pc = 0x3A2460u;
label_3a2460:
    // 0x3a2460: 0x40f809  jalr        $v0
label_3a2464:
    if (ctx->pc == 0x3A2464u) {
        ctx->pc = 0x3A2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2460u;
        // 0x3a2464: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2468u;
        goto label_3a2468;
    }
    ctx->pc = 0x3A2460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2468u);
        ctx->pc = 0x3A2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2460u;
        // 0x3a2464: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2460u, 0x3A2468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2468u;
label_3a2468:
    // 0x3a2468: 0x10000003  b           . + 4 + (0x3 << 2)
label_3a246c:
    if (ctx->pc == 0x3A246Cu) {
        ctx->pc = 0x3A246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2468u;
        // 0x3a246c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2470u;
        goto label_3a2470;
    }
    ctx->pc = 0x3A2468u;
    {
        const bool branch_taken_0x3a2468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2468u;
        // 0x3a246c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2468) {
            ctx->pc = 0x3A2478u;
            goto label_3a2478;
        }
    }
    ctx->pc = 0x3A2470u;
label_3a2470:
    // 0x3a2470: 0xc0e8688  jal         func_3A1A20
label_3a2474:
    if (ctx->pc == 0x3A2474u) {
        ctx->pc = 0x3A2474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2470u;
        // 0x3a2474: 0x2484c8b8  addiu       $a0, $a0, -0x3748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2478u;
        goto label_3a2478;
    }
    ctx->pc = 0x3A2470u;
    SET_GPR_U32(ctx, 31, 0x3A2478u);
    ctx->pc = 0x3A2474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2470u;
    // 0x3a2474: 0x2484c8b8  addiu       $a0, $a0, -0x3748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1A20u, 0x3A2470u, 0x3A2478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2478u;
label_3a2478:
    // 0x3a2478: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a2478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a247c:
    // 0x3a247c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a247cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a2480:
    // 0x3a2480: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a2480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3a2484:
    // 0x3a2484: 0x3e00008  jr          $ra
label_3a2488:
    if (ctx->pc == 0x3A2488u) {
        ctx->pc = 0x3A2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2484u;
        // 0x3a2488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A248Cu;
        goto label_3a248c;
    }
    ctx->pc = 0x3A2484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2484u;
        // 0x3a2488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A248Cu;
label_3a248c:
    // 0x3a248c: 0x0  nop
    ctx->pc = 0x3a248cu;
    // NOP
    ctx->pc = 0x3a2490u;
}
