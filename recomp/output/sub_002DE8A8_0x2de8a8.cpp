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

// Function: sub_002DE8A8
// Address: 0x2de8a8 - 0x2deae8
void sub_002DE8A8_0x2de8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE8A8_0x2de8a8");
#endif

    switch (ctx->pc) {
        case 0x2de918u: goto label_2de918;
        case 0x2de924u: goto label_2de924;
        case 0x2de92cu: goto label_2de92c;
        case 0x2de934u: goto label_2de934;
        case 0x2deab0u: goto label_2deab0;
        case 0x2deac0u: goto label_2deac0;
        default: break;
    }

    ctx->pc = 0x2de8a8u;

    // 0x2de8a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2de8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2de8ac: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2de8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2de8b0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2de8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2de8b4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2de8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2de8b8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2de8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2de8bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2de8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de8c0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2de8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2de8c4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2de8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2de8c8: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x2de8c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2de8cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2de8ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de8d0: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x2de8d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2de8d4: 0x24845ad0  addiu       $a0, $a0, 0x5AD0
    ctx->pc = 0x2de8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    // 0x2de8d8: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2de8d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2de8dc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2de8dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2de8e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2de8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2de8e4: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x2de8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2de8e8: 0x8c6200b8  lw          $v0, 0xB8($v1)
    ctx->pc = 0x2de8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x2de8ec: 0xc4570040  lwc1        $f23, 0x40($v0)
    ctx->pc = 0x2de8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2de8f0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2de8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2de8f4: 0xe7b70000  swc1        $f23, 0x0($sp)
    ctx->pc = 0x2de8f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2de8f8: 0xc4550004  lwc1        $f21, 0x4($v0)
    ctx->pc = 0x2de8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2de8fc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2de8fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2de900: 0xc4560008  lwc1        $f22, 0x8($v0)
    ctx->pc = 0x2de900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2de904: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2de904u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2de908: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2de908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de90c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2de90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2de910: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x2DE910u;
    SET_GPR_U32(ctx, 31, 0x2DE918u);
    ctx->pc = 0x2DE914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE910u;
    // 0x2de914: 0xc4d40030  lwc1        $f20, 0x30($a2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x2DE910u, 0x2DE918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE918u;
label_2de918:
    // 0x2de918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de91c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2DE91Cu;
    SET_GPR_U32(ctx, 31, 0x2DE924u);
    ctx->pc = 0x2DE920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE91Cu;
    // 0x2de920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2DE91Cu, 0x2DE924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE924u;
label_2de924:
    // 0x2de924: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2DE924u;
    SET_GPR_U32(ctx, 31, 0x2DE92Cu);
    ctx->pc = 0x2DE928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE924u;
    // 0x2de928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2DE924u, 0x2DE92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE92Cu;
label_2de92c:
    // 0x2de92c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2DE92Cu;
    SET_GPR_U32(ctx, 31, 0x2DE934u);
    ctx->pc = 0x2DE930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE92Cu;
    // 0x2de930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2DE92Cu, 0x2DE934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE934u;
label_2de934:
    // 0x2de934: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2de934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2de938: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2de938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2de93c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2de93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de940: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2de940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2de944: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DE944u;
    {
        const bool branch_taken_0x2de944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DE948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE944u;
        // 0x2de948: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de944) {
            ctx->pc = 0x2DE958u;
            goto label_2de958;
        }
    }
    ctx->pc = 0x2DE94Cu;
    // 0x2de94c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2de94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2de950: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DE950u;
    {
        const bool branch_taken_0x2de950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE950u;
        // 0x2de954: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de950) {
            ctx->pc = 0x2DE9A4u;
            goto label_2de9a4;
        }
    }
    ctx->pc = 0x2DE958u;
label_2de958:
    // 0x2de958: 0x4615a902  mul.s       $f4, $f21, $f21
    ctx->pc = 0x2de958u;
    ctx->f[4] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2de95c: 0x3c013daa  lui         $at, 0x3DAA
    ctx->pc = 0x2de95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15786 << 16));
    // 0x2de960: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2de960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2de964: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2de964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2de968: 0x4616b002  mul.s       $f0, $f22, $f22
    ctx->pc = 0x2de968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2de96c: 0x4617b842  mul.s       $f1, $f23, $f23
    ctx->pc = 0x2de96cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x2de970: 0x46002080  add.s       $f2, $f4, $f0
    ctx->pc = 0x2de970u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2de974: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2de974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2de978: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2de978u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2de97c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2de97cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2de980: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2de980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2de984: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2de984u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2de988: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2de988u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2de98c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2de98cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2de990: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2de990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2de994: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x2de994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2de998: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2de998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2de99c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2DE99Cu;
    {
        const bool branch_taken_0x2de99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE99Cu;
        // 0x2de9a0: 0xe4c10008  swc1        $f1, 0x8($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de99c) {
            ctx->pc = 0x2DEAA0u;
            goto label_2deaa0;
        }
    }
    ctx->pc = 0x2DE9A4u;
label_2de9a4:
    // 0x2de9a4: 0x54620030  bnel        $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2DE9A4u;
    {
        const bool branch_taken_0x2de9a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2de9a4) {
            ctx->pc = 0x2DE9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE9A4u;
            // 0x2de9a8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DEA68u;
            goto label_2dea68;
        }
    }
    ctx->pc = 0x2DE9ACu;
    // 0x2de9ac: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x2de9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de9b0: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x2de9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2de9b4: 0x4615a9c2  mul.s       $f7, $f21, $f21
    ctx->pc = 0x2de9b4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2de9b8: 0x3c013daa  lui         $at, 0x3DAA
    ctx->pc = 0x2de9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15786 << 16));
    // 0x2de9bc: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2de9bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2de9c0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2de9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2de9c4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2de9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2de9c8: 0x4616b0c2  mul.s       $f3, $f22, $f22
    ctx->pc = 0x2de9c8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2de9cc: 0x4617b902  mul.s       $f4, $f23, $f23
    ctx->pc = 0x2de9ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x2de9d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2de9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de9d4: 0x46033880  add.s       $f2, $f7, $f3
    ctx->pc = 0x2de9d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x2de9d8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2de9d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2de9dc: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x2de9dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2de9e0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2de9e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2de9e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2de9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2de9e8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2de9e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2de9ec: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x2de9ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x2de9f0: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x2de9f0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2de9f4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2de9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2de9f8: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2de9f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2de9fc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2de9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dea00: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x2dea00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2dea04: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x2dea04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x2dea08: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2dea08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2dea0c: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x2dea0cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x2dea10: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2dea10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2dea14: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x2dea14u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x2dea18: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2dea18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2dea1c: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2dea1cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2dea20: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x2dea20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2dea24: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2dea24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dea28: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2dea28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dea2c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2dea2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2dea30: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2dea30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2dea34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dea34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dea38: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2dea38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2dea3c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2dea3cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2dea40: 0xe4a30004  swc1        $f3, 0x4($a1)
    ctx->pc = 0x2dea40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2dea44: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2dea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dea48: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2dea48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dea4c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2dea4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2dea50: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2dea50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2dea54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dea54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dea58: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2dea58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2dea5c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2dea5cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2dea60: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2DEA60u;
    {
        const bool branch_taken_0x2dea60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEA60u;
        // 0x2dea64: 0xe4c40008  swc1        $f4, 0x8($a2) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dea60) {
            ctx->pc = 0x2DEAA0u;
            goto label_2deaa0;
        }
    }
    ctx->pc = 0x2DEA68u;
label_2dea68:
    // 0x2dea68: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2dea68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2dea6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2dea6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dea70: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x2dea70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x2dea74: 0x3c013faa  lui         $at, 0x3FAA
    ctx->pc = 0x2dea74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16298 << 16));
    // 0x2dea78: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x2dea78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x2dea7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dea7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dea80: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x2dea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dea84: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2dea84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2dea88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dea88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dea8c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2dea8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2dea90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2dea90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2dea94: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2dea94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2dea98: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2dea98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2dea9c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2dea9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2deaa0:
    // 0x2deaa0: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x2deaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2deaa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2deaa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deaa8: 0xc0b17fe  jal         func_2C5FF8
    ctx->pc = 0x2DEAA8u;
    SET_GPR_U32(ctx, 31, 0x2DEAB0u);
    ctx->pc = 0x2DEAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEAA8u;
    // 0x2deaac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5FF8u, 0x2DEAA8u, 0x2DEAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEAB0u;
label_2deab0:
    // 0x2deab0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DEAB0u;
    {
        const bool branch_taken_0x2deab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAB0u;
        // 0x2deab4: 0x26445ad0  addiu       $a0, $s2, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 23248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deab0) {
            ctx->pc = 0x2DEAC0u;
            goto label_2deac0;
        }
    }
    ctx->pc = 0x2DEAB8u;
    // 0x2deab8: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x2DEAB8u;
    SET_GPR_U32(ctx, 31, 0x2DEAC0u);
    ctx->pc = 0x2DEABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEAB8u;
    // 0x2deabc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x2DEAB8u, 0x2DEAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEAC0u;
label_2deac0:
    // 0x2deac0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2deac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2deac4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2deac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2deac8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2deac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2deacc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2deaccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dead0: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x2dead0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2dead4: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x2dead4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2dead8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2dead8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2deadc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2deadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2deae0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAE0u;
        // 0x2deae4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEAE8u;
}
