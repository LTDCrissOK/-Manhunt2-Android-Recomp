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

// Function: sub_00248A20
// Address: 0x248a20 - 0x248cd8
void sub_00248A20_0x248a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248A20_0x248a20");
#endif

    switch (ctx->pc) {
        case 0x248a20u: goto label_248a20;
        case 0x248a24u: goto label_248a24;
        case 0x248a28u: goto label_248a28;
        case 0x248a2cu: goto label_248a2c;
        case 0x248a30u: goto label_248a30;
        case 0x248a34u: goto label_248a34;
        case 0x248a38u: goto label_248a38;
        case 0x248a3cu: goto label_248a3c;
        case 0x248a40u: goto label_248a40;
        case 0x248a44u: goto label_248a44;
        case 0x248a48u: goto label_248a48;
        case 0x248a4cu: goto label_248a4c;
        case 0x248a50u: goto label_248a50;
        case 0x248a54u: goto label_248a54;
        case 0x248a58u: goto label_248a58;
        case 0x248a5cu: goto label_248a5c;
        case 0x248a60u: goto label_248a60;
        case 0x248a64u: goto label_248a64;
        case 0x248a68u: goto label_248a68;
        case 0x248a6cu: goto label_248a6c;
        case 0x248a70u: goto label_248a70;
        case 0x248a74u: goto label_248a74;
        case 0x248a78u: goto label_248a78;
        case 0x248a7cu: goto label_248a7c;
        case 0x248a80u: goto label_248a80;
        case 0x248a84u: goto label_248a84;
        case 0x248a88u: goto label_248a88;
        case 0x248a8cu: goto label_248a8c;
        case 0x248a90u: goto label_248a90;
        case 0x248a94u: goto label_248a94;
        case 0x248a98u: goto label_248a98;
        case 0x248a9cu: goto label_248a9c;
        case 0x248aa0u: goto label_248aa0;
        case 0x248aa4u: goto label_248aa4;
        case 0x248aa8u: goto label_248aa8;
        case 0x248aacu: goto label_248aac;
        case 0x248ab0u: goto label_248ab0;
        case 0x248ab4u: goto label_248ab4;
        case 0x248ab8u: goto label_248ab8;
        case 0x248abcu: goto label_248abc;
        case 0x248ac0u: goto label_248ac0;
        case 0x248ac4u: goto label_248ac4;
        case 0x248ac8u: goto label_248ac8;
        case 0x248accu: goto label_248acc;
        case 0x248ad0u: goto label_248ad0;
        case 0x248ad4u: goto label_248ad4;
        case 0x248ad8u: goto label_248ad8;
        case 0x248adcu: goto label_248adc;
        case 0x248ae0u: goto label_248ae0;
        case 0x248ae4u: goto label_248ae4;
        case 0x248ae8u: goto label_248ae8;
        case 0x248aecu: goto label_248aec;
        case 0x248af0u: goto label_248af0;
        case 0x248af4u: goto label_248af4;
        case 0x248af8u: goto label_248af8;
        case 0x248afcu: goto label_248afc;
        case 0x248b00u: goto label_248b00;
        case 0x248b04u: goto label_248b04;
        case 0x248b08u: goto label_248b08;
        case 0x248b0cu: goto label_248b0c;
        case 0x248b10u: goto label_248b10;
        case 0x248b14u: goto label_248b14;
        case 0x248b18u: goto label_248b18;
        case 0x248b1cu: goto label_248b1c;
        case 0x248b20u: goto label_248b20;
        case 0x248b24u: goto label_248b24;
        case 0x248b28u: goto label_248b28;
        case 0x248b2cu: goto label_248b2c;
        case 0x248b30u: goto label_248b30;
        case 0x248b34u: goto label_248b34;
        case 0x248b38u: goto label_248b38;
        case 0x248b3cu: goto label_248b3c;
        case 0x248b40u: goto label_248b40;
        case 0x248b44u: goto label_248b44;
        case 0x248b48u: goto label_248b48;
        case 0x248b4cu: goto label_248b4c;
        case 0x248b50u: goto label_248b50;
        case 0x248b54u: goto label_248b54;
        case 0x248b58u: goto label_248b58;
        case 0x248b5cu: goto label_248b5c;
        case 0x248b60u: goto label_248b60;
        case 0x248b64u: goto label_248b64;
        case 0x248b68u: goto label_248b68;
        case 0x248b6cu: goto label_248b6c;
        case 0x248b70u: goto label_248b70;
        case 0x248b74u: goto label_248b74;
        case 0x248b78u: goto label_248b78;
        case 0x248b7cu: goto label_248b7c;
        case 0x248b80u: goto label_248b80;
        case 0x248b84u: goto label_248b84;
        case 0x248b88u: goto label_248b88;
        case 0x248b8cu: goto label_248b8c;
        case 0x248b90u: goto label_248b90;
        case 0x248b94u: goto label_248b94;
        case 0x248b98u: goto label_248b98;
        case 0x248b9cu: goto label_248b9c;
        case 0x248ba0u: goto label_248ba0;
        case 0x248ba4u: goto label_248ba4;
        case 0x248ba8u: goto label_248ba8;
        case 0x248bacu: goto label_248bac;
        case 0x248bb0u: goto label_248bb0;
        case 0x248bb4u: goto label_248bb4;
        case 0x248bb8u: goto label_248bb8;
        case 0x248bbcu: goto label_248bbc;
        case 0x248bc0u: goto label_248bc0;
        case 0x248bc4u: goto label_248bc4;
        case 0x248bc8u: goto label_248bc8;
        case 0x248bccu: goto label_248bcc;
        case 0x248bd0u: goto label_248bd0;
        case 0x248bd4u: goto label_248bd4;
        case 0x248bd8u: goto label_248bd8;
        case 0x248bdcu: goto label_248bdc;
        case 0x248be0u: goto label_248be0;
        case 0x248be4u: goto label_248be4;
        case 0x248be8u: goto label_248be8;
        case 0x248becu: goto label_248bec;
        case 0x248bf0u: goto label_248bf0;
        case 0x248bf4u: goto label_248bf4;
        case 0x248bf8u: goto label_248bf8;
        case 0x248bfcu: goto label_248bfc;
        case 0x248c00u: goto label_248c00;
        case 0x248c04u: goto label_248c04;
        case 0x248c08u: goto label_248c08;
        case 0x248c0cu: goto label_248c0c;
        case 0x248c10u: goto label_248c10;
        case 0x248c14u: goto label_248c14;
        case 0x248c18u: goto label_248c18;
        case 0x248c1cu: goto label_248c1c;
        case 0x248c20u: goto label_248c20;
        case 0x248c24u: goto label_248c24;
        case 0x248c28u: goto label_248c28;
        case 0x248c2cu: goto label_248c2c;
        case 0x248c30u: goto label_248c30;
        case 0x248c34u: goto label_248c34;
        case 0x248c38u: goto label_248c38;
        case 0x248c3cu: goto label_248c3c;
        case 0x248c40u: goto label_248c40;
        case 0x248c44u: goto label_248c44;
        case 0x248c48u: goto label_248c48;
        case 0x248c4cu: goto label_248c4c;
        case 0x248c50u: goto label_248c50;
        case 0x248c54u: goto label_248c54;
        case 0x248c58u: goto label_248c58;
        case 0x248c5cu: goto label_248c5c;
        case 0x248c60u: goto label_248c60;
        case 0x248c64u: goto label_248c64;
        case 0x248c68u: goto label_248c68;
        case 0x248c6cu: goto label_248c6c;
        case 0x248c70u: goto label_248c70;
        case 0x248c74u: goto label_248c74;
        case 0x248c78u: goto label_248c78;
        case 0x248c7cu: goto label_248c7c;
        case 0x248c80u: goto label_248c80;
        case 0x248c84u: goto label_248c84;
        case 0x248c88u: goto label_248c88;
        case 0x248c8cu: goto label_248c8c;
        case 0x248c90u: goto label_248c90;
        case 0x248c94u: goto label_248c94;
        case 0x248c98u: goto label_248c98;
        case 0x248c9cu: goto label_248c9c;
        case 0x248ca0u: goto label_248ca0;
        case 0x248ca4u: goto label_248ca4;
        case 0x248ca8u: goto label_248ca8;
        case 0x248cacu: goto label_248cac;
        case 0x248cb0u: goto label_248cb0;
        case 0x248cb4u: goto label_248cb4;
        case 0x248cb8u: goto label_248cb8;
        case 0x248cbcu: goto label_248cbc;
        case 0x248cc0u: goto label_248cc0;
        case 0x248cc4u: goto label_248cc4;
        case 0x248cc8u: goto label_248cc8;
        case 0x248cccu: goto label_248ccc;
        case 0x248cd0u: goto label_248cd0;
        case 0x248cd4u: goto label_248cd4;
        default: break;
    }

    ctx->pc = 0x248a20u;

label_248a20:
    // 0x248a20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x248a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_248a24:
    // 0x248a24: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x248a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_248a28:
    // 0x248a28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x248a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_248a2c:
    // 0x248a2c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x248a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_248a30:
    // 0x248a30: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x248a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_248a34:
    // 0x248a34: 0xc08bd96  jal         func_22F658
label_248a38:
    if (ctx->pc == 0x248A38u) {
        ctx->pc = 0x248A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A34u;
        // 0x248a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248A3Cu;
        goto label_248a3c;
    }
    ctx->pc = 0x248A34u;
    SET_GPR_U32(ctx, 31, 0x248A3Cu);
    ctx->pc = 0x248A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248A34u;
    // 0x248a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x248A34u, 0x248A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A3Cu;
label_248a3c:
    // 0x248a3c: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x248a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_248a40:
    // 0x248a40: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x248a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_248a44:
    // 0x248a44: 0x40f809  jalr        $v0
label_248a48:
    if (ctx->pc == 0x248A48u) {
        ctx->pc = 0x248A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A44u;
        // 0x248a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248A4Cu;
        goto label_248a4c;
    }
    ctx->pc = 0x248A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248A4Cu);
        ctx->pc = 0x248A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A44u;
        // 0x248a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248A44u, 0x248A4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248A4Cu;
label_248a4c:
    // 0x248a4c: 0xa2000298  sb          $zero, 0x298($s0)
    ctx->pc = 0x248a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 664), (uint8_t)GPR_U32(ctx, 0));
label_248a50:
    // 0x248a50: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x248a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_248a54:
    // 0x248a54: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x248a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_248a58:
    // 0x248a58: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x248a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_248a5c:
    // 0x248a5c: 0x40f809  jalr        $v0
label_248a60:
    if (ctx->pc == 0x248A60u) {
        ctx->pc = 0x248A64u;
        goto label_248a64;
    }
    ctx->pc = 0x248A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248A64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248A5Cu, 0x248A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248A64u;
label_248a64:
    // 0x248a64: 0x8e030750  lw          $v1, 0x750($s0)
    ctx->pc = 0x248a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1872)));
label_248a68:
    // 0x248a68: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
label_248a6c:
    if (ctx->pc == 0x248A6Cu) {
        ctx->pc = 0x248A70u;
        goto label_248a70;
    }
    ctx->pc = 0x248A68u;
    {
        const bool branch_taken_0x248a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x248a68) {
            ctx->pc = 0x248BE4u;
            goto label_248be4;
        }
    }
    ctx->pc = 0x248A70u;
label_248a70:
    // 0x248a70: 0xae000750  sw          $zero, 0x750($s0)
    ctx->pc = 0x248a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1872), GPR_U32(ctx, 0));
label_248a74:
    // 0x248a74: 0xc0b1488  jal         func_2C5220
label_248a78:
    if (ctx->pc == 0x248A78u) {
        ctx->pc = 0x248A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A74u;
        // 0x248a78: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248A7Cu;
        goto label_248a7c;
    }
    ctx->pc = 0x248A74u;
    SET_GPR_U32(ctx, 31, 0x248A7Cu);
    ctx->pc = 0x248A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248A74u;
    // 0x248a78: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x248A74u, 0x248A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A7Cu;
label_248a7c:
    // 0x248a7c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x248a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_248a80:
    // 0x248a80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x248a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_248a84:
    // 0x248a84: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x248a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_248a88:
    // 0x248a88: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x248a88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_248a8c:
    // 0x248a8c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x248a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_248a90:
    // 0x248a90: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x248a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_248a94:
    // 0x248a94: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x248a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_248a98:
    // 0x248a98: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x248a98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_248a9c:
    // 0x248a9c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x248a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_248aa0:
    // 0x248aa0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x248aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_248aa4:
    // 0x248aa4: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x248aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_248aa8:
    // 0x248aa8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x248aa8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_248aac:
    // 0x248aac: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x248aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_248ab0:
    // 0x248ab0: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x248ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_248ab4:
    // 0x248ab4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x248ab4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_248ab8:
    // 0x248ab8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x248ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_248abc:
    // 0x248abc: 0x26020770  addiu       $v0, $s0, 0x770
    ctx->pc = 0x248abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1904));
label_248ac0:
    // 0x248ac0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x248ac0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_248ac4:
    // 0x248ac4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x248ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_248ac8:
    // 0x248ac8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x248ac8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_248acc:
    // 0x248acc: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x248accu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_248ad0:
    // 0x248ad0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x248ad0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_248ad4:
    // 0x248ad4: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x248ad4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_248ad8:
    // 0x248ad8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x248ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_248adc:
    // 0x248adc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x248adcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_248ae0:
    // 0x248ae0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x248ae0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_248ae4:
    // 0x248ae4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x248ae4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_248ae8:
    // 0x248ae8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x248ae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_248aec:
    // 0x248aec: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x248aecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_248af0:
    // 0x248af0: 0x4a0003bf  vwaitq
    ctx->pc = 0x248af0u;
    // VWAITQ (Q already resolved in this runtime)
label_248af4:
    // 0x248af4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x248af4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_248af8:
    // 0x248af8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x248af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_248afc:
    // 0x248afc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x248afcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_248b00:
    // 0x248b00: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x248b00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_248b04:
    // 0x248b04: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x248b04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_248b08:
    // 0x248b08: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x248b08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_248b0c:
    // 0x248b0c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x248b0cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_248b10:
    // 0x248b10: 0x4a0003bf  vwaitq
    ctx->pc = 0x248b10u;
    // VWAITQ (Q already resolved in this runtime)
label_248b14:
    // 0x248b14: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x248b14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_248b18:
    // 0x248b18: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x248b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_248b1c:
    // 0x248b1c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x248b1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_248b20:
    // 0x248b20: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x248b20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_248b24:
    // 0x248b24: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x248b24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_248b28:
    // 0x248b28: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x248b28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_248b2c:
    // 0x248b2c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x248b2cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_248b30:
    // 0x248b30: 0x4a0003bf  vwaitq
    ctx->pc = 0x248b30u;
    // VWAITQ (Q already resolved in this runtime)
label_248b34:
    // 0x248b34: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x248b34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_248b38:
    // 0x248b38: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x248b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_248b3c:
    // 0x248b3c: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x248b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_248b40:
    // 0x248b40: 0x26040780  addiu       $a0, $s0, 0x780
    ctx->pc = 0x248b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1920));
label_248b44:
    // 0x248b44: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x248b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_248b48:
    // 0x248b48: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x248b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_248b4c:
    // 0x248b4c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x248b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_248b50:
    // 0x248b50: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x248b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248b54:
    // 0x248b54: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x248b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_248b58:
    // 0x248b58: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x248b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_248b5c:
    // 0x248b5c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x248b5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_248b60:
    // 0x248b60: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x248b60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_248b64:
    // 0x248b64: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x248b64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_248b68:
    // 0x248b68: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x248b68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_248b6c:
    // 0x248b6c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x248b6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_248b70:
    // 0x248b70: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x248b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_248b74:
    // 0x248b74: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x248b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_248b78:
    // 0x248b78: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x248b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_248b7c:
    // 0x248b7c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x248b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248b80:
    // 0x248b80: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x248b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_248b84:
    // 0x248b84: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x248b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_248b88:
    // 0x248b88: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x248b88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_248b8c:
    // 0x248b8c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x248b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_248b90:
    // 0x248b90: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x248b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_248b94:
    // 0x248b94: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x248b94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_248b98:
    // 0x248b98: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x248b98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_248b9c:
    // 0x248b9c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x248b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_248ba0:
    // 0x248ba0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x248ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_248ba4:
    // 0x248ba4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x248ba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_248ba8:
    // 0x248ba8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x248ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_248bac:
    // 0x248bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248bb0:
    // 0x248bb0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x248bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_248bb4:
    // 0x248bb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x248bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248bb8:
    // 0x248bb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x248bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248bbc:
    // 0x248bbc: 0xc08e23a  jal         func_2388E8
label_248bc0:
    if (ctx->pc == 0x248BC0u) {
        ctx->pc = 0x248BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BBCu;
        // 0x248bc0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248BC4u;
        goto label_248bc4;
    }
    ctx->pc = 0x248BBCu;
    SET_GPR_U32(ctx, 31, 0x248BC4u);
    ctx->pc = 0x248BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248BBCu;
    // 0x248bc0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x248BBCu, 0x248BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248BC4u;
label_248bc4:
    // 0x248bc4: 0xc08e2b4  jal         func_238AD0
label_248bc8:
    if (ctx->pc == 0x248BC8u) {
        ctx->pc = 0x248BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BC4u;
        // 0x248bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248BCCu;
        goto label_248bcc;
    }
    ctx->pc = 0x248BC4u;
    SET_GPR_U32(ctx, 31, 0x248BCCu);
    ctx->pc = 0x248BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248BC4u;
    // 0x248bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AD0u, 0x248BC4u, 0x248BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248BCCu;
label_248bcc:
    // 0x248bcc: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x248bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_248bd0:
    // 0x248bd0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x248bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_248bd4:
    // 0x248bd4: 0xc0767f2  jal         func_1D9FC8
label_248bd8:
    if (ctx->pc == 0x248BD8u) {
        ctx->pc = 0x248BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BD4u;
        // 0x248bd8: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248BDCu;
        goto label_248bdc;
    }
    ctx->pc = 0x248BD4u;
    SET_GPR_U32(ctx, 31, 0x248BDCu);
    ctx->pc = 0x248BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248BD4u;
    // 0x248bd8: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x248BD4u, 0x248BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248BDCu;
label_248bdc:
    // 0x248bdc: 0x1000003a  b           . + 4 + (0x3A << 2)
label_248be0:
    if (ctx->pc == 0x248BE0u) {
        ctx->pc = 0x248BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BDCu;
        // 0x248be0: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248BE4u;
        goto label_248be4;
    }
    ctx->pc = 0x248BDCu;
    {
        const bool branch_taken_0x248bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BDCu;
        // 0x248be0: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248bdc) {
            ctx->pc = 0x248CC8u;
            goto label_248cc8;
        }
    }
    ctx->pc = 0x248BE4u;
label_248be4:
    // 0x248be4: 0xc0b1488  jal         func_2C5220
label_248be8:
    if (ctx->pc == 0x248BE8u) {
        ctx->pc = 0x248BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BE4u;
        // 0x248be8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248BECu;
        goto label_248bec;
    }
    ctx->pc = 0x248BE4u;
    SET_GPR_U32(ctx, 31, 0x248BECu);
    ctx->pc = 0x248BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248BE4u;
    // 0x248be8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x248BE4u, 0x248BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248BECu;
label_248bec:
    // 0x248bec: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x248becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_248bf0:
    // 0x248bf0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x248bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_248bf4:
    // 0x248bf4: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x248bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_248bf8:
    // 0x248bf8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x248bf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_248bfc:
    // 0x248bfc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x248bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_248c00:
    // 0x248c00: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x248c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_248c04:
    // 0x248c04: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x248c04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_248c08:
    // 0x248c08: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x248c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_248c0c:
    // 0x248c0c: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x248c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_248c10:
    // 0x248c10: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x248c10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_248c14:
    // 0x248c14: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x248c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_248c18:
    // 0x248c18: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x248c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_248c1c:
    // 0x248c1c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x248c1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_248c20:
    // 0x248c20: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x248c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_248c24:
    // 0x248c24: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x248c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_248c28:
    // 0x248c28: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x248c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_248c2c:
    // 0x248c2c: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x248c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_248c30:
    // 0x248c30: 0xc4620060  lwc1        $f2, 0x60($v1)
    ctx->pc = 0x248c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_248c34:
    // 0x248c34: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x248c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_248c38:
    // 0x248c38: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x248c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_248c3c:
    // 0x248c3c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x248c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248c40:
    // 0x248c40: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x248c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_248c44:
    // 0x248c44: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x248c44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_248c48:
    // 0x248c48: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x248c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_248c4c:
    // 0x248c4c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x248c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_248c50:
    // 0x248c50: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x248c50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_248c54:
    // 0x248c54: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x248c54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_248c58:
    // 0x248c58: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x248c58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_248c5c:
    // 0x248c5c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x248c5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_248c60:
    // 0x248c60: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x248c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_248c64:
    // 0x248c64: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x248c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_248c68:
    // 0x248c68: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x248c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_248c6c:
    // 0x248c6c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x248c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248c70:
    // 0x248c70: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x248c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_248c74:
    // 0x248c74: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x248c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_248c78:
    // 0x248c78: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x248c78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_248c7c:
    // 0x248c7c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x248c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_248c80:
    // 0x248c80: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x248c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_248c84:
    // 0x248c84: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x248c84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_248c88:
    // 0x248c88: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x248c88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_248c8c:
    // 0x248c8c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x248c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_248c90:
    // 0x248c90: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x248c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_248c94:
    // 0x248c94: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x248c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_248c98:
    // 0x248c98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x248c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_248c9c:
    // 0x248c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248ca0:
    // 0x248ca0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x248ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_248ca4:
    // 0x248ca4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x248ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248ca8:
    // 0x248ca8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x248ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248cac:
    // 0x248cac: 0xc08e23a  jal         func_2388E8
label_248cb0:
    if (ctx->pc == 0x248CB0u) {
        ctx->pc = 0x248CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CACu;
        // 0x248cb0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248CB4u;
        goto label_248cb4;
    }
    ctx->pc = 0x248CACu;
    SET_GPR_U32(ctx, 31, 0x248CB4u);
    ctx->pc = 0x248CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248CACu;
    // 0x248cb0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x248CACu, 0x248CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248CB4u;
label_248cb4:
    // 0x248cb4: 0xc08e2b4  jal         func_238AD0
label_248cb8:
    if (ctx->pc == 0x248CB8u) {
        ctx->pc = 0x248CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CB4u;
        // 0x248cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248CBCu;
        goto label_248cbc;
    }
    ctx->pc = 0x248CB4u;
    SET_GPR_U32(ctx, 31, 0x248CBCu);
    ctx->pc = 0x248CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248CB4u;
    // 0x248cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AD0u, 0x248CB4u, 0x248CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248CBCu;
label_248cbc:
    // 0x248cbc: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x248cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_248cc0:
    // 0x248cc0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x248cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_248cc4:
    // 0x248cc4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x248cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_248cc8:
    // 0x248cc8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x248cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_248ccc:
    // 0x248ccc: 0x3e00008  jr          $ra
label_248cd0:
    if (ctx->pc == 0x248CD0u) {
        ctx->pc = 0x248CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CCCu;
        // 0x248cd0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248CD4u;
        goto label_248cd4;
    }
    ctx->pc = 0x248CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CCCu;
        // 0x248cd0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248CD4u;
label_248cd4:
    // 0x248cd4: 0x0  nop
    ctx->pc = 0x248cd4u;
    // NOP
    ctx->pc = 0x248cd8u;
}
