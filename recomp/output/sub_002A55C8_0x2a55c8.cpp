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

// Function: sub_002A55C8
// Address: 0x2a55c8 - 0x2a5930
void sub_002A55C8_0x2a55c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A55C8_0x2a55c8");
#endif

    switch (ctx->pc) {
        case 0x2a5658u: goto label_2a5658;
        case 0x2a5750u: goto label_2a5750;
        case 0x2a5778u: goto label_2a5778;
        case 0x2a5830u: goto label_2a5830;
        case 0x2a5898u: goto label_2a5898;
        case 0x2a58c0u: goto label_2a58c0;
        case 0x2a58e0u: goto label_2a58e0;
        default: break;
    }

    ctx->pc = 0x2a55c8u;

    // 0x2a55c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a55c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a55cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a55ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a55d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a55d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2a55d4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2a55d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2a55d8: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x2a55d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2a55dc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2a55dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2a55e0: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x2a55e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x2a55e4: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2a55e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2a55e8: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x2a55e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a55ec: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2a55ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2a55f0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a55f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a55f4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2a55f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2a55f8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2a55f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a55fc: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x2a55fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2a5600: 0x26d20008  addiu       $s2, $s6, 0x8
    ctx->pc = 0x2a5600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x2a5604: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2a5604u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a5608: 0x460d6581  sub.s       $f22, $f12, $f13
    ctx->pc = 0x2a5608u;
    ctx->f[22] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x2a560c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2a560cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a5610: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x2a5610u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x2a5614: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2a5614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2a5618: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2a5618u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a561c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2a561cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2a5620: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2a5620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2a5624: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2a5624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2a5628: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2a5628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2a562c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a562cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a5630: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2a5630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2a5634: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2a5634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a5638: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2a5638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a563c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a563cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a5640: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2a5640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a5644: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2a5644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2a5648: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2a5648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a564c: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x2a564cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x2a5650: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2a5650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2a5654: 0x0  nop
    ctx->pc = 0x2a5654u;
    // NOP
label_2a5658:
    // 0x2a5658: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x2a5658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x2a565c: 0x2482a990  addiu       $v0, $a0, -0x5670
    ctx->pc = 0x2a565cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945168));
    // 0x2a5660: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a5660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a5664: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2a5664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a5668: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a5668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a566c: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x2a566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5670: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2a5670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a5674: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a5674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5678: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x2a5678u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2a567c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2a567cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x2a5680: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2a5680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2a5684: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x2a5684u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a5688: 0x4603b0c2  mul.s       $f3, $f22, $f3
    ctx->pc = 0x2a5688u;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
    // 0x2a568c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a568cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a5690: 0x46010068  max.s       $f1, $f0, $f1
    ctx->pc = 0x2a5690u;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[1]);
    // 0x2a5694: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x2a5694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x2a5698: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2a5698u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a569c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2a569cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a56a0: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x2a56a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a56a4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2a56a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2a56a8: 0x50c20016  beql        $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A56A8u;
    {
        const bool branch_taken_0x2a56a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a56a8) {
            ctx->pc = 0x2A56ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A56A8u;
            // 0x2a56ac: 0xafbe0034  sw          $fp, 0x34($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5704u;
            goto label_2a5704;
        }
    }
    ctx->pc = 0x2A56B0u;
    // 0x2a56b0: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2A56B0u;
    {
        const bool branch_taken_0x2a56b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A56B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A56B0u;
        // 0x2a56b4: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a56b0) {
            ctx->pc = 0x2A56F0u;
            goto label_2a56f0;
        }
    }
    ctx->pc = 0x2A56B8u;
    // 0x2a56b8: 0xe4d40000  swc1        $f20, 0x0($a2)
    ctx->pc = 0x2a56b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2a56bc: 0xe4d40004  swc1        $f20, 0x4($a2)
    ctx->pc = 0x2a56bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2a56c0: 0xe4d40008  swc1        $f20, 0x8($a2)
    ctx->pc = 0x2a56c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2a56c4: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x2a56c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a56c8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2a56c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a56cc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2a56ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2a56d0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2a56d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a56d4: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2a56d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2a56d8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2a56d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a56dc: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2a56dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2a56e0: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2a56e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a56e4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a56e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a56e8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2a56e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a56ec: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x2a56ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_2a56f0:
    // 0x2a56f0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2a56f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a56f4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2a56f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2a56f8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2a56f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2a56fc: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2A56FCu;
    {
        const bool branch_taken_0x2a56fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A56FCu;
        // 0x2a5700: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a56fc) {
            ctx->pc = 0x2A58D8u;
            goto label_2a58d8;
        }
    }
    ctx->pc = 0x2A5704u;
label_2a5704:
    // 0x2a5704: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2a5704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2a5708: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2a5708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2a570c: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x2a570cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2a5710: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x2a5710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2a5714: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2a5714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a5718: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2a5718u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a571c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2a571cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a5720: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2a5720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a5724: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2a5724u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2a5728: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2a5728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2a572c: 0x5e182b  sltu        $v1, $v0, $fp
    ctx->pc = 0x2a572cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x2a5730: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x2a5730u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x2a5734: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2a5734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a5738: 0x44a021  addu        $s4, $v0, $a0
    ctx->pc = 0x2a5738u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a573c: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A573Cu;
    {
        const bool branch_taken_0x2a573c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A573Cu;
        // 0x2a5740: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a573c) {
            ctx->pc = 0x2A5758u;
            goto label_2a5758;
        }
    }
    ctx->pc = 0x2A5744u;
    // 0x2a5744: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2a5744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a5748: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2A5748u;
    SET_GPR_U32(ctx, 31, 0x2A5750u);
    ctx->pc = 0x2A574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5748u;
    // 0x2a574c: 0x2822018  mult        $a0, $s4, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2A5748u, 0x2A5750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5750u;
label_2a5750:
    // 0x2a5750: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5750u;
    {
        const bool branch_taken_0x2a5750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5750u;
        // 0x2a5754: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5750) {
            ctx->pc = 0x2A5760u;
            goto label_2a5760;
        }
    }
    ctx->pc = 0x2A5758u;
label_2a5758:
    // 0x2a5758: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a5758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a575c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a575cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5760:
    // 0x2a5760: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a5760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a5764: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2a5764u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5768: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2a5768u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2a576c: 0x10730016  beq         $v1, $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A576Cu;
    {
        const bool branch_taken_0x2a576c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x2A5770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A576Cu;
        // 0x2a5770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a576c) {
            ctx->pc = 0x2A57C8u;
            goto label_2a57c8;
        }
    }
    ctx->pc = 0x2A5774u;
    // 0x2a5774: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x2a5774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2a5778:
    // 0x2a5778: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A5778u;
    {
        const bool branch_taken_0x2a5778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5778) {
            ctx->pc = 0x2A577Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5778u;
            // 0x2a577c: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A57BCu;
            goto label_2a57bc;
        }
    }
    ctx->pc = 0x2A5780u;
    // 0x2a5780: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x2a5780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x2a5784: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x2a5784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x2a5788: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a5788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a578c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a578cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a5790: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a5790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5794: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x2a5794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x2a5798: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2a5798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a579c: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x2a579cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x2a57a0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a57a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a57a4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a57a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a57a8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2a57a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a57ac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a57acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a57b0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2a57b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a57b4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a57b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a57b8: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x2a57b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_2a57bc:
    // 0x2a57bc: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2a57bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2a57c0: 0x1473ffed  bne         $v1, $s3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2A57C0u;
    {
        const bool branch_taken_0x2a57c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x2A57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A57C0u;
        // 0x2a57c4: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a57c0) {
            ctx->pc = 0x2A5778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5778;
        }
    }
    ctx->pc = 0x2A57C8u;
label_2a57c8:
    // 0x2a57c8: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x2a57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2a57cc: 0x145e0013  bne         $v0, $fp, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A57CCu;
    {
        const bool branch_taken_0x2a57cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x2A57D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A57CCu;
        // 0x2a57d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a57cc) {
            ctx->pc = 0x2A581Cu;
            goto label_2a581c;
        }
    }
    ctx->pc = 0x2A57D4u;
    // 0x2a57d4: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A57D4u;
    {
        const bool branch_taken_0x2a57d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A57D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A57D4u;
        // 0x2a57d8: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a57d4) {
            ctx->pc = 0x2A5814u;
            goto label_2a5814;
        }
    }
    ctx->pc = 0x2A57DCu;
    // 0x2a57dc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2a57dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2a57e0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2a57e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2a57e4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2a57e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2a57e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a57e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a57ec: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2a57ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a57f0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2a57f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2a57f4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2a57f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a57f8: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2a57f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2a57fc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2a57fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5800: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2a5800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2a5804: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2a5804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5808: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a5808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a580c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2a580cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a5810: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2a5810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2a5814:
    // 0x2a5814: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2A5814u;
    {
        const bool branch_taken_0x2a5814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5814u;
        // 0x2a5818: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5814) {
            ctx->pc = 0x2A5880u;
            goto label_2a5880;
        }
    }
    ctx->pc = 0x2A581Cu;
label_2a581c:
    // 0x2a581c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a581cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5820: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A5820u;
    {
        const bool branch_taken_0x2a5820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5820u;
        // 0x2a5824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5820) {
            ctx->pc = 0x2A587Cu;
            goto label_2a587c;
        }
    }
    ctx->pc = 0x2A5828u;
    // 0x2a5828: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x2a5828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2a582c: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x2a582cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_2a5830:
    // 0x2a5830: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A5830u;
    {
        const bool branch_taken_0x2a5830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5830u;
        // 0x2a5834: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5830) {
            ctx->pc = 0x2A5870u;
            goto label_2a5870;
        }
    }
    ctx->pc = 0x2A5838u;
    // 0x2a5838: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x2a5838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x2a583c: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x2a583cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x2a5840: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a5840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a5844: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a5844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a5848: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2a5848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a584c: 0xe440fff8  swc1        $f0, -0x8($v0)
    ctx->pc = 0x2a584cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
    // 0x2a5850: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2a5850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5854: 0xe441fffc  swc1        $f1, -0x4($v0)
    ctx->pc = 0x2a5854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
    // 0x2a5858: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2a5858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a585c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2a585cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a5860: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2a5860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a5864: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a5864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a5868: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2a5868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a586c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a586cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2a5870:
    // 0x2a5870: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2a5870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2a5874: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2A5874u;
    {
        const bool branch_taken_0x2a5874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5874u;
        // 0x2a5878: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5874) {
            ctx->pc = 0x2A5830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5830;
        }
    }
    ctx->pc = 0x2A587Cu;
label_2a587c:
    // 0x2a587c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a587cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5880:
    // 0x2a5880: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a5880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a5884: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2a5884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a5888: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A5888u;
    {
        const bool branch_taken_0x2a5888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5888u;
        // 0x2a588c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5888) {
            ctx->pc = 0x2A58B0u;
            goto label_2a58b0;
        }
    }
    ctx->pc = 0x2A5890u;
    // 0x2a5890: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2a5890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2a5894: 0x0  nop
    ctx->pc = 0x2a5894u;
    // NOP
label_2a5898:
    // 0x2a5898: 0x0  nop
    ctx->pc = 0x2a5898u;
    // NOP
    // 0x2a589c: 0x0  nop
    ctx->pc = 0x2a589cu;
    // NOP
    // 0x2a58a0: 0x0  nop
    ctx->pc = 0x2a58a0u;
    // NOP
    // 0x2a58a4: 0x0  nop
    ctx->pc = 0x2a58a4u;
    // NOP
    // 0x2a58a8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A58A8u;
    {
        const bool branch_taken_0x2a58a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A58ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A58A8u;
        // 0x2a58ac: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a58a8) {
            ctx->pc = 0x2A5898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5898;
        }
    }
    ctx->pc = 0x2A58B0u;
label_2a58b0:
    // 0x2a58b0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A58B0u;
    {
        const bool branch_taken_0x2a58b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A58B0u;
        // 0x2a58b4: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a58b0) {
            ctx->pc = 0x2A58C4u;
            goto label_2a58c4;
        }
    }
    ctx->pc = 0x2A58B8u;
    // 0x2a58b8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2A58B8u;
    SET_GPR_U32(ctx, 31, 0x2A58C0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2A58B8u, 0x2A58C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A58C0u;
label_2a58c0:
    // 0x2a58c0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2a58c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2a58c4:
    // 0x2a58c4: 0xae570000  sw          $s7, 0x0($s2)
    ctx->pc = 0x2a58c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 23));
    // 0x2a58c8: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x2a58c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a58cc: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x2a58ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x2a58d0: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x2a58d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2a58d4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2a58d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_2a58d8:
    // 0x2a58d8: 0xc0a9ec2  jal         func_2A7B08
    ctx->pc = 0x2A58D8u;
    SET_GPR_U32(ctx, 31, 0x2A58E0u);
    ctx->pc = 0x2A58DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A58D8u;
    // 0x2a58dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7B08u, 0x2A58D8u, 0x2A58E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A58E0u;
label_2a58e0:
    // 0x2a58e0: 0x2ea20007  sltiu       $v0, $s5, 0x7
    ctx->pc = 0x2a58e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2a58e4: 0x5440ff5c  bnel        $v0, $zero, . + 4 + (-0xA4 << 2)
    ctx->pc = 0x2A58E4u;
    {
        const bool branch_taken_0x2a58e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a58e4) {
            ctx->pc = 0x2A58E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A58E4u;
            // 0x2a58e8: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5658;
        }
    }
    ctx->pc = 0x2A58ECu;
    // 0x2a58ec: 0xe6d50004  swc1        $f21, 0x4($s6)
    ctx->pc = 0x2a58ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x2a58f0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2a58f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a58f4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2a58f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a58f8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2a58f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a58fc: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2a58fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a5900: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2a5900u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a5904: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2a5904u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a5908: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2a5908u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a590c: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2a590cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a5910: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2a5910u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a5914: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2a5914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2a5918: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x2a5918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a591c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2a591cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a5920: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2a5920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a5924: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5924u;
        // 0x2a5928: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A592Cu;
    // 0x2a592c: 0x0  nop
    ctx->pc = 0x2a592cu;
    // NOP
    ctx->pc = 0x2a5930u;
}
