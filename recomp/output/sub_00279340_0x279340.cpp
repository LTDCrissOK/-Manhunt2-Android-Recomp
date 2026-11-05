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

// Function: sub_00279340
// Address: 0x279340 - 0x2794e8
void sub_00279340_0x279340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279340_0x279340");
#endif

    switch (ctx->pc) {
        case 0x279370u: goto label_279370;
        case 0x2793a0u: goto label_2793a0;
        case 0x2793e0u: goto label_2793e0;
        case 0x279408u: goto label_279408;
        case 0x27940cu: goto label_27940c;
        case 0x279458u: goto label_279458;
        case 0x279484u: goto label_279484;
        case 0x279490u: goto label_279490;
        case 0x2794c4u: goto label_2794c4;
        default: break;
    }

    ctx->pc = 0x279340u;

    // 0x279340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x279344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x279348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27934c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27934cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x279350: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x279350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x279354: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x279354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x279358: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x279358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27935c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27935cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x279360: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x279360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279364: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x279364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x279368: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x279368u;
    SET_GPR_U32(ctx, 31, 0x279370u);
    ctx->pc = 0x27936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279368u;
    // 0x27936c: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x279368u, 0x279370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279370u;
label_279370:
    // 0x279370: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279374: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x279374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x279378: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27937c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x27937cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x279380: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279380u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279384: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x279384u;
    {
        const bool branch_taken_0x279384 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x279384) {
            ctx->pc = 0x279388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279384u;
            // 0x279388: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2793A0u;
            goto label_2793a0;
        }
    }
    ctx->pc = 0x27938Cu;
    // 0x27938c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x27938cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279390: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x279390u;
    {
        const bool branch_taken_0x279390 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x279394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279390u;
        // 0x279394: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279390) {
            ctx->pc = 0x2793D0u;
            goto label_2793d0;
        }
    }
    ctx->pc = 0x279398u;
    // 0x279398: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x27939c: 0x0  nop
    ctx->pc = 0x27939cu;
    // NOP
label_2793a0:
    // 0x2793a0: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x2793a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2793a4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2793a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2793a8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2793a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2793ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2793acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2793b0: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x2793b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x2793b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2793b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2793b8: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2793b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2793bc: 0x5064fff8  beql        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2793BCu;
    {
        const bool branch_taken_0x2793bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2793bc) {
            ctx->pc = 0x2793C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2793BCu;
            // 0x2793c0: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2793A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2793a0;
        }
    }
    ctx->pc = 0x2793C4u;
    // 0x2793c4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2793c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2793c8: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2793C8u;
    {
        const bool branch_taken_0x2793c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2793c8) {
            ctx->pc = 0x2793CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2793C8u;
            // 0x2793cc: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2793A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2793a0;
        }
    }
    ctx->pc = 0x2793D0u;
label_2793d0:
    // 0x2793d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2793d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2793d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2793d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2793d8: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x2793D8u;
    SET_GPR_U32(ctx, 31, 0x2793E0u);
    ctx->pc = 0x2793DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2793D8u;
    // 0x2793dc: 0x24a60004  addiu       $a2, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x2793D8u, 0x2793E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2793E0u;
label_2793e0:
    // 0x2793e0: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x2793e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2793e4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2793e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2793e8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2793e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2793ec: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2793ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2793f0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2793F0u;
    {
        const bool branch_taken_0x2793f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2793f0) {
            ctx->pc = 0x2793F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2793F0u;
            // 0x2793f4: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279408u;
            goto label_279408;
        }
    }
    ctx->pc = 0x2793F8u;
    // 0x2793f8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2793f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2793fc: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2793FCu;
    {
        const bool branch_taken_0x2793fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2793fc) {
            ctx->pc = 0x279400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2793FCu;
            // 0x279400: 0x8e040114  lw          $a0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279434u;
            goto label_279434;
        }
    }
    ctx->pc = 0x279404u;
    // 0x279404: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_279408:
    // 0x279408: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27940c:
    // 0x27940c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27940cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279410: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x279410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x279414: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x279414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x279418: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x279418u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27941c: 0x5083fffb  beql        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x27941Cu;
    {
        const bool branch_taken_0x27941c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27941c) {
            ctx->pc = 0x279420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27941Cu;
            // 0x279420: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27940Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27940c;
        }
    }
    ctx->pc = 0x279424u;
    // 0x279424: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x279424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279428: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x279428u;
    {
        const bool branch_taken_0x279428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x279428) {
            ctx->pc = 0x27942Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279428u;
            // 0x27942c: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279408;
        }
    }
    ctx->pc = 0x279430u;
    // 0x279430: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x279430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_279434:
    // 0x279434: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279438: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x279438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x27943c: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x27943cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279440: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x279440u;
    {
        const bool branch_taken_0x279440 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x279444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279440u;
        // 0x279444: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279440) {
            ctx->pc = 0x279478u;
            goto label_279478;
        }
    }
    ctx->pc = 0x279448u;
    // 0x279448: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x279448u;
    {
        const bool branch_taken_0x279448 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279448u;
        // 0x27944c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279448) {
            ctx->pc = 0x279478u;
            goto label_279478;
        }
    }
    ctx->pc = 0x279450u;
    // 0x279450: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x279450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279454: 0x0  nop
    ctx->pc = 0x279454u;
    // NOP
label_279458:
    // 0x279458: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x279458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27945c: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x27945cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x279460: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x279460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x279464: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x279464u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279468: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x279468u;
    {
        const bool branch_taken_0x279468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x27946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279468u;
        // 0x27946c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279468) {
            ctx->pc = 0x27947Cu;
            goto label_27947c;
        }
    }
    ctx->pc = 0x279470u;
    // 0x279470: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x279470u;
    {
        const bool branch_taken_0x279470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x279474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279470u;
        // 0x279474: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279470) {
            ctx->pc = 0x279458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279458;
        }
    }
    ctx->pc = 0x279478u;
label_279478:
    // 0x279478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27947c:
    // 0x27947c: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x27947Cu;
    SET_GPR_U32(ctx, 31, 0x279484u);
    ctx->pc = 0x279480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27947Cu;
    // 0x279480: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x27947Cu, 0x279484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279484u;
label_279484:
    // 0x279484: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x279484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x279488: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x279488u;
    {
        const bool branch_taken_0x279488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279488u;
        // 0x27948c: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279488) {
            ctx->pc = 0x27949Cu;
            goto label_27949c;
        }
    }
    ctx->pc = 0x279490u;
label_279490:
    // 0x279490: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279494: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279498: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x279498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_27949c:
    // 0x27949c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27949cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2794a0: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2794a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2794a4: 0x5083fffa  beql        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2794A4u;
    {
        const bool branch_taken_0x2794a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2794a4) {
            ctx->pc = 0x2794A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2794A4u;
            // 0x2794a8: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279490;
        }
    }
    ctx->pc = 0x2794ACu;
    // 0x2794ac: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2794acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2794b0: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2794B0u;
    {
        const bool branch_taken_0x2794b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2794b0) {
            ctx->pc = 0x2794B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2794B0u;
            // 0x2794b4: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_279490;
        }
    }
    ctx->pc = 0x2794B8u;
    // 0x2794b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2794b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2794bc: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x2794BCu;
    SET_GPR_U32(ctx, 31, 0x2794C4u);
    ctx->pc = 0x2794C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2794BCu;
    // 0x2794c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x2794BCu, 0x2794C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2794C4u;
label_2794c4:
    // 0x2794c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2794c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2794c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2794c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2794cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2794ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2794d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2794d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2794d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2794d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2794d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2794d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2794dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2794DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2794E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794DCu;
        // 0x2794e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2794DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2794E4u;
    // 0x2794e4: 0x0  nop
    ctx->pc = 0x2794e4u;
    // NOP
    ctx->pc = 0x2794e8u;
}
