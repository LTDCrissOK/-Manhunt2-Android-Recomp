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

// Function: sub_00305060
// Address: 0x305060 - 0x305500
void sub_00305060_0x305060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305060_0x305060");
#endif

    switch (ctx->pc) {
        case 0x3050b4u: goto label_3050b4;
        case 0x30510cu: goto label_30510c;
        case 0x305160u: goto label_305160;
        case 0x3051c0u: goto label_3051c0;
        case 0x305218u: goto label_305218;
        case 0x30526cu: goto label_30526c;
        case 0x3052a4u: goto label_3052a4;
        case 0x305300u: goto label_305300;
        case 0x305368u: goto label_305368;
        case 0x305380u: goto label_305380;
        case 0x305398u: goto label_305398;
        case 0x3053b0u: goto label_3053b0;
        case 0x3053c8u: goto label_3053c8;
        case 0x3053e0u: goto label_3053e0;
        case 0x3053f8u: goto label_3053f8;
        case 0x30540cu: goto label_30540c;
        case 0x305414u: goto label_305414;
        case 0x305470u: goto label_305470;
        default: break;
    }

    ctx->pc = 0x305060u;

    // 0x305060: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x305060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x305064: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x305064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x305068: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x305068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30506c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x30506cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x305070: 0x2451bb58  addiu       $s1, $v0, -0x44A8
    ctx->pc = 0x305070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949720));
    // 0x305074: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x305074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x305078: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x305078u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x30507c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30507cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305080: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x305080u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305084: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x305084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x305088: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x305088u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x30508c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x30508cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x305090: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x305090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x305094: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x305094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x305098: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x305098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30509c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x30509cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3050a0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3050a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3050a4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3050a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3050a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3050a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3050ac: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x3050ACu;
    SET_GPR_U32(ctx, 31, 0x3050B4u);
    ctx->pc = 0x3050B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3050ACu;
    // 0x3050b0: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x3050ACu, 0x3050B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3050B4u;
label_3050b4:
    // 0x3050b4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3050b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x3050b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3050b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3050bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3050bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3050c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3050c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3050c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3050c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3050c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3050c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3050cc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3050ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3050d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3050d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3050d4: 0x0  nop
    ctx->pc = 0x3050d4u;
    // NOP
    // 0x3050d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3050d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3050dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3050dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3050e0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3050e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3050e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3050e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3050e8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3050e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3050ec: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3050ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3050f0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3050f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x3050f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3050f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3050f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3050f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3050fc: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x3050fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305100: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x305100u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x305104: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x305104u;
    SET_GPR_U32(ctx, 31, 0x30510Cu);
    ctx->pc = 0x305108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305104u;
    // 0x305108: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x305104u, 0x30510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30510Cu;
label_30510c:
    // 0x30510c: 0x2611bb59  addiu       $s1, $s0, -0x44A7
    ctx->pc = 0x30510cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949721));
    // 0x305110: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x305110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x305114: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x305114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x305118: 0x0  nop
    ctx->pc = 0x305118u;
    // NOP
    // 0x30511c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30511cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x305120: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x305120u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x305124: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x305124u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x305128: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x305128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30512c: 0x0  nop
    ctx->pc = 0x30512cu;
    // NOP
    // 0x305130: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x305130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x305134: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x305134u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x305138: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x305138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30513c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30513cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x305140: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x305140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x305144: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x305144u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x305148: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x305148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30514c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x30514cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x305150: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x305150u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305154: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x305154u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x305158: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x305158u;
    SET_GPR_U32(ctx, 31, 0x305160u);
    ctx->pc = 0x30515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305158u;
    // 0x30515c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x305158u, 0x305160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305160u;
label_305160:
    // 0x305160: 0x2610bb5a  addiu       $s0, $s0, -0x44A6
    ctx->pc = 0x305160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949722));
    // 0x305164: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x305164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x305168: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x305168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30516c: 0x0  nop
    ctx->pc = 0x30516cu;
    // NOP
    // 0x305170: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x305170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x305174: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x305174u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x305178: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x305178u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30517c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30517cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x305180: 0x0  nop
    ctx->pc = 0x305180u;
    // NOP
    // 0x305184: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x305184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x305188: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x305188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x30518c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x30518cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x305190: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x305190u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305194: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x305194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x305198: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x305198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x30519c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x30519cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3051a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3051a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3051a4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3051a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x3051a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3051a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3051ac: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3051acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3051b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3051b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3051b4: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x3051b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3051b8: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x3051B8u;
    SET_GPR_U32(ctx, 31, 0x3051C0u);
    ctx->pc = 0x3051BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3051B8u;
    // 0x3051bc: 0x2451bb5b  addiu       $s1, $v0, -0x44A5 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949723));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x3051B8u, 0x3051C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3051C0u;
label_3051c0:
    // 0x3051c0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3051c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x3051c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3051c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3051c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3051c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3051cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3051ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3051d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3051d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3051d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3051d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3051d8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3051d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3051dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3051dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3051e0: 0x0  nop
    ctx->pc = 0x3051e0u;
    // NOP
    // 0x3051e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3051e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3051e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3051e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3051ec: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3051ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3051f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3051f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3051f4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3051f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3051f8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3051f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3051fc: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3051fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x305200: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x305200u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x305204: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x305204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305208: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x305208u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30520c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x30520cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x305210: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x305210u;
    SET_GPR_U32(ctx, 31, 0x305218u);
    ctx->pc = 0x305214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305210u;
    // 0x305214: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x305210u, 0x305218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305218u;
label_305218:
    // 0x305218: 0x2611bb5c  addiu       $s1, $s0, -0x44A4
    ctx->pc = 0x305218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949724));
    // 0x30521c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x30521cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x305220: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x305220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x305224: 0x0  nop
    ctx->pc = 0x305224u;
    // NOP
    // 0x305228: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x305228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30522c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30522cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x305230: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x305230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x305234: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x305234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x305238: 0x0  nop
    ctx->pc = 0x305238u;
    // NOP
    // 0x30523c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30523cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x305240: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x305240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x305244: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x305244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x305248: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x305248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x30524c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30524cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x305250: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x305250u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x305254: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x305254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x305258: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x305258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30525c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x30525cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305260: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x305260u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x305264: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x305264u;
    SET_GPR_U32(ctx, 31, 0x30526Cu);
    ctx->pc = 0x305268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305264u;
    // 0x305268: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x305264u, 0x30526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30526Cu;
label_30526c:
    // 0x30526c: 0x2610bb5d  addiu       $s0, $s0, -0x44A3
    ctx->pc = 0x30526cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949725));
    // 0x305270: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x305270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x305274: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x305274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x305278: 0x0  nop
    ctx->pc = 0x305278u;
    // NOP
    // 0x30527c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x30527cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x305280: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x305280u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x305284: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x305284u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x305288: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x305288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30528c: 0x0  nop
    ctx->pc = 0x30528cu;
    // NOP
    // 0x305290: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x305290u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x305294: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x305294u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x305298: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x305298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30529c: 0xc0c1540  jal         func_305500
    ctx->pc = 0x30529Cu;
    SET_GPR_U32(ctx, 31, 0x3052A4u);
    ctx->pc = 0x3052A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30529Cu;
    // 0x3052a0: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305500u, 0x30529Cu, 0x3052A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3052A4u;
label_3052a4:
    // 0x3052a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3052a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3052a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3052a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3052ac: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3052ACu;
    {
        const bool branch_taken_0x3052ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3052B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052ACu;
        // 0x3052b0: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3052ac) {
            ctx->pc = 0x3052E8u;
            goto label_3052e8;
        }
    }
    ctx->pc = 0x3052B4u;
    // 0x3052b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3052B4u;
    {
        const bool branch_taken_0x3052b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3052B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052B4u;
        // 0x3052b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3052b4) {
            ctx->pc = 0x3052CCu;
            goto label_3052cc;
        }
    }
    ctx->pc = 0x3052BCu;
    // 0x3052bc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3052BCu;
    {
        const bool branch_taken_0x3052bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3052C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052BCu;
        // 0x3052c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3052bc) {
            ctx->pc = 0x3052E0u;
            goto label_3052e0;
        }
    }
    ctx->pc = 0x3052C4u;
    // 0x3052c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3052C4u;
    {
        const bool branch_taken_0x3052c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3052c4) {
            ctx->pc = 0x3052F8u;
            goto label_3052f8;
        }
    }
    ctx->pc = 0x3052CCu;
label_3052cc:
    // 0x3052cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3052ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3052d0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3052D0u;
    {
        const bool branch_taken_0x3052d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3052D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052D0u;
        // 0x3052d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3052d0) {
            ctx->pc = 0x3052F4u;
            goto label_3052f4;
        }
    }
    ctx->pc = 0x3052D8u;
    // 0x3052d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3052D8u;
    {
        const bool branch_taken_0x3052d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3052d8) {
            ctx->pc = 0x3052F8u;
            goto label_3052f8;
        }
    }
    ctx->pc = 0x3052E0u;
label_3052e0:
    // 0x3052e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3052E0u;
    {
        const bool branch_taken_0x3052e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3052E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052E0u;
        // 0x3052e4: 0xa2e2bb58  sb          $v0, -0x44A8($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 4294949720), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3052e0) {
            ctx->pc = 0x3052F8u;
            goto label_3052f8;
        }
    }
    ctx->pc = 0x3052E8u;
label_3052e8:
    // 0x3052e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3052e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3052ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3052ECu;
    {
        const bool branch_taken_0x3052ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3052F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3052ECu;
        // 0x3052f0: 0xa2c2bb59  sb          $v0, -0x44A7($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 4294949721), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3052ec) {
            ctx->pc = 0x3052F8u;
            goto label_3052f8;
        }
    }
    ctx->pc = 0x3052F4u;
label_3052f4:
    // 0x3052f4: 0xa282bb5a  sb          $v0, -0x44A6($s4)
    ctx->pc = 0x3052f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4294949722), (uint8_t)GPR_U32(ctx, 2));
label_3052f8:
    // 0x3052f8: 0xc0c1562  jal         func_305588
    ctx->pc = 0x3052F8u;
    SET_GPR_U32(ctx, 31, 0x305300u);
    ctx->pc = 0x305588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305588u, 0x3052F8u, 0x305300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305300u;
label_305300:
    // 0x305300: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x305300u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305304: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x305304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x305308: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x305308u;
    {
        const bool branch_taken_0x305308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305308u;
        // 0x30530c: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305308) {
            ctx->pc = 0x305348u;
            goto label_305348;
        }
    }
    ctx->pc = 0x305310u;
    // 0x305310: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x305310u;
    {
        const bool branch_taken_0x305310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305310u;
        // 0x305314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305310) {
            ctx->pc = 0x305328u;
            goto label_305328;
        }
    }
    ctx->pc = 0x305318u;
    // 0x305318: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x305318u;
    {
        const bool branch_taken_0x305318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305318u;
        // 0x30531c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305318) {
            ctx->pc = 0x30533Cu;
            goto label_30533c;
        }
    }
    ctx->pc = 0x305320u;
    // 0x305320: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x305320u;
    {
        const bool branch_taken_0x305320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305320) {
            ctx->pc = 0x305360u;
            goto label_305360;
        }
    }
    ctx->pc = 0x305328u;
label_305328:
    // 0x305328: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x305328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30532c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30532Cu;
    {
        const bool branch_taken_0x30532c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x305330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30532Cu;
        // 0x305330: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30532c) {
            ctx->pc = 0x305354u;
            goto label_305354;
        }
    }
    ctx->pc = 0x305334u;
    // 0x305334: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x305334u;
    {
        const bool branch_taken_0x305334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305334) {
            ctx->pc = 0x305360u;
            goto label_305360;
        }
    }
    ctx->pc = 0x30533Cu;
label_30533c:
    // 0x30533c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30533cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x305340: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x305340u;
    {
        const bool branch_taken_0x305340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305340u;
        // 0x305344: 0xa2a2bb5b  sb          $v0, -0x44A5($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 4294949723), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305340) {
            ctx->pc = 0x30535Cu;
            goto label_30535c;
        }
    }
    ctx->pc = 0x305348u;
label_305348:
    // 0x305348: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x305348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30534c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30534Cu;
    {
        const bool branch_taken_0x30534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30534Cu;
        // 0x305350: 0xa262bb5c  sb          $v0, -0x44A4($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 4294949724), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30534c) {
            ctx->pc = 0x30535Cu;
            goto label_30535c;
        }
    }
    ctx->pc = 0x305354u;
label_305354:
    // 0x305354: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x305354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x305358: 0xa242bb5d  sb          $v0, -0x44A3($s2)
    ctx->pc = 0x305358u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4294949725), (uint8_t)GPR_U32(ctx, 2));
label_30535c:
    // 0x30535c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x30535cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_305360:
    // 0x305360: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x305360u;
    SET_GPR_U32(ctx, 31, 0x305368u);
    ctx->pc = 0x305364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305360u;
    // 0x305364: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x305360u, 0x305368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305368u;
label_305368:
    // 0x305368: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x305368u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x30536c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x30536cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x305370: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x305370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x305374: 0xa242bb5e  sb          $v0, -0x44A2($s2)
    ctx->pc = 0x305374u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FBB5Eu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FBB5Eu, _value); } while (0);
    // 0x305378: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x305378u;
    SET_GPR_U32(ctx, 31, 0x305380u);
    ctx->pc = 0x30537Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305378u;
    // 0x30537c: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x305378u, 0x305380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305380u;
label_305380:
    // 0x305380: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x305380u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305384: 0xa202bb5f  sb          $v0, -0x44A1($s0)
    ctx->pc = 0x305384u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294949727), (uint8_t)GPR_U32(ctx, 2));
    // 0x305388: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x305388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30538c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x30538cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x305390: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x305390u;
    SET_GPR_U32(ctx, 31, 0x305398u);
    ctx->pc = 0x305394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305390u;
    // 0x305394: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x305390u, 0x305398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305398u;
label_305398:
    // 0x305398: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x305398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30539c: 0xa202bb60  sb          $v0, -0x44A0($s0)
    ctx->pc = 0x30539cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294949728), (uint8_t)GPR_U32(ctx, 2));
    // 0x3053a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3053a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3053a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3053a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3053a8: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x3053A8u;
    SET_GPR_U32(ctx, 31, 0x3053B0u);
    ctx->pc = 0x3053ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3053A8u;
    // 0x3053ac: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x3053A8u, 0x3053B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3053B0u;
label_3053b0:
    // 0x3053b0: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x3053b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3053b4: 0xa202bb61  sb          $v0, -0x449F($s0)
    ctx->pc = 0x3053b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294949729), (uint8_t)GPR_U32(ctx, 2));
    // 0x3053b8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3053b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3053bc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3053bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3053c0: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x3053C0u;
    SET_GPR_U32(ctx, 31, 0x3053C8u);
    ctx->pc = 0x3053C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3053C0u;
    // 0x3053c4: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x3053C0u, 0x3053C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3053C8u;
label_3053c8:
    // 0x3053c8: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x3053c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3053cc: 0xa202bb62  sb          $v0, -0x449E($s0)
    ctx->pc = 0x3053ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294949730), (uint8_t)GPR_U32(ctx, 2));
    // 0x3053d0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3053d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3053d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3053d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3053d8: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x3053D8u;
    SET_GPR_U32(ctx, 31, 0x3053E0u);
    ctx->pc = 0x3053DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3053D8u;
    // 0x3053dc: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x3053D8u, 0x3053E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3053E0u;
label_3053e0:
    // 0x3053e0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x3053e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3053e4: 0xa202bb63  sb          $v0, -0x449D($s0)
    ctx->pc = 0x3053e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294949731), (uint8_t)GPR_U32(ctx, 2));
    // 0x3053e8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3053e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3053ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3053ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3053f0: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x3053F0u;
    SET_GPR_U32(ctx, 31, 0x3053F8u);
    ctx->pc = 0x3053F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3053F0u;
    // 0x3053f4: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x3053F0u, 0x3053F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3053F8u;
label_3053f8:
    // 0x3053f8: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x3053f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x3053fc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3053fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x305400: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x305400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x305404: 0xc0b1260  jal         func_2C4980
    ctx->pc = 0x305404u;
    SET_GPR_U32(ctx, 31, 0x30540Cu);
    ctx->pc = 0x305408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305404u;
    // 0x305408: 0xa202bb64  sb          $v0, -0x449C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294949732), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4980u, 0x305404u, 0x30540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30540Cu;
label_30540c:
    // 0x30540c: 0xc0c1574  jal         func_3055D0
    ctx->pc = 0x30540Cu;
    SET_GPR_U32(ctx, 31, 0x305414u);
    ctx->pc = 0x305410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30540Cu;
    // 0x305410: 0xa222bb65  sb          $v0, -0x449B($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294949733), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3055D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3055D0u, 0x30540Cu, 0x305414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305414u;
label_305414:
    // 0x305414: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x305414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305418: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x305418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30541c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30541Cu;
    {
        const bool branch_taken_0x30541c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x305420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30541Cu;
        // 0x305420: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30541c) {
            ctx->pc = 0x305458u;
            goto label_305458;
        }
    }
    ctx->pc = 0x305424u;
    // 0x305424: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x305424u;
    {
        const bool branch_taken_0x305424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305424u;
        // 0x305428: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305424) {
            ctx->pc = 0x30543Cu;
            goto label_30543c;
        }
    }
    ctx->pc = 0x30542Cu;
    // 0x30542c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30542Cu;
    {
        const bool branch_taken_0x30542c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x305430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30542Cu;
        // 0x305430: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30542c) {
            ctx->pc = 0x305450u;
            goto label_305450;
        }
    }
    ctx->pc = 0x305434u;
    // 0x305434: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x305434u;
    {
        const bool branch_taken_0x305434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305434) {
            ctx->pc = 0x305468u;
            goto label_305468;
        }
    }
    ctx->pc = 0x30543Cu;
label_30543c:
    // 0x30543c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30543cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x305440: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x305440u;
    {
        const bool branch_taken_0x305440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x305444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305440u;
        // 0x305444: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305440) {
            ctx->pc = 0x305464u;
            goto label_305464;
        }
    }
    ctx->pc = 0x305448u;
    // 0x305448: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x305448u;
    {
        const bool branch_taken_0x305448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305448) {
            ctx->pc = 0x305468u;
            goto label_305468;
        }
    }
    ctx->pc = 0x305450u;
label_305450:
    // 0x305450: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x305450u;
    {
        const bool branch_taken_0x305450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305450u;
        // 0x305454: 0xa242bb5e  sb          $v0, -0x44A2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 4294949726), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305450) {
            ctx->pc = 0x305468u;
            goto label_305468;
        }
    }
    ctx->pc = 0x305458u;
label_305458:
    // 0x305458: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x305458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30545c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30545Cu;
    {
        const bool branch_taken_0x30545c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30545Cu;
        // 0x305460: 0xa2a2bb5f  sb          $v0, -0x44A1($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 4294949727), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30545c) {
            ctx->pc = 0x305468u;
            goto label_305468;
        }
    }
    ctx->pc = 0x305464u;
label_305464:
    // 0x305464: 0xa262bb60  sb          $v0, -0x44A0($s3)
    ctx->pc = 0x305464u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4294949728), (uint8_t)GPR_U32(ctx, 2));
label_305468:
    // 0x305468: 0xc0c15a8  jal         func_3056A0
    ctx->pc = 0x305468u;
    SET_GPR_U32(ctx, 31, 0x305470u);
    ctx->pc = 0x3056A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3056A0u, 0x305468u, 0x305470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305470u;
label_305470:
    // 0x305470: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x305470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x305474: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x305474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x305478: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x305478u;
    {
        const bool branch_taken_0x305478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305478u;
        // 0x30547c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305478) {
            ctx->pc = 0x3054D0u;
            goto label_3054d0;
        }
    }
    ctx->pc = 0x305480u;
    // 0x305480: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x305480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x305484: 0x24421e10  addiu       $v0, $v0, 0x1E10
    ctx->pc = 0x305484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7696));
    // 0x305488: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x305488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30548c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30548cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x305490: 0x800008  jr          $a0
    ctx->pc = 0x305490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x305498u: goto label_305498;
            case 0x3054A4u: goto label_3054a4;
            case 0x3054B0u: goto label_3054b0;
            case 0x3054BCu: goto label_3054bc;
            case 0x3054C8u: goto label_3054c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305490u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x305498u;
label_305498:
    // 0x305498: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x305498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30549c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30549Cu;
    {
        const bool branch_taken_0x30549c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3054A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30549Cu;
        // 0x3054a0: 0xa2e2bb61  sb          $v0, -0x449F($s7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 23), 4294949729), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30549c) {
            ctx->pc = 0x3054D0u;
            goto label_3054d0;
        }
    }
    ctx->pc = 0x3054A4u;
label_3054a4:
    // 0x3054a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3054a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3054a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3054A8u;
    {
        const bool branch_taken_0x3054a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3054ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3054A8u;
        // 0x3054ac: 0xa2c2bb62  sb          $v0, -0x449E($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 4294949730), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3054a8) {
            ctx->pc = 0x3054D0u;
            goto label_3054d0;
        }
    }
    ctx->pc = 0x3054B0u;
label_3054b0:
    // 0x3054b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3054b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3054b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3054B4u;
    {
        const bool branch_taken_0x3054b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3054B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3054B4u;
        // 0x3054b8: 0xa282bb63  sb          $v0, -0x449D($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 4294949731), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3054b4) {
            ctx->pc = 0x3054D0u;
            goto label_3054d0;
        }
    }
    ctx->pc = 0x3054BCu;
label_3054bc:
    // 0x3054bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3054bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3054c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3054C0u;
    {
        const bool branch_taken_0x3054c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3054C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3054C0u;
        // 0x3054c4: 0xa2a2bb5f  sb          $v0, -0x44A1($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 4294949727), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3054c0) {
            ctx->pc = 0x3054D0u;
            goto label_3054d0;
        }
    }
    ctx->pc = 0x3054C8u;
label_3054c8:
    // 0x3054c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3054c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3054cc: 0xa262bb60  sb          $v0, -0x44A0($s3)
    ctx->pc = 0x3054ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4294949728), (uint8_t)GPR_U32(ctx, 2));
label_3054d0:
    // 0x3054d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3054d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3054d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3054d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3054d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3054d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3054dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3054dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3054e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3054e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3054e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3054e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3054e8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3054e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3054ec: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x3054ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3054f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3054f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3054f4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3054f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3054f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3054F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3054FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3054F8u;
        // 0x3054fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3054F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305500u;
}
