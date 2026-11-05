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

// Function: sub_00247D70
// Address: 0x247d70 - 0x247e78
void sub_00247D70_0x247d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247D70_0x247d70");
#endif

    switch (ctx->pc) {
        case 0x247d70u: goto label_247d70;
        case 0x247d74u: goto label_247d74;
        case 0x247d78u: goto label_247d78;
        case 0x247d7cu: goto label_247d7c;
        case 0x247d80u: goto label_247d80;
        case 0x247d84u: goto label_247d84;
        case 0x247d88u: goto label_247d88;
        case 0x247d8cu: goto label_247d8c;
        case 0x247d90u: goto label_247d90;
        case 0x247d94u: goto label_247d94;
        case 0x247d98u: goto label_247d98;
        case 0x247d9cu: goto label_247d9c;
        case 0x247da0u: goto label_247da0;
        case 0x247da4u: goto label_247da4;
        case 0x247da8u: goto label_247da8;
        case 0x247dacu: goto label_247dac;
        case 0x247db0u: goto label_247db0;
        case 0x247db4u: goto label_247db4;
        case 0x247db8u: goto label_247db8;
        case 0x247dbcu: goto label_247dbc;
        case 0x247dc0u: goto label_247dc0;
        case 0x247dc4u: goto label_247dc4;
        case 0x247dc8u: goto label_247dc8;
        case 0x247dccu: goto label_247dcc;
        case 0x247dd0u: goto label_247dd0;
        case 0x247dd4u: goto label_247dd4;
        case 0x247dd8u: goto label_247dd8;
        case 0x247ddcu: goto label_247ddc;
        case 0x247de0u: goto label_247de0;
        case 0x247de4u: goto label_247de4;
        case 0x247de8u: goto label_247de8;
        case 0x247decu: goto label_247dec;
        case 0x247df0u: goto label_247df0;
        case 0x247df4u: goto label_247df4;
        case 0x247df8u: goto label_247df8;
        case 0x247dfcu: goto label_247dfc;
        case 0x247e00u: goto label_247e00;
        case 0x247e04u: goto label_247e04;
        case 0x247e08u: goto label_247e08;
        case 0x247e0cu: goto label_247e0c;
        case 0x247e10u: goto label_247e10;
        case 0x247e14u: goto label_247e14;
        case 0x247e18u: goto label_247e18;
        case 0x247e1cu: goto label_247e1c;
        case 0x247e20u: goto label_247e20;
        case 0x247e24u: goto label_247e24;
        case 0x247e28u: goto label_247e28;
        case 0x247e2cu: goto label_247e2c;
        case 0x247e30u: goto label_247e30;
        case 0x247e34u: goto label_247e34;
        case 0x247e38u: goto label_247e38;
        case 0x247e3cu: goto label_247e3c;
        case 0x247e40u: goto label_247e40;
        case 0x247e44u: goto label_247e44;
        case 0x247e48u: goto label_247e48;
        case 0x247e4cu: goto label_247e4c;
        case 0x247e50u: goto label_247e50;
        case 0x247e54u: goto label_247e54;
        case 0x247e58u: goto label_247e58;
        case 0x247e5cu: goto label_247e5c;
        case 0x247e60u: goto label_247e60;
        case 0x247e64u: goto label_247e64;
        case 0x247e68u: goto label_247e68;
        case 0x247e6cu: goto label_247e6c;
        case 0x247e70u: goto label_247e70;
        case 0x247e74u: goto label_247e74;
        default: break;
    }

    ctx->pc = 0x247d70u;

label_247d70:
    // 0x247d70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x247d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_247d74:
    // 0x247d74: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x247d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_247d78:
    // 0x247d78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x247d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_247d7c:
    // 0x247d7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x247d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_247d80:
    // 0x247d80: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x247d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_247d84:
    // 0x247d84: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x247d84u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_247d88:
    // 0x247d88: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x247d88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_247d8c:
    // 0x247d8c: 0xc0f6a96  jal         func_3DAA58
label_247d90:
    if (ctx->pc == 0x247D90u) {
        ctx->pc = 0x247D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D8Cu;
        // 0x247d90: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x247D94u;
        goto label_247d94;
    }
    ctx->pc = 0x247D8Cu;
    SET_GPR_U32(ctx, 31, 0x247D94u);
    ctx->pc = 0x247D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D8Cu;
    // 0x247d90: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x247D8Cu, 0x247D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D94u;
label_247d94:
    // 0x247d94: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x247d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_247d98:
    // 0x247d98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x247d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_247d9c:
    // 0x247d9c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x247d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_247da0:
    // 0x247da0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x247da0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_247da4:
    // 0x247da4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x247da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_247da8:
    // 0x247da8: 0xc6160374  lwc1        $f22, 0x374($s0)
    ctx->pc = 0x247da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_247dac:
    // 0x247dac: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x247dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_247db0:
    // 0x247db0: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x247db0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_247db4:
    // 0x247db4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x247db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_247db8:
    // 0x247db8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x247db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_247dbc:
    // 0x247dbc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x247dbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_247dc0:
    // 0x247dc0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x247dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_247dc4:
    // 0x247dc4: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x247dc4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_247dc8:
    // 0x247dc8: 0xc0e3f98  jal         func_38FE60
label_247dcc:
    if (ctx->pc == 0x247DCCu) {
        ctx->pc = 0x247DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247DC8u;
        // 0x247dcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x247DD0u;
        goto label_247dd0;
    }
    ctx->pc = 0x247DC8u;
    SET_GPR_U32(ctx, 31, 0x247DD0u);
    ctx->pc = 0x247DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247DC8u;
    // 0x247dcc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x247DC8u, 0x247DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247DD0u;
label_247dd0:
    // 0x247dd0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x247dd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_247dd4:
    // 0x247dd4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x247dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247dd8:
    // 0x247dd8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x247dd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_247ddc:
    // 0x247ddc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x247ddcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_247de0:
    // 0x247de0: 0xc0e3f1c  jal         func_38FC70
label_247de4:
    if (ctx->pc == 0x247DE4u) {
        ctx->pc = 0x247DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247DE0u;
        // 0x247de4: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x247DE8u;
        goto label_247de8;
    }
    ctx->pc = 0x247DE0u;
    SET_GPR_U32(ctx, 31, 0x247DE8u);
    ctx->pc = 0x247DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247DE0u;
    // 0x247de4: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x247DE0u, 0x247DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247DE8u;
label_247de8:
    // 0x247de8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x247de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_247dec:
    // 0x247dec: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x247decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247df0:
    // 0x247df0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x247df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_247df4:
    // 0x247df4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x247df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247df8:
    // 0x247df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247dfc:
    // 0x247dfc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x247dfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_247e00:
    // 0x247e00: 0xc09568e  jal         func_255A38
label_247e04:
    if (ctx->pc == 0x247E04u) {
        ctx->pc = 0x247E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E00u;
        // 0x247e04: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E08u;
        goto label_247e08;
    }
    ctx->pc = 0x247E00u;
    SET_GPR_U32(ctx, 31, 0x247E08u);
    ctx->pc = 0x247E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E00u;
    // 0x247e04: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x255A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255A38u, 0x247E00u, 0x247E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E08u;
label_247e08:
    // 0x247e08: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x247e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_247e0c:
    // 0x247e0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x247e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_247e10:
    // 0x247e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247e14:
    // 0x247e14: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x247e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_247e18:
    // 0x247e18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x247e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247e1c:
    // 0x247e1c: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x247e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_247e20:
    // 0x247e20: 0x40f809  jalr        $v0
label_247e24:
    if (ctx->pc == 0x247E24u) {
        ctx->pc = 0x247E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E20u;
        // 0x247e24: 0x460cb300  add.s       $f12, $f22, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E28u;
        goto label_247e28;
    }
    ctx->pc = 0x247E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247E28u);
        ctx->pc = 0x247E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E20u;
        // 0x247e24: 0x460cb300  add.s       $f12, $f22, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247E20u, 0x247E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247E28u;
label_247e28:
    // 0x247e28: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x247e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_247e2c:
    // 0x247e2c: 0x24060481  addiu       $a2, $zero, 0x481
    ctx->pc = 0x247e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1153));
label_247e30:
    // 0x247e30: 0xc069712  jal         func_1A5C48
label_247e34:
    if (ctx->pc == 0x247E34u) {
        ctx->pc = 0x247E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E30u;
        // 0x247e34: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E38u;
        goto label_247e38;
    }
    ctx->pc = 0x247E30u;
    SET_GPR_U32(ctx, 31, 0x247E38u);
    ctx->pc = 0x247E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E30u;
    // 0x247e34: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x247E30u, 0x247E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E38u;
label_247e38:
    // 0x247e38: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x247e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_247e3c:
    // 0x247e3c: 0xc06a05e  jal         func_1A8178
label_247e40:
    if (ctx->pc == 0x247E40u) {
        ctx->pc = 0x247E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E3Cu;
        // 0x247e40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E44u;
        goto label_247e44;
    }
    ctx->pc = 0x247E3Cu;
    SET_GPR_U32(ctx, 31, 0x247E44u);
    ctx->pc = 0x247E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E3Cu;
    // 0x247e40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x247E3Cu, 0x247E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E44u;
label_247e44:
    // 0x247e44: 0xc06a328  jal         func_1A8CA0
label_247e48:
    if (ctx->pc == 0x247E48u) {
        ctx->pc = 0x247E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E44u;
        // 0x247e48: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E4Cu;
        goto label_247e4c;
    }
    ctx->pc = 0x247E44u;
    SET_GPR_U32(ctx, 31, 0x247E4Cu);
    ctx->pc = 0x247E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E44u;
    // 0x247e48: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x247E44u, 0x247E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E4Cu;
label_247e4c:
    // 0x247e4c: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x247e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_247e50:
    // 0x247e50: 0xc0757d2  jal         func_1D5F48
label_247e54:
    if (ctx->pc == 0x247E54u) {
        ctx->pc = 0x247E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E50u;
        // 0x247e54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E58u;
        goto label_247e58;
    }
    ctx->pc = 0x247E50u;
    SET_GPR_U32(ctx, 31, 0x247E58u);
    ctx->pc = 0x247E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E50u;
    // 0x247e54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x247E50u, 0x247E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E58u;
label_247e58:
    // 0x247e58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x247e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_247e5c:
    // 0x247e5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x247e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_247e60:
    // 0x247e60: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x247e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_247e64:
    // 0x247e64: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x247e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_247e68:
    // 0x247e68: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x247e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_247e6c:
    // 0x247e6c: 0x3e00008  jr          $ra
label_247e70:
    if (ctx->pc == 0x247E70u) {
        ctx->pc = 0x247E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E6Cu;
        // 0x247e70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E74u;
        goto label_247e74;
    }
    ctx->pc = 0x247E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E6Cu;
        // 0x247e70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247E74u;
label_247e74:
    // 0x247e74: 0x0  nop
    ctx->pc = 0x247e74u;
    // NOP
    ctx->pc = 0x247e78u;
}
