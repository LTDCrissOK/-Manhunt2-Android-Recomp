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

// Function: sub_00209878
// Address: 0x209878 - 0x209918
void sub_00209878_0x209878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209878_0x209878");
#endif

    switch (ctx->pc) {
        case 0x2098b0u: goto label_2098b0;
        case 0x2098b8u: goto label_2098b8;
        case 0x2098c0u: goto label_2098c0;
        case 0x2098d0u: goto label_2098d0;
        case 0x2098e4u: goto label_2098e4;
        case 0x2098f8u: goto label_2098f8;
        case 0x209900u: goto label_209900;
        default: break;
    }

    ctx->pc = 0x209878u;

    // 0x209878: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x209878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x20987c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20987cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209880: 0x904393d8  lbu         $v1, -0x6C28($v0)
    ctx->pc = 0x209880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F93D8u));
    // 0x209884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209888: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x209888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20988c: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x20988cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x209890: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x209890u;
    {
        const bool branch_taken_0x209890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209890u;
        // 0x209894: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209890) {
            ctx->pc = 0x209900u;
            goto label_209900;
        }
    }
    ctx->pc = 0x209898u;
    // 0x209898: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20989c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20989cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2098a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2098a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098a4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2098a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2098a8: 0xc082740  jal         func_209D00
    ctx->pc = 0x2098A8u;
    SET_GPR_U32(ctx, 31, 0x2098B0u);
    ctx->pc = 0x2098ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2098A8u;
    // 0x2098ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x209D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209D00u, 0x2098A8u, 0x2098B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2098B0u;
label_2098b0:
    // 0x2098b0: 0xc0827c8  jal         func_209F20
    ctx->pc = 0x2098B0u;
    SET_GPR_U32(ctx, 31, 0x2098B8u);
    ctx->pc = 0x2098B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2098B0u;
    // 0x2098b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x209F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209F20u, 0x2098B0u, 0x2098B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2098B8u;
label_2098b8:
    // 0x2098b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2098b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098bc: 0x0  nop
    ctx->pc = 0x2098bcu;
    // NOP
label_2098c0:
    // 0x2098c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2098c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2098c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098c8: 0xc082786  jal         func_209E18
    ctx->pc = 0x2098C8u;
    SET_GPR_U32(ctx, 31, 0x2098D0u);
    ctx->pc = 0x2098CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2098C8u;
    // 0x2098cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209E18u, 0x2098C8u, 0x2098D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2098D0u;
label_2098d0:
    // 0x2098d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2098d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098d4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2098d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2098d8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2098d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2098dc: 0xc08276c  jal         func_209DB0
    ctx->pc = 0x2098DCu;
    SET_GPR_U32(ctx, 31, 0x2098E4u);
    ctx->pc = 0x2098E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2098DCu;
    // 0x2098e0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209DB0u, 0x2098DCu, 0x2098E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2098E4u;
label_2098e4:
    // 0x2098e4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2098e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2098e8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2098E8u;
    {
        const bool branch_taken_0x2098e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2098ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098E8u;
        // 0x2098ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2098e8) {
            ctx->pc = 0x2098C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2098c0;
        }
    }
    ctx->pc = 0x2098F0u;
    // 0x2098f0: 0xc082662  jal         func_209988
    ctx->pc = 0x2098F0u;
    SET_GPR_U32(ctx, 31, 0x2098F8u);
    ctx->pc = 0x209988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209988u, 0x2098F0u, 0x2098F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2098F8u;
label_2098f8:
    // 0x2098f8: 0xc08280e  jal         func_20A038
    ctx->pc = 0x2098F8u;
    SET_GPR_U32(ctx, 31, 0x209900u);
    ctx->pc = 0x20A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A038u, 0x2098F8u, 0x209900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209900u;
label_209900:
    // 0x209900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209904: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209908: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x209908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20990c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x20990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x209910: 0x3e00008  jr          $ra
    ctx->pc = 0x209910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209910u;
        // 0x209914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209918u;
}
