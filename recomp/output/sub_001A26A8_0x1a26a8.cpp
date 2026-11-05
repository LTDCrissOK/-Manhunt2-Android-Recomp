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

// Function: sub_001A26A8
// Address: 0x1a26a8 - 0x1a2718
void sub_001A26A8_0x1a26a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A26A8_0x1a26a8");
#endif

    switch (ctx->pc) {
        case 0x1a26bcu: goto label_1a26bc;
        case 0x1a2700u: goto label_1a2700;
        default: break;
    }

    ctx->pc = 0x1a26a8u;

    // 0x1a26a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a26a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a26ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a26acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a26b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a26b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a26b4: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A26B4u;
    SET_GPR_U32(ctx, 31, 0x1A26BCu);
    ctx->pc = 0x1A26B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A26B4u;
    // 0x1a26b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A26B4u, 0x1A26BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A26BCu;
label_1a26bc:
    // 0x1a26bc: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x1a26bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a26c0: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x1a26c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x1a26c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a26c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a26c8: 0x0  nop
    ctx->pc = 0x1a26c8u;
    // NOP
    // 0x1a26cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a26ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a26d0: 0x0  nop
    ctx->pc = 0x1a26d0u;
    // NOP
    // 0x1a26d4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1A26D4u;
    {
        const bool branch_taken_0x1a26d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a26d4) {
            ctx->pc = 0x1A26F8u;
            goto label_1a26f8;
        }
    }
    ctx->pc = 0x1A26DCu;
    // 0x1a26dc: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x1a26dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x1a26e0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1a26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a26e4: 0x38430003  xori        $v1, $v0, 0x3
    ctx->pc = 0x1a26e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1a26e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A26E8u;
    {
        const bool branch_taken_0x1a26e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26E8u;
        // 0x1a26ec: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a26e8) {
            ctx->pc = 0x1A26F8u;
            goto label_1a26f8;
        }
    }
    ctx->pc = 0x1A26F0u;
    // 0x1a26f0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A26F0u;
    {
        const bool branch_taken_0x1a26f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a26f0) {
            ctx->pc = 0x1A26F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A26F0u;
            // 0x1a26f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2704u;
            goto label_1a2704;
        }
    }
    ctx->pc = 0x1A26F8u;
label_1a26f8:
    // 0x1a26f8: 0xc068f12  jal         func_1A3C48
    ctx->pc = 0x1A26F8u;
    SET_GPR_U32(ctx, 31, 0x1A2700u);
    ctx->pc = 0x1A26FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A26F8u;
    // 0x1a26fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3C48u, 0x1A26F8u, 0x1A2700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2700u;
label_1a2700:
    // 0x1a2700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2704:
    // 0x1a2704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2708: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a2708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a270c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A270Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A270Cu;
        // 0x1a2710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A270Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2714u;
    // 0x1a2714: 0x0  nop
    ctx->pc = 0x1a2714u;
    // NOP
    ctx->pc = 0x1a2718u;
}
