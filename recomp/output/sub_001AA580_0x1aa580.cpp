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

// Function: sub_001AA580
// Address: 0x1aa580 - 0x1aa688
void sub_001AA580_0x1aa580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA580_0x1aa580");
#endif

    switch (ctx->pc) {
        case 0x1aa5a0u: goto label_1aa5a0;
        case 0x1aa5d8u: goto label_1aa5d8;
        default: break;
    }

    ctx->pc = 0x1aa580u;

    // 0x1aa580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa584: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aa584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aa58c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa590: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa594: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1aa594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1aa598: 0xc06a652  jal         func_1A9948
    ctx->pc = 0x1AA598u;
    SET_GPR_U32(ctx, 31, 0x1AA5A0u);
    ctx->pc = 0x1AA59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA598u;
    // 0x1aa59c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9948u, 0x1AA598u, 0x1AA5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA5A0u;
label_1aa5a0:
    // 0x1aa5a0: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x1aa5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1aa5a4: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x1aa5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x1aa5a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1aa5a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1aa5ac: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AA5ACu;
    {
        const bool branch_taken_0x1aa5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa5ac) {
            ctx->pc = 0x1AA5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA5ACu;
            // 0x1aa5b0: 0x8e0201e4  lw          $v0, 0x1E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA5C4u;
            goto label_1aa5c4;
        }
    }
    ctx->pc = 0x1AA5B4u;
    // 0x1aa5b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1aa5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aa5b8: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1AA5B8u;
    {
        const bool branch_taken_0x1aa5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa5b8) {
            ctx->pc = 0x1AA5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA5B8u;
            // 0x1aa5bc: 0xc601018c  lwc1        $f1, 0x18C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA624u;
            goto label_1aa624;
        }
    }
    ctx->pc = 0x1AA5C0u;
    // 0x1aa5c0: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x1aa5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_1aa5c4:
    // 0x1aa5c4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1AA5C4u;
    {
        const bool branch_taken_0x1aa5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa5c4) {
            ctx->pc = 0x1AA5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA5C4u;
            // 0x1aa5c8: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA5FCu;
            goto label_1aa5fc;
        }
    }
    ctx->pc = 0x1AA5CCu;
    // 0x1aa5cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1aa5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa5d0: 0x260301ec  addiu       $v1, $s0, 0x1EC
    ctx->pc = 0x1aa5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
    // 0x1aa5d4: 0x0  nop
    ctx->pc = 0x1aa5d4u;
    // NOP
label_1aa5d8:
    // 0x1aa5d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1aa5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aa5dc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AA5DCu;
    {
        const bool branch_taken_0x1aa5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa5dc) {
            ctx->pc = 0x1AA5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA5DCu;
            // 0x1aa5e0: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA5FCu;
            goto label_1aa5fc;
        }
    }
    ctx->pc = 0x1AA5E4u;
    // 0x1aa5e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1aa5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1aa5e8: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1aa5e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1aa5ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AA5ECu;
    {
        const bool branch_taken_0x1aa5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA5ECu;
        // 0x1aa5f0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa5ec) {
            ctx->pc = 0x1AA5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa5d8;
        }
    }
    ctx->pc = 0x1AA5F4u;
    // 0x1aa5f4: 0x8e0201e8  lw          $v0, 0x1E8($s0)
    ctx->pc = 0x1aa5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
    // 0x1aa5f8: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1aa5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa5fc:
    // 0x1aa5fc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1aa5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1aa600: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1aa600u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1aa604: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aa604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa608: 0x0  nop
    ctx->pc = 0x1aa608u;
    // NOP
    // 0x1aa60c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1aa60cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa610: 0x0  nop
    ctx->pc = 0x1aa610u;
    // NOP
    // 0x1aa614: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA614u;
    {
        const bool branch_taken_0x1aa614 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA614u;
        // 0x1aa618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa614) {
            ctx->pc = 0x1AA620u;
            goto label_1aa620;
        }
    }
    ctx->pc = 0x1AA61Cu;
    // 0x1aa61c: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x1aa61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
label_1aa620:
    // 0x1aa620: 0xc601018c  lwc1        $f1, 0x18C($s0)
    ctx->pc = 0x1aa620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa624:
    // 0x1aa624: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1aa624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x1aa628: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1aa628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1aa62c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aa62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa630: 0x0  nop
    ctx->pc = 0x1aa630u;
    // NOP
    // 0x1aa634: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1aa634u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa638: 0x0  nop
    ctx->pc = 0x1aa638u;
    // NOP
    // 0x1aa63c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA63Cu;
    {
        const bool branch_taken_0x1aa63c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa63c) {
            ctx->pc = 0x1AA640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA63Cu;
            // 0x1aa640: 0x8e03014c  lw          $v1, 0x14C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA660u;
            goto label_1aa660;
        }
    }
    ctx->pc = 0x1AA644u;
    // 0x1aa644: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1aa644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1aa648: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x1aa648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x1aa64c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1aa64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1aa650: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA650u;
    {
        const bool branch_taken_0x1aa650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA650u;
        // 0x1aa654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa650) {
            ctx->pc = 0x1AA65Cu;
            goto label_1aa65c;
        }
    }
    ctx->pc = 0x1AA658u;
    // 0x1aa658: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x1aa658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
label_1aa65c:
    // 0x1aa65c: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x1aa65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
label_1aa660:
    // 0x1aa660: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1aa660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1aa664: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA664u;
    {
        const bool branch_taken_0x1aa664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa664) {
            ctx->pc = 0x1AA668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA664u;
            // 0x1aa668: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA678u;
            goto label_1aa678;
        }
    }
    ctx->pc = 0x1AA66Cu;
    // 0x1aa66c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa670: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x1aa670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x1aa674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa678:
    // 0x1aa678: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1aa678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa67c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA67Cu;
        // 0x1aa680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA684u;
    // 0x1aa684: 0x0  nop
    ctx->pc = 0x1aa684u;
    // NOP
    ctx->pc = 0x1aa688u;
}
