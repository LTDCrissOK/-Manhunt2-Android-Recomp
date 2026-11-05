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

// Function: sub_001138A0
// Address: 0x1138a0 - 0x113940
void sub_001138A0_0x1138a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001138A0_0x1138a0");
#endif

    switch (ctx->pc) {
        case 0x1138c8u: goto label_1138c8;
        case 0x1138dcu: goto label_1138dc;
        case 0x1138e8u: goto label_1138e8;
        case 0x1138f4u: goto label_1138f4;
        case 0x113900u: goto label_113900;
        case 0x113910u: goto label_113910;
        case 0x113920u: goto label_113920;
        default: break;
    }

    ctx->pc = 0x1138a0u;

    // 0x1138a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1138a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1138a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1138a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1138a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1138a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1138ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1138acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1138b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1138b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1138b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1138b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1138bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1138bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1138c0: 0xc0449c8  jal         func_112720
    ctx->pc = 0x1138C0u;
    SET_GPR_U32(ctx, 31, 0x1138C8u);
    ctx->pc = 0x1138C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1138C0u;
    // 0x1138c4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112720u, 0x1138C0u, 0x1138C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138C8u;
label_1138c8:
    // 0x1138c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1138c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138cc: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1138ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1138d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1138d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138d4: 0xc045612  jal         func_115848
    ctx->pc = 0x1138D4u;
    SET_GPR_U32(ctx, 31, 0x1138DCu);
    ctx->pc = 0x1138D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1138D4u;
    // 0x1138d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x1138D4u, 0x1138DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138DCu;
label_1138dc:
    // 0x1138dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1138dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138e0: 0xc045668  jal         func_1159A0
    ctx->pc = 0x1138E0u;
    SET_GPR_U32(ctx, 31, 0x1138E8u);
    ctx->pc = 0x1138E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1138E0u;
    // 0x1138e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x1138E0u, 0x1138E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138E8u;
label_1138e8:
    // 0x1138e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1138e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138ec: 0xc0456b2  jal         func_115AC8
    ctx->pc = 0x1138ECu;
    SET_GPR_U32(ctx, 31, 0x1138F4u);
    ctx->pc = 0x1138F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1138ECu;
    // 0x1138f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AC8u, 0x1138ECu, 0x1138F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138F4u;
label_1138f4:
    // 0x1138f4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1138f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1138f8: 0xc04b2a2  jal         func_12CA88
    ctx->pc = 0x1138F8u;
    SET_GPR_U32(ctx, 31, 0x113900u);
    ctx->pc = 0x1138FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1138F8u;
    // 0x1138fc: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA88u, 0x1138F8u, 0x113900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113900u;
label_113900:
    // 0x113900: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x113900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113908: 0xc0456a0  jal         func_115A80
    ctx->pc = 0x113908u;
    SET_GPR_U32(ctx, 31, 0x113910u);
    ctx->pc = 0x11390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113908u;
    // 0x11390c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115A80u, 0x113908u, 0x113910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113910u;
label_113910:
    // 0x113910: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x113910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113914: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x113914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113918: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x113918u;
    SET_GPR_U32(ctx, 31, 0x113920u);
    ctx->pc = 0x11391Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113918u;
    // 0x11391c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x113918u, 0x113920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113920u;
label_113920:
    // 0x113920: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x113920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113928: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x113928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11392c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11392cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113930: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x113930u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x113934: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x113934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113938: 0x3e00008  jr          $ra
    ctx->pc = 0x113938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113938u;
        // 0x11393c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113940u;
}
