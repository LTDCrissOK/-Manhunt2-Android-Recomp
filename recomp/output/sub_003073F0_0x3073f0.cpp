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

// Function: sub_003073F0
// Address: 0x3073f0 - 0x307670
void sub_003073F0_0x3073f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003073F0_0x3073f0");
#endif

    switch (ctx->pc) {
        case 0x307408u: goto label_307408;
        case 0x307420u: goto label_307420;
        case 0x3074b4u: goto label_3074b4;
        case 0x3074bcu: goto label_3074bc;
        case 0x3074ccu: goto label_3074cc;
        case 0x3074d4u: goto label_3074d4;
        case 0x3074e0u: goto label_3074e0;
        case 0x3074e8u: goto label_3074e8;
        case 0x3074f8u: goto label_3074f8;
        case 0x307508u: goto label_307508;
        case 0x307518u: goto label_307518;
        case 0x3075c4u: goto label_3075c4;
        case 0x3075d8u: goto label_3075d8;
        case 0x3075e8u: goto label_3075e8;
        case 0x307638u: goto label_307638;
        case 0x307658u: goto label_307658;
        default: break;
    }

    ctx->pc = 0x3073f0u;

    // 0x3073f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3073f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3073f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3073f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3073f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3073f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3073fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3073fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x307400: 0xc090a58  jal         func_242960
    ctx->pc = 0x307400u;
    SET_GPR_U32(ctx, 31, 0x307408u);
    ctx->pc = 0x307404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307400u;
    // 0x307404: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242960u, 0x307400u, 0x307408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307408u;
label_307408:
    // 0x307408: 0x8e050334  lw          $a1, 0x334($s0)
    ctx->pc = 0x307408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x30740c: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x30740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x307410: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x307410u;
    {
        const bool branch_taken_0x307410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307410) {
            ctx->pc = 0x307414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307410u;
            // 0x307414: 0xc4400024  lwc1        $f0, 0x24($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x307440u;
            goto label_307440;
        }
    }
    ctx->pc = 0x307418u;
    // 0x307418: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x307418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30741c: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x30741cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
label_307420:
    // 0x307420: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x307420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x307424: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x307424u;
    {
        const bool branch_taken_0x307424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307424u;
        // 0x307428: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307424) {
            ctx->pc = 0x30743Cu;
            goto label_30743c;
        }
    }
    ctx->pc = 0x30742Cu;
    // 0x30742c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x30742cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x307430: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x307430u;
    {
        const bool branch_taken_0x307430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307430u;
        // 0x307434: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307430) {
            ctx->pc = 0x307420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307420;
        }
    }
    ctx->pc = 0x307438u;
    // 0x307438: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x307438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_30743c:
    // 0x30743c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x30743cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_307440:
    // 0x307440: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x307440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x307444: 0x0  nop
    ctx->pc = 0x307444u;
    // NOP
    // 0x307448: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x307448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30744c: 0x0  nop
    ctx->pc = 0x30744cu;
    // NOP
    // 0x307450: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x307450u;
    {
        const bool branch_taken_0x307450 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x307454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307450u;
        // 0x307454: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307450) {
            ctx->pc = 0x30745Cu;
            goto label_30745c;
        }
    }
    ctx->pc = 0x307458u;
    // 0x307458: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x307458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30745c:
    // 0x30745c: 0xe60110c0  swc1        $f1, 0x10C0($s0)
    ctx->pc = 0x30745cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4288), bits); }
    // 0x307460: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x307460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x307464: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x307464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x307468: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x307468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x30746c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30746Cu;
    {
        const bool branch_taken_0x30746c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x307470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30746Cu;
        // 0x307470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30746c) {
            ctx->pc = 0x307494u;
            goto label_307494;
        }
    }
    ctx->pc = 0x307474u;
    // 0x307474: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x307474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x307478: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x307478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x30747c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x30747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307480: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x307480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307484: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x307484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x307488: 0x0  nop
    ctx->pc = 0x307488u;
    // NOP
    // 0x30748c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30748Cu;
    {
        const bool branch_taken_0x30748c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30748c) {
            ctx->pc = 0x307490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30748Cu;
            // 0x307490: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307494u;
            goto label_307494;
        }
    }
    ctx->pc = 0x307494u;
label_307494:
    // 0x307494: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x307494u;
    {
        const bool branch_taken_0x307494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x307498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307494u;
        // 0x307498: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307494) {
            ctx->pc = 0x307518u;
            goto label_307518;
        }
    }
    ctx->pc = 0x30749Cu;
    // 0x30749c: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x30749cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x3074a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3074a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3074a4: 0x5043001d  beql        $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3074A4u;
    {
        const bool branch_taken_0x3074a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3074a4) {
            ctx->pc = 0x3074A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3074A4u;
            // 0x3074a8: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30751Cu;
            goto label_30751c;
        }
    }
    ctx->pc = 0x3074ACu;
    // 0x3074ac: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x3074ACu;
    SET_GPR_U32(ctx, 31, 0x3074B4u);
    ctx->pc = 0x3074B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3074ACu;
    // 0x3074b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x3074ACu, 0x3074B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3074B4u;
label_3074b4:
    // 0x3074b4: 0xc097f76  jal         func_25FDD8
    ctx->pc = 0x3074B4u;
    SET_GPR_U32(ctx, 31, 0x3074BCu);
    ctx->pc = 0x3074B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3074B4u;
    // 0x3074b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x3074B4u, 0x3074BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3074BCu;
label_3074bc:
    // 0x3074bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3074BCu;
    {
        const bool branch_taken_0x3074bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3074bc) {
            ctx->pc = 0x3074F0u;
            goto label_3074f0;
        }
    }
    ctx->pc = 0x3074C4u;
    // 0x3074c4: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x3074C4u;
    SET_GPR_U32(ctx, 31, 0x3074CCu);
    ctx->pc = 0x3074C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3074C4u;
    // 0x3074c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x3074C4u, 0x3074CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3074CCu;
label_3074cc:
    // 0x3074cc: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x3074CCu;
    SET_GPR_U32(ctx, 31, 0x3074D4u);
    ctx->pc = 0x3074D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3074CCu;
    // 0x3074d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x3074CCu, 0x3074D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3074D4u;
label_3074d4:
    // 0x3074d4: 0x38420083  xori        $v0, $v0, 0x83
    ctx->pc = 0x3074d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)131);
    // 0x3074d8: 0xc0a03dc  jal         func_280F70
    ctx->pc = 0x3074D8u;
    SET_GPR_U32(ctx, 31, 0x3074E0u);
    ctx->pc = 0x3074DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3074D8u;
    // 0x3074dc: 0x2c440001  sltiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x280F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F70u, 0x3074D8u, 0x3074E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3074E0u;
label_3074e0:
    // 0x3074e0: 0xc0a03d0  jal         func_280F40
    ctx->pc = 0x3074E0u;
    SET_GPR_U32(ctx, 31, 0x3074E8u);
    ctx->pc = 0x280F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F40u, 0x3074E0u, 0x3074E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3074E8u;
label_3074e8:
    // 0x3074e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3074E8u;
    {
        const bool branch_taken_0x3074e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3074ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074E8u;
        // 0x3074ec: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3074e8) {
            ctx->pc = 0x30751Cu;
            goto label_30751c;
        }
    }
    ctx->pc = 0x3074F0u;
label_3074f0:
    // 0x3074f0: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x3074F0u;
    SET_GPR_U32(ctx, 31, 0x3074F8u);
    ctx->pc = 0x3074F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3074F0u;
    // 0x3074f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x3074F0u, 0x3074F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3074F8u;
label_3074f8:
    // 0x3074f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3074F8u;
    {
        const bool branch_taken_0x3074f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3074f8) {
            ctx->pc = 0x307510u;
            goto label_307510;
        }
    }
    ctx->pc = 0x307500u;
    // 0x307500: 0xc08db00  jal         func_236C00
    ctx->pc = 0x307500u;
    SET_GPR_U32(ctx, 31, 0x307508u);
    ctx->pc = 0x307504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307500u;
    // 0x307504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C00u, 0x307500u, 0x307508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307508u;
label_307508:
    // 0x307508: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x307508u;
    {
        const bool branch_taken_0x307508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307508) {
            ctx->pc = 0x30750Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307508u;
            // 0x30750c: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30751Cu;
            goto label_30751c;
        }
    }
    ctx->pc = 0x307510u;
label_307510:
    // 0x307510: 0xc0a03bc  jal         func_280EF0
    ctx->pc = 0x307510u;
    SET_GPR_U32(ctx, 31, 0x307518u);
    ctx->pc = 0x307514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307510u;
    // 0x307514: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280EF0u, 0x307510u, 0x307518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307518u;
label_307518:
    // 0x307518: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x307518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_30751c:
    // 0x30751c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x30751cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x307520: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x307520u;
    {
        const bool branch_taken_0x307520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307520) {
            ctx->pc = 0x307524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307520u;
            // 0x307524: 0x8e0211d8  lw          $v0, 0x11D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3075C8u;
            goto label_3075c8;
        }
    }
    ctx->pc = 0x307528u;
    // 0x307528: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x307528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x30752c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x30752cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x307530: 0x24432450  addiu       $v1, $v0, 0x2450
    ctx->pc = 0x307530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9296));
    // 0x307534: 0xc4402450  lwc1        $f0, 0x2450($v0)
    ctx->pc = 0x307534u;
    { uint32_t bits = FAST_READ32(0x4C2450u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307538: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x307538u;
    { uint32_t bits = FAST_READ32(0x4C2454u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30753c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x30753cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x307540: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x307540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x307544: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x307544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x307548: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x307548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x30754c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30754Cu;
    {
        const bool branch_taken_0x30754c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x307550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30754Cu;
        // 0x307550: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30754c) {
            ctx->pc = 0x307574u;
            goto label_307574;
        }
    }
    ctx->pc = 0x307554u;
    // 0x307554: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x307554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x307558: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x307558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x30755c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x30755cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307560: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x307560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307564: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x307564u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x307568: 0x0  nop
    ctx->pc = 0x307568u;
    // NOP
    // 0x30756c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30756Cu;
    {
        const bool branch_taken_0x30756c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30756c) {
            ctx->pc = 0x307570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30756Cu;
            // 0x307570: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307574u;
            goto label_307574;
        }
    }
    ctx->pc = 0x307574u;
label_307574:
    // 0x307574: 0x50a00014  beql        $a1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x307574u;
    {
        const bool branch_taken_0x307574 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x307574) {
            ctx->pc = 0x307578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307574u;
            // 0x307578: 0x8e0211d8  lw          $v0, 0x11D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3075C8u;
            goto label_3075c8;
        }
    }
    ctx->pc = 0x30757Cu;
    // 0x30757c: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x30757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x307580: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x307580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x307584: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x307584u;
    {
        const bool branch_taken_0x307584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307584u;
        // 0x307588: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x307584) {
            ctx->pc = 0x3075C4u;
            goto label_3075c4;
        }
    }
    ctx->pc = 0x30758Cu;
    // 0x30758c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x30758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307590: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x307590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x307594: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x307594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x307598: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x307598u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x30759c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30759cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3075a0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3075a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3075a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3075a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3075a8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3075a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3075ac: 0x0  nop
    ctx->pc = 0x3075acu;
    // NOP
    // 0x3075b0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3075B0u;
    {
        const bool branch_taken_0x3075b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3075B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3075B0u;
        // 0x3075b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3075b0) {
            ctx->pc = 0x3075C4u;
            goto label_3075c4;
        }
    }
    ctx->pc = 0x3075B8u;
    // 0x3075b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3075b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3075bc: 0xc08bf70  jal         func_22FDC0
    ctx->pc = 0x3075BCu;
    SET_GPR_U32(ctx, 31, 0x3075C4u);
    ctx->pc = 0x3075C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3075BCu;
    // 0x3075c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x3075BCu, 0x3075C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3075C4u;
label_3075c4:
    // 0x3075c4: 0x8e0211d8  lw          $v0, 0x11D8($s0)
    ctx->pc = 0x3075c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
label_3075c8:
    // 0x3075c8: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x3075C8u;
    {
        const bool branch_taken_0x3075c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3075c8) {
            ctx->pc = 0x3075CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3075C8u;
            // 0x3075cc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30765Cu;
            goto label_30765c;
        }
    }
    ctx->pc = 0x3075D0u;
    // 0x3075d0: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x3075D0u;
    SET_GPR_U32(ctx, 31, 0x3075D8u);
    ctx->pc = 0x3075D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3075D0u;
    // 0x3075d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x3075D0u, 0x3075D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3075D8u;
label_3075d8:
    // 0x3075d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3075D8u;
    {
        const bool branch_taken_0x3075d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3075d8) {
            ctx->pc = 0x3075F0u;
            goto label_3075f0;
        }
    }
    ctx->pc = 0x3075E0u;
    // 0x3075e0: 0xc08db00  jal         func_236C00
    ctx->pc = 0x3075E0u;
    SET_GPR_U32(ctx, 31, 0x3075E8u);
    ctx->pc = 0x3075E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3075E0u;
    // 0x3075e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C00u, 0x3075E0u, 0x3075E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3075E8u;
label_3075e8:
    // 0x3075e8: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3075E8u;
    {
        const bool branch_taken_0x3075e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3075e8) {
            ctx->pc = 0x3075ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3075E8u;
            // 0x3075ec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30765Cu;
            goto label_30765c;
        }
    }
    ctx->pc = 0x3075F0u;
label_3075f0:
    // 0x3075f0: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3075F0u;
    {
        const bool branch_taken_0x3075f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3075F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3075F0u;
        // 0x3075f4: 0x24030037  addiu       $v1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3075f0) {
            ctx->pc = 0x307650u;
            goto label_307650;
        }
    }
    ctx->pc = 0x3075F8u;
    // 0x3075f8: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x3075f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x3075fc: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x3075fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x307600: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x307600u;
    {
        const bool branch_taken_0x307600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x307604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307600u;
        // 0x307604: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307600) {
            ctx->pc = 0x307628u;
            goto label_307628;
        }
    }
    ctx->pc = 0x307608u;
    // 0x307608: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x307608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x30760c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x30760cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x307610: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x307610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x307614: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x307614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x307618: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x307618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30761c: 0x0  nop
    ctx->pc = 0x30761cu;
    // NOP
    // 0x307620: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x307620u;
    {
        const bool branch_taken_0x307620 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x307620) {
            ctx->pc = 0x307624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307620u;
            // 0x307624: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307628u;
            goto label_307628;
        }
    }
    ctx->pc = 0x307628u;
label_307628:
    // 0x307628: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x307628u;
    {
        const bool branch_taken_0x307628 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x30762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307628u;
        // 0x30762c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307628) {
            ctx->pc = 0x307650u;
            goto label_307650;
        }
    }
    ctx->pc = 0x307630u;
    // 0x307630: 0xc0bd0e2  jal         func_2F4388
    ctx->pc = 0x307630u;
    SET_GPR_U32(ctx, 31, 0x307638u);
    ctx->pc = 0x307634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307630u;
    // 0x307634: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4388u, 0x307630u, 0x307638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307638u;
label_307638:
    // 0x307638: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x307638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x30763c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30763cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x307640: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x307640u;
    {
        const bool branch_taken_0x307640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307640) {
            ctx->pc = 0x307644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307640u;
            // 0x307644: 0xae000408  sw          $zero, 0x408($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1032), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307658u;
            goto label_307658;
        }
    }
    ctx->pc = 0x307648u;
    // 0x307648: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x307648u;
    {
        const bool branch_taken_0x307648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307648u;
        // 0x30764c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307648) {
            ctx->pc = 0x30765Cu;
            goto label_30765c;
        }
    }
    ctx->pc = 0x307650u;
label_307650:
    // 0x307650: 0xc0bd62c  jal         func_2F58B0
    ctx->pc = 0x307650u;
    SET_GPR_U32(ctx, 31, 0x307658u);
    ctx->pc = 0x307654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307650u;
    // 0x307654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x307650u, 0x307658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307658u;
label_307658:
    // 0x307658: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x307658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30765c:
    // 0x30765c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x30765cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307660: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x307660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x307664: 0x3e00008  jr          $ra
    ctx->pc = 0x307664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307664u;
        // 0x307668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30766Cu;
    // 0x30766c: 0x0  nop
    ctx->pc = 0x30766cu;
    // NOP
    ctx->pc = 0x307670u;
}
