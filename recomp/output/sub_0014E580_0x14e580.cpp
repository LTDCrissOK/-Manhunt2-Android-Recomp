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

// Function: sub_0014E580
// Address: 0x14e580 - 0x14e630
void sub_0014E580_0x14e580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E580_0x14e580");
#endif

    switch (ctx->pc) {
        case 0x14e598u: goto label_14e598;
        case 0x14e5a4u: goto label_14e5a4;
        case 0x14e5b8u: goto label_14e5b8;
        case 0x14e5d4u: goto label_14e5d4;
        case 0x14e5e0u: goto label_14e5e0;
        case 0x14e5f4u: goto label_14e5f4;
        case 0x14e608u: goto label_14e608;
        case 0x14e618u: goto label_14e618;
        default: break;
    }

    ctx->pc = 0x14e580u;

    // 0x14e580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14e580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14e584: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14e584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14e588: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14e588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14e58c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14e58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14e590: 0xc053aaa  jal         func_14EAA8
    ctx->pc = 0x14E590u;
    SET_GPR_U32(ctx, 31, 0x14E598u);
    ctx->pc = 0x14E594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E590u;
    // 0x14e594: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EAA8u, 0x14E590u, 0x14E598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E598u;
label_14e598:
    // 0x14e598: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e598u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14e59c: 0xc053b06  jal         func_14EC18
    ctx->pc = 0x14E59Cu;
    SET_GPR_U32(ctx, 31, 0x14E5A4u);
    ctx->pc = 0x14E5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E59Cu;
    // 0x14e5a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC18u, 0x14E59Cu, 0x14E5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5A4u;
label_14e5a4:
    // 0x14e5a4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e5a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14e5a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14e5a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5b0: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x14E5B0u;
    SET_GPR_U32(ctx, 31, 0x14E5B8u);
    ctx->pc = 0x14E5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5B0u;
    // 0x14e5b4: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x14E5B0u, 0x14E5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5B8u;
label_14e5b8:
    // 0x14e5b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e5bc: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14E5BCu;
    {
        const bool branch_taken_0x14e5bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x14E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5BCu;
        // 0x14e5c0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5bc) {
            ctx->pc = 0x14E5E8u;
            goto label_14e5e8;
        }
    }
    ctx->pc = 0x14E5C4u;
    // 0x14e5c4: 0x16220012  bne         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14E5C4u;
    {
        const bool branch_taken_0x14e5c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x14E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5C4u;
        // 0x14e5c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5c4) {
            ctx->pc = 0x14E610u;
            goto label_14e610;
        }
    }
    ctx->pc = 0x14E5CCu;
    // 0x14e5cc: 0xc054286  jal         func_150A18
    ctx->pc = 0x14E5CCu;
    SET_GPR_U32(ctx, 31, 0x14E5D4u);
    ctx->pc = 0x14E5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5CCu;
    // 0x14e5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150A18u, 0x14E5CCu, 0x14E5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5D4u;
label_14e5d4:
    // 0x14e5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5d8: 0xc054942  jal         func_152508
    ctx->pc = 0x14E5D8u;
    SET_GPR_U32(ctx, 31, 0x14E5E0u);
    ctx->pc = 0x14E5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5D8u;
    // 0x14e5dc: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152508u, 0x14E5D8u, 0x14E5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5E0u;
label_14e5e0:
    // 0x14e5e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14E5E0u;
    {
        const bool branch_taken_0x14e5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5E0u;
        // 0x14e5e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5e0) {
            ctx->pc = 0x14E61Cu;
            goto label_14e61c;
        }
    }
    ctx->pc = 0x14E5E8u;
label_14e5e8:
    // 0x14e5e8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14e5e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14e5ec: 0xc053da2  jal         func_14F688
    ctx->pc = 0x14E5ECu;
    SET_GPR_U32(ctx, 31, 0x14E5F4u);
    ctx->pc = 0x14E5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5ECu;
    // 0x14e5f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F688u, 0x14E5ECu, 0x14E5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5F4u;
label_14e5f4:
    // 0x14e5f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14E5F4u;
    {
        const bool branch_taken_0x14e5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5F4u;
        // 0x14e5f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5f4) {
            ctx->pc = 0x14E610u;
            goto label_14e610;
        }
    }
    ctx->pc = 0x14E5FCu;
    // 0x14e5fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14e5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e600: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14E600u;
    SET_GPR_U32(ctx, 31, 0x14E608u);
    ctx->pc = 0x14E604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E600u;
    // 0x14e604: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14E600u, 0x14E608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E608u;
label_14e608:
    // 0x14e608: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14E608u;
    {
        const bool branch_taken_0x14e608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E608u;
        // 0x14e60c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e608) {
            ctx->pc = 0x14E61Cu;
            goto label_14e61c;
        }
    }
    ctx->pc = 0x14E610u;
label_14e610:
    // 0x14e610: 0xc04da5c  jal         func_136970
    ctx->pc = 0x14E610u;
    SET_GPR_U32(ctx, 31, 0x14E618u);
    ctx->pc = 0x14E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E610u;
    // 0x14e614: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136970u, 0x14E610u, 0x14E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E618u;
label_14e618:
    // 0x14e618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e61c:
    // 0x14e61c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14e61cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14e620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14e624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14e624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e628: 0x3e00008  jr          $ra
    ctx->pc = 0x14E628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E628u;
        // 0x14e62c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E630u;
}
