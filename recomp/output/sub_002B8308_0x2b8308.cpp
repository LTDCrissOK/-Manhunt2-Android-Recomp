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

// Function: sub_002B8308
// Address: 0x2b8308 - 0x2b83a0
void sub_002B8308_0x2b8308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8308_0x2b8308");
#endif

    switch (ctx->pc) {
        case 0x2b831cu: goto label_2b831c;
        case 0x2b832cu: goto label_2b832c;
        case 0x2b833cu: goto label_2b833c;
        case 0x2b8354u: goto label_2b8354;
        case 0x2b8378u: goto label_2b8378;
        default: break;
    }

    ctx->pc = 0x2b8308u;

    // 0x2b8308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b830c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b830cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b8310: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b8310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b8314: 0xc0ad896  jal         func_2B6258
    ctx->pc = 0x2B8314u;
    SET_GPR_U32(ctx, 31, 0x2B831Cu);
    ctx->pc = 0x2B8318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8314u;
    // 0x2b8318: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6258u, 0x2B8314u, 0x2B831Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B831Cu;
label_2b831c:
    // 0x2b831c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B831Cu;
    {
        const bool branch_taken_0x2b831c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b831c) {
            ctx->pc = 0x2B8334u;
            goto label_2b8334;
        }
    }
    ctx->pc = 0x2B8324u;
    // 0x2b8324: 0xc0ad844  jal         func_2B6110
    ctx->pc = 0x2B8324u;
    SET_GPR_U32(ctx, 31, 0x2B832Cu);
    ctx->pc = 0x2B8328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8324u;
    // 0x2b8328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6110u, 0x2B8324u, 0x2B832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B832Cu;
label_2b832c:
    // 0x2b832c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B832Cu;
    {
        const bool branch_taken_0x2b832c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b832c) {
            ctx->pc = 0x2B833Cu;
            goto label_2b833c;
        }
    }
    ctx->pc = 0x2B8334u;
label_2b8334:
    // 0x2b8334: 0xc0ad83a  jal         func_2B60E8
    ctx->pc = 0x2B8334u;
    SET_GPR_U32(ctx, 31, 0x2B833Cu);
    ctx->pc = 0x2B8338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8334u;
    // 0x2b8338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B60E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B60E8u, 0x2B8334u, 0x2B833Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B833Cu;
label_2b833c:
    // 0x2b833c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B833Cu;
    {
        const bool branch_taken_0x2b833c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b833c) {
            ctx->pc = 0x2B8340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B833Cu;
            // 0x2b8340: 0x8e0358f8  lw          $v1, 0x58F8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8360u;
            goto label_2b8360;
        }
    }
    ctx->pc = 0x2B8344u;
    // 0x2b8344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8348: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2b8348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b834c: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B834Cu;
    SET_GPR_U32(ctx, 31, 0x2B8354u);
    ctx->pc = 0x2B8350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B834Cu;
    // 0x2b8350: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B834Cu, 0x2B8354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8354u;
label_2b8354:
    // 0x2b8354: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2b8354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2b8358: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B8358u;
    {
        const bool branch_taken_0x2b8358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8358u;
        // 0x2b835c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8358) {
            ctx->pc = 0x2B838Cu;
            goto label_2b838c;
        }
    }
    ctx->pc = 0x2B8360u;
label_2b8360:
    // 0x2b8360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8364: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B8364u;
    {
        const bool branch_taken_0x2b8364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8364u;
        // 0x2b8368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8364) {
            ctx->pc = 0x2B8384u;
            goto label_2b8384;
        }
    }
    ctx->pc = 0x2B836Cu;
    // 0x2b836c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2b836cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2b8370: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B8370u;
    SET_GPR_U32(ctx, 31, 0x2B8378u);
    ctx->pc = 0x2B8374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8370u;
    // 0x2b8374: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B8370u, 0x2B8378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8378u;
label_2b8378:
    // 0x2b8378: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2b8378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2b837c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B837Cu;
    {
        const bool branch_taken_0x2b837c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B837Cu;
        // 0x2b8380: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b837c) {
            ctx->pc = 0x2B838Cu;
            goto label_2b838c;
        }
    }
    ctx->pc = 0x2B8384u;
label_2b8384:
    // 0x2b8384: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2b8384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b8388: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2b8388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2b838c:
    // 0x2b838c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b838cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b8390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8394: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b8394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8398: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8398u;
        // 0x2b839c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B83A0u;
}
