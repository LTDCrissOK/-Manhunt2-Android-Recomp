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

// Function: sub_0023FEB8
// Address: 0x23feb8 - 0x23ff98
void sub_0023FEB8_0x23feb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FEB8_0x23feb8");
#endif

    switch (ctx->pc) {
        case 0x23feb8u: goto label_23feb8;
        case 0x23febcu: goto label_23febc;
        case 0x23fec0u: goto label_23fec0;
        case 0x23fec4u: goto label_23fec4;
        case 0x23fec8u: goto label_23fec8;
        case 0x23feccu: goto label_23fecc;
        case 0x23fed0u: goto label_23fed0;
        case 0x23fed4u: goto label_23fed4;
        case 0x23fed8u: goto label_23fed8;
        case 0x23fedcu: goto label_23fedc;
        case 0x23fee0u: goto label_23fee0;
        case 0x23fee4u: goto label_23fee4;
        case 0x23fee8u: goto label_23fee8;
        case 0x23feecu: goto label_23feec;
        case 0x23fef0u: goto label_23fef0;
        case 0x23fef4u: goto label_23fef4;
        case 0x23fef8u: goto label_23fef8;
        case 0x23fefcu: goto label_23fefc;
        case 0x23ff00u: goto label_23ff00;
        case 0x23ff04u: goto label_23ff04;
        case 0x23ff08u: goto label_23ff08;
        case 0x23ff0cu: goto label_23ff0c;
        case 0x23ff10u: goto label_23ff10;
        case 0x23ff14u: goto label_23ff14;
        case 0x23ff18u: goto label_23ff18;
        case 0x23ff1cu: goto label_23ff1c;
        case 0x23ff20u: goto label_23ff20;
        case 0x23ff24u: goto label_23ff24;
        case 0x23ff28u: goto label_23ff28;
        case 0x23ff2cu: goto label_23ff2c;
        case 0x23ff30u: goto label_23ff30;
        case 0x23ff34u: goto label_23ff34;
        case 0x23ff38u: goto label_23ff38;
        case 0x23ff3cu: goto label_23ff3c;
        case 0x23ff40u: goto label_23ff40;
        case 0x23ff44u: goto label_23ff44;
        case 0x23ff48u: goto label_23ff48;
        case 0x23ff4cu: goto label_23ff4c;
        case 0x23ff50u: goto label_23ff50;
        case 0x23ff54u: goto label_23ff54;
        case 0x23ff58u: goto label_23ff58;
        case 0x23ff5cu: goto label_23ff5c;
        case 0x23ff60u: goto label_23ff60;
        case 0x23ff64u: goto label_23ff64;
        case 0x23ff68u: goto label_23ff68;
        case 0x23ff6cu: goto label_23ff6c;
        case 0x23ff70u: goto label_23ff70;
        case 0x23ff74u: goto label_23ff74;
        case 0x23ff78u: goto label_23ff78;
        case 0x23ff7cu: goto label_23ff7c;
        case 0x23ff80u: goto label_23ff80;
        case 0x23ff84u: goto label_23ff84;
        case 0x23ff88u: goto label_23ff88;
        case 0x23ff8cu: goto label_23ff8c;
        case 0x23ff90u: goto label_23ff90;
        case 0x23ff94u: goto label_23ff94;
        default: break;
    }

    ctx->pc = 0x23feb8u;

label_23feb8:
    // 0x23feb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23feb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23febc:
    // 0x23febc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23febcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23fec0:
    // 0x23fec0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23fec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23fec4:
    // 0x23fec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23fec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23fec8:
    // 0x23fec8: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x23fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_23fecc:
    // 0x23fecc: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x23feccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_23fed0:
    // 0x23fed0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x23fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_23fed4:
    // 0x23fed4: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x23fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_23fed8:
    // 0x23fed8: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x23fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_23fedc:
    // 0x23fedc: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x23fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_23fee0:
    // 0x23fee0: 0x40f809  jalr        $v0
label_23fee4:
    if (ctx->pc == 0x23FEE4u) {
        ctx->pc = 0x23FEE8u;
        goto label_23fee8;
    }
    ctx->pc = 0x23FEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23FEE8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FEE0u, 0x23FEE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23FEE8u;
label_23fee8:
    // 0x23fee8: 0xc6010524  lwc1        $f1, 0x524($s0)
    ctx->pc = 0x23fee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23feec:
    // 0x23feec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23feecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23fef0:
    // 0x23fef0: 0x0  nop
    ctx->pc = 0x23fef0u;
    // NOP
label_23fef4:
    // 0x23fef4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x23fef4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23fef8:
    // 0x23fef8: 0x0  nop
    ctx->pc = 0x23fef8u;
    // NOP
label_23fefc:
    // 0x23fefc: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
label_23ff00:
    if (ctx->pc == 0x23FF00u) {
        ctx->pc = 0x23FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FEFCu;
        // 0x23ff00: 0x8e020418  lw          $v0, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF04u;
        goto label_23ff04;
    }
    ctx->pc = 0x23FEFCu;
    {
        const bool branch_taken_0x23fefc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23fefc) {
            ctx->pc = 0x23FF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FEFCu;
            // 0x23ff00: 0x8e020418  lw          $v0, 0x418($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FF4Cu;
            goto label_23ff4c;
        }
    }
    ctx->pc = 0x23FF04u;
label_23ff04:
    // 0x23ff04: 0x8e060334  lw          $a2, 0x334($s0)
    ctx->pc = 0x23ff04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_23ff08:
    // 0x23ff08: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x23ff08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_23ff0c:
    // 0x23ff0c: 0x5480000c  bnel        $a0, $zero, . + 4 + (0xC << 2)
label_23ff10:
    if (ctx->pc == 0x23FF10u) {
        ctx->pc = 0x23FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF0Cu;
        // 0x23ff10: 0xc60c0524  lwc1        $f12, 0x524($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF14u;
        goto label_23ff14;
    }
    ctx->pc = 0x23FF0Cu;
    {
        const bool branch_taken_0x23ff0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ff0c) {
            ctx->pc = 0x23FF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FF0Cu;
            // 0x23ff10: 0xc60c0524  lwc1        $f12, 0x524($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FF40u;
            goto label_23ff40;
        }
    }
    ctx->pc = 0x23FF14u;
label_23ff14:
    // 0x23ff14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23ff14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ff18:
    // 0x23ff18: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x23ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_23ff1c:
    // 0x23ff1c: 0x0  nop
    ctx->pc = 0x23ff1cu;
    // NOP
label_23ff20:
    // 0x23ff20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23ff20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23ff24:
    // 0x23ff24: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_23ff28:
    if (ctx->pc == 0x23FF28u) {
        ctx->pc = 0x23FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF24u;
        // 0x23ff28: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF2Cu;
        goto label_23ff2c;
    }
    ctx->pc = 0x23FF24u;
    {
        const bool branch_taken_0x23ff24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF24u;
        // 0x23ff28: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff24) {
            ctx->pc = 0x23FF3Cu;
            goto label_23ff3c;
        }
    }
    ctx->pc = 0x23FF2Cu;
label_23ff2c:
    // 0x23ff2c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x23ff2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_23ff30:
    // 0x23ff30: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_23ff34:
    if (ctx->pc == 0x23FF34u) {
        ctx->pc = 0x23FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF30u;
        // 0x23ff34: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF38u;
        goto label_23ff38;
    }
    ctx->pc = 0x23FF30u;
    {
        const bool branch_taken_0x23ff30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF30u;
        // 0x23ff34: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff30) {
            ctx->pc = 0x23FF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ff20;
        }
    }
    ctx->pc = 0x23FF38u;
label_23ff38:
    // 0x23ff38: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x23ff38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_23ff3c:
    // 0x23ff3c: 0xc60c0524  lwc1        $f12, 0x524($s0)
    ctx->pc = 0x23ff3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23ff40:
    // 0x23ff40: 0xc073f08  jal         func_1CFC20
label_23ff44:
    if (ctx->pc == 0x23FF44u) {
        ctx->pc = 0x23FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF40u;
        // 0x23ff44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF48u;
        goto label_23ff48;
    }
    ctx->pc = 0x23FF40u;
    SET_GPR_U32(ctx, 31, 0x23FF48u);
    ctx->pc = 0x23FF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF40u;
    // 0x23ff44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x23FF40u, 0x23FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF48u;
label_23ff48:
    // 0x23ff48: 0x8e020418  lw          $v0, 0x418($s0)
    ctx->pc = 0x23ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_23ff4c:
    // 0x23ff4c: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x23ff4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_23ff50:
    // 0x23ff50: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_23ff54:
    if (ctx->pc == 0x23FF54u) {
        ctx->pc = 0x23FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF50u;
        // 0x23ff54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF58u;
        goto label_23ff58;
    }
    ctx->pc = 0x23FF50u;
    {
        const bool branch_taken_0x23ff50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF50u;
        // 0x23ff54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff50) {
            ctx->pc = 0x23FF7Cu;
            goto label_23ff7c;
        }
    }
    ctx->pc = 0x23FF58u;
label_23ff58:
    // 0x23ff58: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x23ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_23ff5c:
    // 0x23ff5c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x23ff5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_23ff60:
    // 0x23ff60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_23ff64:
    if (ctx->pc == 0x23FF64u) {
        ctx->pc = 0x23FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF60u;
        // 0x23ff64: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF68u;
        goto label_23ff68;
    }
    ctx->pc = 0x23FF60u;
    {
        const bool branch_taken_0x23ff60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF60u;
        // 0x23ff64: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff60) {
            ctx->pc = 0x23FF80u;
            goto label_23ff80;
        }
    }
    ctx->pc = 0x23FF68u;
label_23ff68:
    // 0x23ff68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ff68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ff6c:
    // 0x23ff6c: 0xc08fed2  jal         func_23FB48
label_23ff70:
    if (ctx->pc == 0x23FF70u) {
        ctx->pc = 0x23FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF6Cu;
        // 0x23ff70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF74u;
        goto label_23ff74;
    }
    ctx->pc = 0x23FF6Cu;
    SET_GPR_U32(ctx, 31, 0x23FF74u);
    ctx->pc = 0x23FF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF6Cu;
    // 0x23ff70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23FF6Cu, 0x23FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF74u;
label_23ff74:
    // 0x23ff74: 0x10000005  b           . + 4 + (0x5 << 2)
label_23ff78:
    if (ctx->pc == 0x23FF78u) {
        ctx->pc = 0x23FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF74u;
        // 0x23ff78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF7Cu;
        goto label_23ff7c;
    }
    ctx->pc = 0x23FF74u;
    {
        const bool branch_taken_0x23ff74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF74u;
        // 0x23ff78: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ff74) {
            ctx->pc = 0x23FF8Cu;
            goto label_23ff8c;
        }
    }
    ctx->pc = 0x23FF7Cu;
label_23ff7c:
    // 0x23ff7c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x23ff7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_23ff80:
    // 0x23ff80: 0xc08fed2  jal         func_23FB48
label_23ff84:
    if (ctx->pc == 0x23FF84u) {
        ctx->pc = 0x23FF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF80u;
        // 0x23ff84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF88u;
        goto label_23ff88;
    }
    ctx->pc = 0x23FF80u;
    SET_GPR_U32(ctx, 31, 0x23FF88u);
    ctx->pc = 0x23FF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FF80u;
    // 0x23ff84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23FF80u, 0x23FF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FF88u;
label_23ff88:
    // 0x23ff88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ff88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23ff8c:
    // 0x23ff8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23ff8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23ff90:
    // 0x23ff90: 0x3e00008  jr          $ra
label_23ff94:
    if (ctx->pc == 0x23FF94u) {
        ctx->pc = 0x23FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF90u;
        // 0x23ff94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23FF98u;
        goto label_fallthrough_0x23ff90;
    }
    ctx->pc = 0x23FF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FF90u;
        // 0x23ff94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23ff90:
    ctx->pc = 0x23FF98u;
}
