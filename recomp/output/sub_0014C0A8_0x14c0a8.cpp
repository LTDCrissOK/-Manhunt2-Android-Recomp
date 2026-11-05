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

// Function: sub_0014C0A8
// Address: 0x14c0a8 - 0x14c130
void sub_0014C0A8_0x14c0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C0A8_0x14c0a8");
#endif

    switch (ctx->pc) {
        case 0x14c0c4u: goto label_14c0c4;
        case 0x14c0e0u: goto label_14c0e0;
        case 0x14c0f4u: goto label_14c0f4;
        case 0x14c108u: goto label_14c108;
        case 0x14c118u: goto label_14c118;
        default: break;
    }

    ctx->pc = 0x14c0a8u;

    // 0x14c0a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14c0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14c0ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14c0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14c0b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14c0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14c0b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14c0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c0b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14c0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14c0bc: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x14C0BCu;
    SET_GPR_U32(ctx, 31, 0x14C0C4u);
    ctx->pc = 0x14C0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C0BCu;
    // 0x14c0c0: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x14C0BCu, 0x14C0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0C4u;
label_14c0c4:
    // 0x14c0c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14c0c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c0c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c0cc: 0x56220013  bnel        $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14C0CCu;
    {
        const bool branch_taken_0x14c0cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x14c0cc) {
            ctx->pc = 0x14C0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C0CCu;
            // 0x14c0d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C11Cu;
            goto label_14c11c;
        }
    }
    ctx->pc = 0x14C0D4u;
    // 0x14c0d4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14c0d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14c0d8: 0xc053068  jal         func_14C1A0
    ctx->pc = 0x14C0D8u;
    SET_GPR_U32(ctx, 31, 0x14C0E0u);
    ctx->pc = 0x14C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C0D8u;
    // 0x14c0dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C1A0u, 0x14C0D8u, 0x14C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0E0u;
label_14c0e0:
    // 0x14c0e0: 0x5451000e  bnel        $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x14C0E0u;
    {
        const bool branch_taken_0x14c0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x14c0e0) {
            ctx->pc = 0x14C0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C0E0u;
            // 0x14c0e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C11Cu;
            goto label_14c11c;
        }
    }
    ctx->pc = 0x14C0E8u;
    // 0x14c0e8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14c0e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14c0ec: 0xc0530b4  jal         func_14C2D0
    ctx->pc = 0x14C0ECu;
    SET_GPR_U32(ctx, 31, 0x14C0F4u);
    ctx->pc = 0x14C0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C0ECu;
    // 0x14c0f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C2D0u, 0x14C0ECu, 0x14C0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C0F4u;
label_14c0f4:
    // 0x14c0f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C0F4u;
    {
        const bool branch_taken_0x14c0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C0F4u;
        // 0x14c0f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c0f4) {
            ctx->pc = 0x14C118u;
            goto label_14c118;
        }
    }
    ctx->pc = 0x14C0FCu;
    // 0x14c0fc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14c0fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14c100: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14C100u;
    SET_GPR_U32(ctx, 31, 0x14C108u);
    ctx->pc = 0x14C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C100u;
    // 0x14c104: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14C100u, 0x14C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C108u;
label_14c108:
    // 0x14c108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c10c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x14c10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14c110: 0xc053062  jal         func_14C188
    ctx->pc = 0x14C110u;
    SET_GPR_U32(ctx, 31, 0x14C118u);
    ctx->pc = 0x14C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C110u;
    // 0x14c114: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C188u, 0x14C110u, 0x14C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C118u;
label_14c118:
    // 0x14c118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14c118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14c11c:
    // 0x14c11c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14c11cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14c120: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14c120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c124: 0x3e00008  jr          $ra
    ctx->pc = 0x14C124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C124u;
        // 0x14c128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C12Cu;
    // 0x14c12c: 0x0  nop
    ctx->pc = 0x14c12cu;
    // NOP
    ctx->pc = 0x14c130u;
}
