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

// Function: sub_00352548
// Address: 0x352548 - 0x352608
void sub_00352548_0x352548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352548_0x352548");
#endif

    switch (ctx->pc) {
        case 0x352588u: goto label_352588;
        case 0x3525a4u: goto label_3525a4;
        case 0x3525ccu: goto label_3525cc;
        case 0x3525e0u: goto label_3525e0;
        case 0x3525f0u: goto label_3525f0;
        default: break;
    }

    ctx->pc = 0x352548u;

    // 0x352548: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x352548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35254c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x35254cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x352550: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x352550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x352554: 0x24424500  addiu       $v0, $v0, 0x4500
    ctx->pc = 0x352554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17664));
    // 0x352558: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x352558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35255c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35255cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x352560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x352564: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x352564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x352568: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x352568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x35256c: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x35256cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x352570: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x352570u;
    {
        const bool branch_taken_0x352570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x352574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352570u;
        // 0x352574: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352570) {
            ctx->pc = 0x3525CCu;
            goto label_3525cc;
        }
    }
    ctx->pc = 0x352578u;
    // 0x352578: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x352578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x35257c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x35257Cu;
    {
        const bool branch_taken_0x35257c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35257Cu;
        // 0x352580: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35257c) {
            ctx->pc = 0x3525B8u;
            goto label_3525b8;
        }
    }
    ctx->pc = 0x352584u;
    // 0x352584: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x352584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
label_352588:
    // 0x352588: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x352588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35258c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35258cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x352590: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x352590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x352594: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x352594u;
    {
        const bool branch_taken_0x352594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x352594) {
            ctx->pc = 0x352598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x352594u;
            // 0x352598: 0x8e220148  lw          $v0, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3525A8u;
            goto label_3525a8;
        }
    }
    ctx->pc = 0x35259Cu;
    // 0x35259c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x35259Cu;
    SET_GPR_U32(ctx, 31, 0x3525A4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x35259Cu, 0x3525A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3525A4u;
label_3525a4:
    // 0x3525a4: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x3525a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
label_3525a8:
    // 0x3525a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3525a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3525ac: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3525acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3525b0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x3525B0u;
    {
        const bool branch_taken_0x3525b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3525b0) {
            ctx->pc = 0x3525B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3525B0u;
            // 0x3525b4: 0x8e23014c  lw          $v1, 0x14C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x352588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352588;
        }
    }
    ctx->pc = 0x3525B8u;
label_3525b8:
    // 0x3525b8: 0x8e24014c  lw          $a0, 0x14C($s1)
    ctx->pc = 0x3525b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x3525bc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3525BCu;
    {
        const bool branch_taken_0x3525bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3525bc) {
            ctx->pc = 0x3525C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3525BCu;
            // 0x3525c0: 0x8e240150  lw          $a0, 0x150($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3525D0u;
            goto label_3525d0;
        }
    }
    ctx->pc = 0x3525C4u;
    // 0x3525c4: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3525C4u;
    SET_GPR_U32(ctx, 31, 0x3525CCu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3525C4u, 0x3525CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3525CCu;
label_3525cc:
    // 0x3525cc: 0x8e240150  lw          $a0, 0x150($s1)
    ctx->pc = 0x3525ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_3525d0:
    // 0x3525d0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3525D0u;
    {
        const bool branch_taken_0x3525d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3525d0) {
            ctx->pc = 0x3525D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3525D0u;
            // 0x3525d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3525E8u;
            goto label_3525e8;
        }
    }
    ctx->pc = 0x3525D8u;
    // 0x3525d8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3525D8u;
    SET_GPR_U32(ctx, 31, 0x3525E0u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3525D8u, 0x3525E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3525E0u;
label_3525e0:
    // 0x3525e0: 0xae200150  sw          $zero, 0x150($s1)
    ctx->pc = 0x3525e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 0));
    // 0x3525e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3525e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3525e8:
    // 0x3525e8: 0xc0d14fa  jal         func_3453E8
    ctx->pc = 0x3525E8u;
    SET_GPR_U32(ctx, 31, 0x3525F0u);
    ctx->pc = 0x3525ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3525E8u;
    // 0x3525ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3453E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3453E8u, 0x3525E8u, 0x3525F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3525F0u;
label_3525f0:
    // 0x3525f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3525f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3525f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3525f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3525f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3525f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3525fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3525fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352600: 0x3e00008  jr          $ra
    ctx->pc = 0x352600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352600u;
        // 0x352604: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352608u;
}
