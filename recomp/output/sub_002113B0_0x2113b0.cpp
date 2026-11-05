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

// Function: sub_002113B0
// Address: 0x2113b0 - 0x2114d8
void sub_002113B0_0x2113b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002113B0_0x2113b0");
#endif

    switch (ctx->pc) {
        case 0x211420u: goto label_211420;
        case 0x211478u: goto label_211478;
        case 0x2114c0u: goto label_2114c0;
        default: break;
    }

    ctx->pc = 0x2113b0u;

    // 0x2113b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2113b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2113b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2113b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2113b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2113b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2113bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2113bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2113c0: 0x8e06011c  lw          $a2, 0x11C($s0)
    ctx->pc = 0x2113c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2113c4: 0x10c00040  beqz        $a2, . + 4 + (0x40 << 2)
    ctx->pc = 0x2113C4u;
    {
        const bool branch_taken_0x2113c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2113C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113C4u;
        // 0x2113c8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113c4) {
            ctx->pc = 0x2114C8u;
            goto label_2114c8;
        }
    }
    ctx->pc = 0x2113CCu;
    // 0x2113cc: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x2113ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2113d0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x2113d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2113d4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2113D4u;
    {
        const bool branch_taken_0x2113d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2113D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113D4u;
        // 0x2113d8: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113d4) {
            ctx->pc = 0x2113ECu;
            goto label_2113ec;
        }
    }
    ctx->pc = 0x2113DCu;
    // 0x2113dc: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2113dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2113e0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2113e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2113e4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2113E4u;
    {
        const bool branch_taken_0x2113e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2113E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113E4u;
        // 0x2113e8: 0x24843520  addiu       $a0, $a0, 0x3520 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113e4) {
            ctx->pc = 0x21149Cu;
            goto label_21149c;
        }
    }
    ctx->pc = 0x2113ECu;
label_2113ec:
    // 0x2113ec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2113ECu;
    {
        const bool branch_taken_0x2113ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2113F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2113ECu;
        // 0x2113f0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113ec) {
            ctx->pc = 0x211438u;
            goto label_211438;
        }
    }
    ctx->pc = 0x2113F4u;
    // 0x2113f4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2113f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x2113f8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2113f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2113fc: 0x24843500  addiu       $a0, $a0, 0x3500
    ctx->pc = 0x2113fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13568));
    // 0x211400: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x211400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x211404: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x211404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x211408: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x211408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x21140c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x21140cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x211410: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x211410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x211414: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x211414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x211418: 0xc0f6e9c  jal         func_3DBA70
    ctx->pc = 0x211418u;
    SET_GPR_U32(ctx, 31, 0x211420u);
    ctx->pc = 0x21141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211418u;
    // 0x21141c: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x211418u, 0x211420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211420u;
label_211420:
    // 0x211420: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x211420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x211424: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x211424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x211428: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x211428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x21142c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21142cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x211430: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x211430u;
    {
        const bool branch_taken_0x211430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211430u;
        // 0x211434: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211430) {
            ctx->pc = 0x2114C4u;
            goto label_2114c4;
        }
    }
    ctx->pc = 0x211438u;
label_211438:
    // 0x211438: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x211438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21143c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x21143cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x211440: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x211440u;
    {
        const bool branch_taken_0x211440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x211444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211440u;
        // 0x211444: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211440) {
            ctx->pc = 0x211494u;
            goto label_211494;
        }
    }
    ctx->pc = 0x211448u;
    // 0x211448: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x211448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x21144c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x21144cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x211450: 0x24843530  addiu       $a0, $a0, 0x3530
    ctx->pc = 0x211450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13616));
    // 0x211454: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x211454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x211458: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x211458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x21145c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x21145cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211460: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x211460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x211464: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x211464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x211468: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x211468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x21146c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x21146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x211470: 0xc0f6e9c  jal         func_3DBA70
    ctx->pc = 0x211470u;
    SET_GPR_U32(ctx, 31, 0x211478u);
    ctx->pc = 0x211474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211470u;
    // 0x211474: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x211470u, 0x211478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211478u;
label_211478:
    // 0x211478: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x211478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x21147c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x21147cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x211480: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x211480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x211484: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x211484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x211488: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x211488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21148c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21148Cu;
    {
        const bool branch_taken_0x21148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21148Cu;
        // 0x211490: 0xae0300c0  sw          $v1, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21148c) {
            ctx->pc = 0x2114C4u;
            goto label_2114c4;
        }
    }
    ctx->pc = 0x211494u;
label_211494:
    // 0x211494: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x211494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x211498: 0x24843510  addiu       $a0, $a0, 0x3510
    ctx->pc = 0x211498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13584));
label_21149c:
    // 0x21149c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x21149cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2114a0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2114a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2114a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2114a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2114a8: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x2114a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x2114ac: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2114acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2114b0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2114b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2114b4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2114b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2114b8: 0xc0f6e9c  jal         func_3DBA70
    ctx->pc = 0x2114B8u;
    SET_GPR_U32(ctx, 31, 0x2114C0u);
    ctx->pc = 0x2114BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2114B8u;
    // 0x2114bc: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x2114B8u, 0x2114C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2114C0u;
label_2114c0:
    // 0x2114c0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2114c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2114c4:
    // 0x2114c4: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x2114c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
label_2114c8:
    // 0x2114c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2114c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2114cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2114ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2114d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2114D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2114D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2114D0u;
        // 0x2114d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2114D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2114D8u;
}
