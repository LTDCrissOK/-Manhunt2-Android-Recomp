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

// Function: sub_00177408
// Address: 0x177408 - 0x177490
void sub_00177408_0x177408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177408_0x177408");
#endif

    switch (ctx->pc) {
        case 0x177448u: goto label_177448;
        case 0x177460u: goto label_177460;
        default: break;
    }

    ctx->pc = 0x177408u;

    // 0x177408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17740c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17740cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177410: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177414: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x177414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x177418: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x177418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17741c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17741cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x177420: 0x90820158  lbu         $v0, 0x158($a0)
    ctx->pc = 0x177420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x177424: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x177424u;
    {
        const bool branch_taken_0x177424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177424u;
        // 0x177428: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177424) {
            ctx->pc = 0x177478u;
            goto label_177478;
        }
    }
    ctx->pc = 0x17742Cu;
    // 0x17742c: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x17742cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x177430: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x177430u;
    {
        const bool branch_taken_0x177430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177430u;
        // 0x177434: 0x249200dc  addiu       $s2, $a0, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177430) {
            ctx->pc = 0x177478u;
            goto label_177478;
        }
    }
    ctx->pc = 0x177438u;
    // 0x177438: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x177438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17743c: 0x249100d8  addiu       $s1, $a0, 0xD8
    ctx->pc = 0x17743cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x177440: 0x24130021  addiu       $s3, $zero, 0x21
    ctx->pc = 0x177440u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x177444: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x177444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_177448:
    // 0x177448: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x177448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x17744c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17744cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177450: 0x10730003  beq         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x177450u;
    {
        const bool branch_taken_0x177450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x177454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177450u;
        // 0x177454: 0x2441021  addu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177450) {
            ctx->pc = 0x177460u;
            goto label_177460;
        }
    }
    ctx->pc = 0x177458u;
    // 0x177458: 0xc05e2aa  jal         func_178AA8
    ctx->pc = 0x177458u;
    SET_GPR_U32(ctx, 31, 0x177460u);
    ctx->pc = 0x17745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177458u;
    // 0x17745c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178AA8u, 0x177458u, 0x177460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177460u;
label_177460:
    // 0x177460: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x177460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x177464: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x177464u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x177468: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x177468u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x17746c: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x17746Cu;
    {
        const bool branch_taken_0x17746c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17746c) {
            ctx->pc = 0x177470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17746Cu;
            // 0x177470: 0x1020c0  sll         $a0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177448;
        }
    }
    ctx->pc = 0x177474u;
    // 0x177474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177478:
    // 0x177478: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17747c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17747cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177480: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x177480u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177484: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x177484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177488: 0x3e00008  jr          $ra
    ctx->pc = 0x177488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177488u;
        // 0x17748c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177490u;
}
