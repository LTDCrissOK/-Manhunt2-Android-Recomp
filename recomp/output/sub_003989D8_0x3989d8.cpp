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

// Function: sub_003989D8
// Address: 0x3989d8 - 0x398c50
void sub_003989D8_0x3989d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003989D8_0x3989d8");
#endif

    switch (ctx->pc) {
        case 0x3989d8u: goto label_3989d8;
        case 0x3989dcu: goto label_3989dc;
        case 0x3989e0u: goto label_3989e0;
        case 0x3989e4u: goto label_3989e4;
        case 0x3989e8u: goto label_3989e8;
        case 0x3989ecu: goto label_3989ec;
        case 0x3989f0u: goto label_3989f0;
        case 0x3989f4u: goto label_3989f4;
        case 0x3989f8u: goto label_3989f8;
        case 0x3989fcu: goto label_3989fc;
        case 0x398a00u: goto label_398a00;
        case 0x398a04u: goto label_398a04;
        case 0x398a08u: goto label_398a08;
        case 0x398a0cu: goto label_398a0c;
        case 0x398a10u: goto label_398a10;
        case 0x398a14u: goto label_398a14;
        case 0x398a18u: goto label_398a18;
        case 0x398a1cu: goto label_398a1c;
        case 0x398a20u: goto label_398a20;
        case 0x398a24u: goto label_398a24;
        case 0x398a28u: goto label_398a28;
        case 0x398a2cu: goto label_398a2c;
        case 0x398a30u: goto label_398a30;
        case 0x398a34u: goto label_398a34;
        case 0x398a38u: goto label_398a38;
        case 0x398a3cu: goto label_398a3c;
        case 0x398a40u: goto label_398a40;
        case 0x398a44u: goto label_398a44;
        case 0x398a48u: goto label_398a48;
        case 0x398a4cu: goto label_398a4c;
        case 0x398a50u: goto label_398a50;
        case 0x398a54u: goto label_398a54;
        case 0x398a58u: goto label_398a58;
        case 0x398a5cu: goto label_398a5c;
        case 0x398a60u: goto label_398a60;
        case 0x398a64u: goto label_398a64;
        case 0x398a68u: goto label_398a68;
        case 0x398a6cu: goto label_398a6c;
        case 0x398a70u: goto label_398a70;
        case 0x398a74u: goto label_398a74;
        case 0x398a78u: goto label_398a78;
        case 0x398a7cu: goto label_398a7c;
        case 0x398a80u: goto label_398a80;
        case 0x398a84u: goto label_398a84;
        case 0x398a88u: goto label_398a88;
        case 0x398a8cu: goto label_398a8c;
        case 0x398a90u: goto label_398a90;
        case 0x398a94u: goto label_398a94;
        case 0x398a98u: goto label_398a98;
        case 0x398a9cu: goto label_398a9c;
        case 0x398aa0u: goto label_398aa0;
        case 0x398aa4u: goto label_398aa4;
        case 0x398aa8u: goto label_398aa8;
        case 0x398aacu: goto label_398aac;
        case 0x398ab0u: goto label_398ab0;
        case 0x398ab4u: goto label_398ab4;
        case 0x398ab8u: goto label_398ab8;
        case 0x398abcu: goto label_398abc;
        case 0x398ac0u: goto label_398ac0;
        case 0x398ac4u: goto label_398ac4;
        case 0x398ac8u: goto label_398ac8;
        case 0x398accu: goto label_398acc;
        case 0x398ad0u: goto label_398ad0;
        case 0x398ad4u: goto label_398ad4;
        case 0x398ad8u: goto label_398ad8;
        case 0x398adcu: goto label_398adc;
        case 0x398ae0u: goto label_398ae0;
        case 0x398ae4u: goto label_398ae4;
        case 0x398ae8u: goto label_398ae8;
        case 0x398aecu: goto label_398aec;
        case 0x398af0u: goto label_398af0;
        case 0x398af4u: goto label_398af4;
        case 0x398af8u: goto label_398af8;
        case 0x398afcu: goto label_398afc;
        case 0x398b00u: goto label_398b00;
        case 0x398b04u: goto label_398b04;
        case 0x398b08u: goto label_398b08;
        case 0x398b0cu: goto label_398b0c;
        case 0x398b10u: goto label_398b10;
        case 0x398b14u: goto label_398b14;
        case 0x398b18u: goto label_398b18;
        case 0x398b1cu: goto label_398b1c;
        case 0x398b20u: goto label_398b20;
        case 0x398b24u: goto label_398b24;
        case 0x398b28u: goto label_398b28;
        case 0x398b2cu: goto label_398b2c;
        case 0x398b30u: goto label_398b30;
        case 0x398b34u: goto label_398b34;
        case 0x398b38u: goto label_398b38;
        case 0x398b3cu: goto label_398b3c;
        case 0x398b40u: goto label_398b40;
        case 0x398b44u: goto label_398b44;
        case 0x398b48u: goto label_398b48;
        case 0x398b4cu: goto label_398b4c;
        case 0x398b50u: goto label_398b50;
        case 0x398b54u: goto label_398b54;
        case 0x398b58u: goto label_398b58;
        case 0x398b5cu: goto label_398b5c;
        case 0x398b60u: goto label_398b60;
        case 0x398b64u: goto label_398b64;
        case 0x398b68u: goto label_398b68;
        case 0x398b6cu: goto label_398b6c;
        case 0x398b70u: goto label_398b70;
        case 0x398b74u: goto label_398b74;
        case 0x398b78u: goto label_398b78;
        case 0x398b7cu: goto label_398b7c;
        case 0x398b80u: goto label_398b80;
        case 0x398b84u: goto label_398b84;
        case 0x398b88u: goto label_398b88;
        case 0x398b8cu: goto label_398b8c;
        case 0x398b90u: goto label_398b90;
        case 0x398b94u: goto label_398b94;
        case 0x398b98u: goto label_398b98;
        case 0x398b9cu: goto label_398b9c;
        case 0x398ba0u: goto label_398ba0;
        case 0x398ba4u: goto label_398ba4;
        case 0x398ba8u: goto label_398ba8;
        case 0x398bacu: goto label_398bac;
        case 0x398bb0u: goto label_398bb0;
        case 0x398bb4u: goto label_398bb4;
        case 0x398bb8u: goto label_398bb8;
        case 0x398bbcu: goto label_398bbc;
        case 0x398bc0u: goto label_398bc0;
        case 0x398bc4u: goto label_398bc4;
        case 0x398bc8u: goto label_398bc8;
        case 0x398bccu: goto label_398bcc;
        case 0x398bd0u: goto label_398bd0;
        case 0x398bd4u: goto label_398bd4;
        case 0x398bd8u: goto label_398bd8;
        case 0x398bdcu: goto label_398bdc;
        case 0x398be0u: goto label_398be0;
        case 0x398be4u: goto label_398be4;
        case 0x398be8u: goto label_398be8;
        case 0x398becu: goto label_398bec;
        case 0x398bf0u: goto label_398bf0;
        case 0x398bf4u: goto label_398bf4;
        case 0x398bf8u: goto label_398bf8;
        case 0x398bfcu: goto label_398bfc;
        case 0x398c00u: goto label_398c00;
        case 0x398c04u: goto label_398c04;
        case 0x398c08u: goto label_398c08;
        case 0x398c0cu: goto label_398c0c;
        case 0x398c10u: goto label_398c10;
        case 0x398c14u: goto label_398c14;
        case 0x398c18u: goto label_398c18;
        case 0x398c1cu: goto label_398c1c;
        case 0x398c20u: goto label_398c20;
        case 0x398c24u: goto label_398c24;
        case 0x398c28u: goto label_398c28;
        case 0x398c2cu: goto label_398c2c;
        case 0x398c30u: goto label_398c30;
        case 0x398c34u: goto label_398c34;
        case 0x398c38u: goto label_398c38;
        case 0x398c3cu: goto label_398c3c;
        case 0x398c40u: goto label_398c40;
        case 0x398c44u: goto label_398c44;
        case 0x398c48u: goto label_398c48;
        case 0x398c4cu: goto label_398c4c;
        default: break;
    }

    ctx->pc = 0x3989d8u;

label_3989d8:
    // 0x3989d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3989d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3989dc:
    // 0x3989dc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3989dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_3989e0:
    // 0x3989e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3989e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3989e4:
    // 0x3989e4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3989e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_3989e8:
    // 0x3989e8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3989e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_3989ec:
    // 0x3989ec: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3989ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_3989f0:
    // 0x3989f0: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x3989f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_3989f4:
    // 0x3989f4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3989f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_3989f8:
    // 0x3989f8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x3989f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_3989fc:
    // 0x3989fc: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x3989fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_398a00:
    // 0x398a00: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x398a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_398a04:
    // 0x398a04: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x398a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_398a08:
    // 0x398a08: 0x8e160004  lw          $s6, 0x4($s0)
    ctx->pc = 0x398a08u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_398a0c:
    // 0x398a0c: 0x8e150008  lw          $s5, 0x8($s0)
    ctx->pc = 0x398a0cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_398a10:
    // 0x398a10: 0xc0eb88e  jal         func_3AE238
label_398a14:
    if (ctx->pc == 0x398A14u) {
        ctx->pc = 0x398A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398A10u;
        // 0x398a14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398A18u;
        goto label_398a18;
    }
    ctx->pc = 0x398A10u;
    SET_GPR_U32(ctx, 31, 0x398A18u);
    ctx->pc = 0x398A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398A10u;
    // 0x398a14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE238u, 0x398A10u, 0x398A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398A18u;
label_398a18:
    // 0x398a18: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x398a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_398a1c:
    // 0x398a1c: 0xc0eb956  jal         func_3AE558
label_398a20:
    if (ctx->pc == 0x398A20u) {
        ctx->pc = 0x398A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398A1Cu;
        // 0x398a20: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398A24u;
        goto label_398a24;
    }
    ctx->pc = 0x398A1Cu;
    SET_GPR_U32(ctx, 31, 0x398A24u);
    ctx->pc = 0x398A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398A1Cu;
    // 0x398a20: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE558u, 0x398A1Cu, 0x398A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398A24u;
label_398a24:
    // 0x398a24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x398a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_398a28:
    // 0x398a28: 0xc0eb958  jal         func_3AE560
label_398a2c:
    if (ctx->pc == 0x398A2Cu) {
        ctx->pc = 0x398A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398A28u;
        // 0x398a2c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398A30u;
        goto label_398a30;
    }
    ctx->pc = 0x398A28u;
    SET_GPR_U32(ctx, 31, 0x398A30u);
    ctx->pc = 0x398A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398A28u;
    // 0x398a2c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE560u, 0x398A28u, 0x398A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398A30u;
label_398a30:
    // 0x398a30: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x398a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_398a34:
    // 0x398a34: 0xc0eb85c  jal         func_3AE170
label_398a38:
    if (ctx->pc == 0x398A38u) {
        ctx->pc = 0x398A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398A34u;
        // 0x398a38: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398A3Cu;
        goto label_398a3c;
    }
    ctx->pc = 0x398A34u;
    SET_GPR_U32(ctx, 31, 0x398A3Cu);
    ctx->pc = 0x398A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398A34u;
    // 0x398a38: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE170u, 0x398A34u, 0x398A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398A3Cu;
label_398a3c:
    // 0x398a3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x398a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_398a40:
    // 0x398a40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x398a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398a44:
    // 0x398a44: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
label_398a48:
    if (ctx->pc == 0x398A48u) {
        ctx->pc = 0x398A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398A44u;
        // 0x398a48: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398A4Cu;
        goto label_398a4c;
    }
    ctx->pc = 0x398A44u;
    {
        const bool branch_taken_0x398a44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x398a44) {
            ctx->pc = 0x398A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x398A44u;
            // 0x398a48: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x398A60u;
            goto label_398a60;
        }
    }
    ctx->pc = 0x398A4Cu;
label_398a4c:
    // 0x398a4c: 0xc0e64d2  jal         func_399348
label_398a50:
    if (ctx->pc == 0x398A50u) {
        ctx->pc = 0x398A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398A4Cu;
        // 0x398a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398A54u;
        goto label_398a54;
    }
    ctx->pc = 0x398A4Cu;
    SET_GPR_U32(ctx, 31, 0x398A54u);
    ctx->pc = 0x398A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398A4Cu;
    // 0x398a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399348u, 0x398A4Cu, 0x398A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398A54u;
label_398a54:
    // 0x398a54: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
label_398a58:
    if (ctx->pc == 0x398A58u) {
        ctx->pc = 0x398A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398A54u;
        // 0x398a58: 0x27b70010  addiu       $s7, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398A5Cu;
        goto label_398a5c;
    }
    ctx->pc = 0x398A54u;
    {
        const bool branch_taken_0x398a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x398A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398A54u;
        // 0x398a58: 0x27b70010  addiu       $s7, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398a54) {
            ctx->pc = 0x398A70u;
            goto label_398a70;
        }
    }
    ctx->pc = 0x398A5Cu;
label_398a5c:
    // 0x398a5c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x398a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_398a60:
    // 0x398a60: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x398a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_398a64:
    // 0x398a64: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x398a64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_398a68:
    // 0x398a68: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x398a68u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_398a6c:
    // 0x398a6c: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x398a6cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_398a70:
    // 0x398a70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x398a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_398a74:
    // 0x398a74: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x398a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_398a78:
    // 0x398a78: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x398a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_398a7c:
    // 0x398a7c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x398a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_398a80:
    // 0x398a80: 0xc0eb07e  jal         func_3AC1F8
label_398a84:
    if (ctx->pc == 0x398A84u) {
        ctx->pc = 0x398A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398A80u;
        // 0x398a84: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398A88u;
        goto label_398a88;
    }
    ctx->pc = 0x398A80u;
    SET_GPR_U32(ctx, 31, 0x398A88u);
    ctx->pc = 0x398A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398A80u;
    // 0x398a84: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x398A80u, 0x398A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398A88u;
label_398a88:
    // 0x398a88: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x398a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_398a8c:
    // 0x398a8c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x398a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_398a90:
    // 0x398a90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x398a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_398a94:
    // 0x398a94: 0x8c470020  lw          $a3, 0x20($v0)
    ctx->pc = 0x398a94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_398a98:
    // 0x398a98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x398a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398a9c:
    // 0x398a9c: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x398a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_398aa0:
    // 0x398aa0: 0xe0f809  jalr        $a3
label_398aa4:
    if (ctx->pc == 0x398AA4u) {
        ctx->pc = 0x398AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398AA0u;
        // 0x398aa4: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398AA8u;
        goto label_398aa8;
    }
    ctx->pc = 0x398AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x398AA8u);
        ctx->pc = 0x398AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398AA0u;
        // 0x398aa4: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398AA0u, 0x398AA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398AA8u;
label_398aa8:
    // 0x398aa8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x398aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_398aac:
    // 0x398aac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x398aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_398ab0:
    // 0x398ab0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398ab4:
    // 0x398ab4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x398ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_398ab8:
    // 0x398ab8: 0x40f809  jalr        $v0
label_398abc:
    if (ctx->pc == 0x398ABCu) {
        ctx->pc = 0x398ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398AB8u;
        // 0x398abc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398AC0u;
        goto label_398ac0;
    }
    ctx->pc = 0x398AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398AC0u);
        ctx->pc = 0x398ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398AB8u;
        // 0x398abc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398AB8u, 0x398AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398AC0u;
label_398ac0:
    // 0x398ac0: 0x10000019  b           . + 4 + (0x19 << 2)
label_398ac4:
    if (ctx->pc == 0x398AC4u) {
        ctx->pc = 0x398AC8u;
        goto label_398ac8;
    }
    ctx->pc = 0x398AC0u;
    {
        const bool branch_taken_0x398ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x398ac0) {
            ctx->pc = 0x398B28u;
            goto label_398b28;
        }
    }
    ctx->pc = 0x398AC8u;
label_398ac8:
    // 0x398ac8: 0xc0eb07e  jal         func_3AC1F8
label_398acc:
    if (ctx->pc == 0x398ACCu) {
        ctx->pc = 0x398AD0u;
        goto label_398ad0;
    }
    ctx->pc = 0x398AC8u;
    SET_GPR_U32(ctx, 31, 0x398AD0u);
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x398AC8u, 0x398AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398AD0u;
label_398ad0:
    // 0x398ad0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x398ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_398ad4:
    // 0x398ad4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x398ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_398ad8:
    // 0x398ad8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_398adc:
    if (ctx->pc == 0x398ADCu) {
        ctx->pc = 0x398ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398AD8u;
        // 0x398adc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398AE0u;
        goto label_398ae0;
    }
    ctx->pc = 0x398AD8u;
    {
        const bool branch_taken_0x398ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x398ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398AD8u;
        // 0x398adc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398ad8) {
            ctx->pc = 0x398AF0u;
            goto label_398af0;
        }
    }
    ctx->pc = 0x398AE0u;
label_398ae0:
    // 0x398ae0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x398ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_398ae4:
    // 0x398ae4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x398ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_398ae8:
    // 0x398ae8: 0x40f809  jalr        $v0
label_398aec:
    if (ctx->pc == 0x398AECu) {
        ctx->pc = 0x398AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398AE8u;
        // 0x398aec: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398AF0u;
        goto label_398af0;
    }
    ctx->pc = 0x398AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398AF0u);
        ctx->pc = 0x398AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398AE8u;
        // 0x398aec: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398AE8u, 0x398AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398AF0u;
label_398af0:
    // 0x398af0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x398af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_398af4:
    // 0x398af4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x398af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_398af8:
    // 0x398af8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x398af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398afc:
    // 0x398afc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x398afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_398b00:
    // 0x398b00: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x398b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_398b04:
    // 0x398b04: 0x40f809  jalr        $v0
label_398b08:
    if (ctx->pc == 0x398B08u) {
        ctx->pc = 0x398B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B04u;
        // 0x398b08: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398B0Cu;
        goto label_398b0c;
    }
    ctx->pc = 0x398B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398B0Cu);
        ctx->pc = 0x398B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B04u;
        // 0x398b08: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398B04u, 0x398B0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398B0Cu;
label_398b0c:
    // 0x398b0c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x398b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_398b10:
    // 0x398b10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x398b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398b14:
    // 0x398b14: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x398b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_398b18:
    // 0x398b18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x398b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_398b1c:
    // 0x398b1c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x398b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_398b20:
    // 0x398b20: 0x40f809  jalr        $v0
label_398b24:
    if (ctx->pc == 0x398B24u) {
        ctx->pc = 0x398B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B20u;
        // 0x398b24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398B28u;
        goto label_398b28;
    }
    ctx->pc = 0x398B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x398B28u);
        ctx->pc = 0x398B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B20u;
        // 0x398b24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398B20u, 0x398B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398B28u;
label_398b28:
    // 0x398b28: 0xc0eb860  jal         func_3AE180
label_398b2c:
    if (ctx->pc == 0x398B2Cu) {
        ctx->pc = 0x398B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B28u;
        // 0x398b2c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398B30u;
        goto label_398b30;
    }
    ctx->pc = 0x398B28u;
    SET_GPR_U32(ctx, 31, 0x398B30u);
    ctx->pc = 0x398B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398B28u;
    // 0x398b2c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE180u, 0x398B28u, 0x398B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398B30u;
label_398b30:
    // 0x398b30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x398b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_398b34:
    // 0x398b34: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x398b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_398b38:
    // 0x398b38: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x398b38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_398b3c:
    // 0x398b3c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x398b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_398b40:
    // 0x398b40: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_398b44:
    if (ctx->pc == 0x398B44u) {
        ctx->pc = 0x398B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B40u;
        // 0x398b44: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398B48u;
        goto label_398b48;
    }
    ctx->pc = 0x398B40u;
    {
        const bool branch_taken_0x398b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B40u;
        // 0x398b44: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398b40) {
            ctx->pc = 0x398AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398ac8;
        }
    }
    ctx->pc = 0x398B48u;
label_398b48:
    // 0x398b48: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x398b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_398b4c:
    // 0x398b4c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x398b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_398b50:
    // 0x398b50: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x398b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_398b54:
    // 0x398b54: 0x8e070034  lw          $a3, 0x34($s0)
    ctx->pc = 0x398b54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_398b58:
    // 0x398b58: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x398b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_398b5c:
    // 0x398b5c: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x398b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_398b60:
    // 0x398b60: 0xbe2821  addu        $a1, $a1, $fp
    ctx->pc = 0x398b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_398b64:
    // 0x398b64: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x398b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_398b68:
    // 0x398b68: 0xf23821  addu        $a3, $a3, $s2
    ctx->pc = 0x398b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
label_398b6c:
    // 0x398b6c: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x398b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_398b70:
    // 0x398b70: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x398b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_398b74:
    // 0x398b74: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x398b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_398b78:
    // 0x398b78: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x398b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
label_398b7c:
    // 0x398b7c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x398b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_398b80:
    // 0x398b80: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x398b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
label_398b84:
    // 0x398b84: 0xc0eb946  jal         func_3AE518
label_398b88:
    if (ctx->pc == 0x398B88u) {
        ctx->pc = 0x398B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398B84u;
        // 0x398b88: 0xae060040  sw          $a2, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398B8Cu;
        goto label_398b8c;
    }
    ctx->pc = 0x398B84u;
    SET_GPR_U32(ctx, 31, 0x398B8Cu);
    ctx->pc = 0x398B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398B84u;
    // 0x398b88: 0xae060040  sw          $a2, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE518u, 0x398B84u, 0x398B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398B8Cu;
label_398b8c:
    // 0x398b8c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x398b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_398b90:
    // 0x398b90: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x398b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_398b94:
    // 0x398b94: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x398b94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_398b98:
    // 0x398b98: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x398b98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_398b9c:
    // 0x398b9c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x398b9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_398ba0:
    // 0x398ba0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x398ba0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_398ba4:
    // 0x398ba4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x398ba4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_398ba8:
    // 0x398ba8: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x398ba8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_398bac:
    // 0x398bac: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x398bacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_398bb0:
    // 0x398bb0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x398bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_398bb4:
    // 0x398bb4: 0x3e00008  jr          $ra
label_398bb8:
    if (ctx->pc == 0x398BB8u) {
        ctx->pc = 0x398BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398BB4u;
        // 0x398bb8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398BBCu;
        goto label_398bbc;
    }
    ctx->pc = 0x398BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398BB4u;
        // 0x398bb8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398BBCu;
label_398bbc:
    // 0x398bbc: 0x0  nop
    ctx->pc = 0x398bbcu;
    // NOP
label_398bc0:
    // 0x398bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x398bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_398bc4:
    // 0x398bc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x398bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_398bc8:
    // 0x398bc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x398bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_398bcc:
    // 0x398bcc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x398bccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398bd0:
    // 0x398bd0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x398bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_398bd4:
    // 0x398bd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x398bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_398bd8:
    // 0x398bd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x398bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_398bdc:
    // 0x398bdc: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x398bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_398be0:
    // 0x398be0: 0xc0eb88e  jal         func_3AE238
label_398be4:
    if (ctx->pc == 0x398BE4u) {
        ctx->pc = 0x398BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398BE0u;
        // 0x398be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398BE8u;
        goto label_398be8;
    }
    ctx->pc = 0x398BE0u;
    SET_GPR_U32(ctx, 31, 0x398BE8u);
    ctx->pc = 0x398BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398BE0u;
    // 0x398be4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE238u, 0x398BE0u, 0x398BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398BE8u;
label_398be8:
    // 0x398be8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x398be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_398bec:
    // 0x398bec: 0xc0eb956  jal         func_3AE558
label_398bf0:
    if (ctx->pc == 0x398BF0u) {
        ctx->pc = 0x398BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398BECu;
        // 0x398bf0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398BF4u;
        goto label_398bf4;
    }
    ctx->pc = 0x398BECu;
    SET_GPR_U32(ctx, 31, 0x398BF4u);
    ctx->pc = 0x398BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398BECu;
    // 0x398bf0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE558u, 0x398BECu, 0x398BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398BF4u;
label_398bf4:
    // 0x398bf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x398bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_398bf8:
    // 0x398bf8: 0xc0eb958  jal         func_3AE560
label_398bfc:
    if (ctx->pc == 0x398BFCu) {
        ctx->pc = 0x398BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398BF8u;
        // 0x398bfc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398C00u;
        goto label_398c00;
    }
    ctx->pc = 0x398BF8u;
    SET_GPR_U32(ctx, 31, 0x398C00u);
    ctx->pc = 0x398BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398BF8u;
    // 0x398bfc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE560u, 0x398BF8u, 0x398C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398C00u;
label_398c00:
    // 0x398c00: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x398c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_398c04:
    // 0x398c04: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x398c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_398c08:
    // 0x398c08: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x398c08u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_398c0c:
    // 0x398c0c: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x398c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_398c10:
    // 0x398c10: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x398c10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_398c14:
    // 0x398c14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x398c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_398c18:
    // 0x398c18: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x398c18u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_398c1c:
    // 0x398c1c: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x398c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_398c20:
    // 0x398c20: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x398c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_398c24:
    // 0x398c24: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x398c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_398c28:
    // 0x398c28: 0xae440034  sw          $a0, 0x34($s2)
    ctx->pc = 0x398c28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 4));
label_398c2c:
    // 0x398c2c: 0xae46002c  sw          $a2, 0x2C($s2)
    ctx->pc = 0x398c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 6));
label_398c30:
    // 0x398c30: 0xae450030  sw          $a1, 0x30($s2)
    ctx->pc = 0x398c30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 5));
label_398c34:
    // 0x398c34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x398c34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_398c38:
    // 0x398c38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x398c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_398c3c:
    // 0x398c3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x398c3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_398c40:
    // 0x398c40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x398c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_398c44:
    // 0x398c44: 0x3e00008  jr          $ra
label_398c48:
    if (ctx->pc == 0x398C48u) {
        ctx->pc = 0x398C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398C44u;
        // 0x398c48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398C4Cu;
        goto label_398c4c;
    }
    ctx->pc = 0x398C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398C44u;
        // 0x398c48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398C4Cu;
label_398c4c:
    // 0x398c4c: 0x0  nop
    ctx->pc = 0x398c4cu;
    // NOP
    ctx->pc = 0x398c50u;
}
