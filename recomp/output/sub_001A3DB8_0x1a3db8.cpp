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

// Function: sub_001A3DB8
// Address: 0x1a3db8 - 0x1a3f18
void sub_001A3DB8_0x1a3db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3DB8_0x1a3db8");
#endif

    switch (ctx->pc) {
        case 0x1a3db8u: goto label_1a3db8;
        case 0x1a3dbcu: goto label_1a3dbc;
        case 0x1a3dc0u: goto label_1a3dc0;
        case 0x1a3dc4u: goto label_1a3dc4;
        case 0x1a3dc8u: goto label_1a3dc8;
        case 0x1a3dccu: goto label_1a3dcc;
        case 0x1a3dd0u: goto label_1a3dd0;
        case 0x1a3dd4u: goto label_1a3dd4;
        case 0x1a3dd8u: goto label_1a3dd8;
        case 0x1a3ddcu: goto label_1a3ddc;
        case 0x1a3de0u: goto label_1a3de0;
        case 0x1a3de4u: goto label_1a3de4;
        case 0x1a3de8u: goto label_1a3de8;
        case 0x1a3decu: goto label_1a3dec;
        case 0x1a3df0u: goto label_1a3df0;
        case 0x1a3df4u: goto label_1a3df4;
        case 0x1a3df8u: goto label_1a3df8;
        case 0x1a3dfcu: goto label_1a3dfc;
        case 0x1a3e00u: goto label_1a3e00;
        case 0x1a3e04u: goto label_1a3e04;
        case 0x1a3e08u: goto label_1a3e08;
        case 0x1a3e0cu: goto label_1a3e0c;
        case 0x1a3e10u: goto label_1a3e10;
        case 0x1a3e14u: goto label_1a3e14;
        case 0x1a3e18u: goto label_1a3e18;
        case 0x1a3e1cu: goto label_1a3e1c;
        case 0x1a3e20u: goto label_1a3e20;
        case 0x1a3e24u: goto label_1a3e24;
        case 0x1a3e28u: goto label_1a3e28;
        case 0x1a3e2cu: goto label_1a3e2c;
        case 0x1a3e30u: goto label_1a3e30;
        case 0x1a3e34u: goto label_1a3e34;
        case 0x1a3e38u: goto label_1a3e38;
        case 0x1a3e3cu: goto label_1a3e3c;
        case 0x1a3e40u: goto label_1a3e40;
        case 0x1a3e44u: goto label_1a3e44;
        case 0x1a3e48u: goto label_1a3e48;
        case 0x1a3e4cu: goto label_1a3e4c;
        case 0x1a3e50u: goto label_1a3e50;
        case 0x1a3e54u: goto label_1a3e54;
        case 0x1a3e58u: goto label_1a3e58;
        case 0x1a3e5cu: goto label_1a3e5c;
        case 0x1a3e60u: goto label_1a3e60;
        case 0x1a3e64u: goto label_1a3e64;
        case 0x1a3e68u: goto label_1a3e68;
        case 0x1a3e6cu: goto label_1a3e6c;
        case 0x1a3e70u: goto label_1a3e70;
        case 0x1a3e74u: goto label_1a3e74;
        case 0x1a3e78u: goto label_1a3e78;
        case 0x1a3e7cu: goto label_1a3e7c;
        case 0x1a3e80u: goto label_1a3e80;
        case 0x1a3e84u: goto label_1a3e84;
        case 0x1a3e88u: goto label_1a3e88;
        case 0x1a3e8cu: goto label_1a3e8c;
        case 0x1a3e90u: goto label_1a3e90;
        case 0x1a3e94u: goto label_1a3e94;
        case 0x1a3e98u: goto label_1a3e98;
        case 0x1a3e9cu: goto label_1a3e9c;
        case 0x1a3ea0u: goto label_1a3ea0;
        case 0x1a3ea4u: goto label_1a3ea4;
        case 0x1a3ea8u: goto label_1a3ea8;
        case 0x1a3eacu: goto label_1a3eac;
        case 0x1a3eb0u: goto label_1a3eb0;
        case 0x1a3eb4u: goto label_1a3eb4;
        case 0x1a3eb8u: goto label_1a3eb8;
        case 0x1a3ebcu: goto label_1a3ebc;
        case 0x1a3ec0u: goto label_1a3ec0;
        case 0x1a3ec4u: goto label_1a3ec4;
        case 0x1a3ec8u: goto label_1a3ec8;
        case 0x1a3eccu: goto label_1a3ecc;
        case 0x1a3ed0u: goto label_1a3ed0;
        case 0x1a3ed4u: goto label_1a3ed4;
        case 0x1a3ed8u: goto label_1a3ed8;
        case 0x1a3edcu: goto label_1a3edc;
        case 0x1a3ee0u: goto label_1a3ee0;
        case 0x1a3ee4u: goto label_1a3ee4;
        case 0x1a3ee8u: goto label_1a3ee8;
        case 0x1a3eecu: goto label_1a3eec;
        case 0x1a3ef0u: goto label_1a3ef0;
        case 0x1a3ef4u: goto label_1a3ef4;
        case 0x1a3ef8u: goto label_1a3ef8;
        case 0x1a3efcu: goto label_1a3efc;
        case 0x1a3f00u: goto label_1a3f00;
        case 0x1a3f04u: goto label_1a3f04;
        case 0x1a3f08u: goto label_1a3f08;
        case 0x1a3f0cu: goto label_1a3f0c;
        case 0x1a3f10u: goto label_1a3f10;
        case 0x1a3f14u: goto label_1a3f14;
        default: break;
    }

    ctx->pc = 0x1a3db8u;

label_1a3db8:
    // 0x1a3db8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a3dbc:
    // 0x1a3dbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3dc0:
    // 0x1a3dc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a3dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a3dc4:
    // 0x1a3dc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3dc8:
    // 0x1a3dc8: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x1a3dc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a3dcc:
    // 0x1a3dcc: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x1a3dccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a3dd0:
    // 0x1a3dd0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1a3dd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a3dd4:
    // 0x1a3dd4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a3dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a3dd8:
    // 0x1a3dd8: 0x50400049  beql        $v0, $zero, . + 4 + (0x49 << 2)
label_1a3ddc:
    if (ctx->pc == 0x1A3DDCu) {
        ctx->pc = 0x1A3DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DD8u;
        // 0x1a3ddc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3DE0u;
        goto label_1a3de0;
    }
    ctx->pc = 0x1A3DD8u;
    {
        const bool branch_taken_0x1a3dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3dd8) {
            ctx->pc = 0x1A3DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3DD8u;
            // 0x1a3ddc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3F00u;
            goto label_1a3f00;
        }
    }
    ctx->pc = 0x1A3DE0u;
label_1a3de0:
    // 0x1a3de0: 0xc0691d6  jal         func_1A4758
label_1a3de4:
    if (ctx->pc == 0x1A3DE4u) {
        ctx->pc = 0x1A3DE8u;
        goto label_1a3de8;
    }
    ctx->pc = 0x1A3DE0u;
    SET_GPR_U32(ctx, 31, 0x1A3DE8u);
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A3DE0u, 0x1A3DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3DE8u;
label_1a3de8:
    // 0x1a3de8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a3de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a3dec:
    // 0x1a3dec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a3df0:
    if (ctx->pc == 0x1A3DF0u) {
        ctx->pc = 0x1A3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DECu;
        // 0x1a3df0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3DF4u;
        goto label_1a3df4;
    }
    ctx->pc = 0x1A3DECu;
    {
        const bool branch_taken_0x1a3dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DECu;
        // 0x1a3df0: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3dec) {
            ctx->pc = 0x1A3E04u;
            goto label_1a3e04;
        }
    }
    ctx->pc = 0x1A3DF4u;
label_1a3df4:
    // 0x1a3df4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a3df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a3df8:
    // 0x1a3df8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a3dfc:
    // 0x1a3dfc: 0x40f809  jalr        $v0
label_1a3e00:
    if (ctx->pc == 0x1A3E00u) {
        ctx->pc = 0x1A3E04u;
        goto label_1a3e04;
    }
    ctx->pc = 0x1A3DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3E04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3DFCu, 0x1A3E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3E04u;
label_1a3e04:
    // 0x1a3e04: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x1a3e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_1a3e08:
    // 0x1a3e08: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1a3e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a3e0c:
    // 0x1a3e0c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a3e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a3e10:
    // 0x1a3e10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3e14:
    // 0x1a3e14: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1a3e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1a3e18:
    // 0x1a3e18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a3e18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1a3e1c:
    // 0x1a3e1c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a3e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1a3e20:
    // 0x1a3e20: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a3e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a3e24:
    // 0x1a3e24: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a3e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a3e28:
    // 0x1a3e28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a3e2c:
    // 0x1a3e2c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1a3e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1a3e30:
    // 0x1a3e30: 0x40f809  jalr        $v0
label_1a3e34:
    if (ctx->pc == 0x1A3E34u) {
        ctx->pc = 0x1A3E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E30u;
        // 0x1a3e34: 0x8cc51004  lw          $a1, 0x1004($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E38u;
        goto label_1a3e38;
    }
    ctx->pc = 0x1A3E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3E38u);
        ctx->pc = 0x1A3E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E30u;
        // 0x1a3e34: 0x8cc51004  lw          $a1, 0x1004($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3E30u, 0x1A3E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3E38u;
label_1a3e38:
    // 0x1a3e38: 0xc08951c  jal         func_225470
label_1a3e3c:
    if (ctx->pc == 0x1A3E3Cu) {
        ctx->pc = 0x1A3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E38u;
        // 0x1a3e3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E40u;
        goto label_1a3e40;
    }
    ctx->pc = 0x1A3E38u;
    SET_GPR_U32(ctx, 31, 0x1A3E40u);
    ctx->pc = 0x1A3E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E38u;
    // 0x1a3e3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1A3E38u, 0x1A3E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E40u;
label_1a3e40:
    // 0x1a3e40: 0xc0d8f5a  jal         func_363D68
label_1a3e44:
    if (ctx->pc == 0x1A3E44u) {
        ctx->pc = 0x1A3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E40u;
        // 0x1a3e44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E48u;
        goto label_1a3e48;
    }
    ctx->pc = 0x1A3E40u;
    SET_GPR_U32(ctx, 31, 0x1A3E48u);
    ctx->pc = 0x1A3E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E40u;
    // 0x1a3e44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D68u, 0x1A3E40u, 0x1A3E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E48u;
label_1a3e48:
    // 0x1a3e48: 0x46150500  add.s       $f20, $f0, $f21
    ctx->pc = 0x1a3e48u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1a3e4c:
    // 0x1a3e4c: 0xc061a16  jal         func_186858
label_1a3e50:
    if (ctx->pc == 0x1A3E50u) {
        ctx->pc = 0x1A3E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E4Cu;
        // 0x1a3e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E54u;
        goto label_1a3e54;
    }
    ctx->pc = 0x1A3E4Cu;
    SET_GPR_U32(ctx, 31, 0x1A3E54u);
    ctx->pc = 0x1A3E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E4Cu;
    // 0x1a3e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3E4Cu, 0x1A3E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E54u;
label_1a3e54:
    // 0x1a3e54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3e58:
    // 0x1a3e58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1a3e58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1a3e5c:
    // 0x1a3e5c: 0xc06ee70  jal         func_1BB9C0
label_1a3e60:
    if (ctx->pc == 0x1A3E60u) {
        ctx->pc = 0x1A3E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E5Cu;
        // 0x1a3e60: 0x4615a540  add.s       $f21, $f20, $f21 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E64u;
        goto label_1a3e64;
    }
    ctx->pc = 0x1A3E5Cu;
    SET_GPR_U32(ctx, 31, 0x1A3E64u);
    ctx->pc = 0x1A3E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E5Cu;
    // 0x1a3e60: 0x4615a540  add.s       $f21, $f20, $f21 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9C0u, 0x1A3E5Cu, 0x1A3E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E64u;
label_1a3e64:
    // 0x1a3e64: 0xc061a16  jal         func_186858
label_1a3e68:
    if (ctx->pc == 0x1A3E68u) {
        ctx->pc = 0x1A3E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E64u;
        // 0x1a3e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E6Cu;
        goto label_1a3e6c;
    }
    ctx->pc = 0x1A3E64u;
    SET_GPR_U32(ctx, 31, 0x1A3E6Cu);
    ctx->pc = 0x1A3E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E64u;
    // 0x1a3e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3E64u, 0x1A3E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E6Cu;
label_1a3e6c:
    // 0x1a3e6c: 0x4616a800  add.s       $f0, $f21, $f22
    ctx->pc = 0x1a3e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_1a3e70:
    // 0x1a3e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3e74:
    // 0x1a3e74: 0xe455004c  swc1        $f21, 0x4C($v0)
    ctx->pc = 0x1a3e74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_1a3e78:
    // 0x1a3e78: 0xc061a16  jal         func_186858
label_1a3e7c:
    if (ctx->pc == 0x1A3E7Cu) {
        ctx->pc = 0x1A3E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E78u;
        // 0x1a3e7c: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E80u;
        goto label_1a3e80;
    }
    ctx->pc = 0x1A3E78u;
    SET_GPR_U32(ctx, 31, 0x1A3E80u);
    ctx->pc = 0x1A3E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E78u;
    // 0x1a3e7c: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3E78u, 0x1A3E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E80u;
label_1a3e80:
    // 0x1a3e80: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1a3e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1a3e84:
    // 0x1a3e84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a3e84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1a3e88:
    // 0x1a3e88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3e8c:
    // 0x1a3e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3e90:
    // 0x1a3e90: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1a3e90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1a3e94:
    // 0x1a3e94: 0xc061a16  jal         func_186858
label_1a3e98:
    if (ctx->pc == 0x1A3E98u) {
        ctx->pc = 0x1A3E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E94u;
        // 0x1a3e98: 0xe4400050  swc1        $f0, 0x50($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3E9Cu;
        goto label_1a3e9c;
    }
    ctx->pc = 0x1A3E94u;
    SET_GPR_U32(ctx, 31, 0x1A3E9Cu);
    ctx->pc = 0x1A3E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3E94u;
    // 0x1a3e98: 0xe4400050  swc1        $f0, 0x50($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3E94u, 0x1A3E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E9Cu;
label_1a3e9c:
    // 0x1a3e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ea0:
    // 0x1a3ea0: 0xc061a16  jal         func_186858
label_1a3ea4:
    if (ctx->pc == 0x1A3EA4u) {
        ctx->pc = 0x1A3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EA0u;
        // 0x1a3ea4: 0xe4550054  swc1        $f21, 0x54($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3EA8u;
        goto label_1a3ea8;
    }
    ctx->pc = 0x1A3EA0u;
    SET_GPR_U32(ctx, 31, 0x1A3EA8u);
    ctx->pc = 0x1A3EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3EA0u;
    // 0x1a3ea4: 0xe4550054  swc1        $f21, 0x54($v0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3EA0u, 0x1A3EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3EA8u;
label_1a3ea8:
    // 0x1a3ea8: 0x4616a500  add.s       $f20, $f20, $f22
    ctx->pc = 0x1a3ea8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_1a3eac:
    // 0x1a3eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3eb0:
    // 0x1a3eb0: 0xc061a16  jal         func_186858
label_1a3eb4:
    if (ctx->pc == 0x1A3EB4u) {
        ctx->pc = 0x1A3EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EB0u;
        // 0x1a3eb4: 0xe4540058  swc1        $f20, 0x58($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3EB8u;
        goto label_1a3eb8;
    }
    ctx->pc = 0x1A3EB0u;
    SET_GPR_U32(ctx, 31, 0x1A3EB8u);
    ctx->pc = 0x1A3EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3EB0u;
    // 0x1a3eb4: 0xe4540058  swc1        $f20, 0x58($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3EB0u, 0x1A3EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3EB8u;
label_1a3eb8:
    // 0x1a3eb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a3eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a3ebc:
    // 0x1a3ebc: 0xc06eebe  jal         func_1BBAF8
label_1a3ec0:
    if (ctx->pc == 0x1A3EC0u) {
        ctx->pc = 0x1A3EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EBCu;
        // 0x1a3ec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3EC4u;
        goto label_1a3ec4;
    }
    ctx->pc = 0x1A3EBCu;
    SET_GPR_U32(ctx, 31, 0x1A3EC4u);
    ctx->pc = 0x1A3EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3EBCu;
    // 0x1a3ec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x1A3EBCu, 0x1A3EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3EC4u;
label_1a3ec4:
    // 0x1a3ec4: 0xc061a16  jal         func_186858
label_1a3ec8:
    if (ctx->pc == 0x1A3EC8u) {
        ctx->pc = 0x1A3EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EC4u;
        // 0x1a3ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3ECCu;
        goto label_1a3ecc;
    }
    ctx->pc = 0x1A3EC4u;
    SET_GPR_U32(ctx, 31, 0x1A3ECCu);
    ctx->pc = 0x1A3EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3EC4u;
    // 0x1a3ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3EC4u, 0x1A3ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3ECCu;
label_1a3ecc:
    // 0x1a3ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ed0:
    // 0x1a3ed0: 0xc061a16  jal         func_186858
label_1a3ed4:
    if (ctx->pc == 0x1A3ED4u) {
        ctx->pc = 0x1A3ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3ED0u;
        // 0x1a3ed4: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3ED8u;
        goto label_1a3ed8;
    }
    ctx->pc = 0x1A3ED0u;
    SET_GPR_U32(ctx, 31, 0x1A3ED8u);
    ctx->pc = 0x1A3ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3ED0u;
    // 0x1a3ed4: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3ED0u, 0x1A3ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3ED8u;
label_1a3ed8:
    // 0x1a3ed8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1a3ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1a3edc:
    // 0x1a3edc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3ee0:
    // 0x1a3ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ee4:
    // 0x1a3ee4: 0xc061a1e  jal         func_186878
label_1a3ee8:
    if (ctx->pc == 0x1A3EE8u) {
        ctx->pc = 0x1A3EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EE4u;
        // 0x1a3ee8: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3EECu;
        goto label_1a3eec;
    }
    ctx->pc = 0x1A3EE4u;
    SET_GPR_U32(ctx, 31, 0x1A3EECu);
    ctx->pc = 0x1A3EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3EE4u;
    // 0x1a3ee8: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A3EE4u, 0x1A3EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3EECu;
label_1a3eec:
    // 0x1a3eec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a3eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a3ef0:
    // 0x1a3ef0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ef4:
    // 0x1a3ef4: 0xc06cdda  jal         func_1B3768
label_1a3ef8:
    if (ctx->pc == 0x1A3EF8u) {
        ctx->pc = 0x1A3EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3EF4u;
        // 0x1a3ef8: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3EFCu;
        goto label_1a3efc;
    }
    ctx->pc = 0x1A3EF4u;
    SET_GPR_U32(ctx, 31, 0x1A3EFCu);
    ctx->pc = 0x1A3EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3EF4u;
    // 0x1a3ef8: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1A3EF4u, 0x1A3EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3EFCu;
label_1a3efc:
    // 0x1a3efc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3efcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3f00:
    // 0x1a3f00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a3f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a3f04:
    // 0x1a3f04: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x1a3f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1a3f08:
    // 0x1a3f08: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x1a3f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a3f0c:
    // 0x1a3f0c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1a3f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a3f10:
    // 0x1a3f10: 0x3e00008  jr          $ra
label_1a3f14:
    if (ctx->pc == 0x1A3F14u) {
        ctx->pc = 0x1A3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F10u;
        // 0x1a3f14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F18u;
        goto label_fallthrough_0x1a3f10;
    }
    ctx->pc = 0x1A3F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F10u;
        // 0x1a3f14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a3f10:
    ctx->pc = 0x1A3F18u;
}
