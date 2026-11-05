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

// Function: sub_001B9898
// Address: 0x1b9898 - 0x1b99a0
void sub_001B9898_0x1b9898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9898_0x1b9898");
#endif

    switch (ctx->pc) {
        case 0x1b9900u: goto label_1b9900;
        case 0x1b9950u: goto label_1b9950;
        default: break;
    }

    ctx->pc = 0x1b9898u;

    // 0x1b9898: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b9898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b989c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b989cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b98a0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1b98a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1b98a4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b98a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b98a8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b98a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b98ac: 0x2673821  addu        $a3, $s3, $a3
    ctx->pc = 0x1b98acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1b98b0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1b98b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1b98b4: 0x24f20001  addiu       $s2, $a3, 0x1
    ctx->pc = 0x1b98b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1b98b8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1b98b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1b98bc: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1b98bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1b98c0: 0x2e430009  sltiu       $v1, $s2, 0x9
    ctx->pc = 0x1b98c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1b98c4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b98c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1b98c8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b98c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b98cc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1b98ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1b98d0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1b98d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1b98d4: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1b98d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1b98d8: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x1b98d8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x1b98dc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1b98dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1b98e0: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B98E0u;
    {
        const bool branch_taken_0x1b98e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B98E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98E0u;
        // 0x1b98e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98e0) {
            ctx->pc = 0x1B9970u;
            goto label_1b9970;
        }
    }
    ctx->pc = 0x1B98E8u;
    // 0x1b98e8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1b98e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1b98ec: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b98ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b98f0: 0x24560f90  addiu       $s6, $v0, 0xF90
    ctx->pc = 0x1b98f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1b98f4: 0x2474f120  addiu       $s4, $v1, -0xEE0
    ctx->pc = 0x1b98f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963488));
    // 0x1b98f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b98f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b98fc: 0x0  nop
    ctx->pc = 0x1b98fcu;
    // NOP
label_1b9900:
    // 0x1b9900: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x1b9900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
    // 0x1b9904: 0x233182b  sltu        $v1, $s1, $s3
    ctx->pc = 0x1b9904u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1b9908: 0xae110184  sw          $s1, 0x184($s0)
    ctx->pc = 0x1b9908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 17));
    // 0x1b990c: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x1b990cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x1b9910: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1b9910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b9914: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x1b9914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x1b9918: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x1b9918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x1b991c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B991Cu;
    {
        const bool branch_taken_0x1b991c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B991Cu;
        // 0x1b9920: 0xae00019c  sw          $zero, 0x19C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b991c) {
            ctx->pc = 0x1B992Cu;
            goto label_1b992c;
        }
    }
    ctx->pc = 0x1B9924u;
    // 0x1b9924: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B9924u;
    {
        const bool branch_taken_0x1b9924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9924u;
        // 0x1b9928: 0xe614018c  swc1        $f20, 0x18C($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 396), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9924) {
            ctx->pc = 0x1B995Cu;
            goto label_1b995c;
        }
    }
    ctx->pc = 0x1B992Cu;
label_1b992c:
    // 0x1b992c: 0x271102b  sltu        $v0, $s3, $s1
    ctx->pc = 0x1b992cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1b9930: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9930u;
    {
        const bool branch_taken_0x1b9930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9930) {
            ctx->pc = 0x1B9934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9930u;
            // 0x1b9934: 0xae00018c  sw          $zero, 0x18C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9944u;
            goto label_1b9944;
        }
    }
    ctx->pc = 0x1B9938u;
    // 0x1b9938: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x1b9938u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x1b993c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B993Cu;
    {
        const bool branch_taken_0x1b993c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B993Cu;
        // 0x1b9940: 0xe600018c  swc1        $f0, 0x18C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 396), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b993c) {
            ctx->pc = 0x1B995Cu;
            goto label_1b995c;
        }
    }
    ctx->pc = 0x1B9944u;
label_1b9944:
    // 0x1b9944: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b9944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9948: 0xc06faee  jal         func_1BEBB8
    ctx->pc = 0x1B9948u;
    SET_GPR_U32(ctx, 31, 0x1B9950u);
    ctx->pc = 0x1B994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9948u;
    // 0x1b994c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x1B9948u, 0x1B9950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9950u;
label_1b9950:
    // 0x1b9950: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b9950u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9954: 0xfa010160  sqc2        $vf1, 0x160($s0)
    ctx->pc = 0x1b9954u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b9958: 0xafb60018  sw          $s6, 0x18($sp)
    ctx->pc = 0x1b9958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 22));
label_1b995c:
    // 0x1b995c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b995cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b9960: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1b9960u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1b9964: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x1b9964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1b9968: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1B9968u;
    {
        const bool branch_taken_0x1b9968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9968u;
        // 0x1b996c: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9968) {
            ctx->pc = 0x1B9900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9900;
        }
    }
    ctx->pc = 0x1B9970u;
label_1b9970:
    // 0x1b9970: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b9970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9974: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b9974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9978: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b9978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b997c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1b997cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b9980: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b9980u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b9984: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1b9984u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1b9988: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1b9988u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b998c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1b998cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1b9990: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1b9990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b9994: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9994u;
        // 0x1b9998: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B999Cu;
    // 0x1b999c: 0x0  nop
    ctx->pc = 0x1b999cu;
    // NOP
    ctx->pc = 0x1b99a0u;
}
