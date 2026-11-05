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

// Function: sub_0019A9E8
// Address: 0x19a9e8 - 0x19aca8
void sub_0019A9E8_0x19a9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A9E8_0x19a9e8");
#endif

    switch (ctx->pc) {
        case 0x19a9fcu: goto label_19a9fc;
        case 0x19aa20u: goto label_19aa20;
        case 0x19aa38u: goto label_19aa38;
        case 0x19aa60u: goto label_19aa60;
        case 0x19aa6cu: goto label_19aa6c;
        case 0x19aa74u: goto label_19aa74;
        case 0x19aaa0u: goto label_19aaa0;
        case 0x19aaa8u: goto label_19aaa8;
        case 0x19aab8u: goto label_19aab8;
        case 0x19aac0u: goto label_19aac0;
        case 0x19aad0u: goto label_19aad0;
        case 0x19aad8u: goto label_19aad8;
        case 0x19aae8u: goto label_19aae8;
        case 0x19aaf0u: goto label_19aaf0;
        case 0x19ab58u: goto label_19ab58;
        case 0x19ac70u: goto label_19ac70;
        case 0x19ac7cu: goto label_19ac7c;
        case 0x19ac8cu: goto label_19ac8c;
        case 0x19ac94u: goto label_19ac94;
        default: break;
    }

    ctx->pc = 0x19a9e8u;

    // 0x19a9e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19a9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19a9ec: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x19a9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x19a9f0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x19a9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x19a9f4: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19A9F4u;
    SET_GPR_U32(ctx, 31, 0x19A9FCu);
    ctx->pc = 0x19A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A9F4u;
    // 0x19a9f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19A9F4u, 0x19A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A9FCu;
label_19a9fc:
    // 0x19a9fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19aa00: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x19aa00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
    // 0x19aa04: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x19aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19aa08: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x19aa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x19aa0c: 0x38830006  xori        $v1, $a0, 0x6
    ctx->pc = 0x19aa0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
    // 0x19aa10: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19AA10u;
    {
        const bool branch_taken_0x19aa10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA10u;
        // 0x19aa14: 0x38820007  xori        $v0, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa10) {
            ctx->pc = 0x19AA28u;
            goto label_19aa28;
        }
    }
    ctx->pc = 0x19AA18u;
    // 0x19aa18: 0xc067598  jal         func_19D660
    ctx->pc = 0x19AA18u;
    SET_GPR_U32(ctx, 31, 0x19AA20u);
    ctx->pc = 0x19AA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AA18u;
    // 0x19aa1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D660u, 0x19AA18u, 0x19AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AA20u;
label_19aa20:
    // 0x19aa20: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x19AA20u;
    {
        const bool branch_taken_0x19aa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA20u;
        // 0x19aa24: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa20) {
            ctx->pc = 0x19AC98u;
            goto label_19ac98;
        }
    }
    ctx->pc = 0x19AA28u;
label_19aa28:
    // 0x19aa28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19AA28u;
    {
        const bool branch_taken_0x19aa28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA28u;
        // 0x19aa2c: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa28) {
            ctx->pc = 0x19AA40u;
            goto label_19aa40;
        }
    }
    ctx->pc = 0x19AA30u;
    // 0x19aa30: 0xc0675e0  jal         func_19D780
    ctx->pc = 0x19AA30u;
    SET_GPR_U32(ctx, 31, 0x19AA38u);
    ctx->pc = 0x19AA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AA30u;
    // 0x19aa34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D780u, 0x19AA30u, 0x19AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AA38u;
label_19aa38:
    // 0x19aa38: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x19AA38u;
    {
        const bool branch_taken_0x19aa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA38u;
        // 0x19aa3c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa38) {
            ctx->pc = 0x19AC98u;
            goto label_19ac98;
        }
    }
    ctx->pc = 0x19AA40u;
label_19aa40:
    // 0x19aa40: 0x54400095  bnel        $v0, $zero, . + 4 + (0x95 << 2)
    ctx->pc = 0x19AA40u;
    {
        const bool branch_taken_0x19aa40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19aa40) {
            ctx->pc = 0x19AA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AA40u;
            // 0x19aa44: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AC98u;
            goto label_19ac98;
        }
    }
    ctx->pc = 0x19AA48u;
    // 0x19aa48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19aa4c: 0x8c431050  lw          $v1, 0x1050($v0)
    ctx->pc = 0x19aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4176)));
    // 0x19aa50: 0x50600091  beql        $v1, $zero, . + 4 + (0x91 << 2)
    ctx->pc = 0x19AA50u;
    {
        const bool branch_taken_0x19aa50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aa50) {
            ctx->pc = 0x19AA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AA50u;
            // 0x19aa54: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AC98u;
            goto label_19ac98;
        }
    }
    ctx->pc = 0x19AA58u;
    // 0x19aa58: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19AA58u;
    SET_GPR_U32(ctx, 31, 0x19AA60u);
    ctx->pc = 0x19AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AA58u;
    // 0x19aa5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19AA58u, 0x19AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AA60u;
label_19aa60:
    // 0x19aa60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19aa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa64: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x19AA64u;
    SET_GPR_U32(ctx, 31, 0x19AA6Cu);
    ctx->pc = 0x19AA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AA64u;
    // 0x19aa68: 0xac400158  sw          $zero, 0x158($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19AA64u, 0x19AA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AA6Cu;
label_19aa6c:
    // 0x19aa6c: 0xc061a12  jal         func_186848
    ctx->pc = 0x19AA6Cu;
    SET_GPR_U32(ctx, 31, 0x19AA74u);
    ctx->pc = 0x19AA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AA6Cu;
    // 0x19aa70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19AA6Cu, 0x19AA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AA74u;
label_19aa74:
    // 0x19aa74: 0xc4410240  lwc1        $f1, 0x240($v0)
    ctx->pc = 0x19aa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19aa78: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x19aa78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
    // 0x19aa7c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x19aa7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x19aa80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19aa80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aa84: 0x0  nop
    ctx->pc = 0x19aa84u;
    // NOP
    // 0x19aa88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19aa88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19aa8c: 0x0  nop
    ctx->pc = 0x19aa8cu;
    // NOP
    // 0x19aa90: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x19AA90u;
    {
        const bool branch_taken_0x19aa90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19aa90) {
            ctx->pc = 0x19AAC8u;
            goto label_19aac8;
        }
    }
    ctx->pc = 0x19AA98u;
    // 0x19aa98: 0xc061a12  jal         func_186848
    ctx->pc = 0x19AA98u;
    SET_GPR_U32(ctx, 31, 0x19AAA0u);
    ctx->pc = 0x19AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AA98u;
    // 0x19aa9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19AA98u, 0x19AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AAA0u;
label_19aaa0:
    // 0x19aaa0: 0xc06faba  jal         func_1BEAE8
    ctx->pc = 0x19AAA0u;
    SET_GPR_U32(ctx, 31, 0x19AAA8u);
    ctx->pc = 0x19AAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AAA0u;
    // 0x19aaa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAE8u, 0x19AAA0u, 0x19AAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AAA8u;
label_19aaa8:
    // 0x19aaa8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19AAA8u;
    {
        const bool branch_taken_0x19aaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AAA8u;
        // 0x19aaac: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aaa8) {
            ctx->pc = 0x19AAFCu;
            goto label_19aafc;
        }
    }
    ctx->pc = 0x19AAB0u;
    // 0x19aab0: 0xc061a12  jal         func_186848
    ctx->pc = 0x19AAB0u;
    SET_GPR_U32(ctx, 31, 0x19AAB8u);
    ctx->pc = 0x19AAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AAB0u;
    // 0x19aab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19AAB0u, 0x19AAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AAB8u;
label_19aab8:
    // 0x19aab8: 0xc06faba  jal         func_1BEAE8
    ctx->pc = 0x19AAB8u;
    SET_GPR_U32(ctx, 31, 0x19AAC0u);
    ctx->pc = 0x19AABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AAB8u;
    // 0x19aabc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAE8u, 0x19AAB8u, 0x19AAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AAC0u;
label_19aac0:
    // 0x19aac0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19AAC0u;
    {
        const bool branch_taken_0x19aac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aac0) {
            ctx->pc = 0x19AAF0u;
            goto label_19aaf0;
        }
    }
    ctx->pc = 0x19AAC8u;
label_19aac8:
    // 0x19aac8: 0xc061a12  jal         func_186848
    ctx->pc = 0x19AAC8u;
    SET_GPR_U32(ctx, 31, 0x19AAD0u);
    ctx->pc = 0x19AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AAC8u;
    // 0x19aacc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19AAC8u, 0x19AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AAD0u;
label_19aad0:
    // 0x19aad0: 0xc06fab4  jal         func_1BEAD0
    ctx->pc = 0x19AAD0u;
    SET_GPR_U32(ctx, 31, 0x19AAD8u);
    ctx->pc = 0x19AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AAD0u;
    // 0x19aad4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x19AAD0u, 0x19AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AAD8u;
label_19aad8:
    // 0x19aad8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19AAD8u;
    {
        const bool branch_taken_0x19aad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AAD8u;
        // 0x19aadc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aad8) {
            ctx->pc = 0x19AAFCu;
            goto label_19aafc;
        }
    }
    ctx->pc = 0x19AAE0u;
    // 0x19aae0: 0xc061a12  jal         func_186848
    ctx->pc = 0x19AAE0u;
    SET_GPR_U32(ctx, 31, 0x19AAE8u);
    ctx->pc = 0x19AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AAE0u;
    // 0x19aae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19AAE0u, 0x19AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AAE8u;
label_19aae8:
    // 0x19aae8: 0xc06fab4  jal         func_1BEAD0
    ctx->pc = 0x19AAE8u;
    SET_GPR_U32(ctx, 31, 0x19AAF0u);
    ctx->pc = 0x19AAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AAE8u;
    // 0x19aaec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x19AAE8u, 0x19AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AAF0u;
label_19aaf0:
    // 0x19aaf0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x19aaf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19aaf4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19aaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19aaf8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x19aaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19aafc:
    // 0x19aafc: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x19aafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x19ab00: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x19ab00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x19ab04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19ab04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19ab08: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x19ab08u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x19ab0c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19ab0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ab10: 0x0  nop
    ctx->pc = 0x19ab10u;
    // NOP
    // 0x19ab14: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x19AB14u;
    {
        const bool branch_taken_0x19ab14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB14u;
        // 0x19ab18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab14) {
            ctx->pc = 0x19AB48u;
            goto label_19ab48;
        }
    }
    ctx->pc = 0x19AB1Cu;
    // 0x19ab1c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x19ab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ab20: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x19ab20u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x19ab24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19ab24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ab28: 0x0  nop
    ctx->pc = 0x19ab28u;
    // NOP
    // 0x19ab2c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19AB2Cu;
    {
        const bool branch_taken_0x19ab2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB2Cu;
        // 0x19ab30: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab2c) {
            ctx->pc = 0x19AB48u;
            goto label_19ab48;
        }
    }
    ctx->pc = 0x19AB34u;
    // 0x19ab34: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x19ab34u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x19ab38: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19ab38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ab3c: 0x0  nop
    ctx->pc = 0x19ab3cu;
    // NOP
    // 0x19ab40: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19AB40u;
    {
        const bool branch_taken_0x19ab40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ab40) {
            ctx->pc = 0x19AB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AB40u;
            // 0x19ab44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AB48u;
            goto label_19ab48;
        }
    }
    ctx->pc = 0x19AB48u;
label_19ab48:
    // 0x19ab48: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x19AB48u;
    {
        const bool branch_taken_0x19ab48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ab48) {
            ctx->pc = 0x19AC84u;
            goto label_19ac84;
        }
    }
    ctx->pc = 0x19AB50u;
    // 0x19ab50: 0xc061a12  jal         func_186848
    ctx->pc = 0x19AB50u;
    SET_GPR_U32(ctx, 31, 0x19AB58u);
    ctx->pc = 0x19AB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AB50u;
    // 0x19ab54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19AB50u, 0x19AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AB58u;
label_19ab58:
    // 0x19ab58: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x19ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x19ab5c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19ab5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ab60: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x19ab60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19ab64: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x19ab64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19ab68: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x19ab68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19ab6c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x19ab6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ab70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ab70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ab74: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x19ab74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x19ab78: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x19ab78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x19ab7c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x19ab7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x19ab80: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x19ab80u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
    // 0x19ab84: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x19ab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19ab88: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x19ab88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19ab8c: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x19ab8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ab90: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x19ab90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ab94: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x19ab94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19ab98: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x19ab98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x19ab9c: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x19ab9cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x19aba0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x19ABA0u;
    {
        const bool branch_taken_0x19aba0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABA0u;
        // 0x19aba4: 0xe7a50018  swc1        $f5, 0x18($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aba0) {
            ctx->pc = 0x19ABD0u;
            goto label_19abd0;
        }
    }
    ctx->pc = 0x19ABA8u;
    // 0x19aba8: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x19aba8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
    // 0x19abac: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x19abacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19abb0: 0x0  nop
    ctx->pc = 0x19abb0u;
    // NOP
    // 0x19abb4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x19ABB4u;
    {
        const bool branch_taken_0x19abb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19abb4) {
            ctx->pc = 0x19ABD0u;
            goto label_19abd0;
        }
    }
    ctx->pc = 0x19ABBCu;
    // 0x19abbc: 0x46002805  abs.s       $f0, $f5
    ctx->pc = 0x19abbcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[5]);
    // 0x19abc0: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x19abc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19abc4: 0x0  nop
    ctx->pc = 0x19abc4u;
    // NOP
    // 0x19abc8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x19ABC8u;
    {
        const bool branch_taken_0x19abc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19abc8) {
            ctx->pc = 0x19ABCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19ABC8u;
            // 0x19abcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19ABD0u;
            goto label_19abd0;
        }
    }
    ctx->pc = 0x19ABD0u;
label_19abd0:
    // 0x19abd0: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x19ABD0u;
    {
        const bool branch_taken_0x19abd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19abd0) {
            ctx->pc = 0x19ABD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19ABD0u;
            // 0x19abd4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AC98u;
            goto label_19ac98;
        }
    }
    ctx->pc = 0x19ABD8u;
    // 0x19abd8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19abd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19abdc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x19abdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19abe0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x19abe0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19abe4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x19abe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19abe8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x19abe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19abec: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x19abecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19abf0: 0x4a0003bf  vwaitq
    ctx->pc = 0x19abf0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19abf4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x19abf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19abf8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x19abf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19abfc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ac00: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x19ac00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x19ac04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19ac08: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x19ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x19ac0c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x19ac0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19ac10: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x19ac10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19ac14: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x19ac14u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x19ac18: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x19ac18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19ac1c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x19ac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19ac20: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x19ac20u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x19ac24: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x19ac24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19ac28: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x19ac28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19ac2c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x19ac2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x19ac30: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19ac30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19ac34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ac34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ac38: 0x0  nop
    ctx->pc = 0x19ac38u;
    // NOP
    // 0x19ac3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19ac3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ac40: 0x0  nop
    ctx->pc = 0x19ac40u;
    // NOP
    // 0x19ac44: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x19AC44u;
    {
        const bool branch_taken_0x19ac44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC44u;
        // 0x19ac48: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac44) {
            ctx->pc = 0x19AC94u;
            goto label_19ac94;
        }
    }
    ctx->pc = 0x19AC4Cu;
    // 0x19ac4c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x19ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x19ac50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19ac50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19ac54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19ac54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19ac58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ac58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac5c: 0xc441c61c  lwc1        $f1, -0x39E4($v0)
    ctx->pc = 0x19ac5cu;
    { uint32_t bits = FAST_READ32(0x45C61Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ac60: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x19ac60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x19ac64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19ac64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19ac68: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19AC68u;
    SET_GPR_U32(ctx, 31, 0x19AC70u);
    ctx->pc = 0x19AC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC68u;
    // 0x19ac6c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19AC68u, 0x19AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC70u;
label_19ac70:
    // 0x19ac70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19ac70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ac74: 0xc06cdb8  jal         func_1B36E0
    ctx->pc = 0x19AC74u;
    SET_GPR_U32(ctx, 31, 0x19AC7Cu);
    ctx->pc = 0x19AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC74u;
    // 0x19ac78: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36E0u, 0x19AC74u, 0x19AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC7Cu;
label_19ac7c:
    // 0x19ac7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19AC7Cu;
    {
        const bool branch_taken_0x19ac7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC7Cu;
        // 0x19ac80: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac7c) {
            ctx->pc = 0x19AC98u;
            goto label_19ac98;
        }
    }
    ctx->pc = 0x19AC84u;
label_19ac84:
    // 0x19ac84: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19AC84u;
    SET_GPR_U32(ctx, 31, 0x19AC8Cu);
    ctx->pc = 0x19AC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC84u;
    // 0x19ac88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19AC84u, 0x19AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC8Cu;
label_19ac8c:
    // 0x19ac8c: 0xc06cdb4  jal         func_1B36D0
    ctx->pc = 0x19AC8Cu;
    SET_GPR_U32(ctx, 31, 0x19AC94u);
    ctx->pc = 0x19AC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC8Cu;
    // 0x19ac90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B36D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B36D0u, 0x19AC8Cu, 0x19AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC94u;
label_19ac94:
    // 0x19ac94: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x19ac94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19ac98:
    // 0x19ac98: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x19ac98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19ac9c: 0x3e00008  jr          $ra
    ctx->pc = 0x19AC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC9Cu;
        // 0x19aca0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19ACA4u;
    // 0x19aca4: 0x0  nop
    ctx->pc = 0x19aca4u;
    // NOP
    ctx->pc = 0x19aca8u;
}
