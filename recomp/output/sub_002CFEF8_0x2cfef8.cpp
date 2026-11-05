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

// Function: sub_002CFEF8
// Address: 0x2cfef8 - 0x2d01c8
void sub_002CFEF8_0x2cfef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFEF8_0x2cfef8");
#endif

    switch (ctx->pc) {
        case 0x2cff40u: goto label_2cff40;
        case 0x2cff48u: goto label_2cff48;
        case 0x2cff5cu: goto label_2cff5c;
        case 0x2cff68u: goto label_2cff68;
        case 0x2cff70u: goto label_2cff70;
        case 0x2cff88u: goto label_2cff88;
        case 0x2cff9cu: goto label_2cff9c;
        case 0x2cffb0u: goto label_2cffb0;
        case 0x2cfff0u: goto label_2cfff0;
        case 0x2d002cu: goto label_2d002c;
        case 0x2d0044u: goto label_2d0044;
        case 0x2d0084u: goto label_2d0084;
        case 0x2d009cu: goto label_2d009c;
        case 0x2d00d8u: goto label_2d00d8;
        case 0x2d00ecu: goto label_2d00ec;
        case 0x2d0148u: goto label_2d0148;
        case 0x2d0158u: goto label_2d0158;
        case 0x2d0160u: goto label_2d0160;
        case 0x2d0168u: goto label_2d0168;
        case 0x2d0178u: goto label_2d0178;
        case 0x2d0190u: goto label_2d0190;
        default: break;
    }

    ctx->pc = 0x2cfef8u;

    // 0x2cfef8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cfef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cfefc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x2cfefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x2cff00: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2cff00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2cff04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cff08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cff08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cff0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cff0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cff10: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2cff10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2cff14: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2cff14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cff18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2cff18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cff1c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2cff1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2cff20: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2cff20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2cff24: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2cff24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2cff28: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2cff28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2cff2c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2cff2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2cff30: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2cff30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2cff34: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2cff34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2cff38: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2CFF38u;
    {
        const bool branch_taken_0x2cff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF38u;
        // 0x2cff3c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cff38) {
            ctx->pc = 0x2D0160u;
            goto label_2d0160;
        }
    }
    ctx->pc = 0x2CFF40u;
label_2cff40:
    // 0x2cff40: 0xc0b394a  jal         func_2CE528
    ctx->pc = 0x2CFF40u;
    SET_GPR_U32(ctx, 31, 0x2CFF48u);
    ctx->pc = 0x2CE528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE528u, 0x2CFF40u, 0x2CFF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFF48u;
label_2cff48:
    // 0x2cff48: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x2cff48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x2cff4c: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x2cff4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x2cff50: 0x34840800  ori         $a0, $a0, 0x800
    ctx->pc = 0x2cff50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
    // 0x2cff54: 0xc0b3a62  jal         func_2CE988
    ctx->pc = 0x2CFF54u;
    SET_GPR_U32(ctx, 31, 0x2CFF5Cu);
    ctx->pc = 0x2CFF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFF54u;
    // 0x2cff58: 0x34a54800  ori         $a1, $a1, 0x4800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)18432);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE988u, 0x2CFF54u, 0x2CFF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFF5Cu;
label_2cff5c:
    // 0x2cff5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFF5Cu;
    {
        const bool branch_taken_0x2cff5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF5Cu;
        // 0x2cff60: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cff5c) {
            ctx->pc = 0x2CFF70u;
            goto label_2cff70;
        }
    }
    ctx->pc = 0x2CFF64u;
    // 0x2cff64: 0x0  nop
    ctx->pc = 0x2cff64u;
    // NOP
label_2cff68:
    // 0x2cff68: 0xc0b34f8  jal         func_2CD3E0
    ctx->pc = 0x2CFF68u;
    SET_GPR_U32(ctx, 31, 0x2CFF70u);
    ctx->pc = 0x2CD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD3E0u, 0x2CFF68u, 0x2CFF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFF70u;
label_2cff70:
    // 0x2cff70: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2cff70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2cff74: 0x8c82b4a8  lw          $v0, -0x4B58($a0)
    ctx->pc = 0x2cff74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cff78: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cff78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cff7c: 0x34843094  ori         $a0, $a0, 0x3094
    ctx->pc = 0x2cff7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12436);
    // 0x2cff80: 0xc0b4136  jal         func_2D04D8
    ctx->pc = 0x2CFF80u;
    SET_GPR_U32(ctx, 31, 0x2CFF88u);
    ctx->pc = 0x2CFF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFF80u;
    // 0x2cff84: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D04D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D04D8u, 0x2CFF80u, 0x2CFF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFF88u;
label_2cff88:
    // 0x2cff88: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2CFF88u;
    {
        const bool branch_taken_0x2cff88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF88u;
        // 0x2cff8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cff88) {
            ctx->pc = 0x2CFF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cff68;
        }
    }
    ctx->pc = 0x2CFF90u;
    // 0x2cff90: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2cff90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cff94: 0xc0e17be  jal         func_385EF8
    ctx->pc = 0x2CFF94u;
    SET_GPR_U32(ctx, 31, 0x2CFF9Cu);
    ctx->pc = 0x2CFF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFF94u;
    // 0x2cff98: 0x24060654  addiu       $a2, $zero, 0x654 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1620));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385EF8u, 0x2CFF94u, 0x2CFF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFF9Cu;
label_2cff9c:
    // 0x2cff9c: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFF9Cu;
    {
        const bool branch_taken_0x2cff9c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2cff9c) {
            ctx->pc = 0x2CFFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFF9Cu;
            // 0x2cffa0: 0x8fc20008  lw          $v0, 0x8($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFFB4u;
            goto label_2cffb4;
        }
    }
    ctx->pc = 0x2CFFA4u;
    // 0x2cffa4: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x2cffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x2cffa8: 0xc0b365e  jal         func_2CD978
    ctx->pc = 0x2CFFA8u;
    SET_GPR_U32(ctx, 31, 0x2CFFB0u);
    ctx->pc = 0x2CFFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFFA8u;
    // 0x2cffac: 0x24840b10  addiu       $a0, $a0, 0xB10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD978u, 0x2CFFA8u, 0x2CFFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFFB0u;
label_2cffb0:
    // 0x2cffb0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x2cffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_2cffb4:
    // 0x2cffb4: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x2CFFB4u;
    {
        const bool branch_taken_0x2cffb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFFB4u;
        // 0x2cffb8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cffb4) {
            ctx->pc = 0x2D00D0u;
            goto label_2d00d0;
        }
    }
    ctx->pc = 0x2CFFBCu;
    // 0x2cffbc: 0x8fd70000  lw          $s7, 0x0($fp)
    ctx->pc = 0x2cffbcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2cffc0: 0x8c62b4a8  lw          $v0, -0x4B58($v1)
    ctx->pc = 0x2cffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948008)));
    // 0x2cffc4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2cffc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cffc8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2cffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2cffcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cffccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cffd0: 0x8c4330a4  lw          $v1, 0x30A4($v0)
    ctx->pc = 0x2cffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12452)));
    // 0x2cffd4: 0x1860003e  blez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x2CFFD4u;
    {
        const bool branch_taken_0x2cffd4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2CFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFFD4u;
        // 0x2cffd8: 0x8fd60004  lw          $s6, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cffd4) {
            ctx->pc = 0x2D00D0u;
            goto label_2d00d0;
        }
    }
    ctx->pc = 0x2CFFDCu;
    // 0x2cffdc: 0x3c150002  lui         $s5, 0x2
    ctx->pc = 0x2cffdcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)2 << 16));
    // 0x2cffe0: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x2cffe0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x2cffe4: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x2cffe4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
    // 0x2cffe8: 0x36b56740  ori         $s5, $s5, 0x6740
    ctx->pc = 0x2cffe8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)26432);
    // 0x2cffec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cffecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cfff0:
    // 0x2cfff0: 0x8e62b4a8  lw          $v0, -0x4B58($s3)
    ctx->pc = 0x2cfff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948008)));
    // 0x2cfff4: 0x3c100019  lui         $s0, 0x19
    ctx->pc = 0x2cfff4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)25 << 16));
    // 0x2cfff8: 0x36105000  ori         $s0, $s0, 0x5000
    ctx->pc = 0x2cfff8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)20480);
    // 0x2cfffc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cfffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0000: 0x2908018  mult        $s0, $s4, $s0
    ctx->pc = 0x2d0000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2d0004: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2d0004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d0008: 0x8c443098  lw          $a0, 0x3098($v0)
    ctx->pc = 0x2d0008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12440)));
    // 0x2d000c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2d000cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0010: 0x8c453094  lw          $a1, 0x3094($v0)
    ctx->pc = 0x2d0010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12436)));
    // 0x2d0014: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2d0014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0018: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2d0018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2d001c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d001cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d0020: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2d0020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2d0024: 0xc0b2e1c  jal         func_2CB870
    ctx->pc = 0x2D0024u;
    SET_GPR_U32(ctx, 31, 0x2D002Cu);
    ctx->pc = 0x2D0028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0024u;
    // 0x2d0028: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB870u, 0x2D0024u, 0x2D002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D002Cu;
label_2d002c:
    // 0x2d002c: 0x8e62b4a8  lw          $v0, -0x4B58($s3)
    ctx->pc = 0x2d002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948008)));
    // 0x2d0030: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2d0030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d0034: 0x8c443098  lw          $a0, 0x3098($v0)
    ctx->pc = 0x2d0034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12440)));
    // 0x2d0038: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2d0038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2d003c: 0xc0b32ba  jal         func_2CCAE8
    ctx->pc = 0x2D003Cu;
    SET_GPR_U32(ctx, 31, 0x2D0044u);
    ctx->pc = 0x2D0040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D003Cu;
    // 0x2d0040: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCAE8u, 0x2D003Cu, 0x2D0044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0044u;
label_2d0044:
    // 0x2d0044: 0x8e64b4a8  lw          $a0, -0x4B58($s3)
    ctx->pc = 0x2d0044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948008)));
    // 0x2d0048: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d0048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d004c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2d004cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0050: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2d0050u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0054: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2d0054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2d0058: 0x8c833098  lw          $v1, 0x3098($a0)
    ctx->pc = 0x2d0058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12440)));
    // 0x2d005c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2d005cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2d0060: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2d0060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2d0064: 0x8e62b4a8  lw          $v0, -0x4B58($s3)
    ctx->pc = 0x2d0064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948008)));
    // 0x2d0068: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2d0068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d006c: 0x8c443098  lw          $a0, 0x3098($v0)
    ctx->pc = 0x2d006cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12440)));
    // 0x2d0070: 0x8c453094  lw          $a1, 0x3094($v0)
    ctx->pc = 0x2d0070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12436)));
    // 0x2d0074: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2d0074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2d0078: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2d0078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2d007c: 0xc0b2e1c  jal         func_2CB870
    ctx->pc = 0x2D007Cu;
    SET_GPR_U32(ctx, 31, 0x2D0084u);
    ctx->pc = 0x2D0080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D007Cu;
    // 0x2d0080: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB870u, 0x2D007Cu, 0x2D0084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0084u;
label_2d0084:
    // 0x2d0084: 0x8e62b4a8  lw          $v0, -0x4B58($s3)
    ctx->pc = 0x2d0084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948008)));
    // 0x2d0088: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2d0088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d008c: 0x8c443098  lw          $a0, 0x3098($v0)
    ctx->pc = 0x2d008cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12440)));
    // 0x2d0090: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2d0090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2d0094: 0xc0b32ba  jal         func_2CCAE8
    ctx->pc = 0x2D0094u;
    SET_GPR_U32(ctx, 31, 0x2D009Cu);
    ctx->pc = 0x2D0098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0094u;
    // 0x2d0098: 0x952021  addu        $a0, $a0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCAE8u, 0x2D0094u, 0x2D009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D009Cu;
label_2d009c:
    // 0x2d009c: 0x8e64b4a8  lw          $a0, -0x4B58($s3)
    ctx->pc = 0x2d009cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948008)));
    // 0x2d00a0: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x2d00a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x2d00a4: 0x34a5ce40  ori         $a1, $a1, 0xCE40
    ctx->pc = 0x2d00a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52800);
    // 0x2d00a8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2d00a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2d00ac: 0x8c833098  lw          $v1, 0x3098($a0)
    ctx->pc = 0x2d00acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12440)));
    // 0x2d00b0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2d00b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2d00b4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2d00b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2d00b8: 0x8e62b4a8  lw          $v0, -0x4B58($s3)
    ctx->pc = 0x2d00b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948008)));
    // 0x2d00bc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2d00bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d00c0: 0x8c4330a4  lw          $v1, 0x30A4($v0)
    ctx->pc = 0x2d00c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12452)));
    // 0x2d00c4: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2d00c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d00c8: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x2D00C8u;
    {
        const bool branch_taken_0x2d00c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D00CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D00C8u;
        // 0x2d00cc: 0x2258821  addu        $s1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d00c8) {
            ctx->pc = 0x2CFFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cfff0;
        }
    }
    ctx->pc = 0x2D00D0u;
label_2d00d0:
    // 0x2d00d0: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x2D00D0u;
    SET_GPR_U32(ctx, 31, 0x2D00D8u);
    ctx->pc = 0x2D00D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D00D0u;
    // 0x2d00d4: 0x3c100067  lui         $s0, 0x67 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x2D00D0u, 0x2D00D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00D8u;
label_2d00d8:
    // 0x2d00d8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d00d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d00dc: 0x36103094  ori         $s0, $s0, 0x3094
    ctx->pc = 0x2d00dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)12436);
    // 0x2d00e0: 0x8c44b4a8  lw          $a0, -0x4B58($v0)
    ctx->pc = 0x2d00e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2d00e4: 0xc0b414c  jal         func_2D0530
    ctx->pc = 0x2D00E4u;
    SET_GPR_U32(ctx, 31, 0x2D00ECu);
    ctx->pc = 0x2D00E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D00E4u;
    // 0x2d00e8: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0530u, 0x2D00E4u, 0x2D00ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D00ECu;
label_2d00ec:
    // 0x2d00ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d00ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d00f0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D00F0u;
    {
        const bool branch_taken_0x2d00f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d00f0) {
            ctx->pc = 0x2D0140u;
            goto label_2d0140;
        }
    }
    ctx->pc = 0x2D00F8u;
    // 0x2d00f8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d00fc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2d00fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d0100: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2d0100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2d0104: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x2d0104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x2d0108: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2d0108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2d010c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d010cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0110: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2d0110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2d0114: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2d0114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d0118: 0xa0440003  sb          $a0, 0x3($v0)
    ctx->pc = 0x2d0118u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d011c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2d011cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d0120: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x2d0120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x2d0124: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2d0124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d0128: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2d0128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d012c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2d012cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2d0130: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d0130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0134: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2d0134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2d0138: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2d0138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2d013c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x2d013cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_2d0140:
    // 0x2d0140: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x2D0140u;
    SET_GPR_U32(ctx, 31, 0x2D0148u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x2D0140u, 0x2D0148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0148u;
label_2d0148:
    // 0x2d0148: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d0148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d014c: 0x8c44b4a8  lw          $a0, -0x4B58($v0)
    ctx->pc = 0x2d014cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2d0150: 0xc0b4118  jal         func_2D0460
    ctx->pc = 0x2D0150u;
    SET_GPR_U32(ctx, 31, 0x2D0158u);
    ctx->pc = 0x2D0154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0150u;
    // 0x2d0154: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0460u, 0x2D0150u, 0x2D0158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0158u;
label_2d0158:
    // 0x2d0158: 0xc0b34f8  jal         func_2CD3E0
    ctx->pc = 0x2D0158u;
    SET_GPR_U32(ctx, 31, 0x2D0160u);
    ctx->pc = 0x2CD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD3E0u, 0x2D0158u, 0x2D0160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0160u;
label_2d0160:
    // 0x2d0160: 0xc0e17f2  jal         func_385FC8
    ctx->pc = 0x2D0160u;
    SET_GPR_U32(ctx, 31, 0x2D0168u);
    ctx->pc = 0x2D0164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0160u;
    // 0x2d0164: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385FC8u, 0x2D0160u, 0x2D0168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0168u;
label_2d0168:
    // 0x2d0168: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0168u;
    {
        const bool branch_taken_0x2d0168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0168) {
            ctx->pc = 0x2D0188u;
            goto label_2d0188;
        }
    }
    ctx->pc = 0x2D0170u;
    // 0x2d0170: 0xc0b3f30  jal         func_2CFCC0
    ctx->pc = 0x2D0170u;
    SET_GPR_U32(ctx, 31, 0x2D0178u);
    ctx->pc = 0x2D0174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0170u;
    // 0x2d0174: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCC0u, 0x2D0170u, 0x2D0178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0178u;
label_2d0178:
    // 0x2d0178: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d0178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d017c: 0x1443ff70  bne         $v0, $v1, . + 4 + (-0x90 << 2)
    ctx->pc = 0x2D017Cu;
    {
        const bool branch_taken_0x2d017c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D017Cu;
        // 0x2d0180: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d017c) {
            ctx->pc = 0x2CFF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cff40;
        }
    }
    ctx->pc = 0x2D0184u;
    // 0x2d0184: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2d0184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_2d0188:
    // 0x2d0188: 0xc0e17d2  jal         func_385F48
    ctx->pc = 0x2D0188u;
    SET_GPR_U32(ctx, 31, 0x2D0190u);
    ctx->pc = 0x2D018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0188u;
    // 0x2d018c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385F48u, 0x2D0188u, 0x2D0190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0190u;
label_2d0190:
    // 0x2d0190: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d0190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d0194: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d0194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0198: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d0198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d019c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d019cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d01a0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d01a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d01a4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d01a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d01a8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2d01a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d01ac: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2d01acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d01b0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2d01b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d01b4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2d01b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d01b8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2d01b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d01bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D01BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D01C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01BCu;
        // 0x2d01c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D01BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D01C4u;
    // 0x2d01c4: 0x0  nop
    ctx->pc = 0x2d01c4u;
    // NOP
    ctx->pc = 0x2d01c8u;
}
