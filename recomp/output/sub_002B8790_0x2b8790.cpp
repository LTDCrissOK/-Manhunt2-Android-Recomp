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

// Function: sub_002B8790
// Address: 0x2b8790 - 0x2b8858
void sub_002B8790_0x2b8790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8790_0x2b8790");
#endif

    switch (ctx->pc) {
        case 0x2b87b0u: goto label_2b87b0;
        case 0x2b87b8u: goto label_2b87b8;
        case 0x2b87d0u: goto label_2b87d0;
        case 0x2b87e8u: goto label_2b87e8;
        case 0x2b87f0u: goto label_2b87f0;
        case 0x2b8804u: goto label_2b8804;
        case 0x2b8820u: goto label_2b8820;
        case 0x2b8838u: goto label_2b8838;
        default: break;
    }

    ctx->pc = 0x2b8790u;

    // 0x2b8790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b8794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b8794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8798: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b8798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b879c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b879cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b87a0: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2b87a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2b87a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b87a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b87a8: 0xc0c29a4  jal         func_30A690
    ctx->pc = 0x2B87A8u;
    SET_GPR_U32(ctx, 31, 0x2B87B0u);
    ctx->pc = 0x2B87ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B87A8u;
    // 0x2b87ac: 0x8e24a300  lw          $a0, -0x5D00($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A690u, 0x2B87A8u, 0x2B87B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B87B0u;
label_2b87b0:
    // 0x2b87b0: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B87B0u;
    SET_GPR_U32(ctx, 31, 0x2B87B8u);
    ctx->pc = 0x2B87B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B87B0u;
    // 0x2b87b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B87B0u, 0x2B87B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B87B8u;
label_2b87b8:
    // 0x2b87b8: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2b87b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2b87bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b87bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b87c0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2b87c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b87c4: 0x34c6c788  ori         $a2, $a2, 0xC788
    ctx->pc = 0x2b87c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)51080);
    // 0x2b87c8: 0xc0acf0c  jal         func_2B3C30
    ctx->pc = 0x2B87C8u;
    SET_GPR_U32(ctx, 31, 0x2B87D0u);
    ctx->pc = 0x2B87CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B87C8u;
    // 0x2b87cc: 0x240700b1  addiu       $a3, $zero, 0xB1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3C30u, 0x2B87C8u, 0x2B87D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B87D0u;
label_2b87d0:
    // 0x2b87d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b87d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b87d4: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B87D4u;
    {
        const bool branch_taken_0x2b87d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B87D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87D4u;
        // 0x2b87d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b87d4) {
            ctx->pc = 0x2B87FCu;
            goto label_2b87fc;
        }
    }
    ctx->pc = 0x2B87DCu;
    // 0x2b87dc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2b87dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2b87e0: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B87E0u;
    SET_GPR_U32(ctx, 31, 0x2B87E8u);
    ctx->pc = 0x2B87E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B87E0u;
    // 0x2b87e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B87E0u, 0x2B87E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B87E8u;
label_2b87e8:
    // 0x2b87e8: 0xc0c29a4  jal         func_30A690
    ctx->pc = 0x2B87E8u;
    SET_GPR_U32(ctx, 31, 0x2B87F0u);
    ctx->pc = 0x2B87ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B87E8u;
    // 0x2b87ec: 0x8e24a300  lw          $a0, -0x5D00($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A690u, 0x2B87E8u, 0x2B87F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B87F0u;
label_2b87f0:
    // 0x2b87f0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2b87f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b87f4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B87F4u;
    {
        const bool branch_taken_0x2b87f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B87F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B87F4u;
        // 0x2b87f8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b87f4) {
            ctx->pc = 0x2B8840u;
            goto label_2b8840;
        }
    }
    ctx->pc = 0x2B87FCu;
label_2b87fc:
    // 0x2b87fc: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B87FCu;
    SET_GPR_U32(ctx, 31, 0x2B8804u);
    ctx->pc = 0x2B8800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B87FCu;
    // 0x2b8800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B87FCu, 0x2B8804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8804u;
label_2b8804:
    // 0x2b8804: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2b8804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2b8808: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2b8808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b880c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B880Cu;
    {
        const bool branch_taken_0x2b880c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B880Cu;
        // 0x2b8810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b880c) {
            ctx->pc = 0x2B882Cu;
            goto label_2b882c;
        }
    }
    ctx->pc = 0x2B8814u;
    // 0x2b8814: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x2b8814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2b8818: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B8818u;
    SET_GPR_U32(ctx, 31, 0x2B8820u);
    ctx->pc = 0x2B881Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8818u;
    // 0x2b881c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B8818u, 0x2B8820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8820u;
label_2b8820:
    // 0x2b8820: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x2b8820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2b8824: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B8824u;
    {
        const bool branch_taken_0x2b8824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8824u;
        // 0x2b8828: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8824) {
            ctx->pc = 0x2B8840u;
            goto label_2b8840;
        }
    }
    ctx->pc = 0x2B882Cu;
label_2b882c:
    // 0x2b882c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2b882cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b8830: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B8830u;
    SET_GPR_U32(ctx, 31, 0x2B8838u);
    ctx->pc = 0x2B8834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8830u;
    // 0x2b8834: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B8830u, 0x2B8838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8838u;
label_2b8838:
    // 0x2b8838: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2b8838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2b883c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2b883cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2b8840:
    // 0x2b8840: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b8840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b8844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b8848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b884c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b884cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8850: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8850u;
        // 0x2b8854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8858u;
}
