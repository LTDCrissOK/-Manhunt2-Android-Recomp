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

// Function: sub_001886E8
// Address: 0x1886e8 - 0x188888
void sub_001886E8_0x1886e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001886E8_0x1886e8");
#endif

    switch (ctx->pc) {
        case 0x188764u: goto label_188764;
        case 0x18877cu: goto label_18877c;
        case 0x18879cu: goto label_18879c;
        case 0x1887b0u: goto label_1887b0;
        case 0x1887c4u: goto label_1887c4;
        case 0x188810u: goto label_188810;
        case 0x188820u: goto label_188820;
        case 0x188830u: goto label_188830;
        case 0x188840u: goto label_188840;
        case 0x188850u: goto label_188850;
        case 0x188860u: goto label_188860;
        case 0x188870u: goto label_188870;
        default: break;
    }

    ctx->pc = 0x1886e8u;

    // 0x1886e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1886e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1886ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1886ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1886f0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1886f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1886f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1886f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1886f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1886f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1886fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1886fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x188700: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x188700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x188704: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x188704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x188708: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x188708u;
    {
        const bool branch_taken_0x188708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x188708) {
            ctx->pc = 0x188724u;
            goto label_188724;
        }
    }
    ctx->pc = 0x188710u;
    // 0x188710: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x188710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x188714: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x188714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x188718: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x188718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x18871c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18871Cu;
    {
        const bool branch_taken_0x18871c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18871Cu;
        // 0x188720: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18871c) {
            ctx->pc = 0x188748u;
            goto label_188748;
        }
    }
    ctx->pc = 0x188724u;
label_188724:
    // 0x188724: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x188724u;
    {
        const bool branch_taken_0x188724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188724u;
        // 0x188728: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188724) {
            ctx->pc = 0x188740u;
            goto label_188740;
        }
    }
    ctx->pc = 0x18872Cu;
    // 0x18872c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18872cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x188730: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188730u;
    {
        const bool branch_taken_0x188730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x188734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188730u;
        // 0x188734: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188730) {
            ctx->pc = 0x188740u;
            goto label_188740;
        }
    }
    ctx->pc = 0x188738u;
    // 0x188738: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188738u;
    {
        const bool branch_taken_0x188738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188738u;
        // 0x18873c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188738) {
            ctx->pc = 0x188748u;
            goto label_188748;
        }
    }
    ctx->pc = 0x188740u;
label_188740:
    // 0x188740: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188744: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x188744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188748:
    // 0x188748: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x188748u;
    {
        const bool branch_taken_0x188748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188748u;
        // 0x18874c: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188748) {
            ctx->pc = 0x18877Cu;
            goto label_18877c;
        }
    }
    ctx->pc = 0x188750u;
    // 0x188750: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x188750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x188754: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x188754u;
    {
        const bool branch_taken_0x188754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188754u;
        // 0x188758: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188754) {
            ctx->pc = 0x18876Cu;
            goto label_18876c;
        }
    }
    ctx->pc = 0x18875Cu;
    // 0x18875c: 0xc06fb64  jal         func_1BED90
    ctx->pc = 0x18875Cu;
    SET_GPR_U32(ctx, 31, 0x188764u);
    ctx->pc = 0x188760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18875Cu;
    // 0x188760: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x18875Cu, 0x188764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188764u;
label_188764:
    // 0x188764: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x188764u;
    {
        const bool branch_taken_0x188764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188764u;
        // 0x188768: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188764) {
            ctx->pc = 0x188780u;
            goto label_188780;
        }
    }
    ctx->pc = 0x18876Cu;
label_18876c:
    // 0x18876c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18876Cu;
    {
        const bool branch_taken_0x18876c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18876c) {
            ctx->pc = 0x188770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18876Cu;
            // 0x188770: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188780u;
            goto label_188780;
        }
    }
    ctx->pc = 0x188774u;
    // 0x188774: 0xc06fb1e  jal         func_1BEC78
    ctx->pc = 0x188774u;
    SET_GPR_U32(ctx, 31, 0x18877Cu);
    ctx->pc = 0x188778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188774u;
    // 0x188778: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC78u, 0x188774u, 0x18877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18877Cu;
label_18877c:
    // 0x18877c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x18877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_188780:
    // 0x188780: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x188780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x188784: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x188784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x188788: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x188788u;
    {
        const bool branch_taken_0x188788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188788) {
            ctx->pc = 0x18878Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188788u;
            // 0x18878c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1887C8u;
            goto label_1887c8;
        }
    }
    ctx->pc = 0x188790u;
    // 0x188790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x188790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188794: 0xc061a12  jal         func_186848
    ctx->pc = 0x188794u;
    SET_GPR_U32(ctx, 31, 0x18879Cu);
    ctx->pc = 0x188798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188794u;
    // 0x188798: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x188794u, 0x18879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18879Cu;
label_18879c:
    // 0x18879c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18879cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1887a0: 0x244601e0  addiu       $a2, $v0, 0x1E0
    ctx->pc = 0x1887a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1887a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1887a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1887a8: 0xc062da6  jal         func_18B698
    ctx->pc = 0x1887A8u;
    SET_GPR_U32(ctx, 31, 0x1887B0u);
    ctx->pc = 0x1887ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1887A8u;
    // 0x1887ac: 0x26270060  addiu       $a3, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B698u, 0x1887A8u, 0x1887B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1887B0u;
label_1887b0:
    // 0x1887b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1887B0u;
    {
        const bool branch_taken_0x1887b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1887b0) {
            ctx->pc = 0x1887B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1887B0u;
            // 0x1887b4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1887C8u;
            goto label_1887c8;
        }
    }
    ctx->pc = 0x1887B8u;
    // 0x1887b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1887b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1887bc: 0xc062974  jal         func_18A5D0
    ctx->pc = 0x1887BCu;
    SET_GPR_U32(ctx, 31, 0x1887C4u);
    ctx->pc = 0x1887C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1887BCu;
    // 0x1887c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A5D0u, 0x1887BCu, 0x1887C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1887C4u;
label_1887c4:
    // 0x1887c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1887c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1887c8:
    // 0x1887c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1887c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1887cc: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1887ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1887d0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1887d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1887d4: 0xe44104fc  swc1        $f1, 0x4FC($v0)
    ctx->pc = 0x1887d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1276), bits); }
    // 0x1887d8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1887d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1887dc: 0xe4400500  swc1        $f0, 0x500($v0)
    ctx->pc = 0x1887dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1280), bits); }
    // 0x1887e0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1887e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1887e4: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x1887e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1887e8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1887E8u;
    {
        const bool branch_taken_0x1887e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1887ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887E8u;
        // 0x1887ec: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1887e8) {
            ctx->pc = 0x188870u;
            goto label_188870;
        }
    }
    ctx->pc = 0x1887F0u;
    // 0x1887f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1887f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1887f4: 0x2442fd00  addiu       $v0, $v0, -0x300
    ctx->pc = 0x1887f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966528));
    // 0x1887f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1887f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1887fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1887fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188800: 0x800008  jr          $a0
    ctx->pc = 0x188800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188808u: goto label_188808;
            case 0x188818u: goto label_188818;
            case 0x188828u: goto label_188828;
            case 0x188838u: goto label_188838;
            case 0x188848u: goto label_188848;
            case 0x188858u: goto label_188858;
            case 0x188868u: goto label_188868;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188800u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x188808u;
label_188808:
    // 0x188808: 0xc062242  jal         func_188908
    ctx->pc = 0x188808u;
    SET_GPR_U32(ctx, 31, 0x188810u);
    ctx->pc = 0x18880Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188808u;
    // 0x18880c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188908u, 0x188808u, 0x188810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188810u;
label_188810:
    // 0x188810: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x188810u;
    {
        const bool branch_taken_0x188810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188810u;
        // 0x188814: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188810) {
            ctx->pc = 0x188874u;
            goto label_188874;
        }
    }
    ctx->pc = 0x188818u;
label_188818:
    // 0x188818: 0xc06231c  jal         func_188C70
    ctx->pc = 0x188818u;
    SET_GPR_U32(ctx, 31, 0x188820u);
    ctx->pc = 0x18881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188818u;
    // 0x18881c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188C70u, 0x188818u, 0x188820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188820u;
label_188820:
    // 0x188820: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x188820u;
    {
        const bool branch_taken_0x188820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188820u;
        // 0x188824: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188820) {
            ctx->pc = 0x188874u;
            goto label_188874;
        }
    }
    ctx->pc = 0x188828u;
label_188828:
    // 0x188828: 0xc062396  jal         func_188E58
    ctx->pc = 0x188828u;
    SET_GPR_U32(ctx, 31, 0x188830u);
    ctx->pc = 0x18882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188828u;
    // 0x18882c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188E58u, 0x188828u, 0x188830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188830u;
label_188830:
    // 0x188830: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x188830u;
    {
        const bool branch_taken_0x188830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188830u;
        // 0x188834: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188830) {
            ctx->pc = 0x188874u;
            goto label_188874;
        }
    }
    ctx->pc = 0x188838u;
label_188838:
    // 0x188838: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x188838u;
    SET_GPR_U32(ctx, 31, 0x188840u);
    ctx->pc = 0x18883Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188838u;
    // 0x18883c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x188838u, 0x188840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188840u;
label_188840:
    // 0x188840: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x188840u;
    {
        const bool branch_taken_0x188840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188840u;
        // 0x188844: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188840) {
            ctx->pc = 0x188874u;
            goto label_188874;
        }
    }
    ctx->pc = 0x188848u;
label_188848:
    // 0x188848: 0xc062494  jal         func_189250
    ctx->pc = 0x188848u;
    SET_GPR_U32(ctx, 31, 0x188850u);
    ctx->pc = 0x18884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188848u;
    // 0x18884c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189250u, 0x188848u, 0x188850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188850u;
label_188850:
    // 0x188850: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x188850u;
    {
        const bool branch_taken_0x188850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188850u;
        // 0x188854: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188850) {
            ctx->pc = 0x188874u;
            goto label_188874;
        }
    }
    ctx->pc = 0x188858u;
label_188858:
    // 0x188858: 0xc062992  jal         func_18A648
    ctx->pc = 0x188858u;
    SET_GPR_U32(ctx, 31, 0x188860u);
    ctx->pc = 0x18885Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188858u;
    // 0x18885c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A648u, 0x188858u, 0x188860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188860u;
label_188860:
    // 0x188860: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x188860u;
    {
        const bool branch_taken_0x188860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188860u;
        // 0x188864: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188860) {
            ctx->pc = 0x188874u;
            goto label_188874;
        }
    }
    ctx->pc = 0x188868u;
label_188868:
    // 0x188868: 0xc062a68  jal         func_18A9A0
    ctx->pc = 0x188868u;
    SET_GPR_U32(ctx, 31, 0x188870u);
    ctx->pc = 0x18886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188868u;
    // 0x18886c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A9A0u, 0x188868u, 0x188870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188870u;
label_188870:
    // 0x188870: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x188870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_188874:
    // 0x188874: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x188874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x188878: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x188878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18887c: 0x3e00008  jr          $ra
    ctx->pc = 0x18887Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18887Cu;
        // 0x188880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18887Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188884u;
    // 0x188884: 0x0  nop
    ctx->pc = 0x188884u;
    // NOP
    ctx->pc = 0x188888u;
}
