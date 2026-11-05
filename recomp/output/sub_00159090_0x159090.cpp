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

// Function: sub_00159090
// Address: 0x159090 - 0x159130
void sub_00159090_0x159090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159090_0x159090");
#endif

    switch (ctx->pc) {
        case 0x1590b4u: goto label_1590b4;
        case 0x1590d0u: goto label_1590d0;
        case 0x1590dcu: goto label_1590dc;
        case 0x1590ecu: goto label_1590ec;
        case 0x1590fcu: goto label_1590fc;
        case 0x159104u: goto label_159104;
        case 0x159118u: goto label_159118;
        default: break;
    }

    ctx->pc = 0x159090u;

    // 0x159090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x159094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159098: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x159098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15909c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x15909cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1590a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1590a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1590a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1590a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1590a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1590ac: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x1590ACu;
    SET_GPR_U32(ctx, 31, 0x1590B4u);
    ctx->pc = 0x1590B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1590ACu;
    // 0x1590b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x1590ACu, 0x1590B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1590B4u;
label_1590b4:
    // 0x1590b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1590b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590b8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1590b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1590bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1590bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1590c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1590c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1590c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1590c8: 0xc04d74a  jal         func_135D28
    ctx->pc = 0x1590C8u;
    SET_GPR_U32(ctx, 31, 0x1590D0u);
    ctx->pc = 0x1590CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1590C8u;
    // 0x1590cc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D28u, 0x1590C8u, 0x1590D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1590D0u;
label_1590d0:
    // 0x1590d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1590d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590d4: 0xc04f12a  jal         func_13C4A8
    ctx->pc = 0x1590D4u;
    SET_GPR_U32(ctx, 31, 0x1590DCu);
    ctx->pc = 0x1590D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1590D4u;
    // 0x1590d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4A8u, 0x1590D4u, 0x1590DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1590DCu;
label_1590dc:
    // 0x1590dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1590dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1590e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590e4: 0xc04f10c  jal         func_13C430
    ctx->pc = 0x1590E4u;
    SET_GPR_U32(ctx, 31, 0x1590ECu);
    ctx->pc = 0x1590E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1590E4u;
    // 0x1590e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C430u, 0x1590E4u, 0x1590ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1590ECu;
label_1590ec:
    // 0x1590ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1590ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1590f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1590f4: 0xc04f118  jal         func_13C460
    ctx->pc = 0x1590F4u;
    SET_GPR_U32(ctx, 31, 0x1590FCu);
    ctx->pc = 0x1590F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1590F4u;
    // 0x1590f8: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x1590F4u, 0x1590FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1590FCu;
label_1590fc:
    // 0x1590fc: 0xc04d7c0  jal         func_135F00
    ctx->pc = 0x1590FCu;
    SET_GPR_U32(ctx, 31, 0x159104u);
    ctx->pc = 0x159100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1590FCu;
    // 0x159100: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F00u, 0x1590FCu, 0x159104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159104u;
label_159104:
    // 0x159104: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x159104u;
    {
        const bool branch_taken_0x159104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159104u;
        // 0x159108: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159104) {
            ctx->pc = 0x15911Cu;
            goto label_15911c;
        }
    }
    ctx->pc = 0x15910Cu;
    // 0x15910c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15910cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159110: 0xc04f42e  jal         func_13D0B8
    ctx->pc = 0x159110u;
    SET_GPR_U32(ctx, 31, 0x159118u);
    ctx->pc = 0x159114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159110u;
    // 0x159114: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D0B8u, 0x159110u, 0x159118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159118u;
label_159118:
    // 0x159118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x159118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15911c:
    // 0x15911c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15911cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x159120: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x159120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159124: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x159124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x159128: 0x3e00008  jr          $ra
    ctx->pc = 0x159128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159128u;
        // 0x15912c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159130u;
}
