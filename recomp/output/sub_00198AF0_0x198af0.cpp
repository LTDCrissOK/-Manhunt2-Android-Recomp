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

// Function: sub_00198AF0
// Address: 0x198af0 - 0x198b90
void sub_00198AF0_0x198af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198AF0_0x198af0");
#endif

    switch (ctx->pc) {
        case 0x198af0u: goto label_198af0;
        case 0x198af4u: goto label_198af4;
        case 0x198af8u: goto label_198af8;
        case 0x198afcu: goto label_198afc;
        case 0x198b00u: goto label_198b00;
        case 0x198b04u: goto label_198b04;
        case 0x198b08u: goto label_198b08;
        case 0x198b0cu: goto label_198b0c;
        case 0x198b10u: goto label_198b10;
        case 0x198b14u: goto label_198b14;
        case 0x198b18u: goto label_198b18;
        case 0x198b1cu: goto label_198b1c;
        case 0x198b20u: goto label_198b20;
        case 0x198b24u: goto label_198b24;
        case 0x198b28u: goto label_198b28;
        case 0x198b2cu: goto label_198b2c;
        case 0x198b30u: goto label_198b30;
        case 0x198b34u: goto label_198b34;
        case 0x198b38u: goto label_198b38;
        case 0x198b3cu: goto label_198b3c;
        case 0x198b40u: goto label_198b40;
        case 0x198b44u: goto label_198b44;
        case 0x198b48u: goto label_198b48;
        case 0x198b4cu: goto label_198b4c;
        case 0x198b50u: goto label_198b50;
        case 0x198b54u: goto label_198b54;
        case 0x198b58u: goto label_198b58;
        case 0x198b5cu: goto label_198b5c;
        case 0x198b60u: goto label_198b60;
        case 0x198b64u: goto label_198b64;
        case 0x198b68u: goto label_198b68;
        case 0x198b6cu: goto label_198b6c;
        case 0x198b70u: goto label_198b70;
        case 0x198b74u: goto label_198b74;
        case 0x198b78u: goto label_198b78;
        case 0x198b7cu: goto label_198b7c;
        case 0x198b80u: goto label_198b80;
        case 0x198b84u: goto label_198b84;
        case 0x198b88u: goto label_198b88;
        case 0x198b8cu: goto label_198b8c;
        default: break;
    }

    ctx->pc = 0x198af0u;

label_198af0:
    // 0x198af0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x198af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_198af4:
    // 0x198af4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x198af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_198af8:
    // 0x198af8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x198af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_198afc:
    // 0x198afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198b00:
    // 0x198b00: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x198b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_198b04:
    // 0x198b04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x198b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_198b08:
    // 0x198b08: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x198b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_198b0c:
    // 0x198b0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x198b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_198b10:
    // 0x198b10: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x198b10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_198b14:
    // 0x198b14: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x198b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_198b18:
    // 0x198b18: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x198b18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_198b1c:
    // 0x198b1c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x198b1cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_198b20:
    // 0x198b20: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x198b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_198b24:
    // 0x198b24: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x198b24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_198b28:
    // 0x198b28: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x198b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_198b2c:
    // 0x198b2c: 0xc06faee  jal         func_1BEBB8
label_198b30:
    if (ctx->pc == 0x198B30u) {
        ctx->pc = 0x198B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B2Cu;
        // 0x198b30: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B34u;
        goto label_198b34;
    }
    ctx->pc = 0x198B2Cu;
    SET_GPR_U32(ctx, 31, 0x198B34u);
    ctx->pc = 0x198B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198B2Cu;
    // 0x198b30: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x198B2Cu, 0x198B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B34u;
label_198b34:
    // 0x198b34: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x198b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_198b38:
    // 0x198b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198b3c:
    // 0x198b3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x198b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_198b40:
    // 0x198b40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x198b40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_198b44:
    // 0x198b44: 0x8c69002c  lw          $t1, 0x2C($v1)
    ctx->pc = 0x198b44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_198b48:
    // 0x198b48: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x198b48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_198b4c:
    // 0x198b4c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x198b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_198b50:
    // 0x198b50: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x198b50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198b54:
    // 0x198b54: 0x120f809  jalr        $t1
label_198b58:
    if (ctx->pc == 0x198B58u) {
        ctx->pc = 0x198B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B54u;
        // 0x198b58: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B5Cu;
        goto label_198b5c;
    }
    ctx->pc = 0x198B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x198B5Cu);
        ctx->pc = 0x198B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B54u;
        // 0x198b58: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198B54u, 0x198B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198B5Cu;
label_198b5c:
    // 0x198b5c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x198b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_198b60:
    // 0x198b60: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x198b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_198b64:
    // 0x198b64: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x198b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_198b68:
    // 0x198b68: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x198b68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_198b6c:
    // 0x198b6c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x198b6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_198b70:
    // 0x198b70: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x198b70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_198b74:
    // 0x198b74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x198b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_198b78:
    // 0x198b78: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x198b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_198b7c:
    // 0x198b7c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x198b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_198b80:
    // 0x198b80: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x198b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_198b84:
    // 0x198b84: 0x3e00008  jr          $ra
label_198b88:
    if (ctx->pc == 0x198B88u) {
        ctx->pc = 0x198B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B84u;
        // 0x198b88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198B8Cu;
        goto label_198b8c;
    }
    ctx->pc = 0x198B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198B84u;
        // 0x198b88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198B8Cu;
label_198b8c:
    // 0x198b8c: 0x0  nop
    ctx->pc = 0x198b8cu;
    // NOP
    ctx->pc = 0x198b90u;
}
