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

// Function: sub_001A3C48
// Address: 0x1a3c48 - 0x1a3db8
void sub_001A3C48_0x1a3c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3C48_0x1a3c48");
#endif

    switch (ctx->pc) {
        case 0x1a3c48u: goto label_1a3c48;
        case 0x1a3c4cu: goto label_1a3c4c;
        case 0x1a3c50u: goto label_1a3c50;
        case 0x1a3c54u: goto label_1a3c54;
        case 0x1a3c58u: goto label_1a3c58;
        case 0x1a3c5cu: goto label_1a3c5c;
        case 0x1a3c60u: goto label_1a3c60;
        case 0x1a3c64u: goto label_1a3c64;
        case 0x1a3c68u: goto label_1a3c68;
        case 0x1a3c6cu: goto label_1a3c6c;
        case 0x1a3c70u: goto label_1a3c70;
        case 0x1a3c74u: goto label_1a3c74;
        case 0x1a3c78u: goto label_1a3c78;
        case 0x1a3c7cu: goto label_1a3c7c;
        case 0x1a3c80u: goto label_1a3c80;
        case 0x1a3c84u: goto label_1a3c84;
        case 0x1a3c88u: goto label_1a3c88;
        case 0x1a3c8cu: goto label_1a3c8c;
        case 0x1a3c90u: goto label_1a3c90;
        case 0x1a3c94u: goto label_1a3c94;
        case 0x1a3c98u: goto label_1a3c98;
        case 0x1a3c9cu: goto label_1a3c9c;
        case 0x1a3ca0u: goto label_1a3ca0;
        case 0x1a3ca4u: goto label_1a3ca4;
        case 0x1a3ca8u: goto label_1a3ca8;
        case 0x1a3cacu: goto label_1a3cac;
        case 0x1a3cb0u: goto label_1a3cb0;
        case 0x1a3cb4u: goto label_1a3cb4;
        case 0x1a3cb8u: goto label_1a3cb8;
        case 0x1a3cbcu: goto label_1a3cbc;
        case 0x1a3cc0u: goto label_1a3cc0;
        case 0x1a3cc4u: goto label_1a3cc4;
        case 0x1a3cc8u: goto label_1a3cc8;
        case 0x1a3cccu: goto label_1a3ccc;
        case 0x1a3cd0u: goto label_1a3cd0;
        case 0x1a3cd4u: goto label_1a3cd4;
        case 0x1a3cd8u: goto label_1a3cd8;
        case 0x1a3cdcu: goto label_1a3cdc;
        case 0x1a3ce0u: goto label_1a3ce0;
        case 0x1a3ce4u: goto label_1a3ce4;
        case 0x1a3ce8u: goto label_1a3ce8;
        case 0x1a3cecu: goto label_1a3cec;
        case 0x1a3cf0u: goto label_1a3cf0;
        case 0x1a3cf4u: goto label_1a3cf4;
        case 0x1a3cf8u: goto label_1a3cf8;
        case 0x1a3cfcu: goto label_1a3cfc;
        case 0x1a3d00u: goto label_1a3d00;
        case 0x1a3d04u: goto label_1a3d04;
        case 0x1a3d08u: goto label_1a3d08;
        case 0x1a3d0cu: goto label_1a3d0c;
        case 0x1a3d10u: goto label_1a3d10;
        case 0x1a3d14u: goto label_1a3d14;
        case 0x1a3d18u: goto label_1a3d18;
        case 0x1a3d1cu: goto label_1a3d1c;
        case 0x1a3d20u: goto label_1a3d20;
        case 0x1a3d24u: goto label_1a3d24;
        case 0x1a3d28u: goto label_1a3d28;
        case 0x1a3d2cu: goto label_1a3d2c;
        case 0x1a3d30u: goto label_1a3d30;
        case 0x1a3d34u: goto label_1a3d34;
        case 0x1a3d38u: goto label_1a3d38;
        case 0x1a3d3cu: goto label_1a3d3c;
        case 0x1a3d40u: goto label_1a3d40;
        case 0x1a3d44u: goto label_1a3d44;
        case 0x1a3d48u: goto label_1a3d48;
        case 0x1a3d4cu: goto label_1a3d4c;
        case 0x1a3d50u: goto label_1a3d50;
        case 0x1a3d54u: goto label_1a3d54;
        case 0x1a3d58u: goto label_1a3d58;
        case 0x1a3d5cu: goto label_1a3d5c;
        case 0x1a3d60u: goto label_1a3d60;
        case 0x1a3d64u: goto label_1a3d64;
        case 0x1a3d68u: goto label_1a3d68;
        case 0x1a3d6cu: goto label_1a3d6c;
        case 0x1a3d70u: goto label_1a3d70;
        case 0x1a3d74u: goto label_1a3d74;
        case 0x1a3d78u: goto label_1a3d78;
        case 0x1a3d7cu: goto label_1a3d7c;
        case 0x1a3d80u: goto label_1a3d80;
        case 0x1a3d84u: goto label_1a3d84;
        case 0x1a3d88u: goto label_1a3d88;
        case 0x1a3d8cu: goto label_1a3d8c;
        case 0x1a3d90u: goto label_1a3d90;
        case 0x1a3d94u: goto label_1a3d94;
        case 0x1a3d98u: goto label_1a3d98;
        case 0x1a3d9cu: goto label_1a3d9c;
        case 0x1a3da0u: goto label_1a3da0;
        case 0x1a3da4u: goto label_1a3da4;
        case 0x1a3da8u: goto label_1a3da8;
        case 0x1a3dacu: goto label_1a3dac;
        case 0x1a3db0u: goto label_1a3db0;
        case 0x1a3db4u: goto label_1a3db4;
        default: break;
    }

    ctx->pc = 0x1a3c48u;

label_1a3c48:
    // 0x1a3c48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a3c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a3c4c:
    // 0x1a3c4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3c50:
    // 0x1a3c50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a3c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a3c54:
    // 0x1a3c54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c58:
    // 0x1a3c58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a3c5c:
    // 0x1a3c5c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a3c5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3c60:
    // 0x1a3c60: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x1a3c60u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a3c64:
    // 0x1a3c64: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1a3c64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1a3c68:
    // 0x1a3c68: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a3c68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a3c6c:
    // 0x1a3c6c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a3c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a3c70:
    // 0x1a3c70: 0x50510049  beql        $v0, $s1, . + 4 + (0x49 << 2)
label_1a3c74:
    if (ctx->pc == 0x1A3C74u) {
        ctx->pc = 0x1A3C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C70u;
        // 0x1a3c74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C78u;
        goto label_1a3c78;
    }
    ctx->pc = 0x1A3C70u;
    {
        const bool branch_taken_0x1a3c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a3c70) {
            ctx->pc = 0x1A3C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3C70u;
            // 0x1a3c74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3D98u;
            goto label_1a3d98;
        }
    }
    ctx->pc = 0x1A3C78u;
label_1a3c78:
    // 0x1a3c78: 0xc0691d6  jal         func_1A4758
label_1a3c7c:
    if (ctx->pc == 0x1A3C7Cu) {
        ctx->pc = 0x1A3C80u;
        goto label_1a3c80;
    }
    ctx->pc = 0x1A3C78u;
    SET_GPR_U32(ctx, 31, 0x1A3C80u);
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A3C78u, 0x1A3C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C80u;
label_1a3c80:
    // 0x1a3c80: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a3c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a3c84:
    // 0x1a3c84: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a3c88:
    if (ctx->pc == 0x1A3C88u) {
        ctx->pc = 0x1A3C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C84u;
        // 0x1a3c88: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3C8Cu;
        goto label_1a3c8c;
    }
    ctx->pc = 0x1A3C84u;
    {
        const bool branch_taken_0x1a3c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3C84u;
        // 0x1a3c88: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3c84) {
            ctx->pc = 0x1A3C9Cu;
            goto label_1a3c9c;
        }
    }
    ctx->pc = 0x1A3C8Cu;
label_1a3c8c:
    // 0x1a3c8c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a3c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a3c90:
    // 0x1a3c90: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a3c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a3c94:
    // 0x1a3c94: 0x40f809  jalr        $v0
label_1a3c98:
    if (ctx->pc == 0x1A3C98u) {
        ctx->pc = 0x1A3C9Cu;
        goto label_1a3c9c;
    }
    ctx->pc = 0x1A3C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3C9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3C94u, 0x1A3C9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3C9Cu;
label_1a3c9c:
    // 0x1a3c9c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a3c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a3ca0:
    // 0x1a3ca0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1a3ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1a3ca4:
    // 0x1a3ca4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a3ca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1a3ca8:
    // 0x1a3ca8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1a3ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1a3cac:
    // 0x1a3cac: 0xc061a12  jal         func_186848
label_1a3cb0:
    if (ctx->pc == 0x1A3CB0u) {
        ctx->pc = 0x1A3CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CACu;
        // 0x1a3cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CB4u;
        goto label_1a3cb4;
    }
    ctx->pc = 0x1A3CACu;
    SET_GPR_U32(ctx, 31, 0x1A3CB4u);
    ctx->pc = 0x1A3CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CACu;
    // 0x1a3cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A3CACu, 0x1A3CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CB4u;
label_1a3cb4:
    // 0x1a3cb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a3cb8:
    // 0x1a3cb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a3cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3cbc:
    // 0x1a3cbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3cc0:
    // 0x1a3cc0: 0xc07026c  jal         func_1C09B0
label_1a3cc4:
    if (ctx->pc == 0x1A3CC4u) {
        ctx->pc = 0x1A3CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CC0u;
        // 0x1a3cc4: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CC8u;
        goto label_1a3cc8;
    }
    ctx->pc = 0x1A3CC0u;
    SET_GPR_U32(ctx, 31, 0x1A3CC8u);
    ctx->pc = 0x1A3CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CC0u;
    // 0x1a3cc4: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C09B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C09B0u, 0x1A3CC0u, 0x1A3CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CC8u;
label_1a3cc8:
    // 0x1a3cc8: 0xc08951c  jal         func_225470
label_1a3ccc:
    if (ctx->pc == 0x1A3CCCu) {
        ctx->pc = 0x1A3CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CC8u;
        // 0x1a3ccc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CD0u;
        goto label_1a3cd0;
    }
    ctx->pc = 0x1A3CC8u;
    SET_GPR_U32(ctx, 31, 0x1A3CD0u);
    ctx->pc = 0x1A3CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CC8u;
    // 0x1a3ccc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1A3CC8u, 0x1A3CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CD0u;
label_1a3cd0:
    // 0x1a3cd0: 0xc0d8f5a  jal         func_363D68
label_1a3cd4:
    if (ctx->pc == 0x1A3CD4u) {
        ctx->pc = 0x1A3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CD0u;
        // 0x1a3cd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CD8u;
        goto label_1a3cd8;
    }
    ctx->pc = 0x1A3CD0u;
    SET_GPR_U32(ctx, 31, 0x1A3CD8u);
    ctx->pc = 0x1A3CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CD0u;
    // 0x1a3cd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D68u, 0x1A3CD0u, 0x1A3CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CD8u;
label_1a3cd8:
    // 0x1a3cd8: 0x46160540  add.s       $f21, $f0, $f22
    ctx->pc = 0x1a3cd8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_1a3cdc:
    // 0x1a3cdc: 0xc061a16  jal         func_186858
label_1a3ce0:
    if (ctx->pc == 0x1A3CE0u) {
        ctx->pc = 0x1A3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CDCu;
        // 0x1a3ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CE4u;
        goto label_1a3ce4;
    }
    ctx->pc = 0x1A3CDCu;
    SET_GPR_U32(ctx, 31, 0x1A3CE4u);
    ctx->pc = 0x1A3CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CDCu;
    // 0x1a3ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3CDCu, 0x1A3CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CE4u;
label_1a3ce4:
    // 0x1a3ce4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ce8:
    // 0x1a3ce8: 0xc06ee70  jal         func_1BB9C0
label_1a3cec:
    if (ctx->pc == 0x1A3CECu) {
        ctx->pc = 0x1A3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CE8u;
        // 0x1a3cec: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CF0u;
        goto label_1a3cf0;
    }
    ctx->pc = 0x1A3CE8u;
    SET_GPR_U32(ctx, 31, 0x1A3CF0u);
    ctx->pc = 0x1A3CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CE8u;
    // 0x1a3cec: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9C0u, 0x1A3CE8u, 0x1A3CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CF0u;
label_1a3cf0:
    // 0x1a3cf0: 0xc061a16  jal         func_186858
label_1a3cf4:
    if (ctx->pc == 0x1A3CF4u) {
        ctx->pc = 0x1A3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3CF0u;
        // 0x1a3cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3CF8u;
        goto label_1a3cf8;
    }
    ctx->pc = 0x1A3CF0u;
    SET_GPR_U32(ctx, 31, 0x1A3CF8u);
    ctx->pc = 0x1A3CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3CF0u;
    // 0x1a3cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3CF0u, 0x1A3CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CF8u;
label_1a3cf8:
    // 0x1a3cf8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1a3cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_1a3cfc:
    // 0x1a3cfc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a3cfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1a3d00:
    // 0x1a3d00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a3d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a3d04:
    // 0x1a3d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d08:
    // 0x1a3d08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a3d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a3d0c:
    // 0x1a3d0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3d10:
    // 0x1a3d10: 0x4614ad00  add.s       $f20, $f21, $f20
    ctx->pc = 0x1a3d10u;
    ctx->f[20] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_1a3d14:
    // 0x1a3d14: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1a3d14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1a3d18:
    // 0x1a3d18: 0xe454004c  swc1        $f20, 0x4C($v0)
    ctx->pc = 0x1a3d18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_1a3d1c:
    // 0x1a3d1c: 0xc061a16  jal         func_186858
label_1a3d20:
    if (ctx->pc == 0x1A3D20u) {
        ctx->pc = 0x1A3D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D1Cu;
        // 0x1a3d20: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D24u;
        goto label_1a3d24;
    }
    ctx->pc = 0x1A3D1Cu;
    SET_GPR_U32(ctx, 31, 0x1A3D24u);
    ctx->pc = 0x1A3D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D1Cu;
    // 0x1a3d20: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3D1Cu, 0x1A3D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D24u;
label_1a3d24:
    // 0x1a3d24: 0x4616ad80  add.s       $f22, $f21, $f22
    ctx->pc = 0x1a3d24u;
    ctx->f[22] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_1a3d28:
    // 0x1a3d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d2c:
    // 0x1a3d2c: 0xc061a16  jal         func_186858
label_1a3d30:
    if (ctx->pc == 0x1A3D30u) {
        ctx->pc = 0x1A3D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D2Cu;
        // 0x1a3d30: 0xe4560050  swc1        $f22, 0x50($v0) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D34u;
        goto label_1a3d34;
    }
    ctx->pc = 0x1A3D2Cu;
    SET_GPR_U32(ctx, 31, 0x1A3D34u);
    ctx->pc = 0x1A3D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D2Cu;
    // 0x1a3d30: 0xe4560050  swc1        $f22, 0x50($v0) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3D2Cu, 0x1A3D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D34u;
label_1a3d34:
    // 0x1a3d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d38:
    // 0x1a3d38: 0xc061a16  jal         func_186858
label_1a3d3c:
    if (ctx->pc == 0x1A3D3Cu) {
        ctx->pc = 0x1A3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D38u;
        // 0x1a3d3c: 0xe4540054  swc1        $f20, 0x54($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D40u;
        goto label_1a3d40;
    }
    ctx->pc = 0x1A3D38u;
    SET_GPR_U32(ctx, 31, 0x1A3D40u);
    ctx->pc = 0x1A3D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D38u;
    // 0x1a3d3c: 0xe4540054  swc1        $f20, 0x54($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3D38u, 0x1A3D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D40u;
label_1a3d40:
    // 0x1a3d40: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1a3d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1a3d44:
    // 0x1a3d44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3d48:
    // 0x1a3d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d4c:
    // 0x1a3d4c: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x1a3d4cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1a3d50:
    // 0x1a3d50: 0xc061a16  jal         func_186858
label_1a3d54:
    if (ctx->pc == 0x1A3D54u) {
        ctx->pc = 0x1A3D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D50u;
        // 0x1a3d54: 0xe4550058  swc1        $f21, 0x58($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D58u;
        goto label_1a3d58;
    }
    ctx->pc = 0x1A3D50u;
    SET_GPR_U32(ctx, 31, 0x1A3D58u);
    ctx->pc = 0x1A3D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D50u;
    // 0x1a3d54: 0xe4550058  swc1        $f21, 0x58($v0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3D50u, 0x1A3D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D58u;
label_1a3d58:
    // 0x1a3d58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a3d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a3d5c:
    // 0x1a3d5c: 0xc06eebe  jal         func_1BBAF8
label_1a3d60:
    if (ctx->pc == 0x1A3D60u) {
        ctx->pc = 0x1A3D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D5Cu;
        // 0x1a3d60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D64u;
        goto label_1a3d64;
    }
    ctx->pc = 0x1A3D5Cu;
    SET_GPR_U32(ctx, 31, 0x1A3D64u);
    ctx->pc = 0x1A3D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D5Cu;
    // 0x1a3d60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x1A3D5Cu, 0x1A3D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D64u;
label_1a3d64:
    // 0x1a3d64: 0xc061a16  jal         func_186858
label_1a3d68:
    if (ctx->pc == 0x1A3D68u) {
        ctx->pc = 0x1A3D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D64u;
        // 0x1a3d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D6Cu;
        goto label_1a3d6c;
    }
    ctx->pc = 0x1A3D64u;
    SET_GPR_U32(ctx, 31, 0x1A3D6Cu);
    ctx->pc = 0x1A3D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D64u;
    // 0x1a3d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3D64u, 0x1A3D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D6Cu;
label_1a3d6c:
    // 0x1a3d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d70:
    // 0x1a3d70: 0xc061a16  jal         func_186858
label_1a3d74:
    if (ctx->pc == 0x1A3D74u) {
        ctx->pc = 0x1A3D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D70u;
        // 0x1a3d74: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D78u;
        goto label_1a3d78;
    }
    ctx->pc = 0x1A3D70u;
    SET_GPR_U32(ctx, 31, 0x1A3D78u);
    ctx->pc = 0x1A3D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D70u;
    // 0x1a3d74: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A3D70u, 0x1A3D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D78u;
label_1a3d78:
    // 0x1a3d78: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1a3d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1a3d7c:
    // 0x1a3d7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3d80:
    // 0x1a3d80: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1a3d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_1a3d84:
    // 0x1a3d84: 0x2484f020  addiu       $a0, $a0, -0xFE0
    ctx->pc = 0x1a3d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963232));
label_1a3d88:
    // 0x1a3d88: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1a3d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1a3d8c:
    // 0x1a3d8c: 0xc0f71b8  jal         func_3DC6E0
label_1a3d90:
    if (ctx->pc == 0x1A3D90u) {
        ctx->pc = 0x1A3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D8Cu;
        // 0x1a3d90: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D94u;
        goto label_1a3d94;
    }
    ctx->pc = 0x1A3D8Cu;
    SET_GPR_U32(ctx, 31, 0x1A3D94u);
    ctx->pc = 0x1A3D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3D8Cu;
    // 0x1a3d90: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC6E0u, 0x1A3D8Cu, 0x1A3D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D94u;
label_1a3d94:
    // 0x1a3d94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3d98:
    // 0x1a3d98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a3d98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a3d9c:
    // 0x1a3d9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3da0:
    // 0x1a3da0: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x1a3da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1a3da4:
    // 0x1a3da4: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1a3da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a3da8:
    // 0x1a3da8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a3da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a3dac:
    // 0x1a3dac: 0x3e00008  jr          $ra
label_1a3db0:
    if (ctx->pc == 0x1A3DB0u) {
        ctx->pc = 0x1A3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DACu;
        // 0x1a3db0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3DB4u;
        goto label_1a3db4;
    }
    ctx->pc = 0x1A3DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DACu;
        // 0x1a3db0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3DB4u;
label_1a3db4:
    // 0x1a3db4: 0x0  nop
    ctx->pc = 0x1a3db4u;
    // NOP
    ctx->pc = 0x1a3db8u;
}
