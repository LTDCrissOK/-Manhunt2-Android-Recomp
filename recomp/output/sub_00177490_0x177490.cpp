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

// Function: sub_00177490
// Address: 0x177490 - 0x177528
void sub_00177490_0x177490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177490_0x177490");
#endif

    switch (ctx->pc) {
        case 0x1774b8u: goto label_1774b8;
        case 0x1774c8u: goto label_1774c8;
        case 0x1774d4u: goto label_1774d4;
        case 0x1774e4u: goto label_1774e4;
        case 0x1774f4u: goto label_1774f4;
        case 0x177500u: goto label_177500;
        default: break;
    }

    ctx->pc = 0x177490u;

    // 0x177490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177498: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17749c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17749cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1774a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1774a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1774a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1774a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1774a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1774ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1774acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1774b0: 0xc04f76e  jal         func_13DDB8
    ctx->pc = 0x1774B0u;
    SET_GPR_U32(ctx, 31, 0x1774B8u);
    ctx->pc = 0x1774B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774B0u;
    // 0x1774b4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DDB8u, 0x1774B0u, 0x1774B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774B8u;
label_1774b8:
    // 0x1774b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1774b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1774bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774c0: 0xc04f74a  jal         func_13DD28
    ctx->pc = 0x1774C0u;
    SET_GPR_U32(ctx, 31, 0x1774C8u);
    ctx->pc = 0x1774C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774C0u;
    // 0x1774c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD28u, 0x1774C0u, 0x1774C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774C8u;
label_1774c8:
    // 0x1774c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1774c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774cc: 0xc05e022  jal         func_178088
    ctx->pc = 0x1774CCu;
    SET_GPR_U32(ctx, 31, 0x1774D4u);
    ctx->pc = 0x1774D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774CCu;
    // 0x1774d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178088u, 0x1774CCu, 0x1774D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774D4u;
label_1774d4:
    // 0x1774d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1774d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1774d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774dc: 0xc04f744  jal         func_13DD10
    ctx->pc = 0x1774DCu;
    SET_GPR_U32(ctx, 31, 0x1774E4u);
    ctx->pc = 0x1774E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774DCu;
    // 0x1774e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD10u, 0x1774DCu, 0x1774E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774E4u;
label_1774e4:
    // 0x1774e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1774e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1774e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774ec: 0xc05e028  jal         func_1780A0
    ctx->pc = 0x1774ECu;
    SET_GPR_U32(ctx, 31, 0x1774F4u);
    ctx->pc = 0x1774F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774ECu;
    // 0x1774f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780A0u, 0x1774ECu, 0x1774F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1774F4u;
label_1774f4:
    // 0x1774f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1774f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1774f8: 0xc05e03a  jal         func_1780E8
    ctx->pc = 0x1774F8u;
    SET_GPR_U32(ctx, 31, 0x177500u);
    ctx->pc = 0x1774FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1774F8u;
    // 0x1774fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780E8u, 0x1774F8u, 0x177500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177500u;
label_177500:
    // 0x177500: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x177500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x177504: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177508: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x177508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17750c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17750cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177510: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x177510u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x177514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177518: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x177518u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17751c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17751cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177520: 0x3e00008  jr          $ra
    ctx->pc = 0x177520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177520u;
        // 0x177524: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177528u;
}
