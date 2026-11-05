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

// Function: sub_0026EAA0
// Address: 0x26eaa0 - 0x26ec18
void sub_0026EAA0_0x26eaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EAA0_0x26eaa0");
#endif

    switch (ctx->pc) {
        case 0x26eab8u: goto label_26eab8;
        case 0x26ead8u: goto label_26ead8;
        case 0x26eb10u: goto label_26eb10;
        case 0x26eb24u: goto label_26eb24;
        case 0x26eb34u: goto label_26eb34;
        case 0x26eb58u: goto label_26eb58;
        case 0x26eb74u: goto label_26eb74;
        case 0x26eb84u: goto label_26eb84;
        case 0x26ebb0u: goto label_26ebb0;
        case 0x26ebc4u: goto label_26ebc4;
        case 0x26ebe0u: goto label_26ebe0;
        case 0x26ebfcu: goto label_26ebfc;
        default: break;
    }

    ctx->pc = 0x26eaa0u;

    // 0x26eaa0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x26eaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x26eaa4: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x26eaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x26eaa8: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x26eaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x26eaac: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x26eaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x26eab0: 0xc0835aa  jal         func_20D6A8
    ctx->pc = 0x26EAB0u;
    SET_GPR_U32(ctx, 31, 0x26EAB8u);
    ctx->pc = 0x26EAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EAB0u;
    // 0x26eab4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6A8u, 0x26EAB0u, 0x26EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EAB8u;
label_26eab8:
    // 0x26eab8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x26eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x26eabc: 0xae200220  sw          $zero, 0x220($s1)
    ctx->pc = 0x26eabcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 0));
    // 0x26eac0: 0x24632960  addiu       $v1, $v1, 0x2960
    ctx->pc = 0x26eac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10592));
    // 0x26eac4: 0xae200224  sw          $zero, 0x224($s1)
    ctx->pc = 0x26eac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 0));
    // 0x26eac8: 0xae200228  sw          $zero, 0x228($s1)
    ctx->pc = 0x26eac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 0));
    // 0x26eacc: 0x26240230  addiu       $a0, $s1, 0x230
    ctx->pc = 0x26eaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x26ead0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26EAD0u;
    SET_GPR_U32(ctx, 31, 0x26EAD8u);
    ctx->pc = 0x26EAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EAD0u;
    // 0x26ead4: 0xae230218  sw          $v1, 0x218($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26EAD0u, 0x26EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EAD8u;
label_26ead8:
    // 0x26ead8: 0xae200240  sw          $zero, 0x240($s1)
    ctx->pc = 0x26ead8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 0));
    // 0x26eadc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26eadcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26eae0: 0xa2200244  sb          $zero, 0x244($s1)
    ctx->pc = 0x26eae0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 580), (uint8_t)GPR_U32(ctx, 0));
    // 0x26eae4: 0x24a57c00  addiu       $a1, $a1, 0x7C00
    ctx->pc = 0x26eae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31744));
    // 0x26eae8: 0xa2200245  sb          $zero, 0x245($s1)
    ctx->pc = 0x26eae8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 581), (uint8_t)GPR_U32(ctx, 0));
    // 0x26eaec: 0xae200248  sw          $zero, 0x248($s1)
    ctx->pc = 0x26eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 0));
    // 0x26eaf0: 0xae20024c  sw          $zero, 0x24C($s1)
    ctx->pc = 0x26eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
    // 0x26eaf4: 0xae200250  sw          $zero, 0x250($s1)
    ctx->pc = 0x26eaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 0));
    // 0x26eaf8: 0xae200254  sw          $zero, 0x254($s1)
    ctx->pc = 0x26eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 0));
    // 0x26eafc: 0xae200258  sw          $zero, 0x258($s1)
    ctx->pc = 0x26eafcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 0));
    // 0x26eb00: 0xae20025c  sw          $zero, 0x25C($s1)
    ctx->pc = 0x26eb00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 0));
    // 0x26eb04: 0xae200264  sw          $zero, 0x264($s1)
    ctx->pc = 0x26eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
    // 0x26eb08: 0xc0c2e94  jal         func_30BA50
    ctx->pc = 0x26EB08u;
    SET_GPR_U32(ctx, 31, 0x26EB10u);
    ctx->pc = 0x26EB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB08u;
    // 0x26eb0c: 0x8e240104  lw          $a0, 0x104($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA50u, 0x26EB08u, 0x26EB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB10u;
label_26eb10:
    // 0x26eb10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26eb10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb14: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x26EB14u;
    {
        const bool branch_taken_0x26eb14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb14) {
            ctx->pc = 0x26EB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EB14u;
            // 0x26eb18: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EB3Cu;
            goto label_26eb3c;
        }
    }
    ctx->pc = 0x26EB1Cu;
    // 0x26eb1c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x26EB1Cu;
    SET_GPR_U32(ctx, 31, 0x26EB24u);
    ctx->pc = 0x26EB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB1Cu;
    // 0x26eb20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x26EB1Cu, 0x26EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB24u;
label_26eb24:
    // 0x26eb24: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26EB24u;
    {
        const bool branch_taken_0x26eb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB24u;
        // 0x26eb28: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb24) {
            ctx->pc = 0x26EB44u;
            goto label_26eb44;
        }
    }
    ctx->pc = 0x26EB2Cu;
    // 0x26eb2c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x26EB2Cu;
    SET_GPR_U32(ctx, 31, 0x26EB34u);
    ctx->pc = 0x26EB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB2Cu;
    // 0x26eb30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x26EB2Cu, 0x26EB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB34u;
label_26eb34:
    // 0x26eb34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26EB34u;
    {
        const bool branch_taken_0x26eb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB34u;
        // 0x26eb38: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb34) {
            ctx->pc = 0x26EB44u;
            goto label_26eb44;
        }
    }
    ctx->pc = 0x26EB3Cu;
label_26eb3c:
    // 0x26eb3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26eb40: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x26eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_26eb44:
    // 0x26eb44: 0xae220224  sw          $v0, 0x224($s1)
    ctx->pc = 0x26eb44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 2));
    // 0x26eb48: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26eb48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26eb4c: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x26eb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x26eb50: 0xc0c2e94  jal         func_30BA50
    ctx->pc = 0x26EB50u;
    SET_GPR_U32(ctx, 31, 0x26EB58u);
    ctx->pc = 0x26EB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB50u;
    // 0x26eb54: 0x24a57c08  addiu       $a1, $a1, 0x7C08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA50u, 0x26EB50u, 0x26EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB58u;
label_26eb58:
    // 0x26eb58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26eb58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eb5c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EB5Cu;
    {
        const bool branch_taken_0x26eb5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x26eb5c) {
            ctx->pc = 0x26EB6Cu;
            goto label_26eb6c;
        }
    }
    ctx->pc = 0x26EB64u;
    // 0x26eb64: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x26eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x26eb68: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26eb68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26eb6c:
    // 0x26eb6c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x26EB6Cu;
    SET_GPR_U32(ctx, 31, 0x26EB74u);
    ctx->pc = 0x26EB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB6Cu;
    // 0x26eb70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x26EB6Cu, 0x26EB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB74u;
label_26eb74:
    // 0x26eb74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EB74u;
    {
        const bool branch_taken_0x26eb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EB74u;
        // 0x26eb78: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eb74) {
            ctx->pc = 0x26EB88u;
            goto label_26eb88;
        }
    }
    ctx->pc = 0x26EB7Cu;
    // 0x26eb7c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x26EB7Cu;
    SET_GPR_U32(ctx, 31, 0x26EB84u);
    ctx->pc = 0x26EB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EB7Cu;
    // 0x26eb80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x26EB7Cu, 0x26EB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB84u;
label_26eb84:
    // 0x26eb84: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x26eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_26eb88:
    // 0x26eb88: 0xae220228  sw          $v0, 0x228($s1)
    ctx->pc = 0x26eb88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 552), GPR_U32(ctx, 2));
    // 0x26eb8c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x26eb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x26eb90: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x26eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x26eb94: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26eb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26eb98: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x26EB98u;
    {
        const bool branch_taken_0x26eb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26eb98) {
            ctx->pc = 0x26EB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EB98u;
            // 0x26eb9c: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EBE4u;
            goto label_26ebe4;
        }
    }
    ctx->pc = 0x26EBA0u;
    // 0x26eba0: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x26eba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x26eba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26eba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eba8: 0xc0696c8  jal         func_1A5B20
    ctx->pc = 0x26EBA8u;
    SET_GPR_U32(ctx, 31, 0x26EBB0u);
    ctx->pc = 0x26EBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBA8u;
    // 0x26ebac: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5B20u, 0x26EBA8u, 0x26EBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBB0u;
label_26ebb0:
    // 0x26ebb0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x26EBB0u;
    {
        const bool branch_taken_0x26ebb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ebb0) {
            ctx->pc = 0x26EBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EBB0u;
            // 0x26ebb4: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EBE4u;
            goto label_26ebe4;
        }
    }
    ctx->pc = 0x26EBB8u;
    // 0x26ebb8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x26ebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x26ebbc: 0xc069e04  jal         func_1A7810
    ctx->pc = 0x26EBBCu;
    SET_GPR_U32(ctx, 31, 0x26EBC4u);
    ctx->pc = 0x26EBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBBCu;
    // 0x26ebc0: 0x24840687  addiu       $a0, $a0, 0x687 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1671));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7810u, 0x26EBBCu, 0x26EBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBC4u;
label_26ebc4:
    // 0x26ebc4: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x26ebc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x26ebc8: 0x8e2800f8  lw          $t0, 0xF8($s1)
    ctx->pc = 0x26ebc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x26ebcc: 0x24c67c10  addiu       $a2, $a2, 0x7C10
    ctx->pc = 0x26ebccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31760));
    // 0x26ebd0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x26ebd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebd4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26ebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26ebd8: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x26EBD8u;
    SET_GPR_U32(ctx, 31, 0x26EBE0u);
    ctx->pc = 0x26EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBD8u;
    // 0x26ebdc: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x26EBD8u, 0x26EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBE0u;
label_26ebe0:
    // 0x26ebe0: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x26ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_26ebe4:
    // 0x26ebe4: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x26ebe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26ebe8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26EBE8u;
    {
        const bool branch_taken_0x26ebe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EBE8u;
        // 0x26ebec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ebe8) {
            ctx->pc = 0x26EC00u;
            goto label_26ec00;
        }
    }
    ctx->pc = 0x26EBF0u;
    // 0x26ebf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ebf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ebf4: 0xc084c9a  jal         func_213268
    ctx->pc = 0x26EBF4u;
    SET_GPR_U32(ctx, 31, 0x26EBFCu);
    ctx->pc = 0x26EBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EBF4u;
    // 0x26ebf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213268u, 0x26EBF4u, 0x26EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBFCu;
label_26ebfc:
    // 0x26ebfc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26ebfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26ec00:
    // 0x26ec00: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x26ec00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x26ec04: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x26ec04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x26ec08: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x26ec08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x26ec0c: 0x3e00008  jr          $ra
    ctx->pc = 0x26EC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EC0Cu;
        // 0x26ec10: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EC14u;
    // 0x26ec14: 0x0  nop
    ctx->pc = 0x26ec14u;
    // NOP
    ctx->pc = 0x26ec18u;
}
