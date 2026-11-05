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

// Function: sub_00299AC0
// Address: 0x299ac0 - 0x299cc0
void sub_00299AC0_0x299ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299AC0_0x299ac0");
#endif

    switch (ctx->pc) {
        case 0x299ac0u: goto label_299ac0;
        case 0x299ac4u: goto label_299ac4;
        case 0x299ac8u: goto label_299ac8;
        case 0x299accu: goto label_299acc;
        case 0x299ad0u: goto label_299ad0;
        case 0x299ad4u: goto label_299ad4;
        case 0x299ad8u: goto label_299ad8;
        case 0x299adcu: goto label_299adc;
        case 0x299ae0u: goto label_299ae0;
        case 0x299ae4u: goto label_299ae4;
        case 0x299ae8u: goto label_299ae8;
        case 0x299aecu: goto label_299aec;
        case 0x299af0u: goto label_299af0;
        case 0x299af4u: goto label_299af4;
        case 0x299af8u: goto label_299af8;
        case 0x299afcu: goto label_299afc;
        case 0x299b00u: goto label_299b00;
        case 0x299b04u: goto label_299b04;
        case 0x299b08u: goto label_299b08;
        case 0x299b0cu: goto label_299b0c;
        case 0x299b10u: goto label_299b10;
        case 0x299b14u: goto label_299b14;
        case 0x299b18u: goto label_299b18;
        case 0x299b1cu: goto label_299b1c;
        case 0x299b20u: goto label_299b20;
        case 0x299b24u: goto label_299b24;
        case 0x299b28u: goto label_299b28;
        case 0x299b2cu: goto label_299b2c;
        case 0x299b30u: goto label_299b30;
        case 0x299b34u: goto label_299b34;
        case 0x299b38u: goto label_299b38;
        case 0x299b3cu: goto label_299b3c;
        case 0x299b40u: goto label_299b40;
        case 0x299b44u: goto label_299b44;
        case 0x299b48u: goto label_299b48;
        case 0x299b4cu: goto label_299b4c;
        case 0x299b50u: goto label_299b50;
        case 0x299b54u: goto label_299b54;
        case 0x299b58u: goto label_299b58;
        case 0x299b5cu: goto label_299b5c;
        case 0x299b60u: goto label_299b60;
        case 0x299b64u: goto label_299b64;
        case 0x299b68u: goto label_299b68;
        case 0x299b6cu: goto label_299b6c;
        case 0x299b70u: goto label_299b70;
        case 0x299b74u: goto label_299b74;
        case 0x299b78u: goto label_299b78;
        case 0x299b7cu: goto label_299b7c;
        case 0x299b80u: goto label_299b80;
        case 0x299b84u: goto label_299b84;
        case 0x299b88u: goto label_299b88;
        case 0x299b8cu: goto label_299b8c;
        case 0x299b90u: goto label_299b90;
        case 0x299b94u: goto label_299b94;
        case 0x299b98u: goto label_299b98;
        case 0x299b9cu: goto label_299b9c;
        case 0x299ba0u: goto label_299ba0;
        case 0x299ba4u: goto label_299ba4;
        case 0x299ba8u: goto label_299ba8;
        case 0x299bacu: goto label_299bac;
        case 0x299bb0u: goto label_299bb0;
        case 0x299bb4u: goto label_299bb4;
        case 0x299bb8u: goto label_299bb8;
        case 0x299bbcu: goto label_299bbc;
        case 0x299bc0u: goto label_299bc0;
        case 0x299bc4u: goto label_299bc4;
        case 0x299bc8u: goto label_299bc8;
        case 0x299bccu: goto label_299bcc;
        case 0x299bd0u: goto label_299bd0;
        case 0x299bd4u: goto label_299bd4;
        case 0x299bd8u: goto label_299bd8;
        case 0x299bdcu: goto label_299bdc;
        case 0x299be0u: goto label_299be0;
        case 0x299be4u: goto label_299be4;
        case 0x299be8u: goto label_299be8;
        case 0x299becu: goto label_299bec;
        case 0x299bf0u: goto label_299bf0;
        case 0x299bf4u: goto label_299bf4;
        case 0x299bf8u: goto label_299bf8;
        case 0x299bfcu: goto label_299bfc;
        case 0x299c00u: goto label_299c00;
        case 0x299c04u: goto label_299c04;
        case 0x299c08u: goto label_299c08;
        case 0x299c0cu: goto label_299c0c;
        case 0x299c10u: goto label_299c10;
        case 0x299c14u: goto label_299c14;
        case 0x299c18u: goto label_299c18;
        case 0x299c1cu: goto label_299c1c;
        case 0x299c20u: goto label_299c20;
        case 0x299c24u: goto label_299c24;
        case 0x299c28u: goto label_299c28;
        case 0x299c2cu: goto label_299c2c;
        case 0x299c30u: goto label_299c30;
        case 0x299c34u: goto label_299c34;
        case 0x299c38u: goto label_299c38;
        case 0x299c3cu: goto label_299c3c;
        case 0x299c40u: goto label_299c40;
        case 0x299c44u: goto label_299c44;
        case 0x299c48u: goto label_299c48;
        case 0x299c4cu: goto label_299c4c;
        case 0x299c50u: goto label_299c50;
        case 0x299c54u: goto label_299c54;
        case 0x299c58u: goto label_299c58;
        case 0x299c5cu: goto label_299c5c;
        case 0x299c60u: goto label_299c60;
        case 0x299c64u: goto label_299c64;
        case 0x299c68u: goto label_299c68;
        case 0x299c6cu: goto label_299c6c;
        case 0x299c70u: goto label_299c70;
        case 0x299c74u: goto label_299c74;
        case 0x299c78u: goto label_299c78;
        case 0x299c7cu: goto label_299c7c;
        case 0x299c80u: goto label_299c80;
        case 0x299c84u: goto label_299c84;
        case 0x299c88u: goto label_299c88;
        case 0x299c8cu: goto label_299c8c;
        case 0x299c90u: goto label_299c90;
        case 0x299c94u: goto label_299c94;
        case 0x299c98u: goto label_299c98;
        case 0x299c9cu: goto label_299c9c;
        case 0x299ca0u: goto label_299ca0;
        case 0x299ca4u: goto label_299ca4;
        case 0x299ca8u: goto label_299ca8;
        case 0x299cacu: goto label_299cac;
        case 0x299cb0u: goto label_299cb0;
        case 0x299cb4u: goto label_299cb4;
        case 0x299cb8u: goto label_299cb8;
        case 0x299cbcu: goto label_299cbc;
        default: break;
    }

    ctx->pc = 0x299ac0u;

label_299ac0:
    // 0x299ac0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x299ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_299ac4:
    // 0x299ac4: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x299ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_299ac8:
    // 0x299ac8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x299ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_299acc:
    // 0x299acc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x299accu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_299ad0:
    // 0x299ad0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x299ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_299ad4:
    // 0x299ad4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x299ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_299ad8:
    // 0x299ad8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x299ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_299adc:
    // 0x299adc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x299adcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_299ae0:
    // 0x299ae0: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x299ae0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_299ae4:
    // 0x299ae4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x299ae4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_299ae8:
    // 0x299ae8: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x299ae8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_299aec:
    // 0x299aec: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x299aecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_299af0:
    // 0x299af0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x299af0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_299af4:
    // 0x299af4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x299af4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_299af8:
    // 0x299af8: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x299af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
label_299afc:
    // 0x299afc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x299afcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_299b00:
    // 0x299b00: 0xafa90014  sw          $t1, 0x14($sp)
    ctx->pc = 0x299b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
label_299b04:
    // 0x299b04: 0xafaa0018  sw          $t2, 0x18($sp)
    ctx->pc = 0x299b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
label_299b08:
    // 0x299b08: 0xafab001c  sw          $t3, 0x1C($sp)
    ctx->pc = 0x299b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 11));
label_299b0c:
    // 0x299b0c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x299b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_299b10:
    // 0x299b10: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x299b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_299b14:
    // 0x299b14: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x299b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_299b18:
    // 0x299b18: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x299b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_299b1c:
    // 0x299b1c: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x299b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_299b20:
    // 0x299b20: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x299b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_299b24:
    // 0x299b24: 0xc0f5240  jal         func_3D4900
label_299b28:
    if (ctx->pc == 0x299B28u) {
        ctx->pc = 0x299B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B24u;
        // 0x299b28: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299B2Cu;
        goto label_299b2c;
    }
    ctx->pc = 0x299B24u;
    SET_GPR_U32(ctx, 31, 0x299B2Cu);
    ctx->pc = 0x299B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299B24u;
    // 0x299b28: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x299B24u, 0x299B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B2Cu;
label_299b2c:
    // 0x299b2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x299b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_299b30:
    // 0x299b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_299b34:
    // 0x299b34: 0xc0a6468  jal         func_2991A0
label_299b38:
    if (ctx->pc == 0x299B38u) {
        ctx->pc = 0x299B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B34u;
        // 0x299b38: 0x26150090  addiu       $s5, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299B3Cu;
        goto label_299b3c;
    }
    ctx->pc = 0x299B34u;
    SET_GPR_U32(ctx, 31, 0x299B3Cu);
    ctx->pc = 0x299B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299B34u;
    // 0x299b38: 0x26150090  addiu       $s5, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2991A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2991A0u, 0x299B34u, 0x299B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B3Cu;
label_299b3c:
    // 0x299b3c: 0x26170098  addiu       $s7, $s0, 0x98
    ctx->pc = 0x299b3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
label_299b40:
    // 0x299b40: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x299b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_299b44:
    // 0x299b44: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x299b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_299b48:
    // 0x299b48: 0x24423060  addiu       $v0, $v0, 0x3060
    ctx->pc = 0x299b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12384));
label_299b4c:
    // 0x299b4c: 0x261e00a0  addiu       $fp, $s0, 0xA0
    ctx->pc = 0x299b4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_299b50:
    // 0x299b50: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x299b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_299b54:
    // 0x299b54: 0x261100b4  addiu       $s1, $s0, 0xB4
    ctx->pc = 0x299b54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
label_299b58:
    // 0x299b58: 0x260200a8  addiu       $v0, $s0, 0xA8
    ctx->pc = 0x299b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
label_299b5c:
    // 0x299b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x299b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_299b60:
    // 0x299b60: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x299b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_299b64:
    // 0x299b64: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x299b64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_299b68:
    // 0x299b68: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x299b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
label_299b6c:
    // 0x299b6c: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x299b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_299b70:
    // 0x299b70: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x299b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_299b74:
    // 0x299b74: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x299b74u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_299b78:
    // 0x299b78: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x299b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_299b7c:
    // 0x299b7c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x299b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_299b80:
    // 0x299b80: 0xc0d737c  jal         func_35CDF0
label_299b84:
    if (ctx->pc == 0x299B84u) {
        ctx->pc = 0x299B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B80u;
        // 0x299b84: 0xae0000b0  sw          $zero, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299B88u;
        goto label_299b88;
    }
    ctx->pc = 0x299B80u;
    SET_GPR_U32(ctx, 31, 0x299B88u);
    ctx->pc = 0x299B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299B80u;
    // 0x299b84: 0xae0000b0  sw          $zero, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x299B80u, 0x299B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B88u;
label_299b88:
    // 0x299b88: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x299b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_299b8c:
    // 0x299b8c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x299b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_299b90:
    // 0x299b90: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x299b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
label_299b94:
    // 0x299b94: 0xc0d745c  jal         func_35D170
label_299b98:
    if (ctx->pc == 0x299B98u) {
        ctx->pc = 0x299B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299B94u;
        // 0x299b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299B9Cu;
        goto label_299b9c;
    }
    ctx->pc = 0x299B94u;
    SET_GPR_U32(ctx, 31, 0x299B9Cu);
    ctx->pc = 0x299B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299B94u;
    // 0x299b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x299B94u, 0x299B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B9Cu;
label_299b9c:
    // 0x299b9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x299b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_299ba0:
    // 0x299ba0: 0xc0d745c  jal         func_35D170
label_299ba4:
    if (ctx->pc == 0x299BA4u) {
        ctx->pc = 0x299BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BA0u;
        // 0x299ba4: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299BA8u;
        goto label_299ba8;
    }
    ctx->pc = 0x299BA0u;
    SET_GPR_U32(ctx, 31, 0x299BA8u);
    ctx->pc = 0x299BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299BA0u;
    // 0x299ba4: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x299BA0u, 0x299BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299BA8u;
label_299ba8:
    // 0x299ba8: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x299ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_299bac:
    // 0x299bac: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x299bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_299bb0:
    // 0x299bb0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x299bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299bb4:
    // 0x299bb4: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x299bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_299bb8:
    // 0x299bb8: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x299bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_299bbc:
    // 0x299bbc: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x299bbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_299bc0:
    // 0x299bc0: 0xe6140078  swc1        $f20, 0x78($s0)
    ctx->pc = 0x299bc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_299bc4:
    // 0x299bc4: 0xe6150084  swc1        $f21, 0x84($s0)
    ctx->pc = 0x299bc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_299bc8:
    // 0x299bc8: 0xe616007c  swc1        $f22, 0x7C($s0)
    ctx->pc = 0x299bc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
label_299bcc:
    // 0x299bcc: 0xe6020088  swc1        $f2, 0x88($s0)
    ctx->pc = 0x299bccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
label_299bd0:
    // 0x299bd0: 0xc0a57e2  jal         func_295F88
label_299bd4:
    if (ctx->pc == 0x299BD4u) {
        ctx->pc = 0x299BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BD0u;
        // 0x299bd4: 0xe603008c  swc1        $f3, 0x8C($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x299BD8u;
        goto label_299bd8;
    }
    ctx->pc = 0x299BD0u;
    SET_GPR_U32(ctx, 31, 0x299BD8u);
    ctx->pc = 0x299BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299BD0u;
    // 0x299bd4: 0xe603008c  swc1        $f3, 0x8C($s0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x299BD0u, 0x299BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299BD8u;
label_299bd8:
    // 0x299bd8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x299bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_299bdc:
    // 0x299bdc: 0x22e3a  dsrl        $a1, $v0, 24
    ctx->pc = 0x299bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 24);
label_299be0:
    // 0x299be0: 0x2243a  dsrl        $a0, $v0, 16
    ctx->pc = 0x299be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 16);
label_299be4:
    // 0x299be4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x299be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_299be8:
    // 0x299be8: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x299be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
label_299bec:
    // 0x299bec: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x299becu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
label_299bf0:
    // 0x299bf0: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x299bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
label_299bf4:
    // 0x299bf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x299bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_299bf8:
    // 0x299bf8: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x299bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
label_299bfc:
    // 0x299bfc: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x299bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_299c00:
    // 0x299c00: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x299c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_299c04:
    // 0x299c04: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x299c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_299c08:
    // 0x299c08: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x299c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_299c0c:
    // 0x299c0c: 0x8ba70003  lwl         $a3, 0x3($sp)
    ctx->pc = 0x299c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
label_299c10:
    // 0x299c10: 0x9ba70000  lwr         $a3, 0x0($sp)
    ctx->pc = 0x299c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
label_299c14:
    // 0x299c14: 0xaa070017  swl         $a3, 0x17($s0)
    ctx->pc = 0x299c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_299c18:
    // 0x299c18: 0xba070014  swr         $a3, 0x14($s0)
    ctx->pc = 0x299c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_299c1c:
    // 0x299c1c: 0xe6010090  swc1        $f1, 0x90($s0)
    ctx->pc = 0x299c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_299c20:
    // 0x299c20: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x299c20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_299c24:
    // 0x299c24: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x299c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299c28:
    // 0x299c28: 0xe6a20004  swc1        $f2, 0x4($s5)
    ctx->pc = 0x299c28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_299c2c:
    // 0x299c2c: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x299c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_299c30:
    // 0x299c30: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x299c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_299c34:
    // 0x299c34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x299c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_299c38:
    // 0x299c38: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x299c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_299c3c:
    // 0x299c3c: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x299c3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
label_299c40:
    // 0x299c40: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x299c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_299c44:
    // 0x299c44: 0xe60200a0  swc1        $f2, 0xA0($s0)
    ctx->pc = 0x299c44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
label_299c48:
    // 0x299c48: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x299c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_299c4c:
    // 0x299c4c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x299c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_299c50:
    // 0x299c50: 0xe7c30004  swc1        $f3, 0x4($fp)
    ctx->pc = 0x299c50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
label_299c54:
    // 0x299c54: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x299c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299c58:
    // 0x299c58: 0xe60100a8  swc1        $f1, 0xA8($s0)
    ctx->pc = 0x299c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
label_299c5c:
    // 0x299c5c: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x299c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_299c60:
    // 0x299c60: 0xc0d745c  jal         func_35D170
label_299c64:
    if (ctx->pc == 0x299C64u) {
        ctx->pc = 0x299C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C60u;
        // 0x299c64: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x299C68u;
        goto label_299c68;
    }
    ctx->pc = 0x299C60u;
    SET_GPR_U32(ctx, 31, 0x299C68u);
    ctx->pc = 0x299C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299C60u;
    // 0x299c64: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x299C60u, 0x299C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299C68u;
label_299c68:
    // 0x299c68: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x299c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_299c6c:
    // 0x299c6c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x299c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_299c70:
    // 0x299c70: 0x40f809  jalr        $v0
label_299c74:
    if (ctx->pc == 0x299C74u) {
        ctx->pc = 0x299C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C70u;
        // 0x299c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299C78u;
        goto label_299c78;
    }
    ctx->pc = 0x299C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x299C78u);
        ctx->pc = 0x299C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C70u;
        // 0x299c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299C70u, 0x299C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x299C78u;
label_299c78:
    // 0x299c78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x299c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_299c7c:
    // 0x299c7c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x299c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_299c80:
    // 0x299c80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x299c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_299c84:
    // 0x299c84: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x299c84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_299c88:
    // 0x299c88: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x299c88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_299c8c:
    // 0x299c8c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x299c8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_299c90:
    // 0x299c90: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x299c90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_299c94:
    // 0x299c94: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x299c94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_299c98:
    // 0x299c98: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x299c98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_299c9c:
    // 0x299c9c: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x299c9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_299ca0:
    // 0x299ca0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x299ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_299ca4:
    // 0x299ca4: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x299ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_299ca8:
    // 0x299ca8: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x299ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_299cac:
    // 0x299cac: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x299cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_299cb0:
    // 0x299cb0: 0x3e00008  jr          $ra
label_299cb4:
    if (ctx->pc == 0x299CB4u) {
        ctx->pc = 0x299CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CB0u;
        // 0x299cb4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299CB8u;
        goto label_299cb8;
    }
    ctx->pc = 0x299CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CB0u;
        // 0x299cb4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299CB8u;
label_299cb8:
    // 0x299cb8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x299cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_299cbc:
    // 0x299cbc: 0x0  nop
    ctx->pc = 0x299cbcu;
    // NOP
    ctx->pc = 0x299cc0u;
}
