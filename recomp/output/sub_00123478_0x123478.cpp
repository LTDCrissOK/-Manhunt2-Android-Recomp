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

// Function: sub_00123478
// Address: 0x123478 - 0x1234e8
void sub_00123478_0x123478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123478_0x123478");
#endif

    switch (ctx->pc) {
        case 0x1234a8u: goto label_1234a8;
        case 0x1234c0u: goto label_1234c0;
        default: break;
    }

    ctx->pc = 0x123478u;

    // 0x123478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x123478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12347c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12347cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123480: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123484: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123488: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12348c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12348cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123490: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x123490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x123494: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x123494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123498: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x123498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12349c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x12349cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1234a0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1234A0u;
    SET_GPR_U32(ctx, 31, 0x1234A8u);
    ctx->pc = 0x1234A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1234A0u;
    // 0x1234a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1234A0u, 0x1234A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1234A8u;
label_1234a8:
    // 0x1234a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1234A8u;
    {
        const bool branch_taken_0x1234a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1234ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234A8u;
        // 0x1234ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234a8) {
            ctx->pc = 0x1234C8u;
            goto label_1234c8;
        }
    }
    ctx->pc = 0x1234B0u;
    // 0x1234b0: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x1234b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1234b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1234b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1234b8: 0xc042a0e  jal         func_10A838
    ctx->pc = 0x1234B8u;
    SET_GPR_U32(ctx, 31, 0x1234C0u);
    ctx->pc = 0x1234BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1234B8u;
    // 0x1234bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A838u, 0x1234B8u, 0x1234C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1234C0u;
label_1234c0:
    // 0x1234c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1234C0u;
    {
        const bool branch_taken_0x1234c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1234C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234C0u;
        // 0x1234c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1234c0) {
            ctx->pc = 0x1234D0u;
            goto label_1234d0;
        }
    }
    ctx->pc = 0x1234C8u;
label_1234c8:
    // 0x1234c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1234c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1234cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1234ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1234d0:
    // 0x1234d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1234d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1234d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1234d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1234d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1234d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1234dc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1234dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1234e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1234E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1234E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234E0u;
        // 0x1234e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1234E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1234E8u;
}
