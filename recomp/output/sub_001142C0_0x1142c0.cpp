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

// Function: sub_001142C0
// Address: 0x1142c0 - 0x114398
void sub_001142C0_0x1142c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001142C0_0x1142c0");
#endif

    switch (ctx->pc) {
        case 0x1142dcu: goto label_1142dc;
        case 0x114300u: goto label_114300;
        case 0x114338u: goto label_114338;
        default: break;
    }

    ctx->pc = 0x1142c0u;

    // 0x1142c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1142c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1142c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1142c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1142c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1142c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1142cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1142ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1142d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1142d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1142d4: 0xc0450e6  jal         func_114398
    ctx->pc = 0x1142D4u;
    SET_GPR_U32(ctx, 31, 0x1142DCu);
    ctx->pc = 0x1142D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1142D4u;
    // 0x1142d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114398u, 0x1142D4u, 0x1142DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1142DCu;
label_1142dc:
    // 0x1142dc: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1142DCu;
    {
        const bool branch_taken_0x1142dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1142E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142DCu;
        // 0x1142e0: 0x26050154  addiu       $a1, $s0, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142dc) {
            ctx->pc = 0x114384u;
            goto label_114384;
        }
    }
    ctx->pc = 0x1142E4u;
    // 0x1142e4: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x1142e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x1142e8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1142e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1142ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1142ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1142f0: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1142F0u;
    {
        const bool branch_taken_0x1142f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1142F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142F0u;
        // 0x1142f4: 0x920601b4  lbu         $a2, 0x1B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142f0) {
            ctx->pc = 0x114318u;
            goto label_114318;
        }
    }
    ctx->pc = 0x1142F8u;
    // 0x1142f8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1142f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1142fc: 0x0  nop
    ctx->pc = 0x1142fcu;
    // NOP
label_114300:
    // 0x114300: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x114300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x114304: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x114304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x114308: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x114308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11430c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x114310: 0x1451fffb  bne         $v0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x114310u;
    {
        const bool branch_taken_0x114310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x114314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114310u;
        // 0x114314: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114310) {
            ctx->pc = 0x114300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114300;
        }
    }
    ctx->pc = 0x114318u;
label_114318:
    // 0x114318: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x114318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11431c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x11431cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x114320: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x114320u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x114324: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x114324u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x114328: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x114328u;
    {
        const bool branch_taken_0x114328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114328u;
        // 0x11432c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114328) {
            ctx->pc = 0x114370u;
            goto label_114370;
        }
    }
    ctx->pc = 0x114330u;
    // 0x114330: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x114330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114334: 0x0  nop
    ctx->pc = 0x114334u;
    // NOP
label_114338:
    // 0x114338: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x114338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x11433c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x11433cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x114340: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x114340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x114344: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x114344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x114348: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x114348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11434c: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x11434cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x114350: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x114354: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x114354u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x114358: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x114358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x11435c: 0x920201b4  lbu         $v0, 0x1B4($s0)
    ctx->pc = 0x11435cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x114360: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x114360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x114364: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x114364u;
    {
        const bool branch_taken_0x114364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114364u;
        // 0x114368: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114364) {
            ctx->pc = 0x114338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114338;
        }
    }
    ctx->pc = 0x11436Cu;
    // 0x11436c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x11436cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_114370:
    // 0x114370: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x114370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x114374: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x114374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x114378: 0x920301b4  lbu         $v1, 0x1B4($s0)
    ctx->pc = 0x114378u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x11437c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11437cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x114380: 0xa20301b4  sb          $v1, 0x1B4($s0)
    ctx->pc = 0x114380u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 436), (uint8_t)GPR_U32(ctx, 3));
label_114384:
    // 0x114384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x114384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x114388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11438c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11438cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114390: 0x3e00008  jr          $ra
    ctx->pc = 0x114390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114390u;
        // 0x114394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114398u;
}
