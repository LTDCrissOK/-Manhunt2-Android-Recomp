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

// Function: sub_0020CF78
// Address: 0x20cf78 - 0x20d120
void sub_0020CF78_0x20cf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CF78_0x20cf78");
#endif

    switch (ctx->pc) {
        case 0x20cf94u: goto label_20cf94;
        case 0x20cfa8u: goto label_20cfa8;
        case 0x20cfd0u: goto label_20cfd0;
        case 0x20cfe4u: goto label_20cfe4;
        case 0x20d004u: goto label_20d004;
        case 0x20d018u: goto label_20d018;
        case 0x20d03cu: goto label_20d03c;
        case 0x20d044u: goto label_20d044;
        case 0x20d04cu: goto label_20d04c;
        case 0x20d06cu: goto label_20d06c;
        case 0x20d080u: goto label_20d080;
        case 0x20d08cu: goto label_20d08c;
        case 0x20d0a0u: goto label_20d0a0;
        case 0x20d0b4u: goto label_20d0b4;
        case 0x20d0c0u: goto label_20d0c0;
        case 0x20d0d4u: goto label_20d0d4;
        case 0x20d0f0u: goto label_20d0f0;
        case 0x20d100u: goto label_20d100;
        case 0x20d10cu: goto label_20d10c;
        default: break;
    }

    ctx->pc = 0x20cf78u;

    // 0x20cf78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20cf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20cf7c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20cf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20cf80: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x20cf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x20cf84: 0x24a512a0  addiu       $a1, $a1, 0x12A0
    ctx->pc = 0x20cf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4768));
    // 0x20cf88: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x20cf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x20cf8c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CF8Cu;
    SET_GPR_U32(ctx, 31, 0x20CF94u);
    ctx->pc = 0x20CF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CF8Cu;
    // 0x20cf90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CF8Cu, 0x20CF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF94u;
label_20cf94:
    // 0x20cf94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20cf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20cf98: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20CF98u;
    {
        const bool branch_taken_0x20cf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF98u;
        // 0x20cf9c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf98) {
            ctx->pc = 0x20CFC4u;
            goto label_20cfc4;
        }
    }
    ctx->pc = 0x20CFA0u;
    // 0x20cfa0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CFA0u;
    SET_GPR_U32(ctx, 31, 0x20CFA8u);
    ctx->pc = 0x20CFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CFA0u;
    // 0x20cfa4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CFA0u, 0x20CFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CFA8u;
label_20cfa8:
    // 0x20cfa8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x20cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x20cfac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20cfacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cfb0: 0x24631770  addiu       $v1, $v1, 0x1770
    ctx->pc = 0x20cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6000));
    // 0x20cfb4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x20cfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x20cfb8: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x20cfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x20cfbc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x20CFBCu;
    {
        const bool branch_taken_0x20cfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFBCu;
        // 0x20cfc0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cfbc) {
            ctx->pc = 0x20D034u;
            goto label_20d034;
        }
    }
    ctx->pc = 0x20CFC4u;
label_20cfc4:
    // 0x20cfc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cfc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cfc8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CFC8u;
    SET_GPR_U32(ctx, 31, 0x20CFD0u);
    ctx->pc = 0x20CFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CFC8u;
    // 0x20cfcc: 0x24a512b0  addiu       $a1, $a1, 0x12B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CFC8u, 0x20CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CFD0u;
label_20cfd0:
    // 0x20cfd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20cfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20cfd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20CFD4u;
    {
        const bool branch_taken_0x20cfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFD4u;
        // 0x20cfd8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cfd4) {
            ctx->pc = 0x20CFF8u;
            goto label_20cff8;
        }
    }
    ctx->pc = 0x20CFDCu;
    // 0x20cfdc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CFDCu;
    SET_GPR_U32(ctx, 31, 0x20CFE4u);
    ctx->pc = 0x20CFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CFDCu;
    // 0x20cfe0: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CFDCu, 0x20CFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CFE4u;
label_20cfe4:
    // 0x20cfe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20cfe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cfe8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x20cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x20cfec: 0x24631770  addiu       $v1, $v1, 0x1770
    ctx->pc = 0x20cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6000));
    // 0x20cff0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20CFF0u;
    {
        const bool branch_taken_0x20cff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFF0u;
        // 0x20cff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cff0) {
            ctx->pc = 0x20D028u;
            goto label_20d028;
        }
    }
    ctx->pc = 0x20CFF8u;
label_20cff8:
    // 0x20cff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20cff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cffc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20CFFCu;
    SET_GPR_U32(ctx, 31, 0x20D004u);
    ctx->pc = 0x20D000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CFFCu;
    // 0x20d000: 0x24a512c0  addiu       $a1, $a1, 0x12C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20CFFCu, 0x20D004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D004u;
label_20d004:
    // 0x20d004: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d008: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x20D008u;
    {
        const bool branch_taken_0x20d008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D008u;
        // 0x20d00c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d008) {
            ctx->pc = 0x20D060u;
            goto label_20d060;
        }
    }
    ctx->pc = 0x20D010u;
    // 0x20d010: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20D010u;
    SET_GPR_U32(ctx, 31, 0x20D018u);
    ctx->pc = 0x20D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D010u;
    // 0x20d014: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20D010u, 0x20D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D018u;
label_20d018:
    // 0x20d018: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20d018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d01c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x20d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x20d020: 0x24631770  addiu       $v1, $v1, 0x1770
    ctx->pc = 0x20d020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6000));
    // 0x20d024: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20d028:
    // 0x20d028: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x20d028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x20d02c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x20d02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x20d030: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20d030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20d034:
    // 0x20d034: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x20D034u;
    SET_GPR_U32(ctx, 31, 0x20D03Cu);
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x20D034u, 0x20D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D03Cu;
label_20d03c:
    // 0x20d03c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x20D03Cu;
    SET_GPR_U32(ctx, 31, 0x20D044u);
    ctx->pc = 0x20D040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D03Cu;
    // 0x20d040: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20D03Cu, 0x20D044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D044u;
label_20d044:
    // 0x20d044: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x20D044u;
    SET_GPR_U32(ctx, 31, 0x20D04Cu);
    ctx->pc = 0x20D048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D044u;
    // 0x20d048: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x20D044u, 0x20D04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D04Cu;
label_20d04c:
    // 0x20d04c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20d04cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d050: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x20d050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x20d054: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x20d054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x20d058: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x20D058u;
    {
        const bool branch_taken_0x20d058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D058u;
        // 0x20d05c: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d058) {
            ctx->pc = 0x20D10Cu;
            goto label_20d10c;
        }
    }
    ctx->pc = 0x20D060u;
label_20d060:
    // 0x20d060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d064: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D064u;
    SET_GPR_U32(ctx, 31, 0x20D06Cu);
    ctx->pc = 0x20D068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D064u;
    // 0x20d068: 0x24a512d0  addiu       $a1, $a1, 0x12D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D064u, 0x20D06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D06Cu;
label_20d06c:
    // 0x20d06c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d070: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20D070u;
    {
        const bool branch_taken_0x20d070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D070u;
        // 0x20d074: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d070) {
            ctx->pc = 0x20D094u;
            goto label_20d094;
        }
    }
    ctx->pc = 0x20D078u;
    // 0x20d078: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20D078u;
    SET_GPR_U32(ctx, 31, 0x20D080u);
    ctx->pc = 0x20D07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D078u;
    // 0x20d07c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20D078u, 0x20D080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D080u;
label_20d080:
    // 0x20d080: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20d080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d084: 0xc0892cc  jal         func_224B30
    ctx->pc = 0x20D084u;
    SET_GPR_U32(ctx, 31, 0x20D08Cu);
    ctx->pc = 0x20D088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D084u;
    // 0x20d088: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224B30u, 0x20D084u, 0x20D08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D08Cu;
label_20d08c:
    // 0x20d08c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x20D08Cu;
    {
        const bool branch_taken_0x20d08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D08Cu;
        // 0x20d090: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d08c) {
            ctx->pc = 0x20D110u;
            goto label_20d110;
        }
    }
    ctx->pc = 0x20D094u;
label_20d094:
    // 0x20d094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d098: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D098u;
    SET_GPR_U32(ctx, 31, 0x20D0A0u);
    ctx->pc = 0x20D09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D098u;
    // 0x20d09c: 0x24a512e0  addiu       $a1, $a1, 0x12E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D098u, 0x20D0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0A0u;
label_20d0a0:
    // 0x20d0a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d0a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20D0A4u;
    {
        const bool branch_taken_0x20d0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0A4u;
        // 0x20d0a8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d0a4) {
            ctx->pc = 0x20D0C8u;
            goto label_20d0c8;
        }
    }
    ctx->pc = 0x20D0ACu;
    // 0x20d0ac: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20D0ACu;
    SET_GPR_U32(ctx, 31, 0x20D0B4u);
    ctx->pc = 0x20D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D0ACu;
    // 0x20d0b0: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20D0ACu, 0x20D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0B4u;
label_20d0b4:
    // 0x20d0b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20d0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d0b8: 0xc089352  jal         func_224D48
    ctx->pc = 0x20D0B8u;
    SET_GPR_U32(ctx, 31, 0x20D0C0u);
    ctx->pc = 0x20D0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D0B8u;
    // 0x20d0bc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224D48u, 0x20D0B8u, 0x20D0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0C0u;
label_20d0c0:
    // 0x20d0c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x20D0C0u;
    {
        const bool branch_taken_0x20d0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0C0u;
        // 0x20d0c4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d0c0) {
            ctx->pc = 0x20D110u;
            goto label_20d110;
        }
    }
    ctx->pc = 0x20D0C8u;
label_20d0c8:
    // 0x20d0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d0cc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20D0CCu;
    SET_GPR_U32(ctx, 31, 0x20D0D4u);
    ctx->pc = 0x20D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D0CCu;
    // 0x20d0d0: 0x24a512e8  addiu       $a1, $a1, 0x12E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20D0CCu, 0x20D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0D4u;
label_20d0d4:
    // 0x20d0d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20d0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20d0d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20D0D8u;
    {
        const bool branch_taken_0x20d0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0D8u;
        // 0x20d0dc: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d0d8) {
            ctx->pc = 0x20D0F8u;
            goto label_20d0f8;
        }
    }
    ctx->pc = 0x20D0E0u;
    // 0x20d0e0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x20d0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20d0e4: 0x24a512f8  addiu       $a1, $a1, 0x12F8
    ctx->pc = 0x20d0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4856));
    // 0x20d0e8: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x20D0E8u;
    SET_GPR_U32(ctx, 31, 0x20D0F0u);
    ctx->pc = 0x20D0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D0E8u;
    // 0x20d0ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x20D0E8u, 0x20D0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0F0u;
label_20d0f0:
    // 0x20d0f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20D0F0u;
    {
        const bool branch_taken_0x20d0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0F0u;
        // 0x20d0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d0f0) {
            ctx->pc = 0x20D10Cu;
            goto label_20d10c;
        }
    }
    ctx->pc = 0x20D0F8u;
label_20d0f8:
    // 0x20d0f8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20D0F8u;
    SET_GPR_U32(ctx, 31, 0x20D100u);
    ctx->pc = 0x20D0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D0F8u;
    // 0x20d0fc: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20D0F8u, 0x20D100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D100u;
label_20d100:
    // 0x20d100: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20d100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d104: 0xc0893e8  jal         func_224FA0
    ctx->pc = 0x20D104u;
    SET_GPR_U32(ctx, 31, 0x20D10Cu);
    ctx->pc = 0x20D108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D104u;
    // 0x20d108: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224FA0u, 0x20D104u, 0x20D10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D10Cu;
label_20d10c:
    // 0x20d10c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x20d10cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20d110:
    // 0x20d110: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x20d110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20d114: 0x3e00008  jr          $ra
    ctx->pc = 0x20D114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D114u;
        // 0x20d118: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D11Cu;
    // 0x20d11c: 0x0  nop
    ctx->pc = 0x20d11cu;
    // NOP
    ctx->pc = 0x20d120u;
}
