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

// Function: sub_002C3888
// Address: 0x2c3888 - 0x2c3908
void sub_002C3888_0x2c3888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3888_0x2c3888");
#endif

    switch (ctx->pc) {
        case 0x2c3888u: goto label_2c3888;
        case 0x2c388cu: goto label_2c388c;
        case 0x2c3890u: goto label_2c3890;
        case 0x2c3894u: goto label_2c3894;
        case 0x2c3898u: goto label_2c3898;
        case 0x2c389cu: goto label_2c389c;
        case 0x2c38a0u: goto label_2c38a0;
        case 0x2c38a4u: goto label_2c38a4;
        case 0x2c38a8u: goto label_2c38a8;
        case 0x2c38acu: goto label_2c38ac;
        case 0x2c38b0u: goto label_2c38b0;
        case 0x2c38b4u: goto label_2c38b4;
        case 0x2c38b8u: goto label_2c38b8;
        case 0x2c38bcu: goto label_2c38bc;
        case 0x2c38c0u: goto label_2c38c0;
        case 0x2c38c4u: goto label_2c38c4;
        case 0x2c38c8u: goto label_2c38c8;
        case 0x2c38ccu: goto label_2c38cc;
        case 0x2c38d0u: goto label_2c38d0;
        case 0x2c38d4u: goto label_2c38d4;
        case 0x2c38d8u: goto label_2c38d8;
        case 0x2c38dcu: goto label_2c38dc;
        case 0x2c38e0u: goto label_2c38e0;
        case 0x2c38e4u: goto label_2c38e4;
        case 0x2c38e8u: goto label_2c38e8;
        case 0x2c38ecu: goto label_2c38ec;
        case 0x2c38f0u: goto label_2c38f0;
        case 0x2c38f4u: goto label_2c38f4;
        case 0x2c38f8u: goto label_2c38f8;
        case 0x2c38fcu: goto label_2c38fc;
        case 0x2c3900u: goto label_2c3900;
        case 0x2c3904u: goto label_2c3904;
        default: break;
    }

    ctx->pc = 0x2c3888u;

label_2c3888:
    // 0x2c3888: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c3888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c388c:
    // 0x2c388c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c388cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c3890:
    // 0x2c3890: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c3890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c3894:
    // 0x2c3894: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c3894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3898:
    // 0x2c3898: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2c3898u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2c389c:
    // 0x2c389c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c389cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c38a0:
    // 0x2c38a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c38a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c38a4:
    // 0x2c38a4: 0x82220018  lb          $v0, 0x18($s1)
    ctx->pc = 0x2c38a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_2c38a8:
    // 0x2c38a8: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_2c38ac:
    if (ctx->pc == 0x2C38ACu) {
        ctx->pc = 0x2C38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38A8u;
        // 0x2c38ac: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C38B0u;
        goto label_2c38b0;
    }
    ctx->pc = 0x2C38A8u;
    {
        const bool branch_taken_0x2c38a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38A8u;
        // 0x2c38ac: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c38a8) {
            ctx->pc = 0x2C38E8u;
            goto label_2c38e8;
        }
    }
    ctx->pc = 0x2C38B0u;
label_2c38b0:
    // 0x2c38b0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2c38b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2c38b4:
    // 0x2c38b4: 0x0  nop
    ctx->pc = 0x2c38b4u;
    // NOP
label_2c38b8:
    // 0x2c38b8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2c38bc:
    // 0x2c38bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c38bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2c38c0:
    // 0x2c38c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c38c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c38c4:
    // 0x2c38c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c38c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c38c8:
    // 0x2c38c8: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x2c38c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_2c38cc:
    // 0x2c38cc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2c38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2c38d0:
    // 0x2c38d0: 0x40f809  jalr        $v0
label_2c38d4:
    if (ctx->pc == 0x2C38D4u) {
        ctx->pc = 0x2C38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38D0u;
        // 0x2c38d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C38D8u;
        goto label_2c38d8;
    }
    ctx->pc = 0x2C38D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C38D8u);
        ctx->pc = 0x2C38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38D0u;
        // 0x2c38d4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C38D0u, 0x2C38D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C38D8u;
label_2c38d8:
    // 0x2c38d8: 0x82230018  lb          $v1, 0x18($s1)
    ctx->pc = 0x2c38d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_2c38dc:
    // 0x2c38dc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2c38dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2c38e0:
    // 0x2c38e0: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
label_2c38e4:
    if (ctx->pc == 0x2C38E4u) {
        ctx->pc = 0x2C38E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38E0u;
        // 0x2c38e4: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C38E8u;
        goto label_2c38e8;
    }
    ctx->pc = 0x2C38E0u;
    {
        const bool branch_taken_0x2c38e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c38e0) {
            ctx->pc = 0x2C38E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C38E0u;
            // 0x2c38e4: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C38B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c38b8;
        }
    }
    ctx->pc = 0x2C38E8u;
label_2c38e8:
    // 0x2c38e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c38e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c38ec:
    // 0x2c38ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c38ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c38f0:
    // 0x2c38f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c38f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c38f4:
    // 0x2c38f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c38f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c38f8:
    // 0x2c38f8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2c38f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c38fc:
    // 0x2c38fc: 0x3e00008  jr          $ra
label_2c3900:
    if (ctx->pc == 0x2C3900u) {
        ctx->pc = 0x2C3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38FCu;
        // 0x2c3900: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3904u;
        goto label_2c3904;
    }
    ctx->pc = 0x2C38FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38FCu;
        // 0x2c3900: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C38FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3904u;
label_2c3904:
    // 0x2c3904: 0x0  nop
    ctx->pc = 0x2c3904u;
    // NOP
    ctx->pc = 0x2c3908u;
}
