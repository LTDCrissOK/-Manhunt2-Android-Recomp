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

// Function: sub_003AC3B0
// Address: 0x3ac3b0 - 0x3ac450
void sub_003AC3B0_0x3ac3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC3B0_0x3ac3b0");
#endif

    switch (ctx->pc) {
        case 0x3ac3b0u: goto label_3ac3b0;
        case 0x3ac3b4u: goto label_3ac3b4;
        case 0x3ac3b8u: goto label_3ac3b8;
        case 0x3ac3bcu: goto label_3ac3bc;
        case 0x3ac3c0u: goto label_3ac3c0;
        case 0x3ac3c4u: goto label_3ac3c4;
        case 0x3ac3c8u: goto label_3ac3c8;
        case 0x3ac3ccu: goto label_3ac3cc;
        case 0x3ac3d0u: goto label_3ac3d0;
        case 0x3ac3d4u: goto label_3ac3d4;
        case 0x3ac3d8u: goto label_3ac3d8;
        case 0x3ac3dcu: goto label_3ac3dc;
        case 0x3ac3e0u: goto label_3ac3e0;
        case 0x3ac3e4u: goto label_3ac3e4;
        case 0x3ac3e8u: goto label_3ac3e8;
        case 0x3ac3ecu: goto label_3ac3ec;
        case 0x3ac3f0u: goto label_3ac3f0;
        case 0x3ac3f4u: goto label_3ac3f4;
        case 0x3ac3f8u: goto label_3ac3f8;
        case 0x3ac3fcu: goto label_3ac3fc;
        case 0x3ac400u: goto label_3ac400;
        case 0x3ac404u: goto label_3ac404;
        case 0x3ac408u: goto label_3ac408;
        case 0x3ac40cu: goto label_3ac40c;
        case 0x3ac410u: goto label_3ac410;
        case 0x3ac414u: goto label_3ac414;
        case 0x3ac418u: goto label_3ac418;
        case 0x3ac41cu: goto label_3ac41c;
        case 0x3ac420u: goto label_3ac420;
        case 0x3ac424u: goto label_3ac424;
        case 0x3ac428u: goto label_3ac428;
        case 0x3ac42cu: goto label_3ac42c;
        case 0x3ac430u: goto label_3ac430;
        case 0x3ac434u: goto label_3ac434;
        case 0x3ac438u: goto label_3ac438;
        case 0x3ac43cu: goto label_3ac43c;
        case 0x3ac440u: goto label_3ac440;
        case 0x3ac444u: goto label_3ac444;
        case 0x3ac448u: goto label_3ac448;
        case 0x3ac44cu: goto label_3ac44c;
        default: break;
    }

    ctx->pc = 0x3ac3b0u;

label_3ac3b0:
    // 0x3ac3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ac3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ac3b4:
    // 0x3ac3b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ac3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ac3b8:
    // 0x3ac3b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ac3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ac3bc:
    // 0x3ac3bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ac3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3ac3c0:
    // 0x3ac3c0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_3ac3c4:
    if (ctx->pc == 0x3AC3C4u) {
        ctx->pc = 0x3AC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3C0u;
        // 0x3ac3c4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC3C8u;
        goto label_3ac3c8;
    }
    ctx->pc = 0x3AC3C0u;
    {
        const bool branch_taken_0x3ac3c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3C0u;
        // 0x3ac3c4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac3c0) {
            ctx->pc = 0x3AC3E8u;
            goto label_3ac3e8;
        }
    }
    ctx->pc = 0x3AC3C8u;
label_3ac3c8:
    // 0x3ac3c8: 0x0  nop
    ctx->pc = 0x3ac3c8u;
    // NOP
label_3ac3cc:
    // 0x3ac3cc: 0x0  nop
    ctx->pc = 0x3ac3ccu;
    // NOP
label_3ac3d0:
    // 0x3ac3d0: 0x0  nop
    ctx->pc = 0x3ac3d0u;
    // NOP
label_3ac3d4:
    // 0x3ac3d4: 0x0  nop
    ctx->pc = 0x3ac3d4u;
    // NOP
label_3ac3d8:
    // 0x3ac3d8: 0x0  nop
    ctx->pc = 0x3ac3d8u;
    // NOP
label_3ac3dc:
    // 0x3ac3dc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_3ac3e0:
    if (ctx->pc == 0x3AC3E0u) {
        ctx->pc = 0x3AC3E4u;
        goto label_3ac3e4;
    }
    ctx->pc = 0x3AC3DCu;
    {
        const bool branch_taken_0x3ac3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac3dc) {
            ctx->pc = 0x3AC3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac3c8;
        }
    }
    ctx->pc = 0x3AC3E4u;
label_3ac3e4:
    // 0x3ac3e4: 0x0  nop
    ctx->pc = 0x3ac3e4u;
    // NOP
label_3ac3e8:
    // 0x3ac3e8: 0xc0ea7d8  jal         func_3A9F60
label_3ac3ec:
    if (ctx->pc == 0x3AC3ECu) {
        ctx->pc = 0x3AC3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3E8u;
        // 0x3ac3ec: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC3F0u;
        goto label_3ac3f0;
    }
    ctx->pc = 0x3AC3E8u;
    SET_GPR_U32(ctx, 31, 0x3AC3F0u);
    ctx->pc = 0x3AC3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC3E8u;
    // 0x3ac3ec: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AC3E8u, 0x3AC3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC3F0u;
label_3ac3f0:
    // 0x3ac3f0: 0x5a200012  blezl       $s1, . + 4 + (0x12 << 2)
label_3ac3f4:
    if (ctx->pc == 0x3AC3F4u) {
        ctx->pc = 0x3AC3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3F0u;
        // 0x3ac3f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC3F8u;
        goto label_3ac3f8;
    }
    ctx->pc = 0x3AC3F0u;
    {
        const bool branch_taken_0x3ac3f0 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x3ac3f0) {
            ctx->pc = 0x3AC3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC3F0u;
            // 0x3ac3f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC43Cu;
            goto label_3ac43c;
        }
    }
    ctx->pc = 0x3AC3F8u;
label_3ac3f8:
    // 0x3ac3f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ac3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ac3fc:
    // 0x3ac3fc: 0x0  nop
    ctx->pc = 0x3ac3fcu;
    // NOP
label_3ac400:
    // 0x3ac400: 0x24b00010  addiu       $s0, $a1, 0x10
    ctx->pc = 0x3ac400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_3ac404:
    // 0x3ac404: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3ac404u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_3ac408:
    // 0x3ac408: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_3ac40c:
    if (ctx->pc == 0x3AC40Cu) {
        ctx->pc = 0x3AC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC408u;
        // 0x3ac40c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC410u;
        goto label_3ac410;
    }
    ctx->pc = 0x3AC408u;
    {
        const bool branch_taken_0x3ac408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac408) {
            ctx->pc = 0x3AC40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC408u;
            // 0x3ac40c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC430u;
            goto label_3ac430;
        }
    }
    ctx->pc = 0x3AC410u;
label_3ac410:
    // 0x3ac410: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x3ac410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3ac414:
    // 0x3ac414: 0x24a60018  addiu       $a2, $a1, 0x18
    ctx->pc = 0x3ac414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_3ac418:
    // 0x3ac418: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3ac418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3ac41c:
    // 0x3ac41c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ac41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ac420:
    // 0x3ac420: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3ac420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3ac424:
    // 0x3ac424: 0x40f809  jalr        $v0
label_3ac428:
    if (ctx->pc == 0x3AC428u) {
        ctx->pc = 0x3AC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC424u;
        // 0x3ac428: 0x80a50011  lb          $a1, 0x11($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC42Cu;
        goto label_3ac42c;
    }
    ctx->pc = 0x3AC424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC42Cu);
        ctx->pc = 0x3AC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC424u;
        // 0x3ac428: 0x80a50011  lb          $a1, 0x11($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC424u, 0x3AC42Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC42Cu;
label_3ac42c:
    // 0x3ac42c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3ac42cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3ac430:
    // 0x3ac430: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
label_3ac434:
    if (ctx->pc == 0x3AC434u) {
        ctx->pc = 0x3AC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC430u;
        // 0x3ac434: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC438u;
        goto label_3ac438;
    }
    ctx->pc = 0x3AC430u;
    {
        const bool branch_taken_0x3ac430 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC430u;
        // 0x3ac434: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac430) {
            ctx->pc = 0x3AC400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac400;
        }
    }
    ctx->pc = 0x3AC438u;
label_3ac438:
    // 0x3ac438: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ac438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ac43c:
    // 0x3ac43c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ac43cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ac440:
    // 0x3ac440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ac440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac444:
    // 0x3ac444: 0x80ea7de  j           func_3A9F78
label_3ac448:
    if (ctx->pc == 0x3AC448u) {
        ctx->pc = 0x3AC448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC444u;
        // 0x3ac448: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC44Cu;
        goto label_3ac44c;
    }
    ctx->pc = 0x3AC444u;
    ctx->pc = 0x3AC448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC444u;
    // 0x3ac448: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3AC44Cu;
label_3ac44c:
    // 0x3ac44c: 0x0  nop
    ctx->pc = 0x3ac44cu;
    // NOP
    ctx->pc = 0x3ac450u;
}
