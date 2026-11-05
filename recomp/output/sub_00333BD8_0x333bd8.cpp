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

// Function: sub_00333BD8
// Address: 0x333bd8 - 0x333ee0
void sub_00333BD8_0x333bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333BD8_0x333bd8");
#endif

    switch (ctx->pc) {
        case 0x333c2cu: goto label_333c2c;
        case 0x333c44u: goto label_333c44;
        case 0x333c5cu: goto label_333c5c;
        case 0x333c70u: goto label_333c70;
        case 0x333c7cu: goto label_333c7c;
        case 0x333c94u: goto label_333c94;
        case 0x333ca8u: goto label_333ca8;
        case 0x333cb0u: goto label_333cb0;
        case 0x333cc0u: goto label_333cc0;
        case 0x333cc8u: goto label_333cc8;
        case 0x333cd8u: goto label_333cd8;
        case 0x333ce0u: goto label_333ce0;
        case 0x333cf0u: goto label_333cf0;
        case 0x333cf8u: goto label_333cf8;
        case 0x333d08u: goto label_333d08;
        case 0x333d10u: goto label_333d10;
        case 0x333d1cu: goto label_333d1c;
        case 0x333d24u: goto label_333d24;
        case 0x333d48u: goto label_333d48;
        case 0x333d50u: goto label_333d50;
        case 0x333d70u: goto label_333d70;
        case 0x333d84u: goto label_333d84;
        case 0x333d94u: goto label_333d94;
        case 0x333d9cu: goto label_333d9c;
        case 0x333da8u: goto label_333da8;
        case 0x333db0u: goto label_333db0;
        case 0x333dbcu: goto label_333dbc;
        case 0x333dc8u: goto label_333dc8;
        case 0x333de0u: goto label_333de0;
        case 0x333df0u: goto label_333df0;
        case 0x333e00u: goto label_333e00;
        case 0x333e08u: goto label_333e08;
        case 0x333e14u: goto label_333e14;
        case 0x333e1cu: goto label_333e1c;
        case 0x333e28u: goto label_333e28;
        case 0x333e9cu: goto label_333e9c;
        case 0x333ea4u: goto label_333ea4;
        default: break;
    }

    ctx->pc = 0x333bd8u;

    // 0x333bd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x333bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x333bdc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x333bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x333be0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x333be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x333be4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x333be4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333be8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x333be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x333bec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x333becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x333bf0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x333bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x333bf4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x333bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x333bf8: 0x8e820484  lw          $v0, 0x484($s4)
    ctx->pc = 0x333bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1156)));
    // 0x333bfc: 0x2444ffab  addiu       $a0, $v0, -0x55
    ctx->pc = 0x333bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967211));
    // 0x333c00: 0x2c830021  sltiu       $v1, $a0, 0x21
    ctx->pc = 0x333c00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x333c04: 0x106000b7  beqz        $v1, . + 4 + (0xB7 << 2)
    ctx->pc = 0x333C04u;
    {
        const bool branch_taken_0x333c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x333C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C04u;
        // 0x333c08: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c04) {
            ctx->pc = 0x333EE4u;
            return;
        }
    }
    ctx->pc = 0x333C0Cu;
    // 0x333c0c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x333c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x333c10: 0x244258d0  addiu       $v0, $v0, 0x58D0
    ctx->pc = 0x333c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22736));
    // 0x333c14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x333c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333c18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x333c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x333c1c: 0x800008  jr          $a0
    ctx->pc = 0x333C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x333C24u: goto label_333c24;
            case 0x333C3Cu: goto label_333c3c;
            case 0x333C54u: goto label_333c54;
            case 0x333C68u: goto label_333c68;
            case 0x333C8Cu: goto label_333c8c;
            case 0x333CA0u: goto label_333ca0;
            case 0x333CB8u: goto label_333cb8;
            case 0x333CD0u: goto label_333cd0;
            case 0x333CE8u: goto label_333ce8;
            case 0x333D00u: goto label_333d00;
            case 0x333D14u: goto label_333d14;
            case 0x333D40u: goto label_333d40;
            case 0x333D68u: goto label_333d68;
            case 0x333D8Cu: goto label_333d8c;
            case 0x333DF8u: goto label_333df8;
            case 0x333E30u: goto label_333e30;
            case 0x333E44u: goto label_333e44;
            case 0x333E58u: goto label_333e58;
            case 0x333E6Cu: goto label_333e6c;
            case 0x333E80u: goto label_333e80;
            case 0x333E94u: goto label_333e94;
            case 0x333ECCu: goto label_333ecc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333C1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x333C24u;
label_333c24:
    // 0x333c24: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x333C24u;
    SET_GPR_U32(ctx, 31, 0x333C2Cu);
    ctx->pc = 0x333C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333C24u;
    // 0x333c28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x333C24u, 0x333C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C2Cu;
label_333c2c:
    // 0x333c2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x333c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x333c30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x333c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x333c34: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x333C34u;
    {
        const bool branch_taken_0x333c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C34u;
        // 0x333c38: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c34) {
            ctx->pc = 0x333C74u;
            goto label_333c74;
        }
    }
    ctx->pc = 0x333C3Cu;
label_333c3c:
    // 0x333c3c: 0xc0cdf2e  jal         func_337CB8
    ctx->pc = 0x333C3Cu;
    SET_GPR_U32(ctx, 31, 0x333C44u);
    ctx->pc = 0x333C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333C3Cu;
    // 0x333c40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x333C3Cu, 0x333C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C44u;
label_333c44:
    // 0x333c44: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x333C44u;
    {
        const bool branch_taken_0x333c44 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x333c44) {
            ctx->pc = 0x333C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333C44u;
            // 0x333c48: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333C4Cu;
            goto label_333c4c;
        }
    }
    ctx->pc = 0x333C4Cu;
label_333c4c:
    // 0x333c4c: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x333C4Cu;
    {
        const bool branch_taken_0x333c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C4Cu;
        // 0x333c50: 0xae82003c  sw          $v0, 0x3C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c4c) {
            ctx->pc = 0x333EE4u;
            return;
        }
    }
    ctx->pc = 0x333C54u;
label_333c54:
    // 0x333c54: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x333C54u;
    SET_GPR_U32(ctx, 31, 0x333C5Cu);
    ctx->pc = 0x333C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333C54u;
    // 0x333c58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x333C54u, 0x333C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C5Cu;
label_333c5c:
    // 0x333c5c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x333c5cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x333c60: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x333C60u;
    {
        const bool branch_taken_0x333c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C60u;
        // 0x333c64: 0xe680003c  swc1        $f0, 0x3C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c60) {
            ctx->pc = 0x333EE4u;
            return;
        }
    }
    ctx->pc = 0x333C68u;
label_333c68:
    // 0x333c68: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x333C68u;
    SET_GPR_U32(ctx, 31, 0x333C70u);
    ctx->pc = 0x333C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333C68u;
    // 0x333c6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x333C68u, 0x333C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C70u;
label_333c70:
    // 0x333c70: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x333c70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_333c74:
    // 0x333c74: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x333C74u;
    SET_GPR_U32(ctx, 31, 0x333C7Cu);
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x333C74u, 0x333C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C7Cu;
label_333c7c:
    // 0x333c7c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x333c7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x333c80: 0xe681003c  swc1        $f1, 0x3C($s4)
    ctx->pc = 0x333c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
    // 0x333c84: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x333C84u;
    {
        const bool branch_taken_0x333c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C84u;
        // 0x333c88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c84) {
            ctx->pc = 0x333EE8u;
            return;
        }
    }
    ctx->pc = 0x333C8Cu;
label_333c8c:
    // 0x333c8c: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x333C8Cu;
    SET_GPR_U32(ctx, 31, 0x333C94u);
    ctx->pc = 0x333C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333C8Cu;
    // 0x333c90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x333C8Cu, 0x333C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C94u;
label_333c94:
    // 0x333c94: 0x46000004  c1          0x4
    ctx->pc = 0x333c94u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x333c98: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x333C98u;
    {
        const bool branch_taken_0x333c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C98u;
        // 0x333c9c: 0xe680003c  swc1        $f0, 0x3C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c98) {
            ctx->pc = 0x333EE4u;
            return;
        }
    }
    ctx->pc = 0x333CA0u;
label_333ca0:
    // 0x333ca0: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x333CA0u;
    SET_GPR_U32(ctx, 31, 0x333CA8u);
    ctx->pc = 0x333CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333CA0u;
    // 0x333ca4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x333CA0u, 0x333CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CA8u;
label_333ca8:
    // 0x333ca8: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x333CA8u;
    SET_GPR_U32(ctx, 31, 0x333CB0u);
    ctx->pc = 0x333CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333CA8u;
    // 0x333cac: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x333CA8u, 0x333CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CB0u;
label_333cb0:
    // 0x333cb0: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x333CB0u;
    {
        const bool branch_taken_0x333cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333CB0u;
        // 0x333cb4: 0xe680003c  swc1        $f0, 0x3C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x333cb0) {
            ctx->pc = 0x333EE4u;
            return;
        }
    }
    ctx->pc = 0x333CB8u;
label_333cb8:
    // 0x333cb8: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x333CB8u;
    SET_GPR_U32(ctx, 31, 0x333CC0u);
    ctx->pc = 0x333CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333CB8u;
    // 0x333cbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x333CB8u, 0x333CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CC0u;
label_333cc0:
    // 0x333cc0: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x333CC0u;
    SET_GPR_U32(ctx, 31, 0x333CC8u);
    ctx->pc = 0x333CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333CC0u;
    // 0x333cc4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x333CC0u, 0x333CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CC8u;
label_333cc8:
    // 0x333cc8: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x333CC8u;
    {
        const bool branch_taken_0x333cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333CC8u;
        // 0x333ccc: 0xe680003c  swc1        $f0, 0x3C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x333cc8) {
            ctx->pc = 0x333EE4u;
            return;
        }
    }
    ctx->pc = 0x333CD0u;
label_333cd0:
    // 0x333cd0: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x333CD0u;
    SET_GPR_U32(ctx, 31, 0x333CD8u);
    ctx->pc = 0x333CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333CD0u;
    // 0x333cd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x333CD0u, 0x333CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CD8u;
label_333cd8:
    // 0x333cd8: 0xc0e3fd4  jal         func_38FF50
    ctx->pc = 0x333CD8u;
    SET_GPR_U32(ctx, 31, 0x333CE0u);
    ctx->pc = 0x333CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333CD8u;
    // 0x333cdc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FF50u, 0x333CD8u, 0x333CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CE0u;
label_333ce0:
    // 0x333ce0: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x333CE0u;
    {
        const bool branch_taken_0x333ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333CE0u;
        // 0x333ce4: 0xe680003c  swc1        $f0, 0x3C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x333ce0) {
            ctx->pc = 0x333EE4u;
            return;
        }
    }
    ctx->pc = 0x333CE8u;
label_333ce8:
    // 0x333ce8: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x333CE8u;
    SET_GPR_U32(ctx, 31, 0x333CF0u);
    ctx->pc = 0x333CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333CE8u;
    // 0x333cec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x333CE8u, 0x333CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CF0u;
label_333cf0:
    // 0x333cf0: 0xc0e4096  jal         func_390258
    ctx->pc = 0x333CF0u;
    SET_GPR_U32(ctx, 31, 0x333CF8u);
    ctx->pc = 0x333CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333CF0u;
    // 0x333cf4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390258u, 0x333CF0u, 0x333CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CF8u;
label_333cf8:
    // 0x333cf8: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x333CF8u;
    {
        const bool branch_taken_0x333cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333CF8u;
        // 0x333cfc: 0xe680003c  swc1        $f0, 0x3C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x333cf8) {
            ctx->pc = 0x333EE4u;
            return;
        }
    }
    ctx->pc = 0x333D00u;
label_333d00:
    // 0x333d00: 0xc0cdf40  jal         func_337D00
    ctx->pc = 0x333D00u;
    SET_GPR_U32(ctx, 31, 0x333D08u);
    ctx->pc = 0x333D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D00u;
    // 0x333d04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D00u, 0x333D00u, 0x333D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D08u;
label_333d08:
    // 0x333d08: 0xc0e4144  jal         func_390510
    ctx->pc = 0x333D08u;
    SET_GPR_U32(ctx, 31, 0x333D10u);
    ctx->pc = 0x333D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D08u;
    // 0x333d0c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390510u, 0x333D08u, 0x333D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D10u;
label_333d10:
    // 0x333d10: 0xe680003c  swc1        $f0, 0x3C($s4)
    ctx->pc = 0x333d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
label_333d14:
    // 0x333d14: 0xc0cdf2e  jal         func_337CB8
    ctx->pc = 0x333D14u;
    SET_GPR_U32(ctx, 31, 0x333D1Cu);
    ctx->pc = 0x333D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D14u;
    // 0x333d18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x333D14u, 0x333D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D1Cu;
label_333d1c:
    // 0x333d1c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x333D1Cu;
    SET_GPR_U32(ctx, 31, 0x333D24u);
    ctx->pc = 0x333D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D1Cu;
    // 0x333d20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x333D1Cu, 0x333D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D24u;
label_333d24:
    // 0x333d24: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x333d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x333d28: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x333D28u;
    {
        const bool branch_taken_0x333d28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x333d28) {
            ctx->pc = 0x333D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333D28u;
            // 0x333d2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x333D30u;
            goto label_333d30;
        }
    }
    ctx->pc = 0x333D30u;
label_333d30:
    // 0x333d30: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x333d30u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x333d34: 0x1810  mfhi        $v1
    ctx->pc = 0x333d34u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x333d38: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x333D38u;
    {
        const bool branch_taken_0x333d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D38u;
        // 0x333d3c: 0xae83003c  sw          $v1, 0x3C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333d38) {
            ctx->pc = 0x333EE4u;
            return;
        }
    }
    ctx->pc = 0x333D40u;
label_333d40:
    // 0x333d40: 0xc0cdf2e  jal         func_337CB8
    ctx->pc = 0x333D40u;
    SET_GPR_U32(ctx, 31, 0x333D48u);
    ctx->pc = 0x333D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D40u;
    // 0x333d44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x333D40u, 0x333D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D48u;
label_333d48:
    // 0x333d48: 0xc0760d6  jal         func_1D8358
    ctx->pc = 0x333D48u;
    SET_GPR_U32(ctx, 31, 0x333D50u);
    ctx->pc = 0x333D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D48u;
    // 0x333d4c: 0xae8204a0  sw          $v0, 0x4A0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8358u, 0x333D48u, 0x333D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D50u;
label_333d50:
    // 0x333d50: 0x8e840498  lw          $a0, 0x498($s4)
    ctx->pc = 0x333d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1176)));
    // 0x333d54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x333d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333d58: 0xae830498  sw          $v1, 0x498($s4)
    ctx->pc = 0x333d58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1176), GPR_U32(ctx, 3));
    // 0x333d5c: 0xae8204a4  sw          $v0, 0x4A4($s4)
    ctx->pc = 0x333d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1188), GPR_U32(ctx, 2));
    // 0x333d60: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x333D60u;
    {
        const bool branch_taken_0x333d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D60u;
        // 0x333d64: 0xae84049c  sw          $a0, 0x49C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1180), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333d60) {
            ctx->pc = 0x333EE4u;
            return;
        }
    }
    ctx->pc = 0x333D68u;
label_333d68:
    // 0x333d68: 0xc0cdf2e  jal         func_337CB8
    ctx->pc = 0x333D68u;
    SET_GPR_U32(ctx, 31, 0x333D70u);
    ctx->pc = 0x333D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D68u;
    // 0x333d6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x333D68u, 0x333D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D70u;
label_333d70:
    // 0x333d70: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x333D70u;
    {
        const bool branch_taken_0x333d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x333D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D70u;
        // 0x333d74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333d70) {
            ctx->pc = 0x333EE8u;
            return;
        }
    }
    ctx->pc = 0x333D78u;
    // 0x333d78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x333d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333d7c: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x333D7Cu;
    SET_GPR_U32(ctx, 31, 0x333D84u);
    ctx->pc = 0x333D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D7Cu;
    // 0x333d80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x333D7Cu, 0x333D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D84u;
label_333d84:
    // 0x333d84: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x333D84u;
    {
        const bool branch_taken_0x333d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333D84u;
        // 0x333d88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333d84) {
            ctx->pc = 0x333EE8u;
            return;
        }
    }
    ctx->pc = 0x333D8Cu;
label_333d8c:
    // 0x333d8c: 0xc0cdf2e  jal         func_337CB8
    ctx->pc = 0x333D8Cu;
    SET_GPR_U32(ctx, 31, 0x333D94u);
    ctx->pc = 0x333D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D8Cu;
    // 0x333d90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x333D8Cu, 0x333D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D94u;
label_333d94:
    // 0x333d94: 0xc0cdf52  jal         func_337D48
    ctx->pc = 0x333D94u;
    SET_GPR_U32(ctx, 31, 0x333D9Cu);
    ctx->pc = 0x333D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333D94u;
    // 0x333d98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x333D94u, 0x333D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333D9Cu;
label_333d9c:
    // 0x333d9c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x333d9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333da0: 0xc0cdf2e  jal         func_337CB8
    ctx->pc = 0x333DA0u;
    SET_GPR_U32(ctx, 31, 0x333DA8u);
    ctx->pc = 0x333DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DA0u;
    // 0x333da4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x333DA0u, 0x333DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DA8u;
label_333da8:
    // 0x333da8: 0xc0cdf52  jal         func_337D48
    ctx->pc = 0x333DA8u;
    SET_GPR_U32(ctx, 31, 0x333DB0u);
    ctx->pc = 0x333DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DA8u;
    // 0x333dac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x333DA8u, 0x333DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DB0u;
label_333db0:
    // 0x333db0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x333db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333db4: 0xc0cdf2e  jal         func_337CB8
    ctx->pc = 0x333DB4u;
    SET_GPR_U32(ctx, 31, 0x333DBCu);
    ctx->pc = 0x333DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DB4u;
    // 0x333db8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x333DB4u, 0x333DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DBCu;
label_333dbc:
    // 0x333dbc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x333dbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333dc0: 0xc0cdf52  jal         func_337D48
    ctx->pc = 0x333DC0u;
    SET_GPR_U32(ctx, 31, 0x333DC8u);
    ctx->pc = 0x333DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DC0u;
    // 0x333dc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x333DC0u, 0x333DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DC8u;
label_333dc8:
    // 0x333dc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x333dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333dcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x333dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333dd0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x333dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x333dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333dd8: 0xc0efc80  jal         func_3BF200
    ctx->pc = 0x333DD8u;
    SET_GPR_U32(ctx, 31, 0x333DE0u);
    ctx->pc = 0x333DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DD8u;
    // 0x333ddc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF200u, 0x333DD8u, 0x333DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DE0u;
label_333de0:
    // 0x333de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333de4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x333de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333de8: 0xc0efc80  jal         func_3BF200
    ctx->pc = 0x333DE8u;
    SET_GPR_U32(ctx, 31, 0x333DF0u);
    ctx->pc = 0x333DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DE8u;
    // 0x333dec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF200u, 0x333DE8u, 0x333DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333DF0u;
label_333df0:
    // 0x333df0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x333DF0u;
    {
        const bool branch_taken_0x333df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333DF0u;
        // 0x333df4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333df0) {
            ctx->pc = 0x333EE8u;
            return;
        }
    }
    ctx->pc = 0x333DF8u;
label_333df8:
    // 0x333df8: 0xc0cdf2e  jal         func_337CB8
    ctx->pc = 0x333DF8u;
    SET_GPR_U32(ctx, 31, 0x333E00u);
    ctx->pc = 0x333DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333DF8u;
    // 0x333dfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x333DF8u, 0x333E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333E00u;
label_333e00:
    // 0x333e00: 0xc0cdf52  jal         func_337D48
    ctx->pc = 0x333E00u;
    SET_GPR_U32(ctx, 31, 0x333E08u);
    ctx->pc = 0x333E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333E00u;
    // 0x333e04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x333E00u, 0x333E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333E08u;
label_333e08:
    // 0x333e08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x333e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333e0c: 0xc0cdf2e  jal         func_337CB8
    ctx->pc = 0x333E0Cu;
    SET_GPR_U32(ctx, 31, 0x333E14u);
    ctx->pc = 0x333E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333E0Cu;
    // 0x333e10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x333E0Cu, 0x333E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333E14u;
label_333e14:
    // 0x333e14: 0xc0cdf52  jal         func_337D48
    ctx->pc = 0x333E14u;
    SET_GPR_U32(ctx, 31, 0x333E1Cu);
    ctx->pc = 0x333E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333E14u;
    // 0x333e18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x333E14u, 0x333E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333E1Cu;
label_333e1c:
    // 0x333e1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x333e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333e20: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x333E20u;
    SET_GPR_U32(ctx, 31, 0x333E28u);
    ctx->pc = 0x333E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333E20u;
    // 0x333e24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x333E20u, 0x333E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333E28u;
label_333e28:
    // 0x333e28: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x333E28u;
    {
        const bool branch_taken_0x333e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E28u;
        // 0x333e2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e28) {
            ctx->pc = 0x333EE8u;
            return;
        }
    }
    ctx->pc = 0x333E30u;
label_333e30:
    // 0x333e30: 0x8e8204a8  lw          $v0, 0x4A8($s4)
    ctx->pc = 0x333e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1192)));
    // 0x333e34: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x333E34u;
    {
        const bool branch_taken_0x333e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x333E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E34u;
        // 0x333e38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e34) {
            ctx->pc = 0x333EE8u;
            return;
        }
    }
    ctx->pc = 0x333E3Cu;
    // 0x333e3c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x333E3Cu;
    {
        const bool branch_taken_0x333e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E3Cu;
        // 0x333e40: 0x8e820498  lw          $v0, 0x498($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e3c) {
            ctx->pc = 0x333EB4u;
            goto label_333eb4;
        }
    }
    ctx->pc = 0x333E44u;
label_333e44:
    // 0x333e44: 0x8e8204a8  lw          $v0, 0x4A8($s4)
    ctx->pc = 0x333e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1192)));
    // 0x333e48: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x333E48u;
    {
        const bool branch_taken_0x333e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x333E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E48u;
        // 0x333e4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e48) {
            ctx->pc = 0x333EE8u;
            return;
        }
    }
    ctx->pc = 0x333E50u;
    // 0x333e50: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x333E50u;
    {
        const bool branch_taken_0x333e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E50u;
        // 0x333e54: 0x8e820498  lw          $v0, 0x498($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e50) {
            ctx->pc = 0x333EB4u;
            goto label_333eb4;
        }
    }
    ctx->pc = 0x333E58u;
label_333e58:
    // 0x333e58: 0x8e8204a8  lw          $v0, 0x4A8($s4)
    ctx->pc = 0x333e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1192)));
    // 0x333e5c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x333E5Cu;
    {
        const bool branch_taken_0x333e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x333E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E5Cu;
        // 0x333e60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e5c) {
            ctx->pc = 0x333EE8u;
            return;
        }
    }
    ctx->pc = 0x333E64u;
    // 0x333e64: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x333E64u;
    {
        const bool branch_taken_0x333e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E64u;
        // 0x333e68: 0x8e820498  lw          $v0, 0x498($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e64) {
            ctx->pc = 0x333EB4u;
            goto label_333eb4;
        }
    }
    ctx->pc = 0x333E6Cu;
label_333e6c:
    // 0x333e6c: 0x8e8204a8  lw          $v0, 0x4A8($s4)
    ctx->pc = 0x333e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1192)));
    // 0x333e70: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x333E70u;
    {
        const bool branch_taken_0x333e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x333E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E70u;
        // 0x333e74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e70) {
            ctx->pc = 0x333EE8u;
            return;
        }
    }
    ctx->pc = 0x333E78u;
    // 0x333e78: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x333E78u;
    {
        const bool branch_taken_0x333e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E78u;
        // 0x333e7c: 0x8e820498  lw          $v0, 0x498($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e78) {
            ctx->pc = 0x333EB4u;
            goto label_333eb4;
        }
    }
    ctx->pc = 0x333E80u;
label_333e80:
    // 0x333e80: 0x8e8204a8  lw          $v0, 0x4A8($s4)
    ctx->pc = 0x333e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1192)));
    // 0x333e84: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x333E84u;
    {
        const bool branch_taken_0x333e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x333E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E84u;
        // 0x333e88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e84) {
            ctx->pc = 0x333EE8u;
            return;
        }
    }
    ctx->pc = 0x333E8Cu;
    // 0x333e8c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x333E8Cu;
    {
        const bool branch_taken_0x333e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333E8Cu;
        // 0x333e90: 0x8e820498  lw          $v0, 0x498($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333e8c) {
            ctx->pc = 0x333EB4u;
            goto label_333eb4;
        }
    }
    ctx->pc = 0x333E94u;
label_333e94:
    // 0x333e94: 0xc0cdf2e  jal         func_337CB8
    ctx->pc = 0x333E94u;
    SET_GPR_U32(ctx, 31, 0x333E9Cu);
    ctx->pc = 0x333E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333E94u;
    // 0x333e98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337CB8u, 0x333E94u, 0x333E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333E9Cu;
label_333e9c:
    // 0x333e9c: 0xc0cdf52  jal         func_337D48
    ctx->pc = 0x333E9Cu;
    SET_GPR_U32(ctx, 31, 0x333EA4u);
    ctx->pc = 0x333EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333E9Cu;
    // 0x333ea0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D48u, 0x333E9Cu, 0x333EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333EA4u;
label_333ea4:
    // 0x333ea4: 0x8e8304a8  lw          $v1, 0x4A8($s4)
    ctx->pc = 0x333ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1192)));
    // 0x333ea8: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x333EA8u;
    {
        const bool branch_taken_0x333ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x333EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333EA8u;
        // 0x333eac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333ea8) {
            ctx->pc = 0x333EE8u;
            return;
        }
    }
    ctx->pc = 0x333EB0u;
    // 0x333eb0: 0x8e820498  lw          $v0, 0x498($s4)
    ctx->pc = 0x333eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1176)));
label_333eb4:
    // 0x333eb4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x333eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x333eb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x333eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333ebc: 0xae830498  sw          $v1, 0x498($s4)
    ctx->pc = 0x333ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1176), GPR_U32(ctx, 3));
    // 0x333ec0: 0xae8404a8  sw          $a0, 0x4A8($s4)
    ctx->pc = 0x333ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1192), GPR_U32(ctx, 4));
    // 0x333ec4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x333EC4u;
    {
        const bool branch_taken_0x333ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333EC4u;
        // 0x333ec8: 0xae82049c  sw          $v0, 0x49C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333ec4) {
            ctx->pc = 0x333EE4u;
            return;
        }
    }
    ctx->pc = 0x333ECCu;
label_333ecc:
    // 0x333ecc: 0x8e82049c  lw          $v0, 0x49C($s4)
    ctx->pc = 0x333eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1180)));
    // 0x333ed0: 0xae8004a8  sw          $zero, 0x4A8($s4)
    ctx->pc = 0x333ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1192), GPR_U32(ctx, 0));
    // 0x333ed4: 0xae820498  sw          $v0, 0x498($s4)
    ctx->pc = 0x333ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1176), GPR_U32(ctx, 2));
    // 0x333ed8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x333ED8u;
    {
        const bool branch_taken_0x333ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333ED8u;
        // 0x333edc: 0xae80049c  sw          $zero, 0x49C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333ed8) {
            ctx->pc = 0x333EE4u;
            return;
        }
    }
    ctx->pc = 0x333EE0u;
}
