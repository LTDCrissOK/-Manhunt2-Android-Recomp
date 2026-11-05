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

// Function: sub_00273A08
// Address: 0x273a08 - 0x273b40
void sub_00273A08_0x273a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273A08_0x273a08");
#endif

    switch (ctx->pc) {
        case 0x273a08u: goto label_273a08;
        case 0x273a0cu: goto label_273a0c;
        case 0x273a10u: goto label_273a10;
        case 0x273a14u: goto label_273a14;
        case 0x273a18u: goto label_273a18;
        case 0x273a1cu: goto label_273a1c;
        case 0x273a20u: goto label_273a20;
        case 0x273a24u: goto label_273a24;
        case 0x273a28u: goto label_273a28;
        case 0x273a2cu: goto label_273a2c;
        case 0x273a30u: goto label_273a30;
        case 0x273a34u: goto label_273a34;
        case 0x273a38u: goto label_273a38;
        case 0x273a3cu: goto label_273a3c;
        case 0x273a40u: goto label_273a40;
        case 0x273a44u: goto label_273a44;
        case 0x273a48u: goto label_273a48;
        case 0x273a4cu: goto label_273a4c;
        case 0x273a50u: goto label_273a50;
        case 0x273a54u: goto label_273a54;
        case 0x273a58u: goto label_273a58;
        case 0x273a5cu: goto label_273a5c;
        case 0x273a60u: goto label_273a60;
        case 0x273a64u: goto label_273a64;
        case 0x273a68u: goto label_273a68;
        case 0x273a6cu: goto label_273a6c;
        case 0x273a70u: goto label_273a70;
        case 0x273a74u: goto label_273a74;
        case 0x273a78u: goto label_273a78;
        case 0x273a7cu: goto label_273a7c;
        case 0x273a80u: goto label_273a80;
        case 0x273a84u: goto label_273a84;
        case 0x273a88u: goto label_273a88;
        case 0x273a8cu: goto label_273a8c;
        case 0x273a90u: goto label_273a90;
        case 0x273a94u: goto label_273a94;
        case 0x273a98u: goto label_273a98;
        case 0x273a9cu: goto label_273a9c;
        case 0x273aa0u: goto label_273aa0;
        case 0x273aa4u: goto label_273aa4;
        case 0x273aa8u: goto label_273aa8;
        case 0x273aacu: goto label_273aac;
        case 0x273ab0u: goto label_273ab0;
        case 0x273ab4u: goto label_273ab4;
        case 0x273ab8u: goto label_273ab8;
        case 0x273abcu: goto label_273abc;
        case 0x273ac0u: goto label_273ac0;
        case 0x273ac4u: goto label_273ac4;
        case 0x273ac8u: goto label_273ac8;
        case 0x273accu: goto label_273acc;
        case 0x273ad0u: goto label_273ad0;
        case 0x273ad4u: goto label_273ad4;
        case 0x273ad8u: goto label_273ad8;
        case 0x273adcu: goto label_273adc;
        case 0x273ae0u: goto label_273ae0;
        case 0x273ae4u: goto label_273ae4;
        case 0x273ae8u: goto label_273ae8;
        case 0x273aecu: goto label_273aec;
        case 0x273af0u: goto label_273af0;
        case 0x273af4u: goto label_273af4;
        case 0x273af8u: goto label_273af8;
        case 0x273afcu: goto label_273afc;
        case 0x273b00u: goto label_273b00;
        case 0x273b04u: goto label_273b04;
        case 0x273b08u: goto label_273b08;
        case 0x273b0cu: goto label_273b0c;
        case 0x273b10u: goto label_273b10;
        case 0x273b14u: goto label_273b14;
        case 0x273b18u: goto label_273b18;
        case 0x273b1cu: goto label_273b1c;
        case 0x273b20u: goto label_273b20;
        case 0x273b24u: goto label_273b24;
        case 0x273b28u: goto label_273b28;
        case 0x273b2cu: goto label_273b2c;
        case 0x273b30u: goto label_273b30;
        case 0x273b34u: goto label_273b34;
        case 0x273b38u: goto label_273b38;
        case 0x273b3cu: goto label_273b3c;
        default: break;
    }

    ctx->pc = 0x273a08u;

label_273a08:
    // 0x273a08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x273a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_273a0c:
    // 0x273a0c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x273a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_273a10:
    // 0x273a10: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x273a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_273a14:
    // 0x273a14: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x273a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_273a18:
    // 0x273a18: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x273a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_273a1c:
    // 0x273a1c: 0xc0845aa  jal         func_2116A8
label_273a20:
    if (ctx->pc == 0x273A20u) {
        ctx->pc = 0x273A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A1Cu;
        // 0x273a20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273A24u;
        goto label_273a24;
    }
    ctx->pc = 0x273A1Cu;
    SET_GPR_U32(ctx, 31, 0x273A24u);
    ctx->pc = 0x273A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273A1Cu;
    // 0x273a20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2116A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2116A8u, 0x273A1Cu, 0x273A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A24u;
label_273a24:
    // 0x273a24: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x273a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_273a28:
    // 0x273a28: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x273a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_273a2c:
    // 0x273a2c: 0x40f809  jalr        $v0
label_273a30:
    if (ctx->pc == 0x273A30u) {
        ctx->pc = 0x273A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A2Cu;
        // 0x273a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273A34u;
        goto label_273a34;
    }
    ctx->pc = 0x273A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273A34u);
        ctx->pc = 0x273A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A2Cu;
        // 0x273a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273A2Cu, 0x273A34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273A34u;
label_273a34:
    // 0x273a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x273a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_273a38:
    // 0x273a38: 0xc083938  jal         func_20E4E0
label_273a3c:
    if (ctx->pc == 0x273A3Cu) {
        ctx->pc = 0x273A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A38u;
        // 0x273a3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273A40u;
        goto label_273a40;
    }
    ctx->pc = 0x273A38u;
    SET_GPR_U32(ctx, 31, 0x273A40u);
    ctx->pc = 0x273A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273A38u;
    // 0x273a3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4E0u, 0x273A38u, 0x273A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A40u;
label_273a40:
    // 0x273a40: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x273a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_273a44:
    // 0x273a44: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x273a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_273a48:
    // 0x273a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x273a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_273a4c:
    // 0x273a4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x273a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273a50:
    // 0x273a50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x273a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_273a54:
    // 0x273a54: 0xc0f773a  jal         func_3DDCE8
label_273a58:
    if (ctx->pc == 0x273A58u) {
        ctx->pc = 0x273A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A54u;
        // 0x273a58: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273A5Cu;
        goto label_273a5c;
    }
    ctx->pc = 0x273A54u;
    SET_GPR_U32(ctx, 31, 0x273A5Cu);
    ctx->pc = 0x273A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273A54u;
    // 0x273a58: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDCE8u, 0x273A54u, 0x273A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A5Cu;
label_273a5c:
    // 0x273a5c: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x273a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_273a60:
    // 0x273a60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x273a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_273a64:
    // 0x273a64: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x273a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_273a68:
    // 0x273a68: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x273a68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_273a6c:
    // 0x273a6c: 0xfa010300  sqc2        $vf1, 0x300($s0)
    ctx->pc = 0x273a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 768), _mm_castps_si128(ctx->vu0_vf[1]));
label_273a70:
    // 0x273a70: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x273a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_273a74:
    // 0x273a74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x273a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_273a78:
    // 0x273a78: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x273a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_273a7c:
    // 0x273a7c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x273a7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_273a80:
    // 0x273a80: 0xfa010310  sqc2        $vf1, 0x310($s0)
    ctx->pc = 0x273a80u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 784), _mm_castps_si128(ctx->vu0_vf[1]));
label_273a84:
    // 0x273a84: 0x26120230  addiu       $s2, $s0, 0x230
    ctx->pc = 0x273a84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
label_273a88:
    // 0x273a88: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x273a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_273a8c:
    // 0x273a8c: 0xae5000c0  sw          $s0, 0xC0($s2)
    ctx->pc = 0x273a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 16));
label_273a90:
    // 0x273a90: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x273a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_273a94:
    // 0x273a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_273a98:
    // 0x273a98: 0xc0d7424  jal         func_35D090
label_273a9c:
    if (ctx->pc == 0x273A9Cu) {
        ctx->pc = 0x273A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A98u;
        // 0x273a9c: 0x24a580e0  addiu       $a1, $a1, -0x7F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273AA0u;
        goto label_273aa0;
    }
    ctx->pc = 0x273A98u;
    SET_GPR_U32(ctx, 31, 0x273AA0u);
    ctx->pc = 0x273A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273A98u;
    // 0x273a9c: 0x24a580e0  addiu       $a1, $a1, -0x7F20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x273A98u, 0x273AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273AA0u;
label_273aa0:
    // 0x273aa0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x273aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_273aa4:
    // 0x273aa4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x273aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_273aa8:
    // 0x273aa8: 0xc0d74a8  jal         func_35D2A0
label_273aac:
    if (ctx->pc == 0x273AACu) {
        ctx->pc = 0x273AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AA8u;
        // 0x273aac: 0x260500f8  addiu       $a1, $s0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273AB0u;
        goto label_273ab0;
    }
    ctx->pc = 0x273AA8u;
    SET_GPR_U32(ctx, 31, 0x273AB0u);
    ctx->pc = 0x273AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273AA8u;
    // 0x273aac: 0x260500f8  addiu       $a1, $s0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x273AA8u, 0x273AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273AB0u;
label_273ab0:
    // 0x273ab0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x273ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_273ab4:
    // 0x273ab4: 0xc0d745c  jal         func_35D170
label_273ab8:
    if (ctx->pc == 0x273AB8u) {
        ctx->pc = 0x273AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AB4u;
        // 0x273ab8: 0x2604027c  addiu       $a0, $s0, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 636));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273ABCu;
        goto label_273abc;
    }
    ctx->pc = 0x273AB4u;
    SET_GPR_U32(ctx, 31, 0x273ABCu);
    ctx->pc = 0x273AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273AB4u;
    // 0x273ab8: 0x2604027c  addiu       $a0, $s0, 0x27C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x273AB4u, 0x273ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273ABCu;
label_273abc:
    // 0x273abc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x273abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_273ac0:
    // 0x273ac0: 0xc0d7412  jal         func_35D048
label_273ac4:
    if (ctx->pc == 0x273AC4u) {
        ctx->pc = 0x273AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AC0u;
        // 0x273ac4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273AC8u;
        goto label_273ac8;
    }
    ctx->pc = 0x273AC0u;
    SET_GPR_U32(ctx, 31, 0x273AC8u);
    ctx->pc = 0x273AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273AC0u;
    // 0x273ac4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x273AC0u, 0x273AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273AC8u;
label_273ac8:
    // 0x273ac8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x273ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_273acc:
    // 0x273acc: 0xc0d7412  jal         func_35D048
label_273ad0:
    if (ctx->pc == 0x273AD0u) {
        ctx->pc = 0x273AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273ACCu;
        // 0x273ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273AD4u;
        goto label_273ad4;
    }
    ctx->pc = 0x273ACCu;
    SET_GPR_U32(ctx, 31, 0x273AD4u);
    ctx->pc = 0x273AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273ACCu;
    // 0x273ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x273ACCu, 0x273AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273AD4u;
label_273ad4:
    // 0x273ad4: 0xc0b1488  jal         func_2C5220
label_273ad8:
    if (ctx->pc == 0x273AD8u) {
        ctx->pc = 0x273AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AD4u;
        // 0x273ad8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273ADCu;
        goto label_273adc;
    }
    ctx->pc = 0x273AD4u;
    SET_GPR_U32(ctx, 31, 0x273ADCu);
    ctx->pc = 0x273AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273AD4u;
    // 0x273ad8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x273AD4u, 0x273ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273ADCu;
label_273adc:
    // 0x273adc: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x273adcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_273ae0:
    // 0x273ae0: 0xc0b1488  jal         func_2C5220
label_273ae4:
    if (ctx->pc == 0x273AE4u) {
        ctx->pc = 0x273AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AE0u;
        // 0x273ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273AE8u;
        goto label_273ae8;
    }
    ctx->pc = 0x273AE0u;
    SET_GPR_U32(ctx, 31, 0x273AE8u);
    ctx->pc = 0x273AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273AE0u;
    // 0x273ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x273AE0u, 0x273AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273AE8u;
label_273ae8:
    // 0x273ae8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x273ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_273aec:
    // 0x273aec: 0xc09cb7a  jal         func_272DE8
label_273af0:
    if (ctx->pc == 0x273AF0u) {
        ctx->pc = 0x273AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AECu;
        // 0x273af0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273AF4u;
        goto label_273af4;
    }
    ctx->pc = 0x273AECu;
    SET_GPR_U32(ctx, 31, 0x273AF4u);
    ctx->pc = 0x273AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273AECu;
    // 0x273af0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272DE8u, 0x273AECu, 0x273AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273AF4u;
label_273af4:
    // 0x273af4: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x273af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_273af8:
    // 0x273af8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x273af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_273afc:
    // 0x273afc: 0xc0c2e94  jal         func_30BA50
label_273b00:
    if (ctx->pc == 0x273B00u) {
        ctx->pc = 0x273B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AFCu;
        // 0x273b00: 0x24a580f0  addiu       $a1, $a1, -0x7F10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273B04u;
        goto label_273b04;
    }
    ctx->pc = 0x273AFCu;
    SET_GPR_U32(ctx, 31, 0x273B04u);
    ctx->pc = 0x273B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273AFCu;
    // 0x273b00: 0x24a580f0  addiu       $a1, $a1, -0x7F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA50u, 0x273AFCu, 0x273B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B04u;
label_273b04:
    // 0x273b04: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x273b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_273b08:
    // 0x273b08: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x273b08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_273b0c:
    // 0x273b0c: 0xae021e6c  sw          $v0, 0x1E6C($s0)
    ctx->pc = 0x273b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7788), GPR_U32(ctx, 2));
label_273b10:
    // 0x273b10: 0xc0c2e94  jal         func_30BA50
label_273b14:
    if (ctx->pc == 0x273B14u) {
        ctx->pc = 0x273B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B10u;
        // 0x273b14: 0x24a58100  addiu       $a1, $a1, -0x7F00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273B18u;
        goto label_273b18;
    }
    ctx->pc = 0x273B10u;
    SET_GPR_U32(ctx, 31, 0x273B18u);
    ctx->pc = 0x273B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B10u;
    // 0x273b14: 0x24a58100  addiu       $a1, $a1, -0x7F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA50u, 0x273B10u, 0x273B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B18u;
label_273b18:
    // 0x273b18: 0xae021e68  sw          $v0, 0x1E68($s0)
    ctx->pc = 0x273b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7784), GPR_U32(ctx, 2));
label_273b1c:
    // 0x273b1c: 0xc09d47e  jal         func_2751F8
label_273b20:
    if (ctx->pc == 0x273B20u) {
        ctx->pc = 0x273B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B1Cu;
        // 0x273b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273B24u;
        goto label_273b24;
    }
    ctx->pc = 0x273B1Cu;
    SET_GPR_U32(ctx, 31, 0x273B24u);
    ctx->pc = 0x273B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273B1Cu;
    // 0x273b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x273B1Cu, 0x273B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273B24u;
label_273b24:
    // 0x273b24: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x273b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_273b28:
    // 0x273b28: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x273b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_273b2c:
    // 0x273b2c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x273b2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_273b30:
    // 0x273b30: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x273b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_273b34:
    // 0x273b34: 0x3e00008  jr          $ra
label_273b38:
    if (ctx->pc == 0x273B38u) {
        ctx->pc = 0x273B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B34u;
        // 0x273b38: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273B3Cu;
        goto label_273b3c;
    }
    ctx->pc = 0x273B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B34u;
        // 0x273b38: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273B3Cu;
label_273b3c:
    // 0x273b3c: 0x0  nop
    ctx->pc = 0x273b3cu;
    // NOP
    ctx->pc = 0x273b40u;
}
