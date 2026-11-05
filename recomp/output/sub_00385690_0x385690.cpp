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

// Function: sub_00385690
// Address: 0x385690 - 0x385848
void sub_00385690_0x385690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385690_0x385690");
#endif

    switch (ctx->pc) {
        case 0x3856d8u: goto label_3856d8;
        case 0x3856f4u: goto label_3856f4;
        case 0x3856fcu: goto label_3856fc;
        case 0x385704u: goto label_385704;
        case 0x385718u: goto label_385718;
        case 0x385720u: goto label_385720;
        case 0x385728u: goto label_385728;
        case 0x385740u: goto label_385740;
        case 0x385780u: goto label_385780;
        case 0x3857a8u: goto label_3857a8;
        case 0x3857ccu: goto label_3857cc;
        case 0x3857f0u: goto label_3857f0;
        default: break;
    }

    ctx->pc = 0x385690u;

    // 0x385690: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x385690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x385694: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x385694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x385698: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x385698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38569c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x38569cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3856a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3856a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3856a4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3856a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3856a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3856a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3856ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3856acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3856b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3856b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3856b4: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x3856b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x3856b8: 0x8e0600ec  lw          $a2, 0xEC($s0)
    ctx->pc = 0x3856b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x3856bc: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x3856bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x3856c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3856C0u;
    {
        const bool branch_taken_0x3856c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3856C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3856C0u;
        // 0x3856c4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3856c0) {
            ctx->pc = 0x3856E0u;
            goto label_3856e0;
        }
    }
    ctx->pc = 0x3856C8u;
    // 0x3856c8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3856c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3856cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3856ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3856d0: 0xc0e290e  jal         func_38A438
    ctx->pc = 0x3856D0u;
    SET_GPR_U32(ctx, 31, 0x3856D8u);
    ctx->pc = 0x3856D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3856D0u;
    // 0x3856d4: 0x24a59260  addiu       $a1, $a1, -0x6DA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A438u, 0x3856D0u, 0x3856D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3856D8u;
label_3856d8:
    // 0x3856d8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3856D8u;
    {
        const bool branch_taken_0x3856d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3856DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3856D8u;
        // 0x3856dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3856d8) {
            ctx->pc = 0x385828u;
            goto label_385828;
        }
    }
    ctx->pc = 0x3856E0u;
label_3856e0:
    // 0x3856e0: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x3856e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x3856e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3856E4u;
    {
        const bool branch_taken_0x3856e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3856E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3856E4u;
        // 0x3856e8: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3856e4) {
            ctx->pc = 0x38570Cu;
            goto label_38570c;
        }
    }
    ctx->pc = 0x3856ECu;
    // 0x3856ec: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3856ECu;
    SET_GPR_U32(ctx, 31, 0x3856F4u);
    ctx->pc = 0x3856F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3856ECu;
    // 0x3856f0: 0x248492a0  addiu       $a0, $a0, -0x6D60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3856ECu, 0x3856F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3856F4u;
label_3856f4:
    // 0x3856f4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x3856F4u;
    {
        const bool branch_taken_0x3856f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3856F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3856F4u;
        // 0x3856f8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3856f4) {
            ctx->pc = 0x385828u;
            goto label_385828;
        }
    }
    ctx->pc = 0x3856FCu;
label_3856fc:
    // 0x3856fc: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3856FCu;
    SET_GPR_U32(ctx, 31, 0x385704u);
    ctx->pc = 0x385700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3856FCu;
    // 0x385700: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3856FCu, 0x385704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385704u;
label_385704:
    // 0x385704: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x385704u;
    {
        const bool branch_taken_0x385704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385704u;
        // 0x385708: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385704) {
            ctx->pc = 0x385828u;
            goto label_385828;
        }
    }
    ctx->pc = 0x38570Cu;
label_38570c:
    // 0x38570c: 0xae000834  sw          $zero, 0x834($s0)
    ctx->pc = 0x38570cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2100), GPR_U32(ctx, 0));
    // 0x385710: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x385710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x385714: 0x0  nop
    ctx->pc = 0x385714u;
    // NOP
label_385718:
    // 0x385718: 0x1262000f  beq         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x385718u;
    {
        const bool branch_taken_0x385718 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x38571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385718u;
        // 0x38571c: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x385718) {
            ctx->pc = 0x385758u;
            goto label_385758;
        }
    }
    ctx->pc = 0x385720u;
label_385720:
    // 0x385720: 0xc0e3b9e  jal         func_38EE78
    ctx->pc = 0x385720u;
    SET_GPR_U32(ctx, 31, 0x385728u);
    ctx->pc = 0x385724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385720u;
    // 0x385724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE78u, 0x385720u, 0x385728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385728u;
label_385728:
    // 0x385728: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x385728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38572c: 0x640003e  bltz        $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x38572Cu;
    {
        const bool branch_taken_0x38572c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x385730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38572Cu;
        // 0x385730: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38572c) {
            ctx->pc = 0x385828u;
            goto label_385828;
        }
    }
    ctx->pc = 0x385734u;
    // 0x385734: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x385734u;
    {
        const bool branch_taken_0x385734 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x385738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385734u;
        // 0x385738: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x385734) {
            ctx->pc = 0x385758u;
            goto label_385758;
        }
    }
    ctx->pc = 0x38573Cu;
    // 0x38573c: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x38573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_385740:
    // 0x385740: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x385740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x385744: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x385744u;
    {
        const bool branch_taken_0x385744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x385748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385744u;
        // 0x385748: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x385744) {
            ctx->pc = 0x385758u;
            goto label_385758;
        }
    }
    ctx->pc = 0x38574Cu;
    // 0x38574c: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x38574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x385750: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x385750u;
    {
        const bool branch_taken_0x385750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385750u;
        // 0x385754: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x385750) {
            ctx->pc = 0x385720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_385720;
        }
    }
    ctx->pc = 0x385758u;
label_385758:
    // 0x385758: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x385758u;
    {
        const bool branch_taken_0x385758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385758u;
        // 0x38575c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385758) {
            ctx->pc = 0x385800u;
            goto label_385800;
        }
    }
    ctx->pc = 0x385760u;
    // 0x385760: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x385760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x385764: 0x24429300  addiu       $v0, $v0, -0x6D00
    ctx->pc = 0x385764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939392));
    // 0x385768: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x385768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38576c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x38576cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x385770: 0x800008  jr          $a0
    ctx->pc = 0x385770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x385778u: goto label_385778;
            case 0x38578Cu: goto label_38578c;
            case 0x3857BCu: goto label_3857bc;
            case 0x3857E0u: goto label_3857e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385770u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x385778u;
label_385778:
    // 0x385778: 0xc0e1b4a  jal         func_386D28
    ctx->pc = 0x385778u;
    SET_GPR_U32(ctx, 31, 0x385780u);
    ctx->pc = 0x38577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385778u;
    // 0x38577c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386D28u, 0x385778u, 0x385780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385780u;
label_385780:
    // 0x385780: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x385780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x385784: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x385784u;
    {
        const bool branch_taken_0x385784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385784u;
        // 0x385788: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385784) {
            ctx->pc = 0x385800u;
            goto label_385800;
        }
    }
    ctx->pc = 0x38578Cu;
label_38578c:
    // 0x38578c: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x38578cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x385790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x385790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x385794: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x385794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x385798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x385798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38579c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x38579cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x3857a0: 0xc0e184a  jal         func_386128
    ctx->pc = 0x3857A0u;
    SET_GPR_U32(ctx, 31, 0x3857A8u);
    ctx->pc = 0x3857A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3857A0u;
    // 0x3857a4: 0x8e0600a8  lw          $a2, 0xA8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386128u, 0x3857A0u, 0x3857A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3857A8u;
label_3857a8:
    // 0x3857a8: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x3857a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x3857ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3857acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3857b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3857b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3857b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3857B4u;
    {
        const bool branch_taken_0x3857b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3857B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3857B4u;
        // 0x3857b8: 0xae0300b4  sw          $v1, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3857b4) {
            ctx->pc = 0x385800u;
            goto label_385800;
        }
    }
    ctx->pc = 0x3857BCu;
label_3857bc:
    // 0x3857bc: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x3857bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x3857c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3857c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3857c4: 0xc0e184a  jal         func_386128
    ctx->pc = 0x3857C4u;
    SET_GPR_U32(ctx, 31, 0x3857CCu);
    ctx->pc = 0x3857C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3857C4u;
    // 0x3857c8: 0x8e0600ac  lw          $a2, 0xAC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386128u, 0x3857C4u, 0x3857CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3857CCu;
label_3857cc:
    // 0x3857cc: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x3857ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x3857d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3857d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3857d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3857d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3857d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3857D8u;
    {
        const bool branch_taken_0x3857d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3857DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3857D8u;
        // 0x3857dc: 0xae0300b8  sw          $v1, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3857d8) {
            ctx->pc = 0x385800u;
            goto label_385800;
        }
    }
    ctx->pc = 0x3857E0u;
label_3857e0:
    // 0x3857e0: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x3857e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x3857e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3857e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3857e8: 0xc0e184a  jal         func_386128
    ctx->pc = 0x3857E8u;
    SET_GPR_U32(ctx, 31, 0x3857F0u);
    ctx->pc = 0x3857ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3857E8u;
    // 0x3857ec: 0x8e0600b0  lw          $a2, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386128u, 0x3857E8u, 0x3857F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3857F0u;
label_3857f0:
    // 0x3857f0: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x3857f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x3857f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3857f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3857f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3857f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3857fc: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x3857fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
label_385800:
    // 0x385800: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x385800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x385804: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x385804u;
    {
        const bool branch_taken_0x385804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385804u;
        // 0x385808: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385804) {
            ctx->pc = 0x3856FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3856fc;
        }
    }
    ctx->pc = 0x38580Cu;
    // 0x38580c: 0x8e020834  lw          $v0, 0x834($s0)
    ctx->pc = 0x38580cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2100)));
    // 0x385810: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x385810u;
    {
        const bool branch_taken_0x385810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x385814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385810u;
        // 0x385814: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385810) {
            ctx->pc = 0x385828u;
            goto label_385828;
        }
    }
    ctx->pc = 0x385818u;
    // 0x385818: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x385818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38581c: 0x1040ffbe  beqz        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x38581Cu;
    {
        const bool branch_taken_0x38581c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38581Cu;
        // 0x385820: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38581c) {
            ctx->pc = 0x385718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_385718;
        }
    }
    ctx->pc = 0x385824u;
    // 0x385824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x385824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385828:
    // 0x385828: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x385828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38582c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38582cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x385830: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x385830u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x385834: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x385834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x385838: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x385838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38583c: 0x3e00008  jr          $ra
    ctx->pc = 0x38583Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38583Cu;
        // 0x385840: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38583Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385844u;
    // 0x385844: 0x0  nop
    ctx->pc = 0x385844u;
    // NOP
    ctx->pc = 0x385848u;
}
