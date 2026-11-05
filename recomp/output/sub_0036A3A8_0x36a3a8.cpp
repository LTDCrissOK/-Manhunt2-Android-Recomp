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

// Function: sub_0036A3A8
// Address: 0x36a3a8 - 0x36a4f8
void sub_0036A3A8_0x36a3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A3A8_0x36a3a8");
#endif

    switch (ctx->pc) {
        case 0x36a4dcu: goto label_36a4dc;
        default: break;
    }

    ctx->pc = 0x36a3a8u;

    // 0x36a3a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a3ac: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x36a3acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a3b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a3b4: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x36a3b4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a3b8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x36a3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a3bc: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36A3BCu;
    {
        const bool branch_taken_0x36a3bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A3BCu;
        // 0x36a3c0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a3bc) {
            ctx->pc = 0x36A3D4u;
            goto label_36a3d4;
        }
    }
    ctx->pc = 0x36A3C4u;
    // 0x36a3c4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x36a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x36a3c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a3cc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x36A3CCu;
    {
        const bool branch_taken_0x36a3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A3CCu;
        // 0x36a3d0: 0xac62ca70  sw          $v0, -0x3590($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a3cc) {
            ctx->pc = 0x36A434u;
            goto label_36a434;
        }
    }
    ctx->pc = 0x36A3D4u;
label_36a3d4:
    // 0x36a3d4: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x36a3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x36a3d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36a3d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36a3dc: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x36a3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x36a3e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x36a3e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36a3e4: 0x46007082  mul.s       $f2, $f14, $f0
    ctx->pc = 0x36a3e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x36a3e8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x36a3e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x36a3ec: 0x460178c2  mul.s       $f3, $f15, $f1
    ctx->pc = 0x36a3ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x36a3f0: 0x46016842  mul.s       $f1, $f13, $f1
    ctx->pc = 0x36a3f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x36a3f4: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36a3f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x36a3f8: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x36a3f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36a3fc: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36a3fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x36a400: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x36a400u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x36a404: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36a404u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x36a408: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x36a408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x36a40c: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36a40cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x36a410: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x36a410u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x36a414: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x36a414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x36a418: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x36a418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x36a41c: 0x27c03  sra         $t7, $v0, 16
    ctx->pc = 0x36a41cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 2), 16));
    // 0x36a420: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x36a420u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x36a424: 0x36c03  sra         $t5, $v1, 16
    ctx->pc = 0x36a424u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 3), 16));
    // 0x36a428: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x36a428u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x36a42c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x36A42Cu;
    {
        const bool branch_taken_0x36a42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A42Cu;
        // 0x36a430: 0x46403  sra         $t4, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a42c) {
            ctx->pc = 0x36A470u;
            goto label_36a470;
        }
    }
    ctx->pc = 0x36A434u;
label_36a434:
    // 0x36a434: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36a434u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x36a438: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x36a438u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x36a43c: 0x46006824  .word       0x46006824                   # cvt.w.s     $f0, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36a43cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x36a440: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x36a440u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x36a444: 0x46007024  .word       0x46007024                   # cvt.w.s     $f0, $f14 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36a444u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[14]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x36a448: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x36a448u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x36a44c: 0x46007824  .word       0x46007824                   # cvt.w.s     $f0, $f15 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36a44cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[15]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x36a450: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x36a450u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x36a454: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x36a454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x36a458: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x36a458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x36a45c: 0x26c03  sra         $t5, $v0, 16
    ctx->pc = 0x36a45cu;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 2), 16));
    // 0x36a460: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x36a460u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x36a464: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x36a464u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
    // 0x36a468: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x36a468u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x36a46c: 0x47c03  sra         $t7, $a0, 16
    ctx->pc = 0x36a46cu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 4), 16));
label_36a470:
    // 0x36a470: 0x57403  sra         $t6, $a1, 16
    ctx->pc = 0x36a470u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 5), 16));
    // 0x36a474: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x36a474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x36a478: 0x30c900ff  andi        $t1, $a2, 0xFF
    ctx->pc = 0x36a478u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x36a47c: 0x24631ff0  addiu       $v1, $v1, 0x1FF0
    ctx->pc = 0x36a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8176));
    // 0x36a480: 0x30ea00ff  andi        $t2, $a3, 0xFF
    ctx->pc = 0x36a480u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x36a484: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x36a484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x36a488: 0xa46d0008  sh          $t5, 0x8($v1)
    ctx->pc = 0x36a488u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x6C1FF8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6C1FF8u, _value); } while (0);
    // 0x36a48c: 0xa46c000a  sh          $t4, 0xA($v1)
    ctx->pc = 0x36a48cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x6C1FFAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6C1FFAu, _value); } while (0);
    // 0x36a490: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x36a490u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x36a494: 0x330800ff  andi        $t0, $t8, 0xFF
    ctx->pc = 0x36a494u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)255);
    // 0x36a498: 0xa04b0004  sb          $t3, 0x4($v0)
    ctx->pc = 0x36a498u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x6C2004u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6C2004u, _value); } while (0);
    // 0x36a49c: 0xa0480005  sb          $t0, 0x5($v0)
    ctx->pc = 0x36a49cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x6C2005u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6C2005u, _value); } while (0);
    // 0x36a4a0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x36a4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a4a4: 0xa0490006  sb          $t1, 0x6($v0)
    ctx->pc = 0x36a4a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x6C2006u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6C2006u, _value); } while (0);
    // 0x36a4a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36a4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36a4ac: 0xa04a0007  sb          $t2, 0x7($v0)
    ctx->pc = 0x36a4acu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6C2007u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6C2007u, _value); } while (0);
    // 0x36a4b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36a4b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a4b4: 0xa44f0008  sh          $t7, 0x8($v0)
    ctx->pc = 0x36a4b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x6C2008u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6C2008u, _value); } while (0);
    // 0x36a4b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36a4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a4bc: 0xa44e000a  sh          $t6, 0xA($v0)
    ctx->pc = 0x36a4bcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x6C200Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6C200Au, _value); } while (0);
    // 0x36a4c0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x36a4c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6C200Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C200Cu, _value); } while (0);
    // 0x36a4c4: 0xa06b0004  sb          $t3, 0x4($v1)
    ctx->pc = 0x36a4c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x6C1FF4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6C1FF4u, _value); } while (0);
    // 0x36a4c8: 0xa0680005  sb          $t0, 0x5($v1)
    ctx->pc = 0x36a4c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x6C1FF5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6C1FF5u, _value); } while (0);
    // 0x36a4cc: 0xa0690006  sb          $t1, 0x6($v1)
    ctx->pc = 0x36a4ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x6C1FF6u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6C1FF6u, _value); } while (0);
    // 0x36a4d0: 0xa06a0007  sb          $t2, 0x7($v1)
    ctx->pc = 0x36a4d0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x6C1FF7u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6C1FF7u, _value); } while (0);
    // 0x36a4d4: 0xc0db762  jal         func_36DD88
    ctx->pc = 0x36A4D4u;
    SET_GPR_U32(ctx, 31, 0x36A4DCu);
    ctx->pc = 0x36A4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A4D4u;
    // 0x36a4d8: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36DD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DD88u, 0x36A4D4u, 0x36A4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A4DCu;
label_36a4dc:
    // 0x36a4dc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A4DCu;
    {
        const bool branch_taken_0x36a4dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4DCu;
        // 0x36a4e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a4dc) {
            ctx->pc = 0x36A4ECu;
            goto label_36a4ec;
        }
    }
    ctx->pc = 0x36A4E4u;
    // 0x36a4e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x36a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x36a4e8: 0xac40ca70  sw          $zero, -0x3590($v0)
    ctx->pc = 0x36a4e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6BCA70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BCA70u, _value); } while (0);
label_36a4ec:
    // 0x36a4ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x36A4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A4F0u;
        // 0x36a4f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A4F8u;
}
