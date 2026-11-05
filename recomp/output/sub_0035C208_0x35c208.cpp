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

// Function: sub_0035C208
// Address: 0x35c208 - 0x35c458
void sub_0035C208_0x35c208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C208_0x35c208");
#endif

    switch (ctx->pc) {
        case 0x35c298u: goto label_35c298;
        case 0x35c350u: goto label_35c350;
        default: break;
    }

    ctx->pc = 0x35c208u;

    // 0x35c208: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x35c208u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c20c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x35c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x35c210: 0x25630040  addiu       $v1, $t3, 0x40
    ctx->pc = 0x35c210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
    // 0x35c214: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35c214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35c218: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x35c218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x35c21c: 0x25640058  addiu       $a0, $t3, 0x58
    ctx->pc = 0x35c21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 88));
    // 0x35c220: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x35c220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x35c224: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x35c224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c228: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x35c228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x35c22c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x35c22cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x35c230: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x35c230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35c234: 0x240f00ff  addiu       $t7, $zero, 0xFF
    ctx->pc = 0x35c234u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x35c238: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x35c238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c23c: 0x240e00ff  addiu       $t6, $zero, 0xFF
    ctx->pc = 0x35c23cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x35c240: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x35c240u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x35c244: 0x127102b  sltu        $v0, $t1, $a3
    ctx->pc = 0x35c244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x35c248: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x35c248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x35c24c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x35c24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x35c250: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x35c250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c254: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x35c254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x35c258: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x35c258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x35c25c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x35c25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c260: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x35c260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x35c264: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x35c264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x35c268: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x35c268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c26c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x35c26cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x35c270: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x35c270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x35c274: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x35c274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c278: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x35c278u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x35c27c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x35C27Cu;
    {
        const bool branch_taken_0x35c27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C27Cu;
        // 0x35c280: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c27c) {
            ctx->pc = 0x35C31Cu;
            goto label_35c31c;
        }
    }
    ctx->pc = 0x35C284u;
    // 0x35c284: 0x46001106  mov.s       $f4, $f2
    ctx->pc = 0x35c284u;
    ctx->f[4] = FPU_MOV_S(ctx->f[2]);
    // 0x35c288: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x35c288u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c28c: 0x24a80010  addiu       $t0, $a1, 0x10
    ctx->pc = 0x35c28cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x35c290: 0x25660088  addiu       $a2, $t3, 0x88
    ctx->pc = 0x35c290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 136));
    // 0x35c294: 0x0  nop
    ctx->pc = 0x35c294u;
    // NOP
label_35c298:
    // 0x35c298: 0x10ea0005  beq         $a3, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x35C298u;
    {
        const bool branch_taken_0x35c298 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x35C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C298u;
        // 0x35c29c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c298) {
            ctx->pc = 0x35C2B0u;
            goto label_35c2b0;
        }
    }
    ctx->pc = 0x35C2A0u;
    // 0x35c2a0: 0x240f00ff  addiu       $t7, $zero, 0xFF
    ctx->pc = 0x35c2a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x35c2a4: 0x240e00ff  addiu       $t6, $zero, 0xFF
    ctx->pc = 0x35c2a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x35c2a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x35C2A8u;
    {
        const bool branch_taken_0x35c2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C2A8u;
        // 0x35c2ac: 0x240d00ff  addiu       $t5, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c2a8) {
            ctx->pc = 0x35C2B4u;
            goto label_35c2b4;
        }
    }
    ctx->pc = 0x35C2B0u;
label_35c2b0:
    // 0x35c2b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c2b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35c2b4:
    // 0x35c2b4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x35c2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c2b8: 0xd1c00  sll         $v1, $t5, 16
    ctx->pc = 0x35c2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x35c2bc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x35c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x35c2c0: 0xe2200  sll         $a0, $t6, 8
    ctx->pc = 0x35c2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
    // 0x35c2c4: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x35c2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x35c2c8: 0x460400c0  add.s       $f3, $f0, $f4
    ctx->pc = 0x35c2c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x35c2cc: 0xe4c0fff4  swc1        $f0, -0xC($a2)
    ctx->pc = 0x35c2ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967284), bits); }
    // 0x35c2d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35c2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35c2d4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x35c2d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x35c2d8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x35c2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x35c2dc: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x35c2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c2e0: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x35c2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x35c2e4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x35c2e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x35c2e8: 0xe4c1fff8  swc1        $f1, -0x8($a2)
    ctx->pc = 0x35c2e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967288), bits); }
    // 0x35c2ec: 0x127182b  sltu        $v1, $t1, $a3
    ctx->pc = 0x35c2ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x35c2f0: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x35c2f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x35c2f4: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x35c2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35c2f8: 0xe4c0fff4  swc1        $f0, -0xC($a2)
    ctx->pc = 0x35c2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967284), bits); }
    // 0x35c2fc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x35c2fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x35c300: 0xe4c2fffc  swc1        $f2, -0x4($a2)
    ctx->pc = 0x35c300u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967292), bits); }
    // 0x35c304: 0xe4c3000c  swc1        $f3, 0xC($a2)
    ctx->pc = 0x35c304u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x35c308: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x35c308u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x35c30c: 0xe4c20014  swc1        $f2, 0x14($a2)
    ctx->pc = 0x35c30cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x35c310: 0xacc2fff0  sw          $v0, -0x10($a2)
    ctx->pc = 0x35c310u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 2));
    // 0x35c314: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x35C314u;
    {
        const bool branch_taken_0x35c314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C314u;
        // 0x35c318: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c314) {
            ctx->pc = 0x35C298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c298;
        }
    }
    ctx->pc = 0x35C31Cu;
label_35c31c:
    // 0x35c31c: 0x2d220011  sltiu       $v0, $t1, 0x11
    ctx->pc = 0x35c31cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x35c320: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x35C320u;
    {
        const bool branch_taken_0x35c320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C320u;
        // 0x35c324: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c320) {
            ctx->pc = 0x35C3D0u;
            goto label_35c3d0;
        }
    }
    ctx->pc = 0x35C328u;
    // 0x35c328: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x35c328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x35c32c: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x35c32cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35c330: 0x655021  addu        $t2, $v1, $a1
    ctx->pc = 0x35c330u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35c334: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x35c334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x35c338: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x35c338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x35c33c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x35c33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x35c340: 0x2548fff0  addiu       $t0, $t2, -0x10
    ctx->pc = 0x35c340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967280));
    // 0x35c344: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x35c344u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c348: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x35c348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x35c34c: 0x4b3021  addu        $a2, $v0, $t3
    ctx->pc = 0x35c34cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_35c350:
    // 0x35c350: 0x10ec0005  beq         $a3, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x35C350u;
    {
        const bool branch_taken_0x35c350 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 12));
        ctx->pc = 0x35C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C350u;
        // 0x35c354: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c350) {
            ctx->pc = 0x35C368u;
            goto label_35c368;
        }
    }
    ctx->pc = 0x35C358u;
    // 0x35c358: 0x240f00ff  addiu       $t7, $zero, 0xFF
    ctx->pc = 0x35c358u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x35c35c: 0x240e00ff  addiu       $t6, $zero, 0xFF
    ctx->pc = 0x35c35cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x35c360: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x35C360u;
    {
        const bool branch_taken_0x35c360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C360u;
        // 0x35c364: 0x240d00ff  addiu       $t5, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c360) {
            ctx->pc = 0x35C36Cu;
            goto label_35c36c;
        }
    }
    ctx->pc = 0x35C368u;
label_35c368:
    // 0x35c368: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35c36c:
    // 0x35c36c: 0xc540fff0  lwc1        $f0, -0x10($t2)
    ctx->pc = 0x35c36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c370: 0xd1c00  sll         $v1, $t5, 16
    ctx->pc = 0x35c370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
    // 0x35c374: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x35c374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x35c378: 0xe2200  sll         $a0, $t6, 8
    ctx->pc = 0x35c378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
    // 0x35c37c: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x35c37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x35c380: 0x460400c0  add.s       $f3, $f0, $f4
    ctx->pc = 0x35c380u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x35c384: 0xe4c0fff4  swc1        $f0, -0xC($a2)
    ctx->pc = 0x35c384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967284), bits); }
    // 0x35c388: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35c388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35c38c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x35c38cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x35c390: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x35c390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x35c394: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x35c394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c398: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x35c398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x35c39c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x35c39cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x35c3a0: 0xe4c1fff8  swc1        $f1, -0x8($a2)
    ctx->pc = 0x35c3a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967288), bits); }
    // 0x35c3a4: 0x2d230011  sltiu       $v1, $t1, 0x11
    ctx->pc = 0x35c3a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x35c3a8: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x35c3a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x35c3ac: 0xc5020008  lwc1        $f2, 0x8($t0)
    ctx->pc = 0x35c3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35c3b0: 0xe4c0fff4  swc1        $f0, -0xC($a2)
    ctx->pc = 0x35c3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967284), bits); }
    // 0x35c3b4: 0xe4c2fffc  swc1        $f2, -0x4($a2)
    ctx->pc = 0x35c3b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294967292), bits); }
    // 0x35c3b8: 0xe4c3000c  swc1        $f3, 0xC($a2)
    ctx->pc = 0x35c3b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x35c3bc: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x35c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x35c3c0: 0xe4c20014  swc1        $f2, 0x14($a2)
    ctx->pc = 0x35c3c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x35c3c4: 0xacc2fff0  sw          $v0, -0x10($a2)
    ctx->pc = 0x35c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 2));
    // 0x35c3c8: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x35C3C8u;
    {
        const bool branch_taken_0x35c3c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C3C8u;
        // 0x35c3cc: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c3c8) {
            ctx->pc = 0x35C350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c350;
        }
    }
    ctx->pc = 0x35C3D0u;
label_35c3d0:
    // 0x35c3d0: 0x2d220012  sltiu       $v0, $t1, 0x12
    ctx->pc = 0x35c3d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x35c3d4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x35C3D4u;
    {
        const bool branch_taken_0x35c3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C3D4u;
        // 0x35c3d8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c3d4) {
            ctx->pc = 0x35C450u;
            goto label_35c450;
        }
    }
    ctx->pc = 0x35C3DCu;
    // 0x35c3dc: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x35c3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x35c3e0: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x35c3e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35c3e4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x35c3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x35c3e8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x35c3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c3ec: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x35c3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x35c3f0: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x35c3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x35c3f4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x35c3f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x35c3f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x35c3f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35c3fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x35c3fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x35c400: 0x24430058  addiu       $v1, $v0, 0x58
    ctx->pc = 0x35c400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x35c404: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x35c404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x35c408: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x35c408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x35c40c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x35c40cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x35c410: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x35c410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x35c414: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x35c414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x35c418: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x35c418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c41c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x35c41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x35c420: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x35c420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x35c424: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x35c424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c428: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x35c428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x35c42c: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x35c42cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x35c430: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x35c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c434: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x35c434u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x35c438: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x35c438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x35c43c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x35c43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c440: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x35c440u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x35c444: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x35c444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x35c448: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x35c448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x35c44c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x35c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_35c450:
    // 0x35c450: 0x3e00008  jr          $ra
    ctx->pc = 0x35C450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C458u;
}
