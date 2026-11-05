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

// Function: sub_002053B8
// Address: 0x2053b8 - 0x205420
void sub_002053B8_0x2053b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002053B8_0x2053b8");
#endif

    switch (ctx->pc) {
        case 0x2053b8u: goto label_2053b8;
        case 0x2053bcu: goto label_2053bc;
        case 0x2053c0u: goto label_2053c0;
        case 0x2053c4u: goto label_2053c4;
        case 0x2053c8u: goto label_2053c8;
        case 0x2053ccu: goto label_2053cc;
        case 0x2053d0u: goto label_2053d0;
        case 0x2053d4u: goto label_2053d4;
        case 0x2053d8u: goto label_2053d8;
        case 0x2053dcu: goto label_2053dc;
        case 0x2053e0u: goto label_2053e0;
        case 0x2053e4u: goto label_2053e4;
        case 0x2053e8u: goto label_2053e8;
        case 0x2053ecu: goto label_2053ec;
        case 0x2053f0u: goto label_2053f0;
        case 0x2053f4u: goto label_2053f4;
        case 0x2053f8u: goto label_2053f8;
        case 0x2053fcu: goto label_2053fc;
        case 0x205400u: goto label_205400;
        case 0x205404u: goto label_205404;
        case 0x205408u: goto label_205408;
        case 0x20540cu: goto label_20540c;
        case 0x205410u: goto label_205410;
        case 0x205414u: goto label_205414;
        case 0x205418u: goto label_205418;
        case 0x20541cu: goto label_20541c;
        default: break;
    }

    ctx->pc = 0x2053b8u;

label_2053b8:
    // 0x2053b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2053b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2053bc:
    // 0x2053bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2053bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2053c0:
    // 0x2053c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2053c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2053c4:
    // 0x2053c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2053c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2053c8:
    // 0x2053c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2053c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2053cc:
    // 0x2053cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2053ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2053d0:
    // 0x2053d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2053d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2053d4:
    // 0x2053d4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2053d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2053d8:
    // 0x2053d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2053d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2053dc:
    // 0x2053dc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2053dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2053e0:
    // 0x2053e0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2053e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2053e4:
    // 0x2053e4: 0x40f809  jalr        $v0
label_2053e8:
    if (ctx->pc == 0x2053E8u) {
        ctx->pc = 0x2053E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053E4u;
        // 0x2053e8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2053ECu;
        goto label_2053ec;
    }
    ctx->pc = 0x2053E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2053ECu);
        ctx->pc = 0x2053E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053E4u;
        // 0x2053e8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2053E4u, 0x2053ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2053ECu;
label_2053ec:
    // 0x2053ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2053ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2053f0:
    // 0x2053f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2053f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2053f4:
    // 0x2053f4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2053f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2053f8:
    // 0x2053f8: 0xc081436  jal         func_2050D8
label_2053fc:
    if (ctx->pc == 0x2053FCu) {
        ctx->pc = 0x2053FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2053F8u;
        // 0x2053fc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205400u;
        goto label_205400;
    }
    ctx->pc = 0x2053F8u;
    SET_GPR_U32(ctx, 31, 0x205400u);
    ctx->pc = 0x2053FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2053F8u;
    // 0x2053fc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2050D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2050D8u, 0x2053F8u, 0x205400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205400u;
label_205400:
    // 0x205400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_205404:
    // 0x205404: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x205404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_205408:
    // 0x205408: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x205408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20540c:
    // 0x20540c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20540cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_205410:
    // 0x205410: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x205410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_205414:
    // 0x205414: 0x3e00008  jr          $ra
label_205418:
    if (ctx->pc == 0x205418u) {
        ctx->pc = 0x205418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205414u;
        // 0x205418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20541Cu;
        goto label_20541c;
    }
    ctx->pc = 0x205414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205414u;
        // 0x205418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20541Cu;
label_20541c:
    // 0x20541c: 0x0  nop
    ctx->pc = 0x20541cu;
    // NOP
    ctx->pc = 0x205420u;
}
