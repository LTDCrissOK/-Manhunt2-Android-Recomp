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

// Function: sub_003ED168
// Address: 0x3ed168 - 0x3ed3f8
void sub_003ED168_0x3ed168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED168_0x3ed168");
#endif

    switch (ctx->pc) {
        case 0x3ed1f0u: goto label_3ed1f0;
        case 0x3ed324u: goto label_3ed324;
        case 0x3ed3b0u: goto label_3ed3b0;
        default: break;
    }

    ctx->pc = 0x3ed168u;

    // 0x3ed168: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3ed168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3ed16c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x3ed16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x3ed170: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x3ed170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x3ed174: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3ed174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed178: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x3ed178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x3ed17c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3ed17cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed180: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3ed180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x3ed184: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ed184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed188: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x3ed188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x3ed18c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x3ed18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x3ed190: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3ed190u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3ed194: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x3ed194u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ed198: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3ed198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3ed19c: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x3ed19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3ed1a0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x3ed1a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x3ed1a4: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x3ED1A4u;
    {
        const bool branch_taken_0x3ed1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED1A4u;
        // 0x3ed1a8: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed1a4) {
            ctx->pc = 0x3ED3C8u;
            goto label_3ed3c8;
        }
    }
    ctx->pc = 0x3ED1ACu;
    // 0x3ed1ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3ed1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ed1b0: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x3ed1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ed1b4: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x3ed1b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3ed1b8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3ED1B8u;
    {
        const bool branch_taken_0x3ed1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED1B8u;
        // 0x3ed1bc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed1b8) {
            ctx->pc = 0x3ED218u;
            goto label_3ed218;
        }
    }
    ctx->pc = 0x3ED1C0u;
    // 0x3ed1c0: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x3ed1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ed1c4: 0x23180  sll         $a2, $v0, 6
    ctx->pc = 0x3ed1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3ed1c8: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x3ed1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3ed1cc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3ed1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed1d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ed1d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ed1d4: 0x0  nop
    ctx->pc = 0x3ed1d4u;
    // NOP
    // 0x3ed1d8: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x3ED1D8u;
    {
        const bool branch_taken_0x3ed1d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ED1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED1D8u;
        // 0x3ed1dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed1d8) {
            ctx->pc = 0x3ED218u;
            goto label_3ed218;
        }
    }
    ctx->pc = 0x3ED1E0u;
    // 0x3ed1e0: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x3ed1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x3ed1e4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3ed1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed1e8: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x3ed1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3ed1ec: 0x0  nop
    ctx->pc = 0x3ed1ecu;
    // NOP
label_3ed1f0:
    // 0x3ed1f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3ed1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed1f4: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x3ed1f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3ed1f8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ED1F8u;
    {
        const bool branch_taken_0x3ed1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed1f8) {
            ctx->pc = 0x3ED1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ED1F8u;
            // 0x3ed1fc: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ED21Cu;
            goto label_3ed21c;
        }
    }
    ctx->pc = 0x3ED200u;
    // 0x3ed200: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3ed200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed204: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x3ed204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ed208: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ed208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ed20c: 0x0  nop
    ctx->pc = 0x3ed20cu;
    // NOP
    // 0x3ed210: 0x4500fff7  bc1f        . + 4 + (-0x9 << 2)
    ctx->pc = 0x3ED210u;
    {
        const bool branch_taken_0x3ed210 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ED214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED210u;
        // 0x3ed214: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed210) {
            ctx->pc = 0x3ED1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ed1f0;
        }
    }
    ctx->pc = 0x3ED218u;
label_3ed218:
    // 0x3ed218: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3ed218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3ed21c:
    // 0x3ed21c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3ed21cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ed220: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3ed220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3ed224: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3ed224u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3ed228: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x3ed228u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x3ed22c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ed22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ed230: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ED230u;
    {
        const bool branch_taken_0x3ed230 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3ED234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED230u;
        // 0x3ed234: 0x42980  sll         $a1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed230) {
            ctx->pc = 0x3ED254u;
            goto label_3ed254;
        }
    }
    ctx->pc = 0x3ED238u;
    // 0x3ed238: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x3ed238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x3ed23c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3ed23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3ed240: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3ed240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3ed244: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3ed244u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed248: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x3ed248u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3ed24c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x3ED24Cu;
    {
        const bool branch_taken_0x3ed24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED24Cu;
        // 0x3ed250: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed24c) {
            ctx->pc = 0x3ED3CCu;
            goto label_3ed3cc;
        }
    }
    ctx->pc = 0x3ED254u;
label_3ed254:
    // 0x3ed254: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x3ed254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ed258: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x3ed258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3ed25c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3ed25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ed260: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x3ed260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed264: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x3ed264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3ed268: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3ed268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3ed26c: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x3ed26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x3ed270: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3ed270u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x3ed274: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3ed274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ed278: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3ed278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ed27c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3ed27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3ed280: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x3ed280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3ed284: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3ed284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed288: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3ed288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3ed28c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3ed28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ed290: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3ed290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3ed294: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3ed294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed298: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x3ed298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3ed29c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x3ed29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ed2a0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3ed2a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3ed2a4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x3ed2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed2a8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3ed2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3ed2ac: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3ed2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ed2b0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x3ed2b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3ed2b4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3ed2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed2b8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x3ed2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3ed2bc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3ed2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ed2c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3ed2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed2c4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x3ed2c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3ed2c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3ed2c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3ed2cc: 0x46000045  abs.s       $f1, $f0
    ctx->pc = 0x3ed2ccu;
    ctx->f[1] = FPU_ABS_S(ctx->f[0]);
    // 0x3ed2d0: 0x0  nop
    ctx->pc = 0x3ed2d0u;
    // NOP
    // 0x3ed2d4: 0x0  nop
    ctx->pc = 0x3ed2d4u;
    // NOP
    // 0x3ed2d8: 0x46001503  div.s       $f20, $f2, $f0
    ctx->pc = 0x3ed2d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x3ed2dc: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x3ed2dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ed2e0: 0x0  nop
    ctx->pc = 0x3ed2e0u;
    // NOP
    // 0x3ed2e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3ED2E4u;
    {
        const bool branch_taken_0x3ed2e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ed2e4) {
            ctx->pc = 0x3ED2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ED2E4u;
            // 0x3ed2e8: 0xae60006c  sw          $zero, 0x6C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ED2ECu;
            goto label_3ed2ec;
        }
    }
    ctx->pc = 0x3ED2ECu;
label_3ed2ec:
    // 0x3ed2ec: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x3ed2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x3ed2f0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3ed2f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x3ed2f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ed2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ed2f8: 0x0  nop
    ctx->pc = 0x3ed2f8u;
    // NOP
    // 0x3ed2fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ed2fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ed300: 0x0  nop
    ctx->pc = 0x3ed300u;
    // NOP
    // 0x3ed304: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x3ED304u;
    {
        const bool branch_taken_0x3ed304 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ED308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED304u;
        // 0x3ed308: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed304) {
            ctx->pc = 0x3ED3C0u;
            goto label_3ed3c0;
        }
    }
    ctx->pc = 0x3ED30Cu;
    // 0x3ed30c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x3ed30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x3ed310: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x3ed310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x3ed314: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ed314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3ed318: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ed318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed31c: 0xc0b121c  jal         func_2C4870
    ctx->pc = 0x3ED31Cu;
    SET_GPR_U32(ctx, 31, 0x3ED324u);
    ctx->pc = 0x3ED320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED31Cu;
    // 0x3ed320: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4870u, 0x3ED31Cu, 0x3ED324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED324u;
label_3ed324:
    // 0x3ed324: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3ED324u;
    {
        const bool branch_taken_0x3ed324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED324u;
        // 0x3ed328: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed324) {
            ctx->pc = 0x3ED3C0u;
            goto label_3ed3c0;
        }
    }
    ctx->pc = 0x3ED32Cu;
    // 0x3ed32c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ed32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ed330: 0x8e4a0000  lw          $t2, 0x0($s2)
    ctx->pc = 0x3ed330u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ed334: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x3ed334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3ed338: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x3ed338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3ed33c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3ed33cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed340: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x3ed340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3ed344: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ed344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ed348: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x3ed348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed34c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3ed34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3ed350: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3ed350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3ed354: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x3ed354u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x3ed358: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3ed358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3ed35c: 0x25430030  addiu       $v1, $t2, 0x30
    ctx->pc = 0x3ed35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x3ed360: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3ed360u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3ed364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed368: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3ed368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ed36c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3ed36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed370: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x3ed370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3ed374: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x3ed374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3ed378: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3ed378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3ed37c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3ed37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed380: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3ed380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3ed384: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x3ed384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ed388: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x3ed388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3ed38c: 0xc5400030  lwc1        $f0, 0x30($t2)
    ctx->pc = 0x3ed38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed390: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3ed390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3ed394: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3ed394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ed398: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3ed398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3ed39c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3ed39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed3a0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3ed3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3ed3a4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x3ed3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ed3a8: 0xc0fb3ce  jal         func_3ECF38
    ctx->pc = 0x3ED3A8u;
    SET_GPR_U32(ctx, 31, 0x3ED3B0u);
    ctx->pc = 0x3ED3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED3A8u;
    // 0x3ed3ac: 0xe7a1003c  swc1        $f1, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ECF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ECF38u, 0x3ED3A8u, 0x3ED3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED3B0u;
label_3ed3b0:
    // 0x3ed3b0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3ed3b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ed3b4: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x3ed3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3ed3b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3ED3B8u;
    {
        const bool branch_taken_0x3ed3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED3B8u;
        // 0x3ed3bc: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed3b8) {
            ctx->pc = 0x3ED3CCu;
            goto label_3ed3cc;
        }
    }
    ctx->pc = 0x3ED3C0u;
label_3ed3c0:
    // 0x3ed3c0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3ed3c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ed3c4: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x3ed3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_3ed3c8:
    // 0x3ed3c8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x3ed3c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3ed3cc:
    // 0x3ed3cc: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x3ed3ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3ed3d0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x3ed3d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ed3d4: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x3ed3d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3ed3d8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3ed3d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ed3dc: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x3ed3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3ed3e0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3ed3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ed3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED3E4u;
        // 0x3ed3e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED3ECu;
    // 0x3ed3ec: 0x0  nop
    ctx->pc = 0x3ed3ecu;
    // NOP
    // 0x3ed3f0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3ed3f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3ed3f4: 0x0  nop
    ctx->pc = 0x3ed3f4u;
    // NOP
    ctx->pc = 0x3ed3f8u;
}
