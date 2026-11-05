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

// Function: sub_001CCC68
// Address: 0x1ccc68 - 0x1cce78
void sub_001CCC68_0x1ccc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCC68_0x1ccc68");
#endif

    switch (ctx->pc) {
        case 0x1ccca0u: goto label_1ccca0;
        case 0x1cccacu: goto label_1cccac;
        case 0x1cccbcu: goto label_1cccbc;
        case 0x1cccccu: goto label_1ccccc;
        case 0x1cccdcu: goto label_1cccdc;
        case 0x1cccf8u: goto label_1cccf8;
        case 0x1ccd20u: goto label_1ccd20;
        case 0x1ccd28u: goto label_1ccd28;
        case 0x1ccd38u: goto label_1ccd38;
        case 0x1ccd4cu: goto label_1ccd4c;
        case 0x1ccd5cu: goto label_1ccd5c;
        case 0x1cce48u: goto label_1cce48;
        default: break;
    }

    ctx->pc = 0x1ccc68u;

    // 0x1ccc68: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1ccc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x1ccc6c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1ccc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ccc70: 0xffb20250  sd          $s2, 0x250($sp)
    ctx->pc = 0x1ccc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 18));
    // 0x1ccc74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ccc74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccc78: 0xffb00240  sd          $s0, 0x240($sp)
    ctx->pc = 0x1ccc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 16));
    // 0x1ccc7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ccc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccc80: 0xffb10248  sd          $s1, 0x248($sp)
    ctx->pc = 0x1ccc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 17));
    // 0x1ccc84: 0xffb30258  sd          $s3, 0x258($sp)
    ctx->pc = 0x1ccc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 19));
    // 0x1ccc88: 0xffb40260  sd          $s4, 0x260($sp)
    ctx->pc = 0x1ccc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 20));
    // 0x1ccc8c: 0xffb50268  sd          $s5, 0x268($sp)
    ctx->pc = 0x1ccc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 21));
    // 0x1ccc90: 0xffb60270  sd          $s6, 0x270($sp)
    ctx->pc = 0x1ccc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 22));
    // 0x1ccc94: 0xffbf0278  sd          $ra, 0x278($sp)
    ctx->pc = 0x1ccc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 31));
    // 0x1ccc98: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x1CCC98u;
    SET_GPR_U32(ctx, 31, 0x1CCCA0u);
    ctx->pc = 0x1CCC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCC98u;
    // 0x1ccc9c: 0xe7b40280  swc1        $f20, 0x280($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x1CCC98u, 0x1CCCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCA0u;
label_1ccca0:
    // 0x1ccca0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ccca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccca4: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CCCA4u;
    SET_GPR_U32(ctx, 31, 0x1CCCACu);
    ctx->pc = 0x1CCCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCCA4u;
    // 0x1ccca8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CCCA4u, 0x1CCCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCACu;
label_1cccac:
    // 0x1cccac: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1cccacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cccb0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cccb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cccb4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CCCB4u;
    SET_GPR_U32(ctx, 31, 0x1CCCBCu);
    ctx->pc = 0x1CCCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCCB4u;
    // 0x1cccb8: 0x24a5d178  addiu       $a1, $a1, -0x2E88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CCCB4u, 0x1CCCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCBCu;
label_1cccbc:
    // 0x1cccbc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1cccbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cccc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cccc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cccc4: 0xc09e062  jal         func_278188
    ctx->pc = 0x1CCCC4u;
    SET_GPR_U32(ctx, 31, 0x1CCCCCu);
    ctx->pc = 0x1CCCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCCC4u;
    // 0x1cccc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x1CCCC4u, 0x1CCCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCCCu;
label_1ccccc:
    // 0x1ccccc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1cccccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1cccd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cccd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cccd4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CCCD4u;
    SET_GPR_U32(ctx, 31, 0x1CCCDCu);
    ctx->pc = 0x1CCCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCCD4u;
    // 0x1cccd8: 0x24a5d0a0  addiu       $a1, $a1, -0x2F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CCCD4u, 0x1CCCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCDCu;
label_1cccdc:
    // 0x1cccdc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCCDCu;
    {
        const bool branch_taken_0x1cccdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cccdc) {
            ctx->pc = 0x1CCCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCCDCu;
            // 0x1ccce0: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCCECu;
            goto label_1cccec;
        }
    }
    ctx->pc = 0x1CCCE4u;
    // 0x1ccce4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCCE4u;
    {
        const bool branch_taken_0x1ccce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCE4u;
        // 0x1ccce8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccce4) {
            ctx->pc = 0x1CCCFCu;
            goto label_1cccfc;
        }
    }
    ctx->pc = 0x1CCCECu;
label_1cccec:
    // 0x1cccec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cccecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cccf0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CCCF0u;
    SET_GPR_U32(ctx, 31, 0x1CCCF8u);
    ctx->pc = 0x1CCCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCCF0u;
    // 0x1cccf4: 0x24a5d0a8  addiu       $a1, $a1, -0x2F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CCCF0u, 0x1CCCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCF8u;
label_1cccf8:
    // 0x1cccf8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1cccf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cccfc:
    // 0x1cccfc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ccd00: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x1ccd00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ccd04: 0xac4389d4  sw          $v1, -0x762C($v0)
    ctx->pc = 0x1ccd04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F89D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F89D4u, _value); } while (0);
    // 0x1ccd08: 0x3c160046  lui         $s6, 0x46
    ctx->pc = 0x1ccd08u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)70 << 16));
    // 0x1ccd0c: 0x27b10120  addiu       $s1, $sp, 0x120
    ctx->pc = 0x1ccd0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1ccd10: 0x27b50230  addiu       $s5, $sp, 0x230
    ctx->pc = 0x1ccd10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x1ccd14: 0x27b40234  addiu       $s4, $sp, 0x234
    ctx->pc = 0x1ccd14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
    // 0x1ccd18: 0x27b30238  addiu       $s3, $sp, 0x238
    ctx->pc = 0x1ccd18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x1ccd1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ccd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ccd20:
    // 0x1ccd20: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x1CCD20u;
    SET_GPR_U32(ctx, 31, 0x1CCD28u);
    ctx->pc = 0x1CCD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD20u;
    // 0x1ccd24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x1CCD20u, 0x1CCD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD28u;
label_1ccd28:
    // 0x1ccd28: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ccd28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ccd2c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1ccd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccd30: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x1CCD30u;
    SET_GPR_U32(ctx, 31, 0x1CCD38u);
    ctx->pc = 0x1CCD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD30u;
    // 0x1ccd34: 0x26c5d188  addiu       $a1, $s6, -0x2E78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294955400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x1CCD30u, 0x1CCD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD38u;
label_1ccd38:
    // 0x1ccd38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ccd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ccd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd40: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1ccd40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd44: 0xc09e1b0  jal         func_2786C0
    ctx->pc = 0x1CCD44u;
    SET_GPR_U32(ctx, 31, 0x1CCD4Cu);
    ctx->pc = 0x1CCD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD44u;
    // 0x1ccd48: 0xe7b40230  swc1        $f20, 0x230($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2786C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2786C0u, 0x1CCD44u, 0x1CCD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD4Cu;
label_1ccd4c:
    // 0x1ccd4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ccd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ccd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd54: 0xc085914  jal         func_216450
    ctx->pc = 0x1CCD54u;
    SET_GPR_U32(ctx, 31, 0x1CCD5Cu);
    ctx->pc = 0x1CCD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD54u;
    // 0x1ccd58: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216450u, 0x1CCD54u, 0x1CCD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD5Cu;
label_1ccd5c:
    // 0x1ccd5c: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x1ccd5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ccd60: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1CCD60u;
    {
        const bool branch_taken_0x1ccd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD60u;
        // 0x1ccd64: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd60) {
            ctx->pc = 0x1CCE30u;
            goto label_1cce30;
        }
    }
    ctx->pc = 0x1CCD68u;
    // 0x1ccd68: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ccd68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ccd6c: 0x2442d1a0  addiu       $v0, $v0, -0x2E60
    ctx->pc = 0x1ccd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955424));
    // 0x1ccd70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ccd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ccd74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ccd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ccd78: 0x800008  jr          $a0
    ctx->pc = 0x1CCD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CCD80u: goto label_1ccd80;
            case 0x1CCDA4u: goto label_1ccda4;
            case 0x1CCDC8u: goto label_1ccdc8;
            case 0x1CCDECu: goto label_1ccdec;
            case 0x1CCE10u: goto label_1cce10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCD78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CCD80u;
label_1ccd80:
    // 0x1ccd80: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1ccd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccd84: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ccd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ccd88: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ccd88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1ccd8c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ccd8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ccd90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccd90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccd94: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1ccd94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ccd98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccd98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccd9c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1CCD9Cu;
    {
        const bool branch_taken_0x1ccd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD9Cu;
        // 0x1ccda0: 0xe44089d8  swc1        $f0, -0x7628($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937048), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd9c) {
            ctx->pc = 0x1CCE30u;
            goto label_1cce30;
        }
    }
    ctx->pc = 0x1CCDA4u;
label_1ccda4:
    // 0x1ccda4: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1ccda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccda8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ccda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ccdac: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ccdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1ccdb0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ccdb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ccdb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccdb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccdb8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1ccdb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccdbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccdbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccdc0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1CCDC0u;
    {
        const bool branch_taken_0x1ccdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDC0u;
        // 0x1ccdc4: 0xe44089dc  swc1        $f0, -0x7624($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937052), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccdc0) {
            ctx->pc = 0x1CCE30u;
            goto label_1cce30;
        }
    }
    ctx->pc = 0x1CCDC8u;
label_1ccdc8:
    // 0x1ccdc8: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1ccdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccdcc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ccdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ccdd0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ccdd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1ccdd4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ccdd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ccdd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccdd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccddc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1ccddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccde0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccde0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccde4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1CCDE4u;
    {
        const bool branch_taken_0x1ccde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDE4u;
        // 0x1ccde8: 0xe44089e0  swc1        $f0, -0x7620($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937056), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccde4) {
            ctx->pc = 0x1CCE30u;
            goto label_1cce30;
        }
    }
    ctx->pc = 0x1CCDECu;
label_1ccdec:
    // 0x1ccdec: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1ccdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccdf0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ccdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ccdf4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ccdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1ccdf8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ccdf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ccdfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ccdfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cce00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cce00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cce04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cce08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CCE08u;
    {
        const bool branch_taken_0x1cce08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE08u;
        // 0x1cce0c: 0xe44089e4  swc1        $f0, -0x761C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294937060), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce08) {
            ctx->pc = 0x1CCE30u;
            goto label_1cce30;
        }
    }
    ctx->pc = 0x1CCE10u;
label_1cce10:
    // 0x1cce10: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x1cce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cce14: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cce14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cce18: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1cce18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1cce1c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1cce1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1cce20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cce20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cce24: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x1cce24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cce28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cce28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cce2c: 0xe44089e8  swc1        $f0, -0x7618($v0)
    ctx->pc = 0x1cce2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F89E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F89E8u, _value); } while (0); }
label_1cce30:
    // 0x1cce30: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1cce30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cce34: 0x1602ffba  bne         $s0, $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x1CCE34u;
    {
        const bool branch_taken_0x1cce34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CCE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE34u;
        // 0x1cce38: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce34) {
            ctx->pc = 0x1CCD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccd20;
        }
    }
    ctx->pc = 0x1CCE3Cu;
    // 0x1cce3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cce3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce40: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1CCE40u;
    SET_GPR_U32(ctx, 31, 0x1CCE48u);
    ctx->pc = 0x1CCE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE40u;
    // 0x1cce44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1CCE40u, 0x1CCE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE48u;
label_1cce48:
    // 0x1cce48: 0xdfb00240  ld          $s0, 0x240($sp)
    ctx->pc = 0x1cce48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1cce4c: 0xdfb10248  ld          $s1, 0x248($sp)
    ctx->pc = 0x1cce4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1cce50: 0xdfb20250  ld          $s2, 0x250($sp)
    ctx->pc = 0x1cce50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1cce54: 0xdfb30258  ld          $s3, 0x258($sp)
    ctx->pc = 0x1cce54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x1cce58: 0xdfb40260  ld          $s4, 0x260($sp)
    ctx->pc = 0x1cce58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1cce5c: 0xdfb50268  ld          $s5, 0x268($sp)
    ctx->pc = 0x1cce5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1cce60: 0xdfb60270  ld          $s6, 0x270($sp)
    ctx->pc = 0x1cce60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1cce64: 0xdfbf0278  ld          $ra, 0x278($sp)
    ctx->pc = 0x1cce64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x1cce68: 0xc7b40280  lwc1        $f20, 0x280($sp)
    ctx->pc = 0x1cce68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cce6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE6Cu;
        // 0x1cce70: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCE74u;
    // 0x1cce74: 0x0  nop
    ctx->pc = 0x1cce74u;
    // NOP
    ctx->pc = 0x1cce78u;
}
