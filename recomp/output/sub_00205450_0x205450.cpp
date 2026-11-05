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

// Function: sub_00205450
// Address: 0x205450 - 0x2054c0
void sub_00205450_0x205450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205450_0x205450");
#endif

    switch (ctx->pc) {
        case 0x205450u: goto label_205450;
        case 0x205454u: goto label_205454;
        case 0x205458u: goto label_205458;
        case 0x20545cu: goto label_20545c;
        case 0x205460u: goto label_205460;
        case 0x205464u: goto label_205464;
        case 0x205468u: goto label_205468;
        case 0x20546cu: goto label_20546c;
        case 0x205470u: goto label_205470;
        case 0x205474u: goto label_205474;
        case 0x205478u: goto label_205478;
        case 0x20547cu: goto label_20547c;
        case 0x205480u: goto label_205480;
        case 0x205484u: goto label_205484;
        case 0x205488u: goto label_205488;
        case 0x20548cu: goto label_20548c;
        case 0x205490u: goto label_205490;
        case 0x205494u: goto label_205494;
        case 0x205498u: goto label_205498;
        case 0x20549cu: goto label_20549c;
        case 0x2054a0u: goto label_2054a0;
        case 0x2054a4u: goto label_2054a4;
        case 0x2054a8u: goto label_2054a8;
        case 0x2054acu: goto label_2054ac;
        case 0x2054b0u: goto label_2054b0;
        case 0x2054b4u: goto label_2054b4;
        case 0x2054b8u: goto label_2054b8;
        case 0x2054bcu: goto label_2054bc;
        default: break;
    }

    ctx->pc = 0x205450u;

label_205450:
    // 0x205450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_205454:
    // 0x205454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_205458:
    // 0x205458: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x205458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_20545c:
    // 0x20545c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20545cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_205460:
    // 0x205460: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x205460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_205464:
    // 0x205464: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_205468:
    if (ctx->pc == 0x205468u) {
        ctx->pc = 0x205468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205464u;
        // 0x205468: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20546Cu;
        goto label_20546c;
    }
    ctx->pc = 0x205464u;
    {
        const bool branch_taken_0x205464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205464) {
            ctx->pc = 0x205468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205464u;
            // 0x205468: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2054B0u;
            goto label_2054b0;
        }
    }
    ctx->pc = 0x20546Cu;
label_20546c:
    // 0x20546c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x20546cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_205470:
    // 0x205470: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x205470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_205474:
    // 0x205474: 0x40f809  jalr        $v0
label_205478:
    if (ctx->pc == 0x205478u) {
        ctx->pc = 0x20547Cu;
        goto label_20547c;
    }
    ctx->pc = 0x205474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20547Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205474u, 0x20547Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20547Cu;
label_20547c:
    // 0x20547c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_205480:
    if (ctx->pc == 0x205480u) {
        ctx->pc = 0x205480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20547Cu;
        // 0x205480: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205484u;
        goto label_205484;
    }
    ctx->pc = 0x20547Cu;
    {
        const bool branch_taken_0x20547c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20547c) {
            ctx->pc = 0x205480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20547Cu;
            // 0x205480: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2054B0u;
            goto label_2054b0;
        }
    }
    ctx->pc = 0x205484u;
label_205484:
    // 0x205484: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x205484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_205488:
    // 0x205488: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x205488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_20548c:
    // 0x20548c: 0x40f809  jalr        $v0
label_205490:
    if (ctx->pc == 0x205490u) {
        ctx->pc = 0x205490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20548Cu;
        // 0x205490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205494u;
        goto label_205494;
    }
    ctx->pc = 0x20548Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x205494u);
        ctx->pc = 0x205490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20548Cu;
        // 0x205490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20548Cu, 0x205494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205494u;
label_205494:
    // 0x205494: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_205498:
    if (ctx->pc == 0x205498u) {
        ctx->pc = 0x205498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205494u;
        // 0x205498: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20549Cu;
        goto label_20549c;
    }
    ctx->pc = 0x205494u;
    {
        const bool branch_taken_0x205494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205494) {
            ctx->pc = 0x205498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205494u;
            // 0x205498: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2054B0u;
            goto label_2054b0;
        }
    }
    ctx->pc = 0x20549Cu;
label_20549c:
    // 0x20549c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x20549cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2054a0:
    // 0x2054a0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2054a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2054a4:
    // 0x2054a4: 0x40f809  jalr        $v0
label_2054a8:
    if (ctx->pc == 0x2054A8u) {
        ctx->pc = 0x2054A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054A4u;
        // 0x2054a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2054ACu;
        goto label_2054ac;
    }
    ctx->pc = 0x2054A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2054ACu);
        ctx->pc = 0x2054A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054A4u;
        // 0x2054a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2054A4u, 0x2054ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2054ACu;
label_2054ac:
    // 0x2054ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2054acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2054b0:
    // 0x2054b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2054b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2054b4:
    // 0x2054b4: 0x3e00008  jr          $ra
label_2054b8:
    if (ctx->pc == 0x2054B8u) {
        ctx->pc = 0x2054B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054B4u;
        // 0x2054b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2054BCu;
        goto label_2054bc;
    }
    ctx->pc = 0x2054B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2054B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2054B4u;
        // 0x2054b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2054B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2054BCu;
label_2054bc:
    // 0x2054bc: 0x0  nop
    ctx->pc = 0x2054bcu;
    // NOP
    ctx->pc = 0x2054c0u;
}
