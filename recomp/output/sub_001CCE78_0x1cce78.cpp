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

// Function: sub_001CCE78
// Address: 0x1cce78 - 0x1cd088
void sub_001CCE78_0x1cce78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCE78_0x1cce78");
#endif

    switch (ctx->pc) {
        case 0x1cceb0u: goto label_1cceb0;
        case 0x1ccebcu: goto label_1ccebc;
        case 0x1cceccu: goto label_1ccecc;
        case 0x1ccedcu: goto label_1ccedc;
        case 0x1cceecu: goto label_1cceec;
        case 0x1ccf08u: goto label_1ccf08;
        case 0x1ccf30u: goto label_1ccf30;
        case 0x1ccf38u: goto label_1ccf38;
        case 0x1ccf48u: goto label_1ccf48;
        case 0x1ccf5cu: goto label_1ccf5c;
        case 0x1ccf6cu: goto label_1ccf6c;
        case 0x1cd058u: goto label_1cd058;
        default: break;
    }

    ctx->pc = 0x1cce78u;

    // 0x1cce78: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1cce78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x1cce7c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1cce7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cce80: 0xffb20250  sd          $s2, 0x250($sp)
    ctx->pc = 0x1cce80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 18));
    // 0x1cce84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cce84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce88: 0xffb00240  sd          $s0, 0x240($sp)
    ctx->pc = 0x1cce88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 16));
    // 0x1cce8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cce8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce90: 0xffb10248  sd          $s1, 0x248($sp)
    ctx->pc = 0x1cce90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 17));
    // 0x1cce94: 0xffb30258  sd          $s3, 0x258($sp)
    ctx->pc = 0x1cce94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 19));
    // 0x1cce98: 0xffb40260  sd          $s4, 0x260($sp)
    ctx->pc = 0x1cce98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 20));
    // 0x1cce9c: 0xffb50268  sd          $s5, 0x268($sp)
    ctx->pc = 0x1cce9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 21));
    // 0x1ccea0: 0xffb60270  sd          $s6, 0x270($sp)
    ctx->pc = 0x1ccea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 22));
    // 0x1ccea4: 0xffbf0278  sd          $ra, 0x278($sp)
    ctx->pc = 0x1ccea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 31));
    // 0x1ccea8: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x1CCEA8u;
    SET_GPR_U32(ctx, 31, 0x1CCEB0u);
    ctx->pc = 0x1CCEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEA8u;
    // 0x1cceac: 0xe7b40280  swc1        $f20, 0x280($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x1CCEA8u, 0x1CCEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEB0u;
label_1cceb0:
    // 0x1cceb0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cceb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cceb4: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CCEB4u;
    SET_GPR_U32(ctx, 31, 0x1CCEBCu);
    ctx->pc = 0x1CCEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEB4u;
    // 0x1cceb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CCEB4u, 0x1CCEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEBCu;
label_1ccebc:
    // 0x1ccebc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1ccebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccec0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1ccec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1ccec4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CCEC4u;
    SET_GPR_U32(ctx, 31, 0x1CCECCu);
    ctx->pc = 0x1CCEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEC4u;
    // 0x1ccec8: 0x24a5d1b8  addiu       $a1, $a1, -0x2E48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CCEC4u, 0x1CCECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCECCu;
label_1ccecc:
    // 0x1ccecc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1cceccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cced0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cced0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cced4: 0xc09e062  jal         func_278188
    ctx->pc = 0x1CCED4u;
    SET_GPR_U32(ctx, 31, 0x1CCEDCu);
    ctx->pc = 0x1CCED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCED4u;
    // 0x1cced8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x1CCED4u, 0x1CCEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEDCu;
label_1ccedc:
    // 0x1ccedc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1ccedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1ccee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccee4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CCEE4u;
    SET_GPR_U32(ctx, 31, 0x1CCEECu);
    ctx->pc = 0x1CCEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEE4u;
    // 0x1ccee8: 0x24a5d0a0  addiu       $a1, $a1, -0x2F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CCEE4u, 0x1CCEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEECu;
label_1cceec:
    // 0x1cceec: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCEECu;
    {
        const bool branch_taken_0x1cceec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cceec) {
            ctx->pc = 0x1CCEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCEECu;
            // 0x1ccef0: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCEFCu;
            goto label_1ccefc;
        }
    }
    ctx->pc = 0x1CCEF4u;
    // 0x1ccef4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCEF4u;
    {
        const bool branch_taken_0x1ccef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCEF4u;
        // 0x1ccef8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccef4) {
            ctx->pc = 0x1CCF0Cu;
            goto label_1ccf0c;
        }
    }
    ctx->pc = 0x1CCEFCu;
label_1ccefc:
    // 0x1ccefc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf00: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CCF00u;
    SET_GPR_U32(ctx, 31, 0x1CCF08u);
    ctx->pc = 0x1CCF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF00u;
    // 0x1ccf04: 0x24a5d0a8  addiu       $a1, $a1, -0x2F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CCF00u, 0x1CCF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF08u;
label_1ccf08:
    // 0x1ccf08: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ccf08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ccf0c:
    // 0x1ccf0c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ccf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ccf10: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x1ccf10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ccf14: 0xac438a04  sw          $v1, -0x75FC($v0)
    ctx->pc = 0x1ccf14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F8A04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8A04u, _value); } while (0);
    // 0x1ccf18: 0x3c160046  lui         $s6, 0x46
    ctx->pc = 0x1ccf18u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)70 << 16));
    // 0x1ccf1c: 0x27b10120  addiu       $s1, $sp, 0x120
    ctx->pc = 0x1ccf1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1ccf20: 0x27b50230  addiu       $s5, $sp, 0x230
    ctx->pc = 0x1ccf20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1ccf24: 0x27b40234  addiu       $s4, $sp, 0x234
    ctx->pc = 0x1ccf24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
    // 0x1ccf28: 0x27b30238  addiu       $s3, $sp, 0x238
    ctx->pc = 0x1ccf28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x1ccf2c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ccf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ccf30:
    // 0x1ccf30: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CCF30u;
    SET_GPR_U32(ctx, 31, 0x1CCF38u);
    ctx->pc = 0x1CCF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF30u;
    // 0x1ccf34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CCF30u, 0x1CCF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF38u;
label_1ccf38:
    // 0x1ccf38: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ccf38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ccf3c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1ccf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf40: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CCF40u;
    SET_GPR_U32(ctx, 31, 0x1CCF48u);
    ctx->pc = 0x1CCF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF40u;
    // 0x1ccf44: 0x26c5d1c8  addiu       $a1, $s6, -0x2E38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294955464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CCF40u, 0x1CCF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF48u;
label_1ccf48:
    // 0x1ccf48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ccf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf50: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1ccf50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf54: 0xc09e1b0  jal         func_2786C0
    ctx->pc = 0x1CCF54u;
    SET_GPR_U32(ctx, 31, 0x1CCF5Cu);
    ctx->pc = 0x1CCF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF54u;
    // 0x1ccf58: 0xe7b40230  swc1        $f20, 0x230($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2786C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2786C0u, 0x1CCF54u, 0x1CCF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF5Cu;
label_1ccf5c:
    // 0x1ccf5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ccf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ccf60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf64: 0xc085914  jal         func_216450
    ctx->pc = 0x1CCF64u;
    SET_GPR_U32(ctx, 31, 0x1CCF6Cu);
    ctx->pc = 0x1CCF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF64u;
    // 0x1ccf68: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216450u, 0x1CCF64u, 0x1CCF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF6Cu;
label_1ccf6c:
    // 0x1ccf6c: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x1ccf6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ccf70: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1CCF70u;
    {
        const bool branch_taken_0x1ccf70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF70u;
        // 0x1ccf74: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf70) {
            ctx->pc = 0x1CD040u;
            goto label_1cd040;
        }
    }
    ctx->pc = 0x1CCF78u;
    // 0x1ccf78: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ccf78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ccf7c: 0x2442d1d0  addiu       $v0, $v0, -0x2E30
    ctx->pc = 0x1ccf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955472));
    // 0x1ccf80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ccf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ccf84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ccf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ccf88: 0x800008  jr          $a0
    ctx->pc = 0x1CCF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CCF90u: goto label_1ccf90;
            case 0x1CCFB4u: goto label_1ccfb4;
            case 0x1CCFD8u: goto label_1ccfd8;
            case 0x1CCFFCu: goto label_1ccffc;
            case 0x1CD020u: goto label_1cd020;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CCF90u;
label_1ccf90:
    // 0x1ccf90: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1ccf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccf94: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ccf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ccf98: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ccf98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1ccf9c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ccf9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ccfa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccfa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccfa4: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1ccfa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ccfa8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccfa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccfac: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1CCFACu;
    {
        const bool branch_taken_0x1ccfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFACu;
        // 0x1ccfb0: 0xe4408a08  swc1        $f0, -0x75F8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937096), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfac) {
            ctx->pc = 0x1CD040u;
            goto label_1cd040;
        }
    }
    ctx->pc = 0x1CCFB4u;
label_1ccfb4:
    // 0x1ccfb4: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1ccfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccfb8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ccfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ccfbc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ccfbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1ccfc0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ccfc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ccfc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccfc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccfc8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1ccfc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccfcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccfccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccfd0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1CCFD0u;
    {
        const bool branch_taken_0x1ccfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFD0u;
        // 0x1ccfd4: 0xe4408a0c  swc1        $f0, -0x75F4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfd0) {
            ctx->pc = 0x1CD040u;
            goto label_1cd040;
        }
    }
    ctx->pc = 0x1CCFD8u;
label_1ccfd8:
    // 0x1ccfd8: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1ccfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccfdc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ccfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ccfe0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ccfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1ccfe4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ccfe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ccfe8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccfe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccfec: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1ccfecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccff0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccff4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1CCFF4u;
    {
        const bool branch_taken_0x1ccff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFF4u;
        // 0x1ccff8: 0xe4408a10  swc1        $f0, -0x75F0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccff4) {
            ctx->pc = 0x1CD040u;
            goto label_1cd040;
        }
    }
    ctx->pc = 0x1CCFFCu;
label_1ccffc:
    // 0x1ccffc: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1ccffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd000: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cd000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cd004: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1cd004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1cd008: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cd008u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cd00c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd010: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cd010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd014: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cd018: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD018u;
    {
        const bool branch_taken_0x1cd018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD018u;
        // 0x1cd01c: 0xe4408a14  swc1        $f0, -0x75EC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd018) {
            ctx->pc = 0x1CD040u;
            goto label_1cd040;
        }
    }
    ctx->pc = 0x1CD020u;
label_1cd020:
    // 0x1cd020: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1cd020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd024: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cd024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cd028: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1cd028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1cd02c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cd02cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cd030: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd034: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x1cd034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cd038: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cd03c: 0xe4408a18  swc1        $f0, -0x75E8($v0)
    ctx->pc = 0x1cd03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F8A18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8A18u, _value); } while (0); }
label_1cd040:
    // 0x1cd040: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1cd040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cd044: 0x1602ffba  bne         $s0, $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x1CD044u;
    {
        const bool branch_taken_0x1cd044 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CD048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD044u;
        // 0x1cd048: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd044) {
            ctx->pc = 0x1CCF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf30;
        }
    }
    ctx->pc = 0x1CD04Cu;
    // 0x1cd04c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cd04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd050: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1CD050u;
    SET_GPR_U32(ctx, 31, 0x1CD058u);
    ctx->pc = 0x1CD054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD050u;
    // 0x1cd054: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1CD050u, 0x1CD058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD058u;
label_1cd058:
    // 0x1cd058: 0xdfb00240  ld          $s0, 0x240($sp)
    ctx->pc = 0x1cd058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1cd05c: 0xdfb10248  ld          $s1, 0x248($sp)
    ctx->pc = 0x1cd05cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1cd060: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x1cd060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1cd064: 0xdfb30258  ld          $s3, 0x258($sp)
    ctx->pc = 0x1cd064u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x1cd068: 0xdfb40260  ld          $s4, 0x260($sp)
    ctx->pc = 0x1cd068u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1cd06c: 0xdfb50268  ld          $s5, 0x268($sp)
    ctx->pc = 0x1cd06cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1cd070: 0xdfb60270  ld          $s6, 0x270($sp)
    ctx->pc = 0x1cd070u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1cd074: 0xdfbf0278  ld          $ra, 0x278($sp)
    ctx->pc = 0x1cd074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x1cd078: 0xc7b40280  lwc1        $f20, 0x280($sp)
    ctx->pc = 0x1cd078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cd07c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD07Cu;
        // 0x1cd080: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD084u;
    // 0x1cd084: 0x0  nop
    ctx->pc = 0x1cd084u;
    // NOP
    ctx->pc = 0x1cd088u;
}
