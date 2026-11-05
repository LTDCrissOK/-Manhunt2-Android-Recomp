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

// Function: sub_00294360
// Address: 0x294360 - 0x2943d0
void sub_00294360_0x294360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294360_0x294360");
#endif

    switch (ctx->pc) {
        case 0x294360u: goto label_294360;
        case 0x294364u: goto label_294364;
        case 0x294368u: goto label_294368;
        case 0x29436cu: goto label_29436c;
        case 0x294370u: goto label_294370;
        case 0x294374u: goto label_294374;
        case 0x294378u: goto label_294378;
        case 0x29437cu: goto label_29437c;
        case 0x294380u: goto label_294380;
        case 0x294384u: goto label_294384;
        case 0x294388u: goto label_294388;
        case 0x29438cu: goto label_29438c;
        case 0x294390u: goto label_294390;
        case 0x294394u: goto label_294394;
        case 0x294398u: goto label_294398;
        case 0x29439cu: goto label_29439c;
        case 0x2943a0u: goto label_2943a0;
        case 0x2943a4u: goto label_2943a4;
        case 0x2943a8u: goto label_2943a8;
        case 0x2943acu: goto label_2943ac;
        case 0x2943b0u: goto label_2943b0;
        case 0x2943b4u: goto label_2943b4;
        case 0x2943b8u: goto label_2943b8;
        case 0x2943bcu: goto label_2943bc;
        case 0x2943c0u: goto label_2943c0;
        case 0x2943c4u: goto label_2943c4;
        case 0x2943c8u: goto label_2943c8;
        case 0x2943ccu: goto label_2943cc;
        default: break;
    }

    ctx->pc = 0x294360u;

label_294360:
    // 0x294360: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x294360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_294364:
    // 0x294364: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_294368:
    // 0x294368: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x294368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950236)));
label_29436c:
    // 0x29436c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29436cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_294370:
    // 0x294370: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x294370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_294374:
    // 0x294374: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_294378:
    if (ctx->pc == 0x294378u) {
        ctx->pc = 0x294378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294374u;
        // 0x294378: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29437Cu;
        goto label_29437c;
    }
    ctx->pc = 0x294374u;
    {
        const bool branch_taken_0x294374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x294378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294374u;
        // 0x294378: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294374) {
            ctx->pc = 0x2943BCu;
            goto label_2943bc;
        }
    }
    ctx->pc = 0x29437Cu;
label_29437c:
    // 0x29437c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294380:
    // 0x294380: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
label_294384:
    if (ctx->pc == 0x294384u) {
        ctx->pc = 0x294384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294380u;
        // 0x294384: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294388u;
        goto label_294388;
    }
    ctx->pc = 0x294380u;
    {
        const bool branch_taken_0x294380 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x294384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294380u;
        // 0x294384: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294380) {
            ctx->pc = 0x2943C0u;
            goto label_2943c0;
        }
    }
    ctx->pc = 0x294388u;
label_294388:
    // 0x294388: 0x90820061  lbu         $v0, 0x61($a0)
    ctx->pc = 0x294388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 97)));
label_29438c:
    // 0x29438c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_294390:
    if (ctx->pc == 0x294390u) {
        ctx->pc = 0x294390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29438Cu;
        // 0x294390: 0x24900030  addiu       $s0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294394u;
        goto label_294394;
    }
    ctx->pc = 0x29438Cu;
    {
        const bool branch_taken_0x29438c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29438Cu;
        // 0x294390: 0x24900030  addiu       $s0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29438c) {
            ctx->pc = 0x2943BCu;
            goto label_2943bc;
        }
    }
    ctx->pc = 0x294394u;
label_294394:
    // 0x294394: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x294394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_294398:
    // 0x294398: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x294398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29439c:
    // 0x29439c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2943a0:
    if (ctx->pc == 0x2943A0u) {
        ctx->pc = 0x2943A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29439Cu;
        // 0x2943a0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2943A4u;
        goto label_2943a4;
    }
    ctx->pc = 0x29439Cu;
    {
        const bool branch_taken_0x29439c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2943A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29439Cu;
        // 0x2943a0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29439c) {
            ctx->pc = 0x2943B4u;
            goto label_2943b4;
        }
    }
    ctx->pc = 0x2943A4u;
label_2943a4:
    // 0x2943a4: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x2943a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_2943a8:
    // 0x2943a8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2943a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2943ac:
    // 0x2943ac: 0x40f809  jalr        $v0
label_2943b0:
    if (ctx->pc == 0x2943B0u) {
        ctx->pc = 0x2943B4u;
        goto label_2943b4;
    }
    ctx->pc = 0x2943ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2943B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2943ACu, 0x2943B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2943B4u;
label_2943b4:
    // 0x2943b4: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
label_2943b8:
    if (ctx->pc == 0x2943B8u) {
        ctx->pc = 0x2943B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943B4u;
        // 0x2943b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2943BCu;
        goto label_2943bc;
    }
    ctx->pc = 0x2943B4u;
    {
        const bool branch_taken_0x2943b4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2943B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943B4u;
        // 0x2943b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2943b4) {
            ctx->pc = 0x294398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294398;
        }
    }
    ctx->pc = 0x2943BCu;
label_2943bc:
    // 0x2943bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2943bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2943c0:
    // 0x2943c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2943c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2943c4:
    // 0x2943c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2943c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2943c8:
    // 0x2943c8: 0x3e00008  jr          $ra
label_2943cc:
    if (ctx->pc == 0x2943CCu) {
        ctx->pc = 0x2943CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943C8u;
        // 0x2943cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2943D0u;
        goto label_fallthrough_0x2943c8;
    }
    ctx->pc = 0x2943C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2943CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943C8u;
        // 0x2943cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2943C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2943c8:
    ctx->pc = 0x2943D0u;
}
