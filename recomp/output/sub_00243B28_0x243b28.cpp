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

// Function: sub_00243B28
// Address: 0x243b28 - 0x243d38
void sub_00243B28_0x243b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243B28_0x243b28");
#endif

    switch (ctx->pc) {
        case 0x243b28u: goto label_243b28;
        case 0x243b2cu: goto label_243b2c;
        case 0x243b30u: goto label_243b30;
        case 0x243b34u: goto label_243b34;
        case 0x243b38u: goto label_243b38;
        case 0x243b3cu: goto label_243b3c;
        case 0x243b40u: goto label_243b40;
        case 0x243b44u: goto label_243b44;
        case 0x243b48u: goto label_243b48;
        case 0x243b4cu: goto label_243b4c;
        case 0x243b50u: goto label_243b50;
        case 0x243b54u: goto label_243b54;
        case 0x243b58u: goto label_243b58;
        case 0x243b5cu: goto label_243b5c;
        case 0x243b60u: goto label_243b60;
        case 0x243b64u: goto label_243b64;
        case 0x243b68u: goto label_243b68;
        case 0x243b6cu: goto label_243b6c;
        case 0x243b70u: goto label_243b70;
        case 0x243b74u: goto label_243b74;
        case 0x243b78u: goto label_243b78;
        case 0x243b7cu: goto label_243b7c;
        case 0x243b80u: goto label_243b80;
        case 0x243b84u: goto label_243b84;
        case 0x243b88u: goto label_243b88;
        case 0x243b8cu: goto label_243b8c;
        case 0x243b90u: goto label_243b90;
        case 0x243b94u: goto label_243b94;
        case 0x243b98u: goto label_243b98;
        case 0x243b9cu: goto label_243b9c;
        case 0x243ba0u: goto label_243ba0;
        case 0x243ba4u: goto label_243ba4;
        case 0x243ba8u: goto label_243ba8;
        case 0x243bacu: goto label_243bac;
        case 0x243bb0u: goto label_243bb0;
        case 0x243bb4u: goto label_243bb4;
        case 0x243bb8u: goto label_243bb8;
        case 0x243bbcu: goto label_243bbc;
        case 0x243bc0u: goto label_243bc0;
        case 0x243bc4u: goto label_243bc4;
        case 0x243bc8u: goto label_243bc8;
        case 0x243bccu: goto label_243bcc;
        case 0x243bd0u: goto label_243bd0;
        case 0x243bd4u: goto label_243bd4;
        case 0x243bd8u: goto label_243bd8;
        case 0x243bdcu: goto label_243bdc;
        case 0x243be0u: goto label_243be0;
        case 0x243be4u: goto label_243be4;
        case 0x243be8u: goto label_243be8;
        case 0x243becu: goto label_243bec;
        case 0x243bf0u: goto label_243bf0;
        case 0x243bf4u: goto label_243bf4;
        case 0x243bf8u: goto label_243bf8;
        case 0x243bfcu: goto label_243bfc;
        case 0x243c00u: goto label_243c00;
        case 0x243c04u: goto label_243c04;
        case 0x243c08u: goto label_243c08;
        case 0x243c0cu: goto label_243c0c;
        case 0x243c10u: goto label_243c10;
        case 0x243c14u: goto label_243c14;
        case 0x243c18u: goto label_243c18;
        case 0x243c1cu: goto label_243c1c;
        case 0x243c20u: goto label_243c20;
        case 0x243c24u: goto label_243c24;
        case 0x243c28u: goto label_243c28;
        case 0x243c2cu: goto label_243c2c;
        case 0x243c30u: goto label_243c30;
        case 0x243c34u: goto label_243c34;
        case 0x243c38u: goto label_243c38;
        case 0x243c3cu: goto label_243c3c;
        case 0x243c40u: goto label_243c40;
        case 0x243c44u: goto label_243c44;
        case 0x243c48u: goto label_243c48;
        case 0x243c4cu: goto label_243c4c;
        case 0x243c50u: goto label_243c50;
        case 0x243c54u: goto label_243c54;
        case 0x243c58u: goto label_243c58;
        case 0x243c5cu: goto label_243c5c;
        case 0x243c60u: goto label_243c60;
        case 0x243c64u: goto label_243c64;
        case 0x243c68u: goto label_243c68;
        case 0x243c6cu: goto label_243c6c;
        case 0x243c70u: goto label_243c70;
        case 0x243c74u: goto label_243c74;
        case 0x243c78u: goto label_243c78;
        case 0x243c7cu: goto label_243c7c;
        case 0x243c80u: goto label_243c80;
        case 0x243c84u: goto label_243c84;
        case 0x243c88u: goto label_243c88;
        case 0x243c8cu: goto label_243c8c;
        case 0x243c90u: goto label_243c90;
        case 0x243c94u: goto label_243c94;
        case 0x243c98u: goto label_243c98;
        case 0x243c9cu: goto label_243c9c;
        case 0x243ca0u: goto label_243ca0;
        case 0x243ca4u: goto label_243ca4;
        case 0x243ca8u: goto label_243ca8;
        case 0x243cacu: goto label_243cac;
        case 0x243cb0u: goto label_243cb0;
        case 0x243cb4u: goto label_243cb4;
        case 0x243cb8u: goto label_243cb8;
        case 0x243cbcu: goto label_243cbc;
        case 0x243cc0u: goto label_243cc0;
        case 0x243cc4u: goto label_243cc4;
        case 0x243cc8u: goto label_243cc8;
        case 0x243cccu: goto label_243ccc;
        case 0x243cd0u: goto label_243cd0;
        case 0x243cd4u: goto label_243cd4;
        case 0x243cd8u: goto label_243cd8;
        case 0x243cdcu: goto label_243cdc;
        case 0x243ce0u: goto label_243ce0;
        case 0x243ce4u: goto label_243ce4;
        case 0x243ce8u: goto label_243ce8;
        case 0x243cecu: goto label_243cec;
        case 0x243cf0u: goto label_243cf0;
        case 0x243cf4u: goto label_243cf4;
        case 0x243cf8u: goto label_243cf8;
        case 0x243cfcu: goto label_243cfc;
        case 0x243d00u: goto label_243d00;
        case 0x243d04u: goto label_243d04;
        case 0x243d08u: goto label_243d08;
        case 0x243d0cu: goto label_243d0c;
        case 0x243d10u: goto label_243d10;
        case 0x243d14u: goto label_243d14;
        case 0x243d18u: goto label_243d18;
        case 0x243d1cu: goto label_243d1c;
        case 0x243d20u: goto label_243d20;
        case 0x243d24u: goto label_243d24;
        case 0x243d28u: goto label_243d28;
        case 0x243d2cu: goto label_243d2c;
        case 0x243d30u: goto label_243d30;
        case 0x243d34u: goto label_243d34;
        default: break;
    }

    ctx->pc = 0x243b28u;

label_243b28:
    // 0x243b28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_243b2c:
    // 0x243b2c: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x243b2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
label_243b30:
    // 0x243b30: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x243b30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
label_243b34:
    // 0x243b34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243b38:
    // 0x243b38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x243b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_243b3c:
    // 0x243b3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x243b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_243b40:
    // 0x243b40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x243b40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_243b44:
    // 0x243b44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x243b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_243b48:
    // 0x243b48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x243b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_243b4c:
    // 0x243b4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x243b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_243b50:
    // 0x243b50: 0x8e420338  lw          $v0, 0x338($s2)
    ctx->pc = 0x243b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_243b54:
    // 0x243b54: 0x8c5100a0  lw          $s1, 0xA0($v0)
    ctx->pc = 0x243b54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_243b58:
    // 0x243b58: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x243b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243b5c:
    // 0x243b5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243b5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243b60:
    // 0x243b60: 0x0  nop
    ctx->pc = 0x243b60u;
    // NOP
label_243b64:
    // 0x243b64: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_243b68:
    if (ctx->pc == 0x243B68u) {
        ctx->pc = 0x243B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B64u;
        // 0x243b68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B6Cu;
        goto label_243b6c;
    }
    ctx->pc = 0x243B64u;
    {
        const bool branch_taken_0x243b64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B64u;
        // 0x243b68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b64) {
            ctx->pc = 0x243B80u;
            goto label_243b80;
        }
    }
    ctx->pc = 0x243B6Cu;
label_243b6c:
    // 0x243b6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x243b6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_243b70:
    // 0x243b70: 0xc073f08  jal         func_1CFC20
label_243b74:
    if (ctx->pc == 0x243B74u) {
        ctx->pc = 0x243B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B70u;
        // 0x243b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B78u;
        goto label_243b78;
    }
    ctx->pc = 0x243B70u;
    SET_GPR_U32(ctx, 31, 0x243B78u);
    ctx->pc = 0x243B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B70u;
    // 0x243b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x243B70u, 0x243B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B78u;
label_243b78:
    // 0x243b78: 0x10000006  b           . + 4 + (0x6 << 2)
label_243b7c:
    if (ctx->pc == 0x243B7Cu) {
        ctx->pc = 0x243B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B78u;
        // 0x243b7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B80u;
        goto label_243b80;
    }
    ctx->pc = 0x243B78u;
    {
        const bool branch_taken_0x243b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B78u;
        // 0x243b7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b78) {
            ctx->pc = 0x243B94u;
            goto label_243b94;
        }
    }
    ctx->pc = 0x243B80u;
label_243b80:
    // 0x243b80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x243b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_243b84:
    // 0x243b84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x243b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_243b88:
    // 0x243b88: 0xc073f08  jal         func_1CFC20
label_243b8c:
    if (ctx->pc == 0x243B8Cu) {
        ctx->pc = 0x243B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B88u;
        // 0x243b8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B90u;
        goto label_243b90;
    }
    ctx->pc = 0x243B88u;
    SET_GPR_U32(ctx, 31, 0x243B90u);
    ctx->pc = 0x243B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B88u;
    // 0x243b8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x243B88u, 0x243B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B90u;
label_243b90:
    // 0x243b90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x243b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_243b94:
    // 0x243b94: 0xc08a15a  jal         func_228568
label_243b98:
    if (ctx->pc == 0x243B98u) {
        ctx->pc = 0x243B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B94u;
        // 0x243b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243B9Cu;
        goto label_243b9c;
    }
    ctx->pc = 0x243B94u;
    SET_GPR_U32(ctx, 31, 0x243B9Cu);
    ctx->pc = 0x243B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B94u;
    // 0x243b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x243B94u, 0x243B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B9Cu;
label_243b9c:
    // 0x243b9c: 0x8e500334  lw          $s0, 0x334($s2)
    ctx->pc = 0x243b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_243ba0:
    // 0x243ba0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x243ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_243ba4:
    // 0x243ba4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x243ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_243ba8:
    // 0x243ba8: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_243bac:
    if (ctx->pc == 0x243BACu) {
        ctx->pc = 0x243BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BA8u;
        // 0x243bac: 0x2462fffa  addiu       $v0, $v1, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243BB0u;
        goto label_243bb0;
    }
    ctx->pc = 0x243BA8u;
    {
        const bool branch_taken_0x243ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x243BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BA8u;
        // 0x243bac: 0x2462fffa  addiu       $v0, $v1, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ba8) {
            ctx->pc = 0x243C44u;
            goto label_243c44;
        }
    }
    ctx->pc = 0x243BB0u;
label_243bb0:
    // 0x243bb0: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x243bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_243bb4:
    // 0x243bb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_243bb8:
    if (ctx->pc == 0x243BB8u) {
        ctx->pc = 0x243BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BB4u;
        // 0x243bb8: 0xc62c001c  lwc1        $f12, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x243BBCu;
        goto label_243bbc;
    }
    ctx->pc = 0x243BB4u;
    {
        const bool branch_taken_0x243bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BB4u;
        // 0x243bb8: 0xc62c001c  lwc1        $f12, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x243bb4) {
            ctx->pc = 0x243BC4u;
            goto label_243bc4;
        }
    }
    ctx->pc = 0x243BBCu;
label_243bbc:
    // 0x243bbc: 0x1000000c  b           . + 4 + (0xC << 2)
label_243bc0:
    if (ctx->pc == 0x243BC0u) {
        ctx->pc = 0x243BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BBCu;
        // 0x243bc0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243BC4u;
        goto label_243bc4;
    }
    ctx->pc = 0x243BBCu;
    {
        const bool branch_taken_0x243bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BBCu;
        // 0x243bc0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243bbc) {
            ctx->pc = 0x243BF0u;
            goto label_243bf0;
        }
    }
    ctx->pc = 0x243BC4u;
label_243bc4:
    // 0x243bc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x243bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243bc8:
    // 0x243bc8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x243bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243bcc:
    // 0x243bcc: 0x260301ec  addiu       $v1, $s0, 0x1EC
    ctx->pc = 0x243bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
label_243bd0:
    // 0x243bd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x243bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_243bd4:
    // 0x243bd4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_243bd8:
    if (ctx->pc == 0x243BD8u) {
        ctx->pc = 0x243BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BD4u;
        // 0x243bd8: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243BDCu;
        goto label_243bdc;
    }
    ctx->pc = 0x243BD4u;
    {
        const bool branch_taken_0x243bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243bd4) {
            ctx->pc = 0x243BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243BD4u;
            // 0x243bd8: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243BF4u;
            goto label_243bf4;
        }
    }
    ctx->pc = 0x243BDCu;
label_243bdc:
    // 0x243bdc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x243bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_243be0:
    // 0x243be0: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x243be0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_243be4:
    // 0x243be4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_243be8:
    if (ctx->pc == 0x243BE8u) {
        ctx->pc = 0x243BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BE4u;
        // 0x243be8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243BECu;
        goto label_243bec;
    }
    ctx->pc = 0x243BE4u;
    {
        const bool branch_taken_0x243be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243BE4u;
        // 0x243be8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243be4) {
            ctx->pc = 0x243BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243bd0;
        }
    }
    ctx->pc = 0x243BECu;
label_243bec:
    // 0x243bec: 0x8e0201e8  lw          $v0, 0x1E8($s0)
    ctx->pc = 0x243becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_243bf0:
    // 0x243bf0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x243bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_243bf4:
    // 0x243bf4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x243bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243bf8:
    // 0x243bf8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x243bf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243bfc:
    // 0x243bfc: 0x0  nop
    ctx->pc = 0x243bfcu;
    // NOP
label_243c00:
    // 0x243c00: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_243c04:
    if (ctx->pc == 0x243C04u) {
        ctx->pc = 0x243C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C00u;
        // 0x243c04: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C08u;
        goto label_243c08;
    }
    ctx->pc = 0x243C00u;
    {
        const bool branch_taken_0x243c00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243c00) {
            ctx->pc = 0x243C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243C00u;
            // 0x243c04: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x243C08u;
            goto label_243c08;
        }
    }
    ctx->pc = 0x243C08u;
label_243c08:
    // 0x243c08: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x243c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_243c0c:
    // 0x243c0c: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_243c10:
    if (ctx->pc == 0x243C10u) {
        ctx->pc = 0x243C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C0Cu;
        // 0x243c10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C14u;
        goto label_243c14;
    }
    ctx->pc = 0x243C0Cu;
    {
        const bool branch_taken_0x243c0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x243C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C0Cu;
        // 0x243c10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c0c) {
            ctx->pc = 0x243C34u;
            goto label_243c34;
        }
    }
    ctx->pc = 0x243C14u;
label_243c14:
    // 0x243c14: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x243c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_243c18:
    // 0x243c18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x243c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_243c1c:
    // 0x243c1c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_243c20:
    if (ctx->pc == 0x243C20u) {
        ctx->pc = 0x243C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C1Cu;
        // 0x243c20: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C24u;
        goto label_243c24;
    }
    ctx->pc = 0x243C1Cu;
    {
        const bool branch_taken_0x243c1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x243C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C1Cu;
        // 0x243c20: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c1c) {
            ctx->pc = 0x243C34u;
            goto label_243c34;
        }
    }
    ctx->pc = 0x243C24u;
label_243c24:
    // 0x243c24: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x243c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_243c28:
    // 0x243c28: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_243c2c:
    if (ctx->pc == 0x243C2Cu) {
        ctx->pc = 0x243C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C28u;
        // 0x243c2c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C30u;
        goto label_243c30;
    }
    ctx->pc = 0x243C28u;
    {
        const bool branch_taken_0x243c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C28u;
        // 0x243c2c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c28) {
            ctx->pc = 0x243C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243c18;
        }
    }
    ctx->pc = 0x243C30u;
label_243c30:
    // 0x243c30: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x243c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_243c34:
    // 0x243c34: 0xc073e86  jal         func_1CFA18
label_243c38:
    if (ctx->pc == 0x243C38u) {
        ctx->pc = 0x243C3Cu;
        goto label_243c3c;
    }
    ctx->pc = 0x243C34u;
    SET_GPR_U32(ctx, 31, 0x243C3Cu);
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x243C34u, 0x243C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C3Cu;
label_243c3c:
    // 0x243c3c: 0x10000026  b           . + 4 + (0x26 << 2)
label_243c40:
    if (ctx->pc == 0x243C40u) {
        ctx->pc = 0x243C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C3Cu;
        // 0x243c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C44u;
        goto label_243c44;
    }
    ctx->pc = 0x243C3Cu;
    {
        const bool branch_taken_0x243c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C3Cu;
        // 0x243c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c3c) {
            ctx->pc = 0x243CD8u;
            goto label_243cd8;
        }
    }
    ctx->pc = 0x243C44u;
label_243c44:
    // 0x243c44: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x243c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_243c48:
    // 0x243c48: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_243c4c:
    if (ctx->pc == 0x243C4Cu) {
        ctx->pc = 0x243C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C48u;
        // 0x243c4c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C50u;
        goto label_243c50;
    }
    ctx->pc = 0x243C48u;
    {
        const bool branch_taken_0x243c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C48u;
        // 0x243c4c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c48) {
            ctx->pc = 0x243C84u;
            goto label_243c84;
        }
    }
    ctx->pc = 0x243C50u;
label_243c50:
    // 0x243c50: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x243c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_243c54:
    // 0x243c54: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_243c58:
    if (ctx->pc == 0x243C58u) {
        ctx->pc = 0x243C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C54u;
        // 0x243c58: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C5Cu;
        goto label_243c5c;
    }
    ctx->pc = 0x243C54u;
    {
        const bool branch_taken_0x243c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x243c54) {
            ctx->pc = 0x243C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243C54u;
            // 0x243c58: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243C88u;
            goto label_243c88;
        }
    }
    ctx->pc = 0x243C5Cu;
label_243c5c:
    // 0x243c5c: 0xc0924a8  jal         func_2492A0
label_243c60:
    if (ctx->pc == 0x243C60u) {
        ctx->pc = 0x243C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C5Cu;
        // 0x243c60: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C64u;
        goto label_243c64;
    }
    ctx->pc = 0x243C5Cu;
    SET_GPR_U32(ctx, 31, 0x243C64u);
    ctx->pc = 0x243C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243C5Cu;
    // 0x243c60: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x243C5Cu, 0x243C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C64u;
label_243c64:
    // 0x243c64: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_243c68:
    if (ctx->pc == 0x243C68u) {
        ctx->pc = 0x243C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C64u;
        // 0x243c68: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C6Cu;
        goto label_243c6c;
    }
    ctx->pc = 0x243C64u;
    {
        const bool branch_taken_0x243c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243c64) {
            ctx->pc = 0x243C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243C64u;
            // 0x243c68: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243C88u;
            goto label_243c88;
        }
    }
    ctx->pc = 0x243C6Cu;
label_243c6c:
    // 0x243c6c: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x243c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_243c70:
    // 0x243c70: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x243c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_243c74:
    // 0x243c74: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_243c78:
    if (ctx->pc == 0x243C78u) {
        ctx->pc = 0x243C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C74u;
        // 0x243c78: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C7Cu;
        goto label_243c7c;
    }
    ctx->pc = 0x243C74u;
    {
        const bool branch_taken_0x243c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x243C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C74u;
        // 0x243c78: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c74) {
            ctx->pc = 0x243C84u;
            goto label_243c84;
        }
    }
    ctx->pc = 0x243C7Cu;
label_243c7c:
    // 0x243c7c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_243c80:
    if (ctx->pc == 0x243C80u) {
        ctx->pc = 0x243C84u;
        goto label_243c84;
    }
    ctx->pc = 0x243C7Cu;
    {
        const bool branch_taken_0x243c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x243c7c) {
            ctx->pc = 0x243C88u;
            goto label_243c88;
        }
    }
    ctx->pc = 0x243C84u;
label_243c84:
    // 0x243c84: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x243c84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243c88:
    // 0x243c88: 0x56600013  bnel        $s3, $zero, . + 4 + (0x13 << 2)
label_243c8c:
    if (ctx->pc == 0x243C8Cu) {
        ctx->pc = 0x243C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C88u;
        // 0x243c8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243C90u;
        goto label_243c90;
    }
    ctx->pc = 0x243C88u;
    {
        const bool branch_taken_0x243c88 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x243c88) {
            ctx->pc = 0x243C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243C88u;
            // 0x243c8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243CD8u;
            goto label_243cd8;
        }
    }
    ctx->pc = 0x243C90u;
label_243c90:
    // 0x243c90: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x243c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243c94:
    // 0x243c94: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x243c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_243c98:
    // 0x243c98: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x243c98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_243c9c:
    // 0x243c9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x243c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243ca0:
    // 0x243ca0: 0x0  nop
    ctx->pc = 0x243ca0u;
    // NOP
label_243ca4:
    // 0x243ca4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243ca8:
    // 0x243ca8: 0x0  nop
    ctx->pc = 0x243ca8u;
    // NOP
label_243cac:
    // 0x243cac: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_243cb0:
    if (ctx->pc == 0x243CB0u) {
        ctx->pc = 0x243CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CACu;
        // 0x243cb0: 0x24030037  addiu       $v1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243CB4u;
        goto label_243cb4;
    }
    ctx->pc = 0x243CACu;
    {
        const bool branch_taken_0x243cac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CACu;
        // 0x243cb0: 0x24030037  addiu       $v1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243cac) {
            ctx->pc = 0x243CD4u;
            goto label_243cd4;
        }
    }
    ctx->pc = 0x243CB4u;
label_243cb4:
    // 0x243cb4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x243cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_243cb8:
    // 0x243cb8: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x243cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_243cbc:
    // 0x243cbc: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
label_243cc0:
    if (ctx->pc == 0x243CC0u) {
        ctx->pc = 0x243CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CBCu;
        // 0x243cc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243CC4u;
        goto label_243cc4;
    }
    ctx->pc = 0x243CBCu;
    {
        const bool branch_taken_0x243cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x243cbc) {
            ctx->pc = 0x243CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243CBCu;
            // 0x243cc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243CD8u;
            goto label_243cd8;
        }
    }
    ctx->pc = 0x243CC4u;
label_243cc4:
    // 0x243cc4: 0xc069a1a  jal         func_1A6868
label_243cc8:
    if (ctx->pc == 0x243CC8u) {
        ctx->pc = 0x243CCCu;
        goto label_243ccc;
    }
    ctx->pc = 0x243CC4u;
    SET_GPR_U32(ctx, 31, 0x243CCCu);
    ctx->pc = 0x1A6868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6868u, 0x243CC4u, 0x243CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CCCu;
label_243ccc:
    // 0x243ccc: 0xc06a328  jal         func_1A8CA0
label_243cd0:
    if (ctx->pc == 0x243CD0u) {
        ctx->pc = 0x243CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CCCu;
        // 0x243cd0: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243CD4u;
        goto label_243cd4;
    }
    ctx->pc = 0x243CCCu;
    SET_GPR_U32(ctx, 31, 0x243CD4u);
    ctx->pc = 0x243CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243CCCu;
    // 0x243cd0: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x243CCCu, 0x243CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CD4u;
label_243cd4:
    // 0x243cd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x243cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_243cd8:
    // 0x243cd8: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x243cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_243cdc:
    // 0x243cdc: 0xc08fed2  jal         func_23FB48
label_243ce0:
    if (ctx->pc == 0x243CE0u) {
        ctx->pc = 0x243CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CDCu;
        // 0x243ce0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243CE4u;
        goto label_243ce4;
    }
    ctx->pc = 0x243CDCu;
    SET_GPR_U32(ctx, 31, 0x243CE4u);
    ctx->pc = 0x243CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243CDCu;
    // 0x243ce0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x243CDCu, 0x243CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CE4u;
label_243ce4:
    // 0x243ce4: 0xc08da92  jal         func_236A48
label_243ce8:
    if (ctx->pc == 0x243CE8u) {
        ctx->pc = 0x243CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CE4u;
        // 0x243ce8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243CECu;
        goto label_243cec;
    }
    ctx->pc = 0x243CE4u;
    SET_GPR_U32(ctx, 31, 0x243CECu);
    ctx->pc = 0x243CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243CE4u;
    // 0x243ce8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x243CE4u, 0x243CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CECu;
label_243cec:
    // 0x243cec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_243cf0:
    if (ctx->pc == 0x243CF0u) {
        ctx->pc = 0x243CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CECu;
        // 0x243cf0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243CF4u;
        goto label_243cf4;
    }
    ctx->pc = 0x243CECu;
    {
        const bool branch_taken_0x243cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CECu;
        // 0x243cf0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243cec) {
            ctx->pc = 0x243D1Cu;
            goto label_243d1c;
        }
    }
    ctx->pc = 0x243CF4u;
label_243cf4:
    // 0x243cf4: 0xc0899bc  jal         func_2266F0
label_243cf8:
    if (ctx->pc == 0x243CF8u) {
        ctx->pc = 0x243CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243CF4u;
        // 0x243cf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243CFCu;
        goto label_243cfc;
    }
    ctx->pc = 0x243CF4u;
    SET_GPR_U32(ctx, 31, 0x243CFCu);
    ctx->pc = 0x243CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243CF4u;
    // 0x243cf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x243CF4u, 0x243CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CFCu;
label_243cfc:
    // 0x243cfc: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x243cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_243d00:
    // 0x243d00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x243d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243d04:
    // 0x243d04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x243d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243d08:
    // 0x243d08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x243d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243d0c:
    // 0x243d0c: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x243d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_243d10:
    // 0x243d10: 0x40f809  jalr        $v0
label_243d14:
    if (ctx->pc == 0x243D14u) {
        ctx->pc = 0x243D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D10u;
        // 0x243d14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243D18u;
        goto label_243d18;
    }
    ctx->pc = 0x243D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243D18u);
        ctx->pc = 0x243D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D10u;
        // 0x243d14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243D10u, 0x243D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x243D18u;
label_243d18:
    // 0x243d18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_243d1c:
    // 0x243d1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x243d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_243d20:
    // 0x243d20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x243d20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_243d24:
    // 0x243d24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x243d24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_243d28:
    // 0x243d28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x243d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_243d2c:
    // 0x243d2c: 0x3e00008  jr          $ra
label_243d30:
    if (ctx->pc == 0x243D30u) {
        ctx->pc = 0x243D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D2Cu;
        // 0x243d30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243D34u;
        goto label_243d34;
    }
    ctx->pc = 0x243D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243D2Cu;
        // 0x243d30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243D34u;
label_243d34:
    // 0x243d34: 0x0  nop
    ctx->pc = 0x243d34u;
    // NOP
    ctx->pc = 0x243d38u;
}
