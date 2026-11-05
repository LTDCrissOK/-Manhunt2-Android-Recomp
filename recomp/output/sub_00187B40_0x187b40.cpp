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

// Function: sub_00187B40
// Address: 0x187b40 - 0x187be8
void sub_00187B40_0x187b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187B40_0x187b40");
#endif

    switch (ctx->pc) {
        case 0x187b40u: goto label_187b40;
        case 0x187b44u: goto label_187b44;
        case 0x187b48u: goto label_187b48;
        case 0x187b4cu: goto label_187b4c;
        case 0x187b50u: goto label_187b50;
        case 0x187b54u: goto label_187b54;
        case 0x187b58u: goto label_187b58;
        case 0x187b5cu: goto label_187b5c;
        case 0x187b60u: goto label_187b60;
        case 0x187b64u: goto label_187b64;
        case 0x187b68u: goto label_187b68;
        case 0x187b6cu: goto label_187b6c;
        case 0x187b70u: goto label_187b70;
        case 0x187b74u: goto label_187b74;
        case 0x187b78u: goto label_187b78;
        case 0x187b7cu: goto label_187b7c;
        case 0x187b80u: goto label_187b80;
        case 0x187b84u: goto label_187b84;
        case 0x187b88u: goto label_187b88;
        case 0x187b8cu: goto label_187b8c;
        case 0x187b90u: goto label_187b90;
        case 0x187b94u: goto label_187b94;
        case 0x187b98u: goto label_187b98;
        case 0x187b9cu: goto label_187b9c;
        case 0x187ba0u: goto label_187ba0;
        case 0x187ba4u: goto label_187ba4;
        case 0x187ba8u: goto label_187ba8;
        case 0x187bacu: goto label_187bac;
        case 0x187bb0u: goto label_187bb0;
        case 0x187bb4u: goto label_187bb4;
        case 0x187bb8u: goto label_187bb8;
        case 0x187bbcu: goto label_187bbc;
        case 0x187bc0u: goto label_187bc0;
        case 0x187bc4u: goto label_187bc4;
        case 0x187bc8u: goto label_187bc8;
        case 0x187bccu: goto label_187bcc;
        case 0x187bd0u: goto label_187bd0;
        case 0x187bd4u: goto label_187bd4;
        case 0x187bd8u: goto label_187bd8;
        case 0x187bdcu: goto label_187bdc;
        case 0x187be0u: goto label_187be0;
        case 0x187be4u: goto label_187be4;
        default: break;
    }

    ctx->pc = 0x187b40u;

label_187b40:
    // 0x187b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_187b44:
    // 0x187b44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_187b48:
    // 0x187b48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_187b4c:
    // 0x187b4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x187b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187b50:
    // 0x187b50: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x187b50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_187b54:
    // 0x187b54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x187b54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_187b58:
    // 0x187b58: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x187b58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_187b5c:
    // 0x187b5c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x187b5cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_187b60:
    // 0x187b60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_187b64:
    // 0x187b64: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x187b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_187b68:
    // 0x187b68: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_187b6c:
    if (ctx->pc == 0x187B6Cu) {
        ctx->pc = 0x187B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B68u;
        // 0x187b6c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x187B70u;
        goto label_187b70;
    }
    ctx->pc = 0x187B68u;
    {
        const bool branch_taken_0x187b68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B68u;
        // 0x187b6c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b68) {
            ctx->pc = 0x187B80u;
            goto label_187b80;
        }
    }
    ctx->pc = 0x187B70u;
label_187b70:
    // 0x187b70: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x187b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_187b74:
    // 0x187b74: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x187b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_187b78:
    // 0x187b78: 0x40f809  jalr        $v0
label_187b7c:
    if (ctx->pc == 0x187B7Cu) {
        ctx->pc = 0x187B80u;
        goto label_187b80;
    }
    ctx->pc = 0x187B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187B80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187B78u, 0x187B80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187B80u;
label_187b80:
    // 0x187b80: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x187b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_187b84:
    // 0x187b84: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_187b88:
    if (ctx->pc == 0x187B88u) {
        ctx->pc = 0x187B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B84u;
        // 0x187b88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187B8Cu;
        goto label_187b8c;
    }
    ctx->pc = 0x187B84u;
    {
        const bool branch_taken_0x187b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B84u;
        // 0x187b88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187b84) {
            ctx->pc = 0x187BACu;
            goto label_187bac;
        }
    }
    ctx->pc = 0x187B8Cu;
label_187b8c:
    // 0x187b8c: 0xc0f5240  jal         func_3D4900
label_187b90:
    if (ctx->pc == 0x187B90u) {
        ctx->pc = 0x187B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B8Cu;
        // 0x187b90: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187B94u;
        goto label_187b94;
    }
    ctx->pc = 0x187B8Cu;
    SET_GPR_U32(ctx, 31, 0x187B94u);
    ctx->pc = 0x187B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B8Cu;
    // 0x187b90: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x187B8Cu, 0x187B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B94u;
label_187b94:
    // 0x187b94: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x187b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_187b98:
    // 0x187b98: 0xc06480a  jal         func_192028
label_187b9c:
    if (ctx->pc == 0x187B9Cu) {
        ctx->pc = 0x187B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B98u;
        // 0x187b9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187BA0u;
        goto label_187ba0;
    }
    ctx->pc = 0x187B98u;
    SET_GPR_U32(ctx, 31, 0x187BA0u);
    ctx->pc = 0x187B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187B98u;
    // 0x187b9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192028u, 0x187B98u, 0x187BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187BA0u;
label_187ba0:
    // 0x187ba0: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x187ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_187ba4:
    // 0x187ba4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x187ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_187ba8:
    // 0x187ba8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x187ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_187bac:
    // 0x187bac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x187bacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_187bb0:
    // 0x187bb0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x187bb0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_187bb4:
    // 0x187bb4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x187bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_187bb8:
    // 0x187bb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x187bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187bbc:
    // 0x187bbc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x187bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_187bc0:
    // 0x187bc0: 0x8c670020  lw          $a3, 0x20($v1)
    ctx->pc = 0x187bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_187bc4:
    // 0x187bc4: 0xe0f809  jalr        $a3
label_187bc8:
    if (ctx->pc == 0x187BC8u) {
        ctx->pc = 0x187BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BC4u;
        // 0x187bc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187BCCu;
        goto label_187bcc;
    }
    ctx->pc = 0x187BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x187BCCu);
        ctx->pc = 0x187BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BC4u;
        // 0x187bc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187BC4u, 0x187BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187BCCu;
label_187bcc:
    // 0x187bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187bd0:
    // 0x187bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_187bd4:
    // 0x187bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_187bd8:
    // 0x187bd8: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x187bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_187bdc:
    // 0x187bdc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x187bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_187be0:
    // 0x187be0: 0x3e00008  jr          $ra
label_187be4:
    if (ctx->pc == 0x187BE4u) {
        ctx->pc = 0x187BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BE0u;
        // 0x187be4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187BE8u;
        goto label_fallthrough_0x187be0;
    }
    ctx->pc = 0x187BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187BE0u;
        // 0x187be4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x187be0:
    ctx->pc = 0x187BE8u;
}
