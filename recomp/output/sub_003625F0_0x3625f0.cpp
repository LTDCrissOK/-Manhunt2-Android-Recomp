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

// Function: sub_003625F0
// Address: 0x3625f0 - 0x362670
void sub_003625F0_0x3625f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003625F0_0x3625f0");
#endif

    switch (ctx->pc) {
        case 0x3625f0u: goto label_3625f0;
        case 0x3625f4u: goto label_3625f4;
        case 0x3625f8u: goto label_3625f8;
        case 0x3625fcu: goto label_3625fc;
        case 0x362600u: goto label_362600;
        case 0x362604u: goto label_362604;
        case 0x362608u: goto label_362608;
        case 0x36260cu: goto label_36260c;
        case 0x362610u: goto label_362610;
        case 0x362614u: goto label_362614;
        case 0x362618u: goto label_362618;
        case 0x36261cu: goto label_36261c;
        case 0x362620u: goto label_362620;
        case 0x362624u: goto label_362624;
        case 0x362628u: goto label_362628;
        case 0x36262cu: goto label_36262c;
        case 0x362630u: goto label_362630;
        case 0x362634u: goto label_362634;
        case 0x362638u: goto label_362638;
        case 0x36263cu: goto label_36263c;
        case 0x362640u: goto label_362640;
        case 0x362644u: goto label_362644;
        case 0x362648u: goto label_362648;
        case 0x36264cu: goto label_36264c;
        case 0x362650u: goto label_362650;
        case 0x362654u: goto label_362654;
        case 0x362658u: goto label_362658;
        case 0x36265cu: goto label_36265c;
        case 0x362660u: goto label_362660;
        case 0x362664u: goto label_362664;
        case 0x362668u: goto label_362668;
        case 0x36266cu: goto label_36266c;
        default: break;
    }

    ctx->pc = 0x3625f0u;

label_3625f0:
    // 0x3625f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3625f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3625f4:
    // 0x3625f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3625f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3625f8:
    // 0x3625f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3625f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3625fc:
    // 0x3625fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3625fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_362600:
    // 0x362600: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x362600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_362604:
    // 0x362604: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x362604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362608:
    // 0x362608: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x362608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36260c:
    // 0x36260c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x36260cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_362610:
    // 0x362610: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x362610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_362614:
    // 0x362614: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x362614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_362618:
    // 0x362618: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x362618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_36261c:
    // 0x36261c: 0x40f809  jalr        $v0
label_362620:
    if (ctx->pc == 0x362620u) {
        ctx->pc = 0x362624u;
        goto label_362624;
    }
    ctx->pc = 0x36261Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362624u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36261Cu, 0x362624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362624u;
label_362624:
    // 0x362624: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_362628:
    if (ctx->pc == 0x362628u) {
        ctx->pc = 0x362628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362624u;
        // 0x362628: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36262Cu;
        goto label_36262c;
    }
    ctx->pc = 0x362624u;
    {
        const bool branch_taken_0x362624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x362624) {
            ctx->pc = 0x362628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362624u;
            // 0x362628: 0x8e030024  lw          $v1, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36264Cu;
            goto label_36264c;
        }
    }
    ctx->pc = 0x36262Cu;
label_36262c:
    // 0x36262c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x36262cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_362630:
    // 0x362630: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x362630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_362634:
    // 0x362634: 0x0  nop
    ctx->pc = 0x362634u;
    // NOP
label_362638:
    // 0x362638: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x362638u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36263c:
    // 0x36263c: 0x0  nop
    ctx->pc = 0x36263cu;
    // NOP
label_362640:
    // 0x362640: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_362644:
    if (ctx->pc == 0x362644u) {
        ctx->pc = 0x362644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362640u;
        // 0x362644: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362648u;
        goto label_362648;
    }
    ctx->pc = 0x362640u;
    {
        const bool branch_taken_0x362640 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x362640) {
            ctx->pc = 0x362644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362640u;
            // 0x362644: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362660u;
            goto label_362660;
        }
    }
    ctx->pc = 0x362648u;
label_362648:
    // 0x362648: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x362648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_36264c:
    // 0x36264c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36264cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_362650:
    // 0x362650: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x362650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_362654:
    // 0x362654: 0x40f809  jalr        $v0
label_362658:
    if (ctx->pc == 0x362658u) {
        ctx->pc = 0x362658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362654u;
        // 0x362658: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36265Cu;
        goto label_36265c;
    }
    ctx->pc = 0x362654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36265Cu);
        ctx->pc = 0x362658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362654u;
        // 0x362658: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362654u, 0x36265Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36265Cu;
label_36265c:
    // 0x36265c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36265cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_362660:
    // 0x362660: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x362660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_362664:
    // 0x362664: 0x3e00008  jr          $ra
label_362668:
    if (ctx->pc == 0x362668u) {
        ctx->pc = 0x362668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362664u;
        // 0x362668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36266Cu;
        goto label_36266c;
    }
    ctx->pc = 0x362664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362664u;
        // 0x362668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36266Cu;
label_36266c:
    // 0x36266c: 0x0  nop
    ctx->pc = 0x36266cu;
    // NOP
    ctx->pc = 0x362670u;
}
