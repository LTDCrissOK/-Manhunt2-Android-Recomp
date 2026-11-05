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

// Function: sub_002513E0
// Address: 0x2513e0 - 0x251458
void sub_002513E0_0x2513e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002513E0_0x2513e0");
#endif

    switch (ctx->pc) {
        case 0x2513e0u: goto label_2513e0;
        case 0x2513e4u: goto label_2513e4;
        case 0x2513e8u: goto label_2513e8;
        case 0x2513ecu: goto label_2513ec;
        case 0x2513f0u: goto label_2513f0;
        case 0x2513f4u: goto label_2513f4;
        case 0x2513f8u: goto label_2513f8;
        case 0x2513fcu: goto label_2513fc;
        case 0x251400u: goto label_251400;
        case 0x251404u: goto label_251404;
        case 0x251408u: goto label_251408;
        case 0x25140cu: goto label_25140c;
        case 0x251410u: goto label_251410;
        case 0x251414u: goto label_251414;
        case 0x251418u: goto label_251418;
        case 0x25141cu: goto label_25141c;
        case 0x251420u: goto label_251420;
        case 0x251424u: goto label_251424;
        case 0x251428u: goto label_251428;
        case 0x25142cu: goto label_25142c;
        case 0x251430u: goto label_251430;
        case 0x251434u: goto label_251434;
        case 0x251438u: goto label_251438;
        case 0x25143cu: goto label_25143c;
        case 0x251440u: goto label_251440;
        case 0x251444u: goto label_251444;
        case 0x251448u: goto label_251448;
        case 0x25144cu: goto label_25144c;
        case 0x251450u: goto label_251450;
        case 0x251454u: goto label_251454;
        default: break;
    }

    ctx->pc = 0x2513e0u;

label_2513e0:
    // 0x2513e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2513e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2513e4:
    // 0x2513e4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2513e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_2513e8:
    // 0x2513e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2513e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2513ec:
    // 0x2513ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2513ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2513f0:
    // 0x2513f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2513f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2513f4:
    // 0x2513f4: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2513f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_2513f8:
    // 0x2513f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2513f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2513fc:
    // 0x2513fc: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
label_251400:
    if (ctx->pc == 0x251400u) {
        ctx->pc = 0x251404u;
        goto label_251404;
    }
    ctx->pc = 0x2513FCu;
    {
        const bool branch_taken_0x2513fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2513fc) {
            ctx->pc = 0x251434u;
            goto label_251434;
        }
    }
    ctx->pc = 0x251404u;
label_251404:
    // 0x251404: 0x8e0401a4  lw          $a0, 0x1A4($s0)
    ctx->pc = 0x251404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
label_251408:
    // 0x251408: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25140c:
    if (ctx->pc == 0x25140Cu) {
        ctx->pc = 0x25140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251408u;
        // 0x25140c: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251410u;
        goto label_251410;
    }
    ctx->pc = 0x251408u;
    {
        const bool branch_taken_0x251408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x251408) {
            ctx->pc = 0x25140Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251408u;
            // 0x25140c: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25141Cu;
            goto label_25141c;
        }
    }
    ctx->pc = 0x251410u;
label_251410:
    // 0x251410: 0xc0b4af0  jal         func_2D2BC0
label_251414:
    if (ctx->pc == 0x251414u) {
        ctx->pc = 0x251418u;
        goto label_251418;
    }
    ctx->pc = 0x251410u;
    SET_GPR_U32(ctx, 31, 0x251418u);
    ctx->pc = 0x2D2BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2BC0u, 0x251410u, 0x251418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251418u;
label_251418:
    // 0x251418: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x251418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_25141c:
    // 0x25141c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x25141cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_251420:
    // 0x251420: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x251420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_251424:
    // 0x251424: 0x40f809  jalr        $v0
label_251428:
    if (ctx->pc == 0x251428u) {
        ctx->pc = 0x25142Cu;
        goto label_25142c;
    }
    ctx->pc = 0x251424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25142Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251424u, 0x25142Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25142Cu;
label_25142c:
    // 0x25142c: 0x10000006  b           . + 4 + (0x6 << 2)
label_251430:
    if (ctx->pc == 0x251430u) {
        ctx->pc = 0x251430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25142Cu;
        // 0x251430: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251434u;
        goto label_251434;
    }
    ctx->pc = 0x25142Cu;
    {
        const bool branch_taken_0x25142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25142Cu;
        // 0x251430: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25142c) {
            ctx->pc = 0x251448u;
            goto label_251448;
        }
    }
    ctx->pc = 0x251434u;
label_251434:
    // 0x251434: 0xc0944f6  jal         func_2513D8
label_251438:
    if (ctx->pc == 0x251438u) {
        ctx->pc = 0x251438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251434u;
        // 0x251438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25143Cu;
        goto label_25143c;
    }
    ctx->pc = 0x251434u;
    SET_GPR_U32(ctx, 31, 0x25143Cu);
    ctx->pc = 0x251438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251434u;
    // 0x251438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x251434u, 0x25143Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25143Cu;
label_25143c:
    // 0x25143c: 0xc08cf4c  jal         func_233D30
label_251440:
    if (ctx->pc == 0x251440u) {
        ctx->pc = 0x251440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25143Cu;
        // 0x251440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251444u;
        goto label_251444;
    }
    ctx->pc = 0x25143Cu;
    SET_GPR_U32(ctx, 31, 0x251444u);
    ctx->pc = 0x251440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25143Cu;
    // 0x251440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D30u, 0x25143Cu, 0x251444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251444u;
label_251444:
    // 0x251444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_251448:
    // 0x251448: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x251448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_25144c:
    // 0x25144c: 0x3e00008  jr          $ra
label_251450:
    if (ctx->pc == 0x251450u) {
        ctx->pc = 0x251450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25144Cu;
        // 0x251450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251454u;
        goto label_251454;
    }
    ctx->pc = 0x25144Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25144Cu;
        // 0x251450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25144Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251454u;
label_251454:
    // 0x251454: 0x0  nop
    ctx->pc = 0x251454u;
    // NOP
    ctx->pc = 0x251458u;
}
