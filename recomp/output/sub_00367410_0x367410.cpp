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

// Function: sub_00367410
// Address: 0x367410 - 0x367490
void sub_00367410_0x367410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367410_0x367410");
#endif

    switch (ctx->pc) {
        case 0x367448u: goto label_367448;
        case 0x367460u: goto label_367460;
        default: break;
    }

    ctx->pc = 0x367410u;

    // 0x367410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x367410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x367414: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x367414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x367418: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x367418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36741c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x36741cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x367420: 0x8c51cb70  lw          $s1, -0x3490($v0)
    ctx->pc = 0x367420u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3FCB70u));
    // 0x367424: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x367424u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x367428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x367428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36742c: 0x6200011  bltz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x36742Cu;
    {
        const bool branch_taken_0x36742c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x367430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36742Cu;
        // 0x367430: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36742c) {
            ctx->pc = 0x367474u;
            goto label_367474;
        }
    }
    ctx->pc = 0x367434u;
    // 0x367434: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x367434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x367438: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x367438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x36743c: 0x24421ed8  addiu       $v0, $v0, 0x1ED8
    ctx->pc = 0x36743cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7896));
    // 0x367440: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x367440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x367444: 0x0  nop
    ctx->pc = 0x367444u;
    // NOP
label_367448:
    // 0x367448: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x367448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36744c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36744Cu;
    {
        const bool branch_taken_0x36744c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x367450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36744Cu;
        // 0x367450: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36744c) {
            ctx->pc = 0x367468u;
            goto label_367468;
        }
    }
    ctx->pc = 0x367454u;
    // 0x367454: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x367454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x367458: 0xc0d9c16  jal         func_367058
    ctx->pc = 0x367458u;
    SET_GPR_U32(ctx, 31, 0x367460u);
    ctx->pc = 0x36745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367458u;
    // 0x36745c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x367058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367058u, 0x367458u, 0x367460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367460u;
label_367460:
    // 0x367460: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x367460u;
    {
        const bool branch_taken_0x367460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367460) {
            ctx->pc = 0x367464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367460u;
            // 0x367464: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x367478u;
            goto label_367478;
        }
    }
    ctx->pc = 0x367468u;
label_367468:
    // 0x367468: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x367468u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x36746c: 0x621fff6  bgez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x36746Cu;
    {
        const bool branch_taken_0x36746c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x367470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36746Cu;
        // 0x367470: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36746c) {
            ctx->pc = 0x367448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367448;
        }
    }
    ctx->pc = 0x367474u;
label_367474:
    // 0x367474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x367474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_367478:
    // 0x367478: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x367478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36747c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36747cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367480: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x367480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x367484: 0x3e00008  jr          $ra
    ctx->pc = 0x367484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367484u;
        // 0x367488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36748Cu;
    // 0x36748c: 0x0  nop
    ctx->pc = 0x36748cu;
    // NOP
    ctx->pc = 0x367490u;
}
