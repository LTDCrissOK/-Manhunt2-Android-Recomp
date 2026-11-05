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

// Function: sub_002786C0
// Address: 0x2786c0 - 0x2787a0
void sub_002786C0_0x2786c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002786C0_0x2786c0");
#endif

    switch (ctx->pc) {
        case 0x2786dcu: goto label_2786dc;
        case 0x278708u: goto label_278708;
        case 0x278760u: goto label_278760;
        case 0x27878cu: goto label_27878c;
        default: break;
    }

    ctx->pc = 0x2786c0u;

    // 0x2786c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2786c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2786c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2786c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2786c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2786c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2786cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2786ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2786d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2786d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2786d4: 0xc09e062  jal         func_278188
    ctx->pc = 0x2786D4u;
    SET_GPR_U32(ctx, 31, 0x2786DCu);
    ctx->pc = 0x2786D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2786D4u;
    // 0x2786d8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x2786D4u, 0x2786DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2786DCu;
label_2786dc:
    // 0x2786dc: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2786dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2786e0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2786e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2786e4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2786e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2786e8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2786e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2786ec: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2786ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2786f0: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2786F0u;
    {
        const bool branch_taken_0x2786f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2786f0) {
            ctx->pc = 0x2786F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2786F0u;
            // 0x2786f4: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278708u;
            goto label_278708;
        }
    }
    ctx->pc = 0x2786F8u;
    // 0x2786f8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2786f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2786fc: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2786FCu;
    {
        const bool branch_taken_0x2786fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x278700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786FCu;
        // 0x278700: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2786fc) {
            ctx->pc = 0x278738u;
            goto label_278738;
        }
    }
    ctx->pc = 0x278704u;
    // 0x278704: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x278704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_278708:
    // 0x278708: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x278708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x27870c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x27870cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278710: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x278710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278714: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278718: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x278718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x27871c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27871cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278720: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x278720u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278724: 0x5064fff8  beql        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x278724u;
    {
        const bool branch_taken_0x278724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x278724) {
            ctx->pc = 0x278728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278724u;
            // 0x278728: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278708;
        }
    }
    ctx->pc = 0x27872Cu;
    // 0x27872c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x27872cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278730: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x278730u;
    {
        const bool branch_taken_0x278730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x278730) {
            ctx->pc = 0x278734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278730u;
            // 0x278734: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278708;
        }
    }
    ctx->pc = 0x278738u;
label_278738:
    // 0x278738: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x278738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x27873c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x27873cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278740: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x278740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x278744: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x278744u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278748: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x278748u;
    {
        const bool branch_taken_0x278748 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x27874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278748u;
        // 0x27874c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278748) {
            ctx->pc = 0x278780u;
            goto label_278780;
        }
    }
    ctx->pc = 0x278750u;
    // 0x278750: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x278750u;
    {
        const bool branch_taken_0x278750 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x278754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278750u;
        // 0x278754: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278750) {
            ctx->pc = 0x278780u;
            goto label_278780;
        }
    }
    ctx->pc = 0x278758u;
    // 0x278758: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x278758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x27875c: 0x0  nop
    ctx->pc = 0x27875cu;
    // NOP
label_278760:
    // 0x278760: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x278760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x278764: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x278764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x278768: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x278768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x27876c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x27876cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278770: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x278770u;
    {
        const bool branch_taken_0x278770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x278774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278770u;
        // 0x278774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278770) {
            ctx->pc = 0x278784u;
            goto label_278784;
        }
    }
    ctx->pc = 0x278778u;
    // 0x278778: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x278778u;
    {
        const bool branch_taken_0x278778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x27877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278778u;
        // 0x27877c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278778) {
            ctx->pc = 0x278760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278760;
        }
    }
    ctx->pc = 0x278780u;
label_278780:
    // 0x278780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278784:
    // 0x278784: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x278784u;
    SET_GPR_U32(ctx, 31, 0x27878Cu);
    ctx->pc = 0x278788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278784u;
    // 0x278788: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x278784u, 0x27878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27878Cu;
label_27878c:
    // 0x27878c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27878cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278790: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x278790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x278794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x278794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278798: 0x3e00008  jr          $ra
    ctx->pc = 0x278798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278798u;
        // 0x27879c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2787A0u;
}
