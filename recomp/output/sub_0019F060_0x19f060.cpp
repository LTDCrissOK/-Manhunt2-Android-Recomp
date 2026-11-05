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

// Function: sub_0019F060
// Address: 0x19f060 - 0x19f148
void sub_0019F060_0x19f060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F060_0x19f060");
#endif

    switch (ctx->pc) {
        case 0x19f060u: goto label_19f060;
        case 0x19f064u: goto label_19f064;
        case 0x19f068u: goto label_19f068;
        case 0x19f06cu: goto label_19f06c;
        case 0x19f070u: goto label_19f070;
        case 0x19f074u: goto label_19f074;
        case 0x19f078u: goto label_19f078;
        case 0x19f07cu: goto label_19f07c;
        case 0x19f080u: goto label_19f080;
        case 0x19f084u: goto label_19f084;
        case 0x19f088u: goto label_19f088;
        case 0x19f08cu: goto label_19f08c;
        case 0x19f090u: goto label_19f090;
        case 0x19f094u: goto label_19f094;
        case 0x19f098u: goto label_19f098;
        case 0x19f09cu: goto label_19f09c;
        case 0x19f0a0u: goto label_19f0a0;
        case 0x19f0a4u: goto label_19f0a4;
        case 0x19f0a8u: goto label_19f0a8;
        case 0x19f0acu: goto label_19f0ac;
        case 0x19f0b0u: goto label_19f0b0;
        case 0x19f0b4u: goto label_19f0b4;
        case 0x19f0b8u: goto label_19f0b8;
        case 0x19f0bcu: goto label_19f0bc;
        case 0x19f0c0u: goto label_19f0c0;
        case 0x19f0c4u: goto label_19f0c4;
        case 0x19f0c8u: goto label_19f0c8;
        case 0x19f0ccu: goto label_19f0cc;
        case 0x19f0d0u: goto label_19f0d0;
        case 0x19f0d4u: goto label_19f0d4;
        case 0x19f0d8u: goto label_19f0d8;
        case 0x19f0dcu: goto label_19f0dc;
        case 0x19f0e0u: goto label_19f0e0;
        case 0x19f0e4u: goto label_19f0e4;
        case 0x19f0e8u: goto label_19f0e8;
        case 0x19f0ecu: goto label_19f0ec;
        case 0x19f0f0u: goto label_19f0f0;
        case 0x19f0f4u: goto label_19f0f4;
        case 0x19f0f8u: goto label_19f0f8;
        case 0x19f0fcu: goto label_19f0fc;
        case 0x19f100u: goto label_19f100;
        case 0x19f104u: goto label_19f104;
        case 0x19f108u: goto label_19f108;
        case 0x19f10cu: goto label_19f10c;
        case 0x19f110u: goto label_19f110;
        case 0x19f114u: goto label_19f114;
        case 0x19f118u: goto label_19f118;
        case 0x19f11cu: goto label_19f11c;
        case 0x19f120u: goto label_19f120;
        case 0x19f124u: goto label_19f124;
        case 0x19f128u: goto label_19f128;
        case 0x19f12cu: goto label_19f12c;
        case 0x19f130u: goto label_19f130;
        case 0x19f134u: goto label_19f134;
        case 0x19f138u: goto label_19f138;
        case 0x19f13cu: goto label_19f13c;
        case 0x19f140u: goto label_19f140;
        case 0x19f144u: goto label_19f144;
        default: break;
    }

    ctx->pc = 0x19f060u;

label_19f060:
    // 0x19f060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19f060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19f064:
    // 0x19f064: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19f064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19f068:
    // 0x19f068: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f06c:
    // 0x19f06c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19f06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_19f070:
    // 0x19f070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f074:
    // 0x19f074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19f074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19f078:
    // 0x19f078: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x19f078u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_19f07c:
    // 0x19f07c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x19f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19f080:
    // 0x19f080: 0x10430029  beq         $v0, $v1, . + 4 + (0x29 << 2)
label_19f084:
    if (ctx->pc == 0x19F084u) {
        ctx->pc = 0x19F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F080u;
        // 0x19f084: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F088u;
        goto label_19f088;
    }
    ctx->pc = 0x19F080u;
    {
        const bool branch_taken_0x19f080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x19F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F080u;
        // 0x19f084: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f080) {
            ctx->pc = 0x19F128u;
            goto label_19f128;
        }
    }
    ctx->pc = 0x19F088u;
label_19f088:
    // 0x19f088: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19f088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19f08c:
    // 0x19f08c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_19f090:
    if (ctx->pc == 0x19F090u) {
        ctx->pc = 0x19F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F08Cu;
        // 0x19f090: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F094u;
        goto label_19f094;
    }
    ctx->pc = 0x19F08Cu;
    {
        const bool branch_taken_0x19f08c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F08Cu;
        // 0x19f090: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f08c) {
            ctx->pc = 0x19F0A4u;
            goto label_19f0a4;
        }
    }
    ctx->pc = 0x19F094u;
label_19f094:
    // 0x19f094: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19f094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19f098:
    // 0x19f098: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19f098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19f09c:
    // 0x19f09c: 0x40f809  jalr        $v0
label_19f0a0:
    if (ctx->pc == 0x19F0A0u) {
        ctx->pc = 0x19F0A4u;
        goto label_19f0a4;
    }
    ctx->pc = 0x19F09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F0A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F09Cu, 0x19F0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F0A4u;
label_19f0a4:
    // 0x19f0a4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x19f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_19f0a8:
    // 0x19f0a8: 0xc061a12  jal         func_186848
label_19f0ac:
    if (ctx->pc == 0x19F0ACu) {
        ctx->pc = 0x19F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0A8u;
        // 0x19f0ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F0B0u;
        goto label_19f0b0;
    }
    ctx->pc = 0x19F0A8u;
    SET_GPR_U32(ctx, 31, 0x19F0B0u);
    ctx->pc = 0x19F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0A8u;
    // 0x19f0ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19F0A8u, 0x19F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F0B0u;
label_19f0b0:
    // 0x19f0b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f0b4:
    // 0x19f0b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19f0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19f0b8:
    // 0x19f0b8: 0xc07023a  jal         func_1C08E8
label_19f0bc:
    if (ctx->pc == 0x19F0BCu) {
        ctx->pc = 0x19F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0B8u;
        // 0x19f0bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F0C0u;
        goto label_19f0c0;
    }
    ctx->pc = 0x19F0B8u;
    SET_GPR_U32(ctx, 31, 0x19F0C0u);
    ctx->pc = 0x19F0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0B8u;
    // 0x19f0bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C08E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C08E8u, 0x19F0B8u, 0x19F0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F0C0u;
label_19f0c0:
    // 0x19f0c0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_19f0c4:
    // 0x19f0c4: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_19f0c8:
    // 0x19f0c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19f0cc:
    if (ctx->pc == 0x19F0CCu) {
        ctx->pc = 0x19F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0C8u;
        // 0x19f0cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F0D0u;
        goto label_19f0d0;
    }
    ctx->pc = 0x19F0C8u;
    {
        const bool branch_taken_0x19f0c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0C8u;
        // 0x19f0cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f0c8) {
            ctx->pc = 0x19F0E4u;
            goto label_19f0e4;
        }
    }
    ctx->pc = 0x19F0D0u;
label_19f0d0:
    // 0x19f0d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f0d4:
    // 0x19f0d4: 0x0  nop
    ctx->pc = 0x19f0d4u;
    // NOP
label_19f0d8:
    // 0x19f0d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19f0d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19f0dc:
    // 0x19f0dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_19f0e0:
    if (ctx->pc == 0x19F0E0u) {
        ctx->pc = 0x19F0E4u;
        goto label_19f0e4;
    }
    ctx->pc = 0x19F0DCu;
    {
        const bool branch_taken_0x19f0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f0dc) {
            ctx->pc = 0x19F0FCu;
            goto label_19f0fc;
        }
    }
    ctx->pc = 0x19F0E4u;
label_19f0e4:
    // 0x19f0e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19f0e8:
    // 0x19f0e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19f0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19f0ec:
    // 0x19f0ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f0ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f0f0:
    // 0x19f0f0: 0x0  nop
    ctx->pc = 0x19f0f0u;
    // NOP
label_19f0f4:
    // 0x19f0f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19f0f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19f0f8:
    // 0x19f0f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19f0f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19f0fc:
    // 0x19f0fc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19f0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19f100:
    // 0x19f100: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19f100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19f104:
    // 0x19f104: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19f104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19f108:
    // 0x19f108: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x19f108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_19f10c:
    // 0x19f10c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19f10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f110:
    // 0x19f110: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x19f110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
label_19f114:
    // 0x19f114: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19f114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19f118:
    // 0x19f118: 0xc0b12b0  jal         func_2C4AC0
label_19f11c:
    if (ctx->pc == 0x19F11Cu) {
        ctx->pc = 0x19F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F118u;
        // 0x19f11c: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F120u;
        goto label_19f120;
    }
    ctx->pc = 0x19F118u;
    SET_GPR_U32(ctx, 31, 0x19F120u);
    ctx->pc = 0x19F11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F118u;
    // 0x19f11c: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x19F118u, 0x19F120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F120u;
label_19f120:
    // 0x19f120: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x19f120u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_19f124:
    // 0x19f124: 0xe6140030  swc1        $f20, 0x30($s0)
    ctx->pc = 0x19f124u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_19f128:
    // 0x19f128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f12c:
    // 0x19f12c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19f12cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19f130:
    // 0x19f130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19f130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f134:
    // 0x19f134: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x19f134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19f138:
    // 0x19f138: 0x3e00008  jr          $ra
label_19f13c:
    if (ctx->pc == 0x19F13Cu) {
        ctx->pc = 0x19F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F138u;
        // 0x19f13c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F140u;
        goto label_19f140;
    }
    ctx->pc = 0x19F138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F138u;
        // 0x19f13c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F140u;
label_19f140:
    // 0x19f140: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19f144:
    // 0x19f144: 0x0  nop
    ctx->pc = 0x19f144u;
    // NOP
    ctx->pc = 0x19f148u;
}
