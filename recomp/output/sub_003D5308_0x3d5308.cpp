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

// Function: sub_003D5308
// Address: 0x3d5308 - 0x3d5398
void sub_003D5308_0x3d5308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5308_0x3d5308");
#endif

    switch (ctx->pc) {
        case 0x3d5324u: goto label_3d5324;
        case 0x3d5350u: goto label_3d5350;
        default: break;
    }

    ctx->pc = 0x3d5308u;

    // 0x3d5308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d5308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d530c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d5310: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d5310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d5314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d5318: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d5318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d531c: 0xc0f5b8a  jal         func_3D6E28
    ctx->pc = 0x3D531Cu;
    SET_GPR_U32(ctx, 31, 0x3D5324u);
    ctx->pc = 0x3D5320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D531Cu;
    // 0x3d5320: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6E28u, 0x3D531Cu, 0x3D5324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5324u;
label_3d5324:
    // 0x3d5324: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d5324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5328: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D5328u;
    {
        const bool branch_taken_0x3d5328 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5328) {
            ctx->pc = 0x3D532Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5328u;
            // 0x3d532c: 0x96040298  lhu         $a0, 0x298($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5338u;
            goto label_3d5338;
        }
    }
    ctx->pc = 0x3D5330u;
    // 0x3d5330: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3D5330u;
    {
        const bool branch_taken_0x3d5330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5330u;
        // 0x3d5334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5330) {
            ctx->pc = 0x3D5380u;
            goto label_3d5380;
        }
    }
    ctx->pc = 0x3D5338u;
label_3d5338:
    // 0x3d5338: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x3d5338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x3d533c: 0x8043029c  lb          $v1, 0x29C($v0)
    ctx->pc = 0x3d533cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 668)));
    // 0x3d5340: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D5340u;
    {
        const bool branch_taken_0x3d5340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5340u;
        // 0x3d5344: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5340) {
            ctx->pc = 0x3D5364u;
            goto label_3d5364;
        }
    }
    ctx->pc = 0x3D5348u;
    // 0x3d5348: 0xc0f5480  jal         func_3D5200
    ctx->pc = 0x3D5348u;
    SET_GPR_U32(ctx, 31, 0x3D5350u);
    ctx->pc = 0x3D534Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5348u;
    // 0x3d534c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5200u, 0x3D5348u, 0x3D5350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5350u;
label_3d5350:
    // 0x3d5350: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x3d5350u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d5354: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3d5354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3d5358: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3d5358u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3d535c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D535Cu;
    {
        const bool branch_taken_0x3d535c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D535Cu;
        // 0x3d5360: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d535c) {
            ctx->pc = 0x3D536Cu;
            goto label_3d536c;
        }
    }
    ctx->pc = 0x3D5364u;
label_3d5364:
    // 0x3d5364: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3d5364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d5368: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3d5368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3d536c:
    // 0x3d536c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d536cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d5370: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d5370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5374: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3d5374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3d5378: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d5378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d537c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d537cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3d5380:
    // 0x3d5380: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d5380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d5384: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d5384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d5388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d5388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d538c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D538Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D538Cu;
        // 0x3d5390: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D538Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5394u;
    // 0x3d5394: 0x0  nop
    ctx->pc = 0x3d5394u;
    // NOP
    ctx->pc = 0x3d5398u;
}
