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

// Function: sub_001E7FB0
// Address: 0x1e7fb0 - 0x1e8088
void sub_001E7FB0_0x1e7fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7FB0_0x1e7fb0");
#endif

    switch (ctx->pc) {
        case 0x1e8000u: goto label_1e8000;
        case 0x1e8018u: goto label_1e8018;
        default: break;
    }

    ctx->pc = 0x1e7fb0u;

    // 0x1e7fb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e7fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e7fb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7fb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e7fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e7fbc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e7fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7fc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e7fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e7fc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7fc8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e7fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e7fcc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e7fccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7fd0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1e7fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1e7fd4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1e7fd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7fd8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e7fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e7fdc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1e7fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1e7fe0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1e7fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1e7fe4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e7fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e7fe8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e7fec: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E7FECu;
    {
        const bool branch_taken_0x1e7fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7FECu;
        // 0x1e7ff0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7fec) {
            ctx->pc = 0x1E8054u;
            goto label_1e8054;
        }
    }
    ctx->pc = 0x1E7FF4u;
    // 0x1e7ff4: 0x24170006  addiu       $s7, $zero, 0x6
    ctx->pc = 0x1e7ff4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e7ff8: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x1e7ff8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e7ffc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e7ffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e8000:
    // 0x1e8000: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1e8000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e8004: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1e8004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8008: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e8008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e800c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1e800cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8010: 0xc078ad2  jal         func_1E2B48
    ctx->pc = 0x1E8010u;
    SET_GPR_U32(ctx, 31, 0x1E8018u);
    ctx->pc = 0x1E8014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8010u;
    // 0x1e8014: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2B48u, 0x1E8010u, 0x1E8018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8018u;
label_1e8018:
    // 0x1e8018: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E8018u;
    {
        const bool branch_taken_0x1e8018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8018) {
            ctx->pc = 0x1E801Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8018u;
            // 0x1e801c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8044u;
            goto label_1e8044;
        }
    }
    ctx->pc = 0x1E8020u;
    // 0x1e8020: 0xae170028  sw          $s7, 0x28($s0)
    ctx->pc = 0x1e8020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 23));
    // 0x1e8024: 0xae160030  sw          $s6, 0x30($s0)
    ctx->pc = 0x1e8024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 22));
    // 0x1e8028: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1e8028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e802c: 0xae150024  sw          $s5, 0x24($s0)
    ctx->pc = 0x1e802cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 21));
    // 0x1e8030: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1e8030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1e8034: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e8034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e8038: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e8038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e803c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1e803cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1e8040: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e8040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e8044:
    // 0x1e8044: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e8044u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e8048: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1e8048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e804c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1E804Cu;
    {
        const bool branch_taken_0x1e804c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E804Cu;
        // 0x1e8050: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e804c) {
            ctx->pc = 0x1E8000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8000;
        }
    }
    ctx->pc = 0x1E8054u;
label_1e8054:
    // 0x1e8054: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1e8054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e8058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e8058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e805c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e805cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e8060: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e8060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e8064: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e8064u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8068: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e8068u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e806c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e806cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8070: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1e8070u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e8074: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1e8074u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8078: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1e8078u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e807c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e807cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8080: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8080u;
        // 0x1e8084: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8088u;
}
