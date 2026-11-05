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

// Function: sub_00206A20
// Address: 0x206a20 - 0x206c10
void sub_00206A20_0x206a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206A20_0x206a20");
#endif

    switch (ctx->pc) {
        case 0x206a20u: goto label_206a20;
        case 0x206a24u: goto label_206a24;
        case 0x206a28u: goto label_206a28;
        case 0x206a2cu: goto label_206a2c;
        case 0x206a30u: goto label_206a30;
        case 0x206a34u: goto label_206a34;
        case 0x206a38u: goto label_206a38;
        case 0x206a3cu: goto label_206a3c;
        case 0x206a40u: goto label_206a40;
        case 0x206a44u: goto label_206a44;
        case 0x206a48u: goto label_206a48;
        case 0x206a4cu: goto label_206a4c;
        case 0x206a50u: goto label_206a50;
        case 0x206a54u: goto label_206a54;
        case 0x206a58u: goto label_206a58;
        case 0x206a5cu: goto label_206a5c;
        case 0x206a60u: goto label_206a60;
        case 0x206a64u: goto label_206a64;
        case 0x206a68u: goto label_206a68;
        case 0x206a6cu: goto label_206a6c;
        case 0x206a70u: goto label_206a70;
        case 0x206a74u: goto label_206a74;
        case 0x206a78u: goto label_206a78;
        case 0x206a7cu: goto label_206a7c;
        case 0x206a80u: goto label_206a80;
        case 0x206a84u: goto label_206a84;
        case 0x206a88u: goto label_206a88;
        case 0x206a8cu: goto label_206a8c;
        case 0x206a90u: goto label_206a90;
        case 0x206a94u: goto label_206a94;
        case 0x206a98u: goto label_206a98;
        case 0x206a9cu: goto label_206a9c;
        case 0x206aa0u: goto label_206aa0;
        case 0x206aa4u: goto label_206aa4;
        case 0x206aa8u: goto label_206aa8;
        case 0x206aacu: goto label_206aac;
        case 0x206ab0u: goto label_206ab0;
        case 0x206ab4u: goto label_206ab4;
        case 0x206ab8u: goto label_206ab8;
        case 0x206abcu: goto label_206abc;
        case 0x206ac0u: goto label_206ac0;
        case 0x206ac4u: goto label_206ac4;
        case 0x206ac8u: goto label_206ac8;
        case 0x206accu: goto label_206acc;
        case 0x206ad0u: goto label_206ad0;
        case 0x206ad4u: goto label_206ad4;
        case 0x206ad8u: goto label_206ad8;
        case 0x206adcu: goto label_206adc;
        case 0x206ae0u: goto label_206ae0;
        case 0x206ae4u: goto label_206ae4;
        case 0x206ae8u: goto label_206ae8;
        case 0x206aecu: goto label_206aec;
        case 0x206af0u: goto label_206af0;
        case 0x206af4u: goto label_206af4;
        case 0x206af8u: goto label_206af8;
        case 0x206afcu: goto label_206afc;
        case 0x206b00u: goto label_206b00;
        case 0x206b04u: goto label_206b04;
        case 0x206b08u: goto label_206b08;
        case 0x206b0cu: goto label_206b0c;
        case 0x206b10u: goto label_206b10;
        case 0x206b14u: goto label_206b14;
        case 0x206b18u: goto label_206b18;
        case 0x206b1cu: goto label_206b1c;
        case 0x206b20u: goto label_206b20;
        case 0x206b24u: goto label_206b24;
        case 0x206b28u: goto label_206b28;
        case 0x206b2cu: goto label_206b2c;
        case 0x206b30u: goto label_206b30;
        case 0x206b34u: goto label_206b34;
        case 0x206b38u: goto label_206b38;
        case 0x206b3cu: goto label_206b3c;
        case 0x206b40u: goto label_206b40;
        case 0x206b44u: goto label_206b44;
        case 0x206b48u: goto label_206b48;
        case 0x206b4cu: goto label_206b4c;
        case 0x206b50u: goto label_206b50;
        case 0x206b54u: goto label_206b54;
        case 0x206b58u: goto label_206b58;
        case 0x206b5cu: goto label_206b5c;
        case 0x206b60u: goto label_206b60;
        case 0x206b64u: goto label_206b64;
        case 0x206b68u: goto label_206b68;
        case 0x206b6cu: goto label_206b6c;
        case 0x206b70u: goto label_206b70;
        case 0x206b74u: goto label_206b74;
        case 0x206b78u: goto label_206b78;
        case 0x206b7cu: goto label_206b7c;
        case 0x206b80u: goto label_206b80;
        case 0x206b84u: goto label_206b84;
        case 0x206b88u: goto label_206b88;
        case 0x206b8cu: goto label_206b8c;
        case 0x206b90u: goto label_206b90;
        case 0x206b94u: goto label_206b94;
        case 0x206b98u: goto label_206b98;
        case 0x206b9cu: goto label_206b9c;
        case 0x206ba0u: goto label_206ba0;
        case 0x206ba4u: goto label_206ba4;
        case 0x206ba8u: goto label_206ba8;
        case 0x206bacu: goto label_206bac;
        case 0x206bb0u: goto label_206bb0;
        case 0x206bb4u: goto label_206bb4;
        case 0x206bb8u: goto label_206bb8;
        case 0x206bbcu: goto label_206bbc;
        case 0x206bc0u: goto label_206bc0;
        case 0x206bc4u: goto label_206bc4;
        case 0x206bc8u: goto label_206bc8;
        case 0x206bccu: goto label_206bcc;
        case 0x206bd0u: goto label_206bd0;
        case 0x206bd4u: goto label_206bd4;
        case 0x206bd8u: goto label_206bd8;
        case 0x206bdcu: goto label_206bdc;
        case 0x206be0u: goto label_206be0;
        case 0x206be4u: goto label_206be4;
        case 0x206be8u: goto label_206be8;
        case 0x206becu: goto label_206bec;
        case 0x206bf0u: goto label_206bf0;
        case 0x206bf4u: goto label_206bf4;
        case 0x206bf8u: goto label_206bf8;
        case 0x206bfcu: goto label_206bfc;
        case 0x206c00u: goto label_206c00;
        case 0x206c04u: goto label_206c04;
        case 0x206c08u: goto label_206c08;
        case 0x206c0cu: goto label_206c0c;
        default: break;
    }

    ctx->pc = 0x206a20u;

label_206a20:
    // 0x206a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_206a24:
    // 0x206a24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x206a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_206a28:
    // 0x206a28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x206a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_206a2c:
    // 0x206a2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x206a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206a30:
    // 0x206a30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x206a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_206a34:
    // 0x206a34: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x206a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_206a38:
    // 0x206a38: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_206a3c:
    if (ctx->pc == 0x206A3Cu) {
        ctx->pc = 0x206A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A38u;
        // 0x206a3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A40u;
        goto label_206a40;
    }
    ctx->pc = 0x206A38u;
    {
        const bool branch_taken_0x206a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A38u;
        // 0x206a3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a38) {
            ctx->pc = 0x206AD0u;
            goto label_206ad0;
        }
    }
    ctx->pc = 0x206A40u;
label_206a40:
    // 0x206a40: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_206a44:
    if (ctx->pc == 0x206A44u) {
        ctx->pc = 0x206A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A40u;
        // 0x206a44: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A48u;
        goto label_206a48;
    }
    ctx->pc = 0x206A40u;
    {
        const bool branch_taken_0x206a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x206A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A40u;
        // 0x206a44: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a40) {
            ctx->pc = 0x206AA8u;
            goto label_206aa8;
        }
    }
    ctx->pc = 0x206A48u;
label_206a48:
    // 0x206a48: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x206a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_206a4c:
    // 0x206a4c: 0x1080006b  beqz        $a0, . + 4 + (0x6B << 2)
label_206a50:
    if (ctx->pc == 0x206A50u) {
        ctx->pc = 0x206A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A4Cu;
        // 0x206a50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A54u;
        goto label_206a54;
    }
    ctx->pc = 0x206A4Cu;
    {
        const bool branch_taken_0x206a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x206A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A4Cu;
        // 0x206a50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a4c) {
            ctx->pc = 0x206BFCu;
            goto label_206bfc;
        }
    }
    ctx->pc = 0x206A54u;
label_206a54:
    // 0x206a54: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x206a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_206a58:
    // 0x206a58: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x206a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_206a5c:
    // 0x206a5c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x206a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_206a60:
    // 0x206a60: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_206a64:
    if (ctx->pc == 0x206A64u) {
        ctx->pc = 0x206A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A60u;
        // 0x206a64: 0x8c830104  lw          $v1, 0x104($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A68u;
        goto label_206a68;
    }
    ctx->pc = 0x206A60u;
    {
        const bool branch_taken_0x206a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206a60) {
            ctx->pc = 0x206A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206A60u;
            // 0x206a64: 0x8c830104  lw          $v1, 0x104($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206A94u;
            goto label_206a94;
        }
    }
    ctx->pc = 0x206A68u;
label_206a68:
    // 0x206a68: 0xc08a1f2  jal         func_2287C8
label_206a6c:
    if (ctx->pc == 0x206A6Cu) {
        ctx->pc = 0x206A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A68u;
        // 0x206a6c: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A70u;
        goto label_206a70;
    }
    ctx->pc = 0x206A68u;
    SET_GPR_U32(ctx, 31, 0x206A70u);
    ctx->pc = 0x206A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A68u;
    // 0x206a6c: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x206A68u, 0x206A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A70u;
label_206a70:
    // 0x206a70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x206a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206a74:
    // 0x206a74: 0xc0f70ce  jal         func_3DC338
label_206a78:
    if (ctx->pc == 0x206A78u) {
        ctx->pc = 0x206A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A74u;
        // 0x206a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A7Cu;
        goto label_206a7c;
    }
    ctx->pc = 0x206A74u;
    SET_GPR_U32(ctx, 31, 0x206A7Cu);
    ctx->pc = 0x206A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A74u;
    // 0x206a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x206A74u, 0x206A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A7Cu;
label_206a7c:
    // 0x206a7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_206a80:
    if (ctx->pc == 0x206A80u) {
        ctx->pc = 0x206A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A7Cu;
        // 0x206a80: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A84u;
        goto label_206a84;
    }
    ctx->pc = 0x206A7Cu;
    {
        const bool branch_taken_0x206a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A7Cu;
        // 0x206a80: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a7c) {
            ctx->pc = 0x206A9Cu;
            goto label_206a9c;
        }
    }
    ctx->pc = 0x206A84u;
label_206a84:
    // 0x206a84: 0xc0c4900  jal         func_312400
label_206a88:
    if (ctx->pc == 0x206A88u) {
        ctx->pc = 0x206A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A84u;
        // 0x206a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A8Cu;
        goto label_206a8c;
    }
    ctx->pc = 0x206A84u;
    SET_GPR_U32(ctx, 31, 0x206A8Cu);
    ctx->pc = 0x206A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A84u;
    // 0x206a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x206A84u, 0x206A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A8Cu;
label_206a8c:
    // 0x206a8c: 0x10000003  b           . + 4 + (0x3 << 2)
label_206a90:
    if (ctx->pc == 0x206A90u) {
        ctx->pc = 0x206A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A8Cu;
        // 0x206a90: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A94u;
        goto label_206a94;
    }
    ctx->pc = 0x206A8Cu;
    {
        const bool branch_taken_0x206a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A8Cu;
        // 0x206a90: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a8c) {
            ctx->pc = 0x206A9Cu;
            goto label_206a9c;
        }
    }
    ctx->pc = 0x206A94u;
label_206a94:
    // 0x206a94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x206a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_206a98:
    // 0x206a98: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x206a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_206a9c:
    // 0x206a9c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x206a9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_206aa0:
    // 0x206aa0: 0xfa210050  sqc2        $vf1, 0x50($s1)
    ctx->pc = 0x206aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_206aa4:
    // 0x206aa4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x206aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_206aa8:
    // 0x206aa8: 0xc080614  jal         func_201850
label_206aac:
    if (ctx->pc == 0x206AACu) {
        ctx->pc = 0x206AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206AA8u;
        // 0x206aac: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206AB0u;
        goto label_206ab0;
    }
    ctx->pc = 0x206AA8u;
    SET_GPR_U32(ctx, 31, 0x206AB0u);
    ctx->pc = 0x206AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206AA8u;
    // 0x206aac: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201850u, 0x206AA8u, 0x206AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206AB0u;
label_206ab0:
    // 0x206ab0: 0x8e260044  lw          $a2, 0x44($s1)
    ctx->pc = 0x206ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_206ab4:
    // 0x206ab4: 0x2c480001  sltiu       $t0, $v0, 0x1
    ctx->pc = 0x206ab4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_206ab8:
    // 0x206ab8: 0x8e270048  lw          $a3, 0x48($s1)
    ctx->pc = 0x206ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_206abc:
    // 0x206abc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x206abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206ac0:
    // 0x206ac0: 0xc081b04  jal         func_206C10
label_206ac4:
    if (ctx->pc == 0x206AC4u) {
        ctx->pc = 0x206AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206AC0u;
        // 0x206ac4: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206AC8u;
        goto label_206ac8;
    }
    ctx->pc = 0x206AC0u;
    SET_GPR_U32(ctx, 31, 0x206AC8u);
    ctx->pc = 0x206AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206AC0u;
    // 0x206ac4: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206C10u, 0x206AC0u, 0x206AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206AC8u;
label_206ac8:
    // 0x206ac8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_206acc:
    if (ctx->pc == 0x206ACCu) {
        ctx->pc = 0x206ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206AC8u;
        // 0x206acc: 0x9222000f  lbu         $v0, 0xF($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206AD0u;
        goto label_206ad0;
    }
    ctx->pc = 0x206AC8u;
    {
        const bool branch_taken_0x206ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206AC8u;
        // 0x206acc: 0x9222000f  lbu         $v0, 0xF($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ac8) {
            ctx->pc = 0x206B3Cu;
            goto label_206b3c;
        }
    }
    ctx->pc = 0x206AD0u;
label_206ad0:
    // 0x206ad0: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x206ad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_206ad4:
    // 0x206ad4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_206ad8:
    if (ctx->pc == 0x206AD8u) {
        ctx->pc = 0x206AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206AD4u;
        // 0x206ad8: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206ADCu;
        goto label_206adc;
    }
    ctx->pc = 0x206AD4u;
    {
        const bool branch_taken_0x206ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206AD4u;
        // 0x206ad8: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ad4) {
            ctx->pc = 0x206B38u;
            goto label_206b38;
        }
    }
    ctx->pc = 0x206ADCu;
label_206adc:
    // 0x206adc: 0xc080616  jal         func_201858
label_206ae0:
    if (ctx->pc == 0x206AE0u) {
        ctx->pc = 0x206AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206ADCu;
        // 0x206ae0: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206AE4u;
        goto label_206ae4;
    }
    ctx->pc = 0x206ADCu;
    SET_GPR_U32(ctx, 31, 0x206AE4u);
    ctx->pc = 0x206AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206ADCu;
    // 0x206ae0: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201858u, 0x206ADCu, 0x206AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206AE4u;
label_206ae4:
    // 0x206ae4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x206ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_206ae8:
    // 0x206ae8: 0x0  nop
    ctx->pc = 0x206ae8u;
    // NOP
label_206aec:
    // 0x206aec: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x206aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_206af0:
    // 0x206af0: 0x3c013c01  lui         $at, 0x3C01
    ctx->pc = 0x206af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15361 << 16));
label_206af4:
    // 0x206af4: 0x34210204  ori         $at, $at, 0x204
    ctx->pc = 0x206af4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)516);
label_206af8:
    // 0x206af8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x206af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_206afc:
    // 0x206afc: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x206afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_206b00:
    // 0x206b00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x206b00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_206b04:
    // 0x206b04: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x206b04u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_206b08:
    // 0x206b08: 0xc0e3f5e  jal         func_38FD78
label_206b0c:
    if (ctx->pc == 0x206B0Cu) {
        ctx->pc = 0x206B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B08u;
        // 0x206b0c: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B10u;
        goto label_206b10;
    }
    ctx->pc = 0x206B08u;
    SET_GPR_U32(ctx, 31, 0x206B10u);
    ctx->pc = 0x206B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B08u;
    // 0x206b0c: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x206B08u, 0x206B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B10u;
label_206b10:
    // 0x206b10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x206b10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_206b14:
    // 0x206b14: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x206b14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_206b18:
    // 0x206b18: 0xc081710  jal         func_205C40
label_206b1c:
    if (ctx->pc == 0x206B1Cu) {
        ctx->pc = 0x206B20u;
        goto label_206b20;
    }
    ctx->pc = 0x206B18u;
    SET_GPR_U32(ctx, 31, 0x206B20u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x206B18u, 0x206B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B20u;
label_206b20:
    // 0x206b20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206b24:
    // 0x206b24: 0xc0817d4  jal         func_205F50
label_206b28:
    if (ctx->pc == 0x206B28u) {
        ctx->pc = 0x206B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B24u;
        // 0x206b28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B2Cu;
        goto label_206b2c;
    }
    ctx->pc = 0x206B24u;
    SET_GPR_U32(ctx, 31, 0x206B2Cu);
    ctx->pc = 0x206B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B24u;
    // 0x206b28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F50u, 0x206B24u, 0x206B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B2Cu;
label_206b2c:
    // 0x206b2c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x206b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_206b30:
    // 0x206b30: 0xc081560  jal         func_205580
label_206b34:
    if (ctx->pc == 0x206B34u) {
        ctx->pc = 0x206B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B30u;
        // 0x206b34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B38u;
        goto label_206b38;
    }
    ctx->pc = 0x206B30u;
    SET_GPR_U32(ctx, 31, 0x206B38u);
    ctx->pc = 0x206B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B30u;
    // 0x206b34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205580u, 0x206B30u, 0x206B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B38u;
label_206b38:
    // 0x206b38: 0x9222000f  lbu         $v0, 0xF($s1)
    ctx->pc = 0x206b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
label_206b3c:
    // 0x206b3c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_206b40:
    if (ctx->pc == 0x206B40u) {
        ctx->pc = 0x206B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B3Cu;
        // 0x206b40: 0x9222000d  lbu         $v0, 0xD($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B44u;
        goto label_206b44;
    }
    ctx->pc = 0x206B3Cu;
    {
        const bool branch_taken_0x206b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206b3c) {
            ctx->pc = 0x206B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206B3Cu;
            // 0x206b40: 0x9222000d  lbu         $v0, 0xD($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206B9Cu;
            goto label_206b9c;
        }
    }
    ctx->pc = 0x206B44u;
label_206b44:
    // 0x206b44: 0xc081972  jal         func_2065C8
label_206b48:
    if (ctx->pc == 0x206B48u) {
        ctx->pc = 0x206B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B44u;
        // 0x206b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B4Cu;
        goto label_206b4c;
    }
    ctx->pc = 0x206B44u;
    SET_GPR_U32(ctx, 31, 0x206B4Cu);
    ctx->pc = 0x206B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B44u;
    // 0x206b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2065C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2065C8u, 0x206B44u, 0x206B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B4Cu;
label_206b4c:
    // 0x206b4c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_206b50:
    if (ctx->pc == 0x206B50u) {
        ctx->pc = 0x206B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B4Cu;
        // 0x206b50: 0x9222000d  lbu         $v0, 0xD($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B54u;
        goto label_206b54;
    }
    ctx->pc = 0x206B4Cu;
    {
        const bool branch_taken_0x206b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206b4c) {
            ctx->pc = 0x206B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206B4Cu;
            // 0x206b50: 0x9222000d  lbu         $v0, 0xD($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206B9Cu;
            goto label_206b9c;
        }
    }
    ctx->pc = 0x206B54u;
label_206b54:
    // 0x206b54: 0x92220030  lbu         $v0, 0x30($s1)
    ctx->pc = 0x206b54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_206b58:
    // 0x206b58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_206b5c:
    if (ctx->pc == 0x206B5Cu) {
        ctx->pc = 0x206B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B58u;
        // 0x206b5c: 0xa220000f  sb          $zero, 0xF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B60u;
        goto label_206b60;
    }
    ctx->pc = 0x206B58u;
    {
        const bool branch_taken_0x206b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B58u;
        // 0x206b5c: 0xa220000f  sb          $zero, 0xF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b58) {
            ctx->pc = 0x206B80u;
            goto label_206b80;
        }
    }
    ctx->pc = 0x206B60u;
label_206b60:
    // 0x206b60: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x206b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_206b64:
    // 0x206b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x206b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206b68:
    // 0x206b68: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x206b68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_206b6c:
    // 0x206b6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x206b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206b70:
    // 0x206b70: 0xc08197c  jal         func_2065F0
label_206b74:
    if (ctx->pc == 0x206B74u) {
        ctx->pc = 0x206B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B70u;
        // 0x206b74: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B78u;
        goto label_206b78;
    }
    ctx->pc = 0x206B70u;
    SET_GPR_U32(ctx, 31, 0x206B78u);
    ctx->pc = 0x206B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B70u;
    // 0x206b74: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2065F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2065F0u, 0x206B70u, 0x206B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B78u;
label_206b78:
    // 0x206b78: 0x10000007  b           . + 4 + (0x7 << 2)
label_206b7c:
    if (ctx->pc == 0x206B7Cu) {
        ctx->pc = 0x206B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B78u;
        // 0x206b7c: 0xa2200030  sb          $zero, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B80u;
        goto label_206b80;
    }
    ctx->pc = 0x206B78u;
    {
        const bool branch_taken_0x206b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B78u;
        // 0x206b7c: 0xa2200030  sb          $zero, 0x30($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b78) {
            ctx->pc = 0x206B98u;
            goto label_206b98;
        }
    }
    ctx->pc = 0x206B80u;
label_206b80:
    // 0x206b80: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x206b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_206b84:
    // 0x206b84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x206b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206b88:
    // 0x206b88: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x206b88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_206b8c:
    // 0x206b8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x206b8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206b90:
    // 0x206b90: 0xc08197c  jal         func_2065F0
label_206b94:
    if (ctx->pc == 0x206B94u) {
        ctx->pc = 0x206B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B90u;
        // 0x206b94: 0x8e280014  lw          $t0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B98u;
        goto label_206b98;
    }
    ctx->pc = 0x206B90u;
    SET_GPR_U32(ctx, 31, 0x206B98u);
    ctx->pc = 0x206B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B90u;
    // 0x206b94: 0x8e280014  lw          $t0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2065F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2065F0u, 0x206B90u, 0x206B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B98u;
label_206b98:
    // 0x206b98: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x206b98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
label_206b9c:
    // 0x206b9c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_206ba0:
    if (ctx->pc == 0x206BA0u) {
        ctx->pc = 0x206BA4u;
        goto label_206ba4;
    }
    ctx->pc = 0x206B9Cu;
    {
        const bool branch_taken_0x206b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206b9c) {
            ctx->pc = 0x206BF0u;
            goto label_206bf0;
        }
    }
    ctx->pc = 0x206BA4u;
label_206ba4:
    // 0x206ba4: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x206ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_206ba8:
    // 0x206ba8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_206bac:
    if (ctx->pc == 0x206BACu) {
        ctx->pc = 0x206BB0u;
        goto label_206bb0;
    }
    ctx->pc = 0x206BA8u;
    {
        const bool branch_taken_0x206ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206ba8) {
            ctx->pc = 0x206BF0u;
            goto label_206bf0;
        }
    }
    ctx->pc = 0x206BB0u;
label_206bb0:
    // 0x206bb0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x206bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_206bb4:
    // 0x206bb4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x206bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_206bb8:
    // 0x206bb8: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x206bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_206bbc:
    // 0x206bbc: 0x40f809  jalr        $v0
label_206bc0:
    if (ctx->pc == 0x206BC0u) {
        ctx->pc = 0x206BC4u;
        goto label_206bc4;
    }
    ctx->pc = 0x206BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206BC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206BBCu, 0x206BC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206BC4u;
label_206bc4:
    // 0x206bc4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_206bc8:
    if (ctx->pc == 0x206BC8u) {
        ctx->pc = 0x206BCCu;
        goto label_206bcc;
    }
    ctx->pc = 0x206BC4u;
    {
        const bool branch_taken_0x206bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206bc4) {
            ctx->pc = 0x206BE8u;
            goto label_206be8;
        }
    }
    ctx->pc = 0x206BCCu;
label_206bcc:
    // 0x206bcc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x206bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_206bd0:
    // 0x206bd0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x206bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_206bd4:
    // 0x206bd4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x206bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_206bd8:
    // 0x206bd8: 0x40f809  jalr        $v0
label_206bdc:
    if (ctx->pc == 0x206BDCu) {
        ctx->pc = 0x206BE0u;
        goto label_206be0;
    }
    ctx->pc = 0x206BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206BE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206BD8u, 0x206BE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206BE0u;
label_206be0:
    // 0x206be0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_206be4:
    if (ctx->pc == 0x206BE4u) {
        ctx->pc = 0x206BE8u;
        goto label_206be8;
    }
    ctx->pc = 0x206BE0u;
    {
        const bool branch_taken_0x206be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206be0) {
            ctx->pc = 0x206BF0u;
            goto label_206bf0;
        }
    }
    ctx->pc = 0x206BE8u;
label_206be8:
    // 0x206be8: 0xc0819e8  jal         func_2067A0
label_206bec:
    if (ctx->pc == 0x206BECu) {
        ctx->pc = 0x206BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BE8u;
        // 0x206bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206BF0u;
        goto label_206bf0;
    }
    ctx->pc = 0x206BE8u;
    SET_GPR_U32(ctx, 31, 0x206BF0u);
    ctx->pc = 0x206BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206BE8u;
    // 0x206bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2067A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2067A0u, 0x206BE8u, 0x206BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206BF0u;
label_206bf0:
    // 0x206bf0: 0xc081c8a  jal         func_207228
label_206bf4:
    if (ctx->pc == 0x206BF4u) {
        ctx->pc = 0x206BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BF0u;
        // 0x206bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206BF8u;
        goto label_206bf8;
    }
    ctx->pc = 0x206BF0u;
    SET_GPR_U32(ctx, 31, 0x206BF8u);
    ctx->pc = 0x206BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206BF0u;
    // 0x206bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207228u, 0x206BF0u, 0x206BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206BF8u;
label_206bf8:
    // 0x206bf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x206bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206bfc:
    // 0x206bfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x206bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_206c00:
    // 0x206c00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x206c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_206c04:
    // 0x206c04: 0x3e00008  jr          $ra
label_206c08:
    if (ctx->pc == 0x206C08u) {
        ctx->pc = 0x206C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C04u;
        // 0x206c08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206C0Cu;
        goto label_206c0c;
    }
    ctx->pc = 0x206C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C04u;
        // 0x206c08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206C0Cu;
label_206c0c:
    // 0x206c0c: 0x0  nop
    ctx->pc = 0x206c0cu;
    // NOP
    ctx->pc = 0x206c10u;
}
