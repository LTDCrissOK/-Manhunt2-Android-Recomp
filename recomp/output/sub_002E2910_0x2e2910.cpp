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

// Function: sub_002E2910
// Address: 0x2e2910 - 0x2e2a18
void sub_002E2910_0x2e2910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2910_0x2e2910");
#endif

    switch (ctx->pc) {
        case 0x2e2930u: goto label_2e2930;
        case 0x2e2960u: goto label_2e2960;
        default: break;
    }

    ctx->pc = 0x2e2910u;

    // 0x2e2910: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e2910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2914: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2e2914u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2918: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2e2918u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e291c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e291cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2920: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2e2920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2e2924: 0x25040030  addiu       $a0, $t0, 0x30
    ctx->pc = 0x2e2924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x2e2928: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2e2928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2e292c: 0x24070031  addiu       $a3, $zero, 0x31
    ctx->pc = 0x2e292cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2e2930:
    // 0x2e2930: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2e2930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e2934: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x2e2934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2e2938: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2e2938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2e293c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2e293cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2e2940: 0x4e1fffb  bgez        $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2E2940u;
    {
        const bool branch_taken_0x2e2940 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x2E2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2940u;
        // 0x2e2944: 0x43480b  movn        $t1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2940) {
            ctx->pc = 0x2E2930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2930;
        }
    }
    ctx->pc = 0x2E2948u;
    // 0x2e2948: 0x19200028  blez        $t1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2E2948u;
    {
        const bool branch_taken_0x2e2948 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x2E294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2948u;
        // 0x2e294c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2948) {
            ctx->pc = 0x2E29ECu;
            goto label_2e29ec;
        }
    }
    ctx->pc = 0x2E2950u;
    // 0x2e2950: 0x240a0032  addiu       $t2, $zero, 0x32
    ctx->pc = 0x2e2950u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2e2954: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2e2954u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2958: 0x240c0030  addiu       $t4, $zero, 0x30
    ctx->pc = 0x2e2958u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e295c: 0x0  nop
    ctx->pc = 0x2e295cu;
    // NOP
label_2e2960:
    // 0x2e2960: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x2e2960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2e2964: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2e2964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e2968: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2e2968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e296c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2e296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e2970: 0x28620032  slti        $v0, $v1, 0x32
    ctx->pc = 0x2e2970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x2e2974: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2974u;
    {
        const bool branch_taken_0x2e2974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2974u;
        // 0x2e2978: 0x6c2018  mult        $a0, $v1, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2974) {
            ctx->pc = 0x2E2994u;
            goto label_2e2994;
        }
    }
    ctx->pc = 0x2E297Cu;
    // 0x2e297c: 0x6a001a  div         $zero, $v1, $t2
    ctx->pc = 0x2e297cu;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e2980: 0x514d0001  beql        $t2, $t5, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E2980u;
    {
        const bool branch_taken_0x2e2980 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 13));
        if (branch_taken_0x2e2980) {
            ctx->pc = 0x2E2984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2980u;
            // 0x2e2984: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2988u;
            goto label_2e2988;
        }
    }
    ctx->pc = 0x2E2988u;
label_2e2988:
    // 0x2e2988: 0x1010  mfhi        $v0
    ctx->pc = 0x2e2988u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2e298c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e298cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2990: 0x6c2018  mult        $a0, $v1, $t4
    ctx->pc = 0x2e2990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2e2994:
    // 0x2e2994: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x2e2994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2e2998: 0x90430030  lbu         $v1, 0x30($v0)
    ctx->pc = 0x2e2998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2e299c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E299Cu;
    {
        const bool branch_taken_0x2e299c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E29A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E299Cu;
        // 0x2e29a0: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e299c) {
            ctx->pc = 0x2E29ACu;
            goto label_2e29ac;
        }
    }
    ctx->pc = 0x2E29A4u;
    // 0x2e29a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E29A4u;
    {
        const bool branch_taken_0x2e29a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E29A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E29A4u;
        // 0x2e29a8: 0x1021821  addu        $v1, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e29a4) {
            ctx->pc = 0x2E29B0u;
            goto label_2e29b0;
        }
    }
    ctx->pc = 0x2E29ACu;
label_2e29ac:
    // 0x2e29ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e29acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e29b0:
    // 0x2e29b0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2e29b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e29b4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2e29b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e29b8: 0x0  nop
    ctx->pc = 0x2e29b8u;
    // NOP
    // 0x2e29bc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2E29BCu;
    {
        const bool branch_taken_0x2e29bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E29BCu;
        // 0x2e29c0: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e29bc) {
            ctx->pc = 0x2E29ECu;
            goto label_2e29ec;
        }
    }
    ctx->pc = 0x2E29C4u;
    // 0x2e29c4: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2e29c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e29c8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2e29c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2e29cc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2e29ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e29d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e29d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e29d4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2e29d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2e29d8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2e29d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e29dc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2e29dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e29e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e29e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e29e4: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2E29E4u;
    {
        const bool branch_taken_0x2e29e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E29E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E29E4u;
        // 0x2e29e8: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e29e4) {
            ctx->pc = 0x2E2960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2960;
        }
    }
    ctx->pc = 0x2E29ECu;
label_2e29ec:
    // 0x2e29ec: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x2e29ecu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e29f0: 0x0  nop
    ctx->pc = 0x2e29f0u;
    // NOP
    // 0x2e29f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e29f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e29f8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2e29f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e29fc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2e29fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e2a00: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x2e2a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2e2a04: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2e2a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e2a08: 0x0  nop
    ctx->pc = 0x2e2a08u;
    // NOP
    // 0x2e2a0c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x2e2a0cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2e2a10: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2A10u;
        // 0x2e2a14: 0xe4c20000  swc1        $f2, 0x0($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2A18u;
}
