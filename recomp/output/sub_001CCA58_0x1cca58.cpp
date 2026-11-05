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

// Function: sub_001CCA58
// Address: 0x1cca58 - 0x1ccc68
void sub_001CCA58_0x1cca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCA58_0x1cca58");
#endif

    switch (ctx->pc) {
        case 0x1cca90u: goto label_1cca90;
        case 0x1cca9cu: goto label_1cca9c;
        case 0x1ccaacu: goto label_1ccaac;
        case 0x1ccabcu: goto label_1ccabc;
        case 0x1ccaccu: goto label_1ccacc;
        case 0x1ccae8u: goto label_1ccae8;
        case 0x1ccb10u: goto label_1ccb10;
        case 0x1ccb18u: goto label_1ccb18;
        case 0x1ccb28u: goto label_1ccb28;
        case 0x1ccb3cu: goto label_1ccb3c;
        case 0x1ccb4cu: goto label_1ccb4c;
        case 0x1ccc38u: goto label_1ccc38;
        default: break;
    }

    ctx->pc = 0x1cca58u;

    // 0x1cca58: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1cca58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x1cca5c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1cca5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cca60: 0xffb20250  sd          $s2, 0x250($sp)
    ctx->pc = 0x1cca60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 18));
    // 0x1cca64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cca64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cca68: 0xffb00240  sd          $s0, 0x240($sp)
    ctx->pc = 0x1cca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 16));
    // 0x1cca6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cca6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cca70: 0xffb10248  sd          $s1, 0x248($sp)
    ctx->pc = 0x1cca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 17));
    // 0x1cca74: 0xffb30258  sd          $s3, 0x258($sp)
    ctx->pc = 0x1cca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 19));
    // 0x1cca78: 0xffb40260  sd          $s4, 0x260($sp)
    ctx->pc = 0x1cca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 20));
    // 0x1cca7c: 0xffb50268  sd          $s5, 0x268($sp)
    ctx->pc = 0x1cca7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 21));
    // 0x1cca80: 0xffb60270  sd          $s6, 0x270($sp)
    ctx->pc = 0x1cca80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 22));
    // 0x1cca84: 0xffbf0278  sd          $ra, 0x278($sp)
    ctx->pc = 0x1cca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 31));
    // 0x1cca88: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x1CCA88u;
    SET_GPR_U32(ctx, 31, 0x1CCA90u);
    ctx->pc = 0x1CCA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA88u;
    // 0x1cca8c: 0xe7b40280  swc1        $f20, 0x280($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x1CCA88u, 0x1CCA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA90u;
label_1cca90:
    // 0x1cca90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cca90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cca94: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CCA94u;
    SET_GPR_U32(ctx, 31, 0x1CCA9Cu);
    ctx->pc = 0x1CCA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCA94u;
    // 0x1cca98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CCA94u, 0x1CCA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA9Cu;
label_1cca9c:
    // 0x1cca9c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccaa0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1ccaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1ccaa4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CCAA4u;
    SET_GPR_U32(ctx, 31, 0x1CCAACu);
    ctx->pc = 0x1CCAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCAA4u;
    // 0x1ccaa8: 0x24a5d138  addiu       $a1, $a1, -0x2EC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CCAA4u, 0x1CCAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCAACu;
label_1ccaac:
    // 0x1ccaac: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1ccaacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ccab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccab4: 0xc09e062  jal         func_278188
    ctx->pc = 0x1CCAB4u;
    SET_GPR_U32(ctx, 31, 0x1CCABCu);
    ctx->pc = 0x1CCAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCAB4u;
    // 0x1ccab8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x1CCAB4u, 0x1CCABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCABCu;
label_1ccabc:
    // 0x1ccabc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1ccabcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1ccac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccac4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CCAC4u;
    SET_GPR_U32(ctx, 31, 0x1CCACCu);
    ctx->pc = 0x1CCAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCAC4u;
    // 0x1ccac8: 0x24a5d0a0  addiu       $a1, $a1, -0x2F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CCAC4u, 0x1CCACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCACCu;
label_1ccacc:
    // 0x1ccacc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCACCu;
    {
        const bool branch_taken_0x1ccacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccacc) {
            ctx->pc = 0x1CCAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCACCu;
            // 0x1ccad0: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCADCu;
            goto label_1ccadc;
        }
    }
    ctx->pc = 0x1CCAD4u;
    // 0x1ccad4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCAD4u;
    {
        const bool branch_taken_0x1ccad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCAD4u;
        // 0x1ccad8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccad4) {
            ctx->pc = 0x1CCAECu;
            goto label_1ccaec;
        }
    }
    ctx->pc = 0x1CCADCu;
label_1ccadc:
    // 0x1ccadc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccae0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CCAE0u;
    SET_GPR_U32(ctx, 31, 0x1CCAE8u);
    ctx->pc = 0x1CCAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCAE0u;
    // 0x1ccae4: 0x24a5d0a8  addiu       $a1, $a1, -0x2F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CCAE0u, 0x1CCAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCAE8u;
label_1ccae8:
    // 0x1ccae8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ccae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ccaec:
    // 0x1ccaec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ccaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ccaf0: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x1ccaf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ccaf4: 0xac438a1c  sw          $v1, -0x75E4($v0)
    ctx->pc = 0x1ccaf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F8A1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8A1Cu, _value); } while (0);
    // 0x1ccaf8: 0x3c160046  lui         $s6, 0x46
    ctx->pc = 0x1ccaf8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)70 << 16));
    // 0x1ccafc: 0x27b10120  addiu       $s1, $sp, 0x120
    ctx->pc = 0x1ccafcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1ccb00: 0x27b50230  addiu       $s5, $sp, 0x230
    ctx->pc = 0x1ccb00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1ccb04: 0x27b40234  addiu       $s4, $sp, 0x234
    ctx->pc = 0x1ccb04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
    // 0x1ccb08: 0x27b30238  addiu       $s3, $sp, 0x238
    ctx->pc = 0x1ccb08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x1ccb0c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ccb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb10:
    // 0x1ccb10: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CCB10u;
    SET_GPR_U32(ctx, 31, 0x1CCB18u);
    ctx->pc = 0x1CCB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB10u;
    // 0x1ccb14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CCB10u, 0x1CCB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB18u;
label_1ccb18:
    // 0x1ccb18: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ccb18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ccb1c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1ccb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccb20: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CCB20u;
    SET_GPR_U32(ctx, 31, 0x1CCB28u);
    ctx->pc = 0x1CCB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB20u;
    // 0x1ccb24: 0x26c5d148  addiu       $a1, $s6, -0x2EB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294955336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CCB20u, 0x1CCB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB28u;
label_1ccb28:
    // 0x1ccb28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ccb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb30: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1ccb30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb34: 0xc09e1b0  jal         func_2786C0
    ctx->pc = 0x1CCB34u;
    SET_GPR_U32(ctx, 31, 0x1CCB3Cu);
    ctx->pc = 0x1CCB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB34u;
    // 0x1ccb38: 0xe7b40230  swc1        $f20, 0x230($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2786C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2786C0u, 0x1CCB34u, 0x1CCB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB3Cu;
label_1ccb3c:
    // 0x1ccb3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ccb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ccb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccb44: 0xc085914  jal         func_216450
    ctx->pc = 0x1CCB44u;
    SET_GPR_U32(ctx, 31, 0x1CCB4Cu);
    ctx->pc = 0x1CCB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB44u;
    // 0x1ccb48: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216450u, 0x1CCB44u, 0x1CCB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCB4Cu;
label_1ccb4c:
    // 0x1ccb4c: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x1ccb4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ccb50: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1CCB50u;
    {
        const bool branch_taken_0x1ccb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB50u;
        // 0x1ccb54: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb50) {
            ctx->pc = 0x1CCC20u;
            goto label_1ccc20;
        }
    }
    ctx->pc = 0x1CCB58u;
    // 0x1ccb58: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ccb58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ccb5c: 0x2442d160  addiu       $v0, $v0, -0x2EA0
    ctx->pc = 0x1ccb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955360));
    // 0x1ccb60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ccb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ccb64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ccb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ccb68: 0x800008  jr          $a0
    ctx->pc = 0x1CCB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CCB70u: goto label_1ccb70;
            case 0x1CCB94u: goto label_1ccb94;
            case 0x1CCBB8u: goto label_1ccbb8;
            case 0x1CCBDCu: goto label_1ccbdc;
            case 0x1CCC00u: goto label_1ccc00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCB68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CCB70u;
label_1ccb70:
    // 0x1ccb70: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1ccb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccb74: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ccb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ccb78: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ccb78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1ccb7c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ccb7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ccb80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccb80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccb84: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1ccb84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ccb88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccb88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccb8c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1CCB8Cu;
    {
        const bool branch_taken_0x1ccb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB8Cu;
        // 0x1ccb90: 0xe4408a20  swc1        $f0, -0x75E0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb8c) {
            ctx->pc = 0x1CCC20u;
            goto label_1ccc20;
        }
    }
    ctx->pc = 0x1CCB94u;
label_1ccb94:
    // 0x1ccb94: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1ccb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccb98: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ccb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ccb9c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ccb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1ccba0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ccba0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ccba4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccba8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1ccba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccbac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccbacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccbb0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1CCBB0u;
    {
        const bool branch_taken_0x1ccbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBB0u;
        // 0x1ccbb4: 0xe4408a24  swc1        $f0, -0x75DC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbb0) {
            ctx->pc = 0x1CCC20u;
            goto label_1ccc20;
        }
    }
    ctx->pc = 0x1CCBB8u;
label_1ccbb8:
    // 0x1ccbb8: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1ccbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccbbc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ccbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ccbc0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ccbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1ccbc4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ccbc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ccbc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccbc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccbcc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1ccbccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccbd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccbd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccbd4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1CCBD4u;
    {
        const bool branch_taken_0x1ccbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBD4u;
        // 0x1ccbd8: 0xe4408a28  swc1        $f0, -0x75D8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbd4) {
            ctx->pc = 0x1CCC20u;
            goto label_1ccc20;
        }
    }
    ctx->pc = 0x1CCBDCu;
label_1ccbdc:
    // 0x1ccbdc: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1ccbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccbe0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ccbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ccbe4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ccbe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1ccbe8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ccbe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ccbec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccbecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccbf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ccbf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccbf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccbf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccbf8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CCBF8u;
    {
        const bool branch_taken_0x1ccbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCBF8u;
        // 0x1ccbfc: 0xe4408a2c  swc1        $f0, -0x75D4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbf8) {
            ctx->pc = 0x1CCC20u;
            goto label_1ccc20;
        }
    }
    ctx->pc = 0x1CCC00u;
label_1ccc00:
    // 0x1ccc00: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1ccc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccc04: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ccc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ccc08: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ccc08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1ccc0c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ccc0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ccc10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccc10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccc14: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x1ccc14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ccc18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccc18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccc1c: 0xe4408a30  swc1        $f0, -0x75D0($v0)
    ctx->pc = 0x1ccc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F8A30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8A30u, _value); } while (0); }
label_1ccc20:
    // 0x1ccc20: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ccc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ccc24: 0x1602ffba  bne         $s0, $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x1CCC24u;
    {
        const bool branch_taken_0x1ccc24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CCC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC24u;
        // 0x1ccc28: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc24) {
            ctx->pc = 0x1CCB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccb10;
        }
    }
    ctx->pc = 0x1CCC2Cu;
    // 0x1ccc2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ccc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccc30: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1CCC30u;
    SET_GPR_U32(ctx, 31, 0x1CCC38u);
    ctx->pc = 0x1CCC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC30u;
    // 0x1ccc34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1CCC30u, 0x1CCC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC38u;
label_1ccc38:
    // 0x1ccc38: 0xdfb00240  ld          $s0, 0x240($sp)
    ctx->pc = 0x1ccc38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1ccc3c: 0xdfb10248  ld          $s1, 0x248($sp)
    ctx->pc = 0x1ccc3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1ccc40: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x1ccc40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1ccc44: 0xdfb30258  ld          $s3, 0x258($sp)
    ctx->pc = 0x1ccc44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x1ccc48: 0xdfb40260  ld          $s4, 0x260($sp)
    ctx->pc = 0x1ccc48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1ccc4c: 0xdfb50268  ld          $s5, 0x268($sp)
    ctx->pc = 0x1ccc4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1ccc50: 0xdfb60270  ld          $s6, 0x270($sp)
    ctx->pc = 0x1ccc50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1ccc54: 0xdfbf0278  ld          $ra, 0x278($sp)
    ctx->pc = 0x1ccc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x1ccc58: 0xc7b40280  lwc1        $f20, 0x280($sp)
    ctx->pc = 0x1ccc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ccc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC5Cu;
        // 0x1ccc60: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCC64u;
    // 0x1ccc64: 0x0  nop
    ctx->pc = 0x1ccc64u;
    // NOP
    ctx->pc = 0x1ccc68u;
}
