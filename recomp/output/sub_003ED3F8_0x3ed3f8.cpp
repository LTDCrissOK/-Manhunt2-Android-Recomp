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

// Function: sub_003ED3F8
// Address: 0x3ed3f8 - 0x3ed5a0
void sub_003ED3F8_0x3ed3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED3F8_0x3ed3f8");
#endif

    switch (ctx->pc) {
        case 0x3ed468u: goto label_3ed468;
        case 0x3ed550u: goto label_3ed550;
        default: break;
    }

    ctx->pc = 0x3ed3f8u;

    // 0x3ed3f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ed3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ed3fc: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x3ed3fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ed400: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ed400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ed404: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ed404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3ed408: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x3ed408u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3ed40c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x3ed40cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3ed410: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ed410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ed414: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x3ed414u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3ed418: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3ed418u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3ed41c: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3ED41Cu;
    {
        const bool branch_taken_0x3ed41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED41Cu;
        // 0x3ed420: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed41c) {
            ctx->pc = 0x3ED574u;
            goto label_3ed574;
        }
    }
    ctx->pc = 0x3ED424u;
    // 0x3ed424: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x3ed424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ed428: 0x244bffff  addiu       $t3, $v0, -0x1
    ctx->pc = 0x3ed428u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ed42c: 0xcb102a  slt         $v0, $a2, $t3
    ctx->pc = 0x3ed42cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x3ed430: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3ED430u;
    {
        const bool branch_taken_0x3ed430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED430u;
        // 0x3ed434: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed430) {
            ctx->pc = 0x3ED490u;
            goto label_3ed490;
        }
    }
    ctx->pc = 0x3ED438u;
    // 0x3ed438: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3ed438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ed43c: 0x24900  sll         $t1, $v0, 4
    ctx->pc = 0x3ed43cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3ed440: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x3ed440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3ed444: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3ed444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed448: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ed448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ed44c: 0x0  nop
    ctx->pc = 0x3ed44cu;
    // NOP
    // 0x3ed450: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x3ED450u;
    {
        const bool branch_taken_0x3ed450 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ED454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED450u;
        // 0x3ed454: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed450) {
            ctx->pc = 0x3ED490u;
            goto label_3ed490;
        }
    }
    ctx->pc = 0x3ED458u;
    // 0x3ed458: 0x25220010  addiu       $v0, $t1, 0x10
    ctx->pc = 0x3ed458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x3ed45c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x3ed45cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed460: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x3ed460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3ed464: 0x0  nop
    ctx->pc = 0x3ed464u;
    // NOP
label_3ed468:
    // 0x3ed468: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3ed468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed46c: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x3ed46cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x3ed470: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ED470u;
    {
        const bool branch_taken_0x3ed470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed470) {
            ctx->pc = 0x3ED474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ED470u;
            // 0x3ed474: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ED494u;
            goto label_3ed494;
        }
    }
    ctx->pc = 0x3ED478u;
    // 0x3ed478: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3ed478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed47c: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x3ed47cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3ed480: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ed480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ed484: 0x0  nop
    ctx->pc = 0x3ed484u;
    // NOP
    // 0x3ed488: 0x4500fff7  bc1f        . + 4 + (-0x9 << 2)
    ctx->pc = 0x3ED488u;
    {
        const bool branch_taken_0x3ed488 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ED48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED488u;
        // 0x3ed48c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed488) {
            ctx->pc = 0x3ED468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ed468;
        }
    }
    ctx->pc = 0x3ED490u;
label_3ed490:
    // 0x3ed490: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x3ed490u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_3ed494:
    // 0x3ed494: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x3ed494u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ed498: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ed498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ed49c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x3ed49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3ed4a0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3ed4a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3ed4a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ed4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ed4a8: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3ED4A8u;
    {
        const bool branch_taken_0x3ed4a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3ED4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED4A8u;
        // 0x3ed4ac: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed4a8) {
            ctx->pc = 0x3ED4C4u;
            goto label_3ed4c4;
        }
    }
    ctx->pc = 0x3ED4B0u;
    // 0x3ed4b0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x3ed4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3ed4b4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3ed4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3ed4b8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3ed4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed4bc: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3ED4BCu;
    {
        const bool branch_taken_0x3ed4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED4BCu;
        // 0x3ed4c0: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed4bc) {
            ctx->pc = 0x3ED574u;
            goto label_3ed574;
        }
    }
    ctx->pc = 0x3ED4C4u;
label_3ed4c4:
    // 0x3ed4c4: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x3ed4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3ed4c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3ed4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3ed4cc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x3ed4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3ed4d0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3ed4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3ed4d4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3ed4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ed4d8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3ed4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ed4dc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3ed4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ed4e0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3ed4e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3ed4e4: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x3ed4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x3ed4e8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3ed4e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x3ed4ec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3ed4ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ed4f0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3ed4f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3ed4f4: 0xc4740004  lwc1        $f20, 0x4($v1)
    ctx->pc = 0x3ed4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ed4f8: 0x46000105  abs.s       $f4, $f0
    ctx->pc = 0x3ed4f8u;
    ctx->f[4] = FPU_ABS_S(ctx->f[0]);
    // 0x3ed4fc: 0x0  nop
    ctx->pc = 0x3ed4fcu;
    // NOP
    // 0x3ed500: 0x0  nop
    ctx->pc = 0x3ed500u;
    // NOP
    // 0x3ed504: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x3ed504u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3ed508: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x3ed508u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ed50c: 0x0  nop
    ctx->pc = 0x3ed50cu;
    // NOP
    // 0x3ed510: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3ED510u;
    {
        const bool branch_taken_0x3ed510 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ED514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED510u;
        // 0x3ed514: 0xc4550004  lwc1        $f21, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed510) {
            ctx->pc = 0x3ED51Cu;
            goto label_3ed51c;
        }
    }
    ctx->pc = 0x3ED518u;
    // 0x3ed518: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x3ed518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
label_3ed51c:
    // 0x3ed51c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x3ed51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x3ed520: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3ed520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x3ed524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ed524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ed528: 0x0  nop
    ctx->pc = 0x3ed528u;
    // NOP
    // 0x3ed52c: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x3ed52cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ed530: 0x0  nop
    ctx->pc = 0x3ed530u;
    // NOP
    // 0x3ed534: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x3ED534u;
    {
        const bool branch_taken_0x3ed534 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ed534) {
            ctx->pc = 0x3ED538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ED534u;
            // 0x3ed538: 0xe6140000  swc1        $f20, 0x0($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ED574u;
            goto label_3ed574;
        }
    }
    ctx->pc = 0x3ED53Cu;
    // 0x3ed53c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3ed53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x3ed540: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3ed540u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x3ed544: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ed544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3ed548: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x3ED548u;
    SET_GPR_U32(ctx, 31, 0x3ED550u);
    ctx->pc = 0x3ED54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED548u;
    // 0x3ed54c: 0x460c1302  mul.s       $f12, $f2, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x3ED548u, 0x3ED550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED550u;
label_3ed550:
    // 0x3ed550: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3ed550u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3ed554: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3ed554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3ed558: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3ed558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ed55c: 0x4614a841  sub.s       $f1, $f21, $f20
    ctx->pc = 0x3ed55cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x3ed560: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3ed560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3ed564: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x3ed564u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3ed568: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ed568u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ed56c: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x3ed56cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x3ed570: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x3ed570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_3ed574:
    // 0x3ed574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ed574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ed578: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ed578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ed57c: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x3ed57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3ed580: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3ed580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ed584: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED584u;
        // 0x3ed588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED58Cu;
    // 0x3ed58c: 0x0  nop
    ctx->pc = 0x3ed58cu;
    // NOP
    // 0x3ed590: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3ed590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3ed594: 0x0  nop
    ctx->pc = 0x3ed594u;
    // NOP
    // 0x3ed598: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ed598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ed59c: 0x0  nop
    ctx->pc = 0x3ed59cu;
    // NOP
    ctx->pc = 0x3ed5a0u;
}
