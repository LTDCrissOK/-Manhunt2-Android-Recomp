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

// Function: sub_003A5360
// Address: 0x3a5360 - 0x3a5420
void sub_003A5360_0x3a5360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5360_0x3a5360");
#endif

    switch (ctx->pc) {
        case 0x3a5390u: goto label_3a5390;
        case 0x3a53c8u: goto label_3a53c8;
        case 0x3a53e4u: goto label_3a53e4;
        case 0x3a53f4u: goto label_3a53f4;
        case 0x3a5404u: goto label_3a5404;
        default: break;
    }

    ctx->pc = 0x3a5360u;

    // 0x3a5360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a5360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a5364: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a5364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3a5368: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3a5368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a536c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3a536cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3a5370: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a5370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5374: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3a5374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3a5378: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a5378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a537c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3a537cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a5380: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a5380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5384: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3a5384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3a5388: 0xc0f0a7c  jal         func_3C29F0
    ctx->pc = 0x3A5388u;
    SET_GPR_U32(ctx, 31, 0x3A5390u);
    ctx->pc = 0x3A538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5388u;
    // 0x3a538c: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C29F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C29F0u, 0x3A5388u, 0x3A5390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5390u;
label_3a5390:
    // 0x3a5390: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a5390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a5394: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a5394u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3a5398: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a5398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a539c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a539cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3a53a0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3a53a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a53a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3a53a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a53a8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3a53a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a53ac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A53ACu;
    {
        const bool branch_taken_0x3a53ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A53ACu;
        // 0x3a53b0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a53ac) {
            ctx->pc = 0x3A53B8u;
            goto label_3a53b8;
        }
    }
    ctx->pc = 0x3A53B4u;
    // 0x3a53b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3a53b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3a53b8:
    // 0x3a53b8: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A53B8u;
    {
        const bool branch_taken_0x3a53b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a53b8) {
            ctx->pc = 0x3A53BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A53B8u;
            // 0x3a53bc: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A53D8u;
            goto label_3a53d8;
        }
    }
    ctx->pc = 0x3A53C0u;
    // 0x3a53c0: 0xc0f0a7c  jal         func_3C29F0
    ctx->pc = 0x3A53C0u;
    SET_GPR_U32(ctx, 31, 0x3A53C8u);
    ctx->pc = 0x3A53C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A53C0u;
    // 0x3a53c4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C29F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C29F0u, 0x3A53C0u, 0x3A53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A53C8u;
label_3a53c8:
    // 0x3a53c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a53c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a53cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a53ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3a53d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3a53d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3a53d4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a53d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a53d8:
    // 0x3a53d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a53d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a53dc: 0xc0e5ea0  jal         func_397A80
    ctx->pc = 0x3A53DCu;
    SET_GPR_U32(ctx, 31, 0x3A53E4u);
    ctx->pc = 0x3A53E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A53DCu;
    // 0x3a53e0: 0x2484d9e0  addiu       $a0, $a0, -0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397A80u, 0x3A53DCu, 0x3A53E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A53E4u;
label_3a53e4:
    // 0x3a53e4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a53e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a53e8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3a53e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a53ec: 0xc0e5ea0  jal         func_397A80
    ctx->pc = 0x3A53ECu;
    SET_GPR_U32(ctx, 31, 0x3A53F4u);
    ctx->pc = 0x3A53F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A53ECu;
    // 0x3a53f0: 0x2484d9f8  addiu       $a0, $a0, -0x2608 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397A80u, 0x3A53ECu, 0x3A53F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A53F4u;
label_3a53f4:
    // 0x3a53f4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a53f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a53f8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3a53f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a53fc: 0xc0e5ea0  jal         func_397A80
    ctx->pc = 0x3A53FCu;
    SET_GPR_U32(ctx, 31, 0x3A5404u);
    ctx->pc = 0x3A5400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A53FCu;
    // 0x3a5400: 0x2484da08  addiu       $a0, $a0, -0x25F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397A80u, 0x3A53FCu, 0x3A5404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5404u;
label_3a5404:
    // 0x3a5404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a5404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5408: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a5408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a540c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3a540cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a5410: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3a5410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a5414: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3a5414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a5418: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5418u;
        // 0x3a541c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5420u;
}
