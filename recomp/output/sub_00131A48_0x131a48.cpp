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

// Function: sub_00131A48
// Address: 0x131a48 - 0x131b60
void sub_00131A48_0x131a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131A48_0x131a48");
#endif

    switch (ctx->pc) {
        case 0x131a98u: goto label_131a98;
        case 0x131ac8u: goto label_131ac8;
        case 0x131adcu: goto label_131adc;
        case 0x131afcu: goto label_131afc;
        case 0x131b0cu: goto label_131b0c;
        case 0x131b14u: goto label_131b14;
        default: break;
    }

    ctx->pc = 0x131a48u;

    // 0x131a48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x131a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x131a4c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x131a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x131a50: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x131a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x131a54: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x131a54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131a58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131a5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x131a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x131a60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x131a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x131a64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x131a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x131a68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x131a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x131a6c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x131a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x131a70: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x131a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x131a74: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x131a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x131a78: 0x8ea20218  lw          $v0, 0x218($s5)
    ctx->pc = 0x131a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 536)));
    // 0x131a7c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x131A7Cu;
    {
        const bool branch_taken_0x131a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A7Cu;
        // 0x131a80: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a7c) {
            ctx->pc = 0x131B2Cu;
            goto label_131b2c;
        }
    }
    ctx->pc = 0x131A84u;
    // 0x131a84: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x131A84u;
    {
        const bool branch_taken_0x131a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A84u;
        // 0x131a88: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131a84) {
            ctx->pc = 0x131B2Cu;
            goto label_131b2c;
        }
    }
    ctx->pc = 0x131A8Cu;
    // 0x131a8c: 0x24170005  addiu       $s7, $zero, 0x5
    ctx->pc = 0x131a8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x131a90: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x131a90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x131a94: 0x26b1001c  addiu       $s1, $s5, 0x1C
    ctx->pc = 0x131a94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
label_131a98:
    // 0x131a98: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x131a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x131a9c: 0x5457001f  bnel        $v0, $s7, . + 4 + (0x1F << 2)
    ctx->pc = 0x131A9Cu;
    {
        const bool branch_taken_0x131a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x131a9c) {
            ctx->pc = 0x131AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131A9Cu;
            // 0x131aa0: 0x8ea20218  lw          $v0, 0x218($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131B1Cu;
            goto label_131b1c;
        }
    }
    ctx->pc = 0x131AA4u;
    // 0x131aa4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x131aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131aa8: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x131aa8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x131aac: 0x5054001b  beql        $v0, $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x131AACu;
    {
        const bool branch_taken_0x131aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x131aac) {
            ctx->pc = 0x131AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131AACu;
            // 0x131ab0: 0x8ea20218  lw          $v0, 0x218($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131B1Cu;
            goto label_131b1c;
        }
    }
    ctx->pc = 0x131AB4u;
    // 0x131ab4: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x131ab4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x131ab8: 0x52400018  beql        $s2, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x131AB8u;
    {
        const bool branch_taken_0x131ab8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x131ab8) {
            ctx->pc = 0x131ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131AB8u;
            // 0x131abc: 0x8ea20218  lw          $v0, 0x218($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131B1Cu;
            goto label_131b1c;
        }
    }
    ctx->pc = 0x131AC0u;
    // 0x131ac0: 0xc0461e0  jal         func_118780
    ctx->pc = 0x131AC0u;
    SET_GPR_U32(ctx, 31, 0x131AC8u);
    ctx->pc = 0x131AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131AC0u;
    // 0x131ac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118780u, 0x131AC0u, 0x131AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131AC8u;
label_131ac8:
    // 0x131ac8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x131ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131acc: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x131ACCu;
    {
        const bool branch_taken_0x131acc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x131acc) {
            ctx->pc = 0x131AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131ACCu;
            // 0x131ad0: 0x8ea20218  lw          $v0, 0x218($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131B1Cu;
            goto label_131b1c;
        }
    }
    ctx->pc = 0x131AD4u;
    // 0x131ad4: 0xc04244c  jal         func_109130
    ctx->pc = 0x131AD4u;
    SET_GPR_U32(ctx, 31, 0x131ADCu);
    ctx->pc = 0x131AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131AD4u;
    // 0x131ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109130u, 0x131AD4u, 0x131ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131ADCu;
label_131adc:
    // 0x131adc: 0x5456000f  bnel        $v0, $s6, . + 4 + (0xF << 2)
    ctx->pc = 0x131ADCu;
    {
        const bool branch_taken_0x131adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x131adc) {
            ctx->pc = 0x131AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131ADCu;
            // 0x131ae0: 0x8ea20218  lw          $v0, 0x218($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131B1Cu;
            goto label_131b1c;
        }
    }
    ctx->pc = 0x131AE4u;
    // 0x131ae4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x131ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x131ae8: 0x50540011  beql        $v0, $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x131AE8u;
    {
        const bool branch_taken_0x131ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x131ae8) {
            ctx->pc = 0x131AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131AE8u;
            // 0x131aec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131B30u;
            goto label_131b30;
        }
    }
    ctx->pc = 0x131AF0u;
    // 0x131af0: 0xae3e0000  sw          $fp, 0x0($s1)
    ctx->pc = 0x131af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 30));
    // 0x131af4: 0xc042426  jal         func_109098
    ctx->pc = 0x131AF4u;
    SET_GPR_U32(ctx, 31, 0x131AFCu);
    ctx->pc = 0x131AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131AF4u;
    // 0x131af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109098u, 0x131AF4u, 0x131AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131AFCu;
label_131afc:
    // 0x131afc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x131afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x131b00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x131b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131b04: 0xc041eca  jal         func_107B28
    ctx->pc = 0x131B04u;
    SET_GPR_U32(ctx, 31, 0x131B0Cu);
    ctx->pc = 0x131B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131B04u;
    // 0x131b08: 0x24448758  addiu       $a0, $v0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B28u, 0x131B04u, 0x131B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131B0Cu;
label_131b0c:
    // 0x131b0c: 0xc0461d8  jal         func_118760
    ctx->pc = 0x131B0Cu;
    SET_GPR_U32(ctx, 31, 0x131B14u);
    ctx->pc = 0x131B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131B0Cu;
    // 0x131b10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118760u, 0x131B0Cu, 0x131B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131B14u;
label_131b14:
    // 0x131b14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x131B14u;
    {
        const bool branch_taken_0x131b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B14u;
        // 0x131b18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b14) {
            ctx->pc = 0x131B30u;
            goto label_131b30;
        }
    }
    ctx->pc = 0x131B1Cu;
label_131b1c:
    // 0x131b1c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x131b1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x131b20: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x131b20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x131b24: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x131B24u;
    {
        const bool branch_taken_0x131b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B24u;
        // 0x131b28: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b24) {
            ctx->pc = 0x131A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131a98;
        }
    }
    ctx->pc = 0x131B2Cu;
label_131b2c:
    // 0x131b2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x131b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131b30:
    // 0x131b30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131b34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x131b34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131b38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x131b38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131b3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x131b3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x131b40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x131b40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131b44: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x131b44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131b48: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x131b48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131b4c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x131b4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131b50: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x131b50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131b54: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x131b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x131b58: 0x3e00008  jr          $ra
    ctx->pc = 0x131B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B58u;
        // 0x131b5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131B60u;
}
