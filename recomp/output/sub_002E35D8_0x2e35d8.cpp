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

// Function: sub_002E35D8
// Address: 0x2e35d8 - 0x2e3728
void sub_002E35D8_0x2e35d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E35D8_0x2e35d8");
#endif

    switch (ctx->pc) {
        case 0x2e363cu: goto label_2e363c;
        case 0x2e3648u: goto label_2e3648;
        case 0x2e3650u: goto label_2e3650;
        case 0x2e365cu: goto label_2e365c;
        case 0x2e36f8u: goto label_2e36f8;
        default: break;
    }

    ctx->pc = 0x2e35d8u;

    // 0x2e35d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e35d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e35dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e35dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e35e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e35e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e35e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e35e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e35e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e35ec: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2e35ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e35f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2e35f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e35f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35f8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2e35f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2e35fc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2e35fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3600: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2e3600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2e3604: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2e3604u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3608: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2e3608u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2e360c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2e360cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3610: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2e3610u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2e3614: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2e3614u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2e3618: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e3618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e361c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2e361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2e3620: 0x8e2202f8  lw          $v0, 0x2F8($s1)
    ctx->pc = 0x2e3620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x2e3624: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E3624u;
    {
        const bool branch_taken_0x2e3624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3624u;
        // 0x2e3628: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3624) {
            ctx->pc = 0x2E365Cu;
            goto label_2e365c;
        }
    }
    ctx->pc = 0x2E362Cu;
    // 0x2e362c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2e362cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2e3630: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2e3630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e3634: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x2E3634u;
    SET_GPR_U32(ctx, 31, 0x2E363Cu);
    ctx->pc = 0x2E3638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3634u;
    // 0x2e3638: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x2E3634u, 0x2E363Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E363Cu;
label_2e363c:
    // 0x2e363c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e363cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3640: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2E3640u;
    SET_GPR_U32(ctx, 31, 0x2E3648u);
    ctx->pc = 0x2E3644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3640u;
    // 0x2e3644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2E3640u, 0x2E3648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3648u;
label_2e3648:
    // 0x2e3648: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2E3648u;
    SET_GPR_U32(ctx, 31, 0x2E3650u);
    ctx->pc = 0x2E364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3648u;
    // 0x2e364c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2E3648u, 0x2E3650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3650u;
label_2e3650:
    // 0x2e3650: 0xae3002f8  sw          $s0, 0x2F8($s1)
    ctx->pc = 0x2e3650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 760), GPR_U32(ctx, 16));
    // 0x2e3654: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2E3654u;
    SET_GPR_U32(ctx, 31, 0x2E365Cu);
    ctx->pc = 0x2E3658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3654u;
    // 0x2e3658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2E3654u, 0x2E365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E365Cu;
label_2e365c:
    // 0x2e365c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e365cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3660: 0x8e2502f8  lw          $a1, 0x2F8($s1)
    ctx->pc = 0x2e3660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
    // 0x2e3664: 0xa22302f2  sb          $v1, 0x2F2($s1)
    ctx->pc = 0x2e3664u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 754), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e3668: 0x8e6211d0  lw          $v0, 0x11D0($s3)
    ctx->pc = 0x2e3668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4560)));
    // 0x2e366c: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x2e366cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x2e3670: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x2e3670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2e3674: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e3674u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e3678: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2e3678u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e367c: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x2e367cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2e3680: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e3680u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3684: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x2e3684u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3688: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x2e3688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x2e368c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e368cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e3690: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x2e3690u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3694: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2e3694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x2e3698: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2e3698u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e369c: 0xf8a10030  sqc2        $vf1, 0x30($a1)
    ctx->pc = 0x2e369cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e36a0: 0xae340330  sw          $s4, 0x330($s1)
    ctx->pc = 0x2e36a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 20));
    // 0x2e36a4: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2e36a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e36a8: 0xfa210340  sqc2        $vf1, 0x340($s1)
    ctx->pc = 0x2e36a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 832), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e36ac: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E36ACu;
    {
        const bool branch_taken_0x2e36ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E36B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36ACu;
        // 0x2e36b0: 0xa2360334  sb          $s6, 0x334($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 820), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e36ac) {
            ctx->pc = 0x2E36F8u;
            goto label_2e36f8;
        }
    }
    ctx->pc = 0x2E36B4u;
    // 0x2e36b4: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e36b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e36b8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e36b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e36bc: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2e36bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2e36c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e36c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e36c4: 0xa23202f0  sb          $s2, 0x2F0($s1)
    ctx->pc = 0x2e36c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 752), (uint8_t)GPR_U32(ctx, 18));
    // 0x2e36c8: 0x262602fc  addiu       $a2, $s1, 0x2FC
    ctx->pc = 0x2e36c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 764));
    // 0x2e36cc: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2e36ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2e36d0: 0x26240310  addiu       $a0, $s1, 0x310
    ctx->pc = 0x2e36d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x2e36d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e36d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e36d8: 0x0  nop
    ctx->pc = 0x2e36d8u;
    // NOP
    // 0x2e36dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e36dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e36e0: 0xae2202e8  sw          $v0, 0x2E8($s1)
    ctx->pc = 0x2e36e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 2));
    // 0x2e36e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e36e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e36e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e36e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e36ec: 0xe62102ec  swc1        $f1, 0x2EC($s1)
    ctx->pc = 0x2e36ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 748), bits); }
    // 0x2e36f0: 0xc0b19e2  jal         func_2C6788
    ctx->pc = 0x2E36F0u;
    SET_GPR_U32(ctx, 31, 0x2E36F8u);
    ctx->pc = 0x2E36F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E36F0u;
    // 0x2e36f4: 0x26250320  addiu       $a1, $s1, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6788u, 0x2E36F0u, 0x2E36F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E36F8u;
label_2e36f8:
    // 0x2e36f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e36f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e36fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e36fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e3700: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e3700u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3704: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e3704u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e3708: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e3708u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e370c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2e370cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e3710: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2e3710u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3714: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2e3714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e3718: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2e3718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e371c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2e371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e3720: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3720u;
        // 0x2e3724: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3728u;
}
