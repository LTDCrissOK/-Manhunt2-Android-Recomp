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

// Function: sub_002794E8
// Address: 0x2794e8 - 0x2796a0
void sub_002794E8_0x2794e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002794E8_0x2794e8");
#endif

    switch (ctx->pc) {
        case 0x279518u: goto label_279518;
        case 0x279548u: goto label_279548;
        case 0x27958cu: goto label_27958c;
        case 0x2795b8u: goto label_2795b8;
        case 0x2795bcu: goto label_2795bc;
        case 0x279608u: goto label_279608;
        case 0x279634u: goto label_279634;
        case 0x279640u: goto label_279640;
        case 0x279678u: goto label_279678;
        default: break;
    }

    ctx->pc = 0x2794e8u;

    // 0x2794e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2794e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2794ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2794ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2794f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2794f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2794f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2794f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2794f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2794f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2794fc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2794fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x279500: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x279500u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279504: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x279504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x279508: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x279508u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27950c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x27950cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x279510: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x279510u;
    SET_GPR_U32(ctx, 31, 0x279518u);
    ctx->pc = 0x279514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279510u;
    // 0x279514: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x279510u, 0x279518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279518u;
label_279518:
    // 0x279518: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x27951c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x27951cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x279520: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279524: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x279524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x279528: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279528u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27952c: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27952Cu;
    {
        const bool branch_taken_0x27952c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27952c) {
            ctx->pc = 0x279530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27952Cu;
            // 0x279530: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279548u;
            goto label_279548;
        }
    }
    ctx->pc = 0x279534u;
    // 0x279534: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279538: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x279538u;
    {
        const bool branch_taken_0x279538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x27953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279538u;
        // 0x27953c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279538) {
            ctx->pc = 0x279578u;
            goto label_279578;
        }
    }
    ctx->pc = 0x279540u;
    // 0x279540: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279544: 0x0  nop
    ctx->pc = 0x279544u;
    // NOP
label_279548:
    // 0x279548: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x279548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x27954c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x27954cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279550: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x279550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279554: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279558: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x279558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x27955c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27955cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x279560: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x279560u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279564: 0x5064fff8  beql        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x279564u;
    {
        const bool branch_taken_0x279564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x279564) {
            ctx->pc = 0x279568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279564u;
            // 0x279568: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279548;
        }
    }
    ctx->pc = 0x27956Cu;
    // 0x27956c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x27956cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279570: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x279570u;
    {
        const bool branch_taken_0x279570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x279570) {
            ctx->pc = 0x279574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279570u;
            // 0x279574: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279548;
        }
    }
    ctx->pc = 0x279578u;
label_279578:
    // 0x279578: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x279578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27957c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27957cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279580: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x279580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x279584: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x279584u;
    SET_GPR_U32(ctx, 31, 0x27958Cu);
    ctx->pc = 0x279588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279584u;
    // 0x279588: 0x26720004  addiu       $s2, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x279584u, 0x27958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27958Cu;
label_27958c:
    // 0x27958c: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x27958cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279590: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x279590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279594: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x279594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x279598: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x279598u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27959c: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27959Cu;
    {
        const bool branch_taken_0x27959c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27959c) {
            ctx->pc = 0x2795A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27959Cu;
            // 0x2795a0: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2795B8u;
            goto label_2795b8;
        }
    }
    ctx->pc = 0x2795A4u;
    // 0x2795a4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2795a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2795a8: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2795A8u;
    {
        const bool branch_taken_0x2795a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2795a8) {
            ctx->pc = 0x2795ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2795A8u;
            // 0x2795ac: 0x8e040114  lw          $a0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2795E4u;
            goto label_2795e4;
        }
    }
    ctx->pc = 0x2795B0u;
    // 0x2795b0: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2795b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2795b4: 0x0  nop
    ctx->pc = 0x2795b4u;
    // NOP
label_2795b8:
    // 0x2795b8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2795b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2795bc:
    // 0x2795bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2795bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2795c0: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x2795c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x2795c4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2795c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2795c8: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2795c8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2795cc: 0x5083fffb  beql        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2795CCu;
    {
        const bool branch_taken_0x2795cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2795cc) {
            ctx->pc = 0x2795D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2795CCu;
            // 0x2795d0: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2795BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2795bc;
        }
    }
    ctx->pc = 0x2795D4u;
    // 0x2795d4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2795d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2795d8: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2795D8u;
    {
        const bool branch_taken_0x2795d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2795d8) {
            ctx->pc = 0x2795DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2795D8u;
            // 0x2795dc: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2795B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2795b8;
        }
    }
    ctx->pc = 0x2795E0u;
    // 0x2795e0: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x2795e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_2795e4:
    // 0x2795e4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2795e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2795e8: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x2795e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2795ec: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x2795ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2795f0: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2795F0u;
    {
        const bool branch_taken_0x2795f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2795F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795F0u;
        // 0x2795f4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795f0) {
            ctx->pc = 0x279628u;
            goto label_279628;
        }
    }
    ctx->pc = 0x2795F8u;
    // 0x2795f8: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2795F8u;
    {
        const bool branch_taken_0x2795f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2795FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2795F8u;
        // 0x2795fc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795f8) {
            ctx->pc = 0x279628u;
            goto label_279628;
        }
    }
    ctx->pc = 0x279600u;
    // 0x279600: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x279600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279604: 0x0  nop
    ctx->pc = 0x279604u;
    // NOP
label_279608:
    // 0x279608: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x279608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27960c: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x27960cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x279610: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x279610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x279614: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x279614u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279618: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x279618u;
    {
        const bool branch_taken_0x279618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x27961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279618u;
        // 0x27961c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279618) {
            ctx->pc = 0x27962Cu;
            goto label_27962c;
        }
    }
    ctx->pc = 0x279620u;
    // 0x279620: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x279620u;
    {
        const bool branch_taken_0x279620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x279624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279620u;
        // 0x279624: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279620) {
            ctx->pc = 0x279608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279608;
        }
    }
    ctx->pc = 0x279628u;
label_279628:
    // 0x279628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27962c:
    // 0x27962c: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x27962Cu;
    SET_GPR_U32(ctx, 31, 0x279634u);
    ctx->pc = 0x279630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27962Cu;
    // 0x279630: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x27962Cu, 0x279634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279634u;
label_279634:
    // 0x279634: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279638: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x279638u;
    {
        const bool branch_taken_0x279638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279638u;
        // 0x27963c: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279638) {
            ctx->pc = 0x27964Cu;
            goto label_27964c;
        }
    }
    ctx->pc = 0x279640u;
label_279640:
    // 0x279640: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279644: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279648: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x279648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_27964c:
    // 0x27964c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27964cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x279650: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279650u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279654: 0x5083fffa  beql        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279654u;
    {
        const bool branch_taken_0x279654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279654) {
            ctx->pc = 0x279658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279654u;
            // 0x279658: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279640;
        }
    }
    ctx->pc = 0x27965Cu;
    // 0x27965c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x27965cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279660: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x279660u;
    {
        const bool branch_taken_0x279660 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x279660) {
            ctx->pc = 0x279664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279660u;
            // 0x279664: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279640;
        }
    }
    ctx->pc = 0x279668u;
    // 0x279668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27966c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27966cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279670: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x279670u;
    SET_GPR_U32(ctx, 31, 0x279678u);
    ctx->pc = 0x279674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279670u;
    // 0x279674: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x279670u, 0x279678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279678u;
label_279678:
    // 0x279678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x279678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27967c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27967cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x279680: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x279680u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279684: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x279684u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x279688: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x279688u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27968c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x27968cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x279690: 0x3e00008  jr          $ra
    ctx->pc = 0x279690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279690u;
        // 0x279694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279698u;
    // 0x279698: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x279698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27969c: 0x0  nop
    ctx->pc = 0x27969cu;
    // NOP
    ctx->pc = 0x2796a0u;
}
