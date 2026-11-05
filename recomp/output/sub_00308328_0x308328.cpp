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

// Function: sub_00308328
// Address: 0x308328 - 0x308420
void sub_00308328_0x308328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308328_0x308328");
#endif

    switch (ctx->pc) {
        case 0x308418u: goto label_308418;
        default: break;
    }

    ctx->pc = 0x308328u;

    // 0x308328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30832c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x30832cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x308334: 0x8cc40070  lw          $a0, 0x70($a2)
    ctx->pc = 0x308334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x308338: 0x8cc20060  lw          $v0, 0x60($a2)
    ctx->pc = 0x308338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x30833c: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x30833cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x308340: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x308340u;
    {
        const bool branch_taken_0x308340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x308344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308340u;
        // 0x308344: 0x8c450234  lw          $a1, 0x234($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308340) {
            ctx->pc = 0x308430u;
            return;
        }
    }
    ctx->pc = 0x308348u;
    // 0x308348: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x308348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x30834c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30834cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x308350: 0x24421e80  addiu       $v0, $v0, 0x1E80
    ctx->pc = 0x308350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7808));
    // 0x308354: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x308354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x308358: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x308358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30835c: 0x800008  jr          $a0
    ctx->pc = 0x30835Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x308364u: goto label_308364;
            case 0x3083A0u: goto label_3083a0;
            case 0x3083DCu: goto label_3083dc;
            case 0x308408u: goto label_308408;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30835Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x308364u;
label_308364:
    // 0x308364: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x308364u;
    {
        const bool branch_taken_0x308364 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x308364) {
            ctx->pc = 0x308368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308364u;
            // 0x308368: 0x8cc40060  lw          $a0, 0x60($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308398u;
            goto label_308398;
        }
    }
    ctx->pc = 0x30836Cu;
    // 0x30836c: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x30836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x308370: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x308370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x308374: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x308374u;
    {
        const bool branch_taken_0x308374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308374u;
        // 0x308378: 0x8cc40060  lw          $a0, 0x60($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308374) {
            ctx->pc = 0x308398u;
            goto label_308398;
        }
    }
    ctx->pc = 0x30837Cu;
    // 0x30837c: 0x8ca2036c  lw          $v0, 0x36C($a1)
    ctx->pc = 0x30837cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 876)));
    // 0x308380: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x308380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x308384: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x308384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x308388: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x308388u;
    {
        const bool branch_taken_0x308388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x308388) {
            ctx->pc = 0x308398u;
            goto label_308398;
        }
    }
    ctx->pc = 0x308390u;
    // 0x308390: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x308390u;
    {
        const bool branch_taken_0x308390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308390u;
        // 0x308394: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308390) {
            ctx->pc = 0x308410u;
            goto label_308410;
        }
    }
    ctx->pc = 0x308398u;
label_308398:
    // 0x308398: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x308398u;
    {
        const bool branch_taken_0x308398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308398u;
        // 0x30839c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308398) {
            ctx->pc = 0x308410u;
            goto label_308410;
        }
    }
    ctx->pc = 0x3083A0u;
label_3083a0:
    // 0x3083a0: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3083A0u;
    {
        const bool branch_taken_0x3083a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3083a0) {
            ctx->pc = 0x3083A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3083A0u;
            // 0x3083a4: 0x8cc40060  lw          $a0, 0x60($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3083D4u;
            goto label_3083d4;
        }
    }
    ctx->pc = 0x3083A8u;
    // 0x3083a8: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x3083a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x3083ac: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x3083acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3083b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3083B0u;
    {
        const bool branch_taken_0x3083b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3083B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3083B0u;
        // 0x3083b4: 0x8cc40060  lw          $a0, 0x60($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3083b0) {
            ctx->pc = 0x3083D4u;
            goto label_3083d4;
        }
    }
    ctx->pc = 0x3083B8u;
    // 0x3083b8: 0x8ca2036c  lw          $v0, 0x36C($a1)
    ctx->pc = 0x3083b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 876)));
    // 0x3083bc: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3083bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x3083c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3083c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3083c4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3083C4u;
    {
        const bool branch_taken_0x3083c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3083c4) {
            ctx->pc = 0x3083D4u;
            goto label_3083d4;
        }
    }
    ctx->pc = 0x3083CCu;
    // 0x3083cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3083CCu;
    {
        const bool branch_taken_0x3083cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3083D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3083CCu;
        // 0x3083d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3083cc) {
            ctx->pc = 0x308410u;
            goto label_308410;
        }
    }
    ctx->pc = 0x3083D4u;
label_3083d4:
    // 0x3083d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3083D4u;
    {
        const bool branch_taken_0x3083d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3083D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3083D4u;
        // 0x3083d8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3083d4) {
            ctx->pc = 0x308410u;
            goto label_308410;
        }
    }
    ctx->pc = 0x3083DCu;
label_3083dc:
    // 0x3083dc: 0x8ca20550  lw          $v0, 0x550($a1)
    ctx->pc = 0x3083dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1360)));
    // 0x3083e0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3083E0u;
    {
        const bool branch_taken_0x3083e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3083e0) {
            ctx->pc = 0x3083E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3083E0u;
            // 0x3083e4: 0x8cc40060  lw          $a0, 0x60($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308400u;
            goto label_308400;
        }
    }
    ctx->pc = 0x3083E8u;
    // 0x3083e8: 0x8ca20554  lw          $v0, 0x554($a1)
    ctx->pc = 0x3083e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1364)));
    // 0x3083ec: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3083ECu;
    {
        const bool branch_taken_0x3083ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3083ec) {
            ctx->pc = 0x3083F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3083ECu;
            // 0x3083f0: 0x8cc40060  lw          $a0, 0x60($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308400u;
            goto label_308400;
        }
    }
    ctx->pc = 0x3083F4u;
    // 0x3083f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3083f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3083f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3083F8u;
    {
        const bool branch_taken_0x3083f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3083FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3083F8u;
        // 0x3083fc: 0xacc20070  sw          $v0, 0x70($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3083f8) {
            ctx->pc = 0x308430u;
            return;
        }
    }
    ctx->pc = 0x308400u;
label_308400:
    // 0x308400: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x308400u;
    {
        const bool branch_taken_0x308400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308400u;
        // 0x308404: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308400) {
            ctx->pc = 0x308410u;
            goto label_308410;
        }
    }
    ctx->pc = 0x308408u;
label_308408:
    // 0x308408: 0x8cc40060  lw          $a0, 0x60($a2)
    ctx->pc = 0x308408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x30840c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30840cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_308410:
    // 0x308410: 0xc0c2286  jal         func_308A18
    ctx->pc = 0x308410u;
    SET_GPR_U32(ctx, 31, 0x308418u);
    ctx->pc = 0x308414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308410u;
    // 0x308414: 0xac8202e0  sw          $v0, 0x2E0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 736), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308A18u, 0x308410u, 0x308418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308418u;
label_308418:
    // 0x308418: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x308418u;
    {
        const bool branch_taken_0x308418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308418u;
        // 0x30841c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308418) {
            ctx->pc = 0x308434u;
            return;
        }
    }
    ctx->pc = 0x308420u;
}
