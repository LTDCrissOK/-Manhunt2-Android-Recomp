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

// Function: sub_001230F8
// Address: 0x1230f8 - 0x123178
void sub_001230F8_0x1230f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001230F8_0x1230f8");
#endif

    switch (ctx->pc) {
        case 0x123128u: goto label_123128;
        case 0x123138u: goto label_123138;
        case 0x123150u: goto label_123150;
        default: break;
    }

    ctx->pc = 0x1230f8u;

    // 0x1230f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1230f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1230fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1230fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123100: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123104: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123108: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12310c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12310cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123110: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x123110u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x123114: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x123114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123118: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x123118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12311c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x12311cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x123120: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123120u;
    SET_GPR_U32(ctx, 31, 0x123128u);
    ctx->pc = 0x123124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123120u;
    // 0x123124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123120u, 0x123128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123128u;
label_123128:
    // 0x123128: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x123128u;
    {
        const bool branch_taken_0x123128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12312Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123128u;
        // 0x12312c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123128) {
            ctx->pc = 0x12315Cu;
            goto label_12315c;
        }
    }
    ctx->pc = 0x123130u;
    // 0x123130: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123130u;
    SET_GPR_U32(ctx, 31, 0x123138u);
    ctx->pc = 0x123134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123130u;
    // 0x123134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123130u, 0x123138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123138u;
label_123138:
    // 0x123138: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x123138u;
    {
        const bool branch_taken_0x123138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123138u;
        // 0x12313c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123138) {
            ctx->pc = 0x123158u;
            goto label_123158;
        }
    }
    ctx->pc = 0x123140u;
    // 0x123140: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x123140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x123144: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x123144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123148: 0xc04287a  jal         func_10A1E8
    ctx->pc = 0x123148u;
    SET_GPR_U32(ctx, 31, 0x123150u);
    ctx->pc = 0x12314Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123148u;
    // 0x12314c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A1E8u, 0x123148u, 0x123150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123150u;
label_123150:
    // 0x123150: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x123150u;
    {
        const bool branch_taken_0x123150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123150u;
        // 0x123154: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123150) {
            ctx->pc = 0x123160u;
            goto label_123160;
        }
    }
    ctx->pc = 0x123158u;
label_123158:
    // 0x123158: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12315c:
    // 0x12315c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12315cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123160:
    // 0x123160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123164: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123168: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x123168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12316c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x12316cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x123170: 0x3e00008  jr          $ra
    ctx->pc = 0x123170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123170u;
        // 0x123174: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123178u;
}
