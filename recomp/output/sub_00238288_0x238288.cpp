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

// Function: sub_00238288
// Address: 0x238288 - 0x2383e8
void sub_00238288_0x238288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238288_0x238288");
#endif

    switch (ctx->pc) {
        case 0x2382e8u: goto label_2382e8;
        case 0x23832cu: goto label_23832c;
        case 0x238338u: goto label_238338;
        case 0x238384u: goto label_238384;
        case 0x238394u: goto label_238394;
        case 0x2383a4u: goto label_2383a4;
        case 0x2383c4u: goto label_2383c4;
        default: break;
    }

    ctx->pc = 0x238288u;

    // 0x238288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23828c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23828cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x238290: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x238290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238294: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238298: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x238298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23829c: 0x2642fe5d  addiu       $v0, $s2, -0x1A3
    ctx->pc = 0x23829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966877));
    // 0x2382a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2382a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2382a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2382a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2382a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2382a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2382ac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2382acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2382b0: 0x2c42000c  sltiu       $v0, $v0, 0xC
    ctx->pc = 0x2382b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2382b4: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2382B4u;
    {
        const bool branch_taken_0x2382b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2382B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382B4u;
        // 0x2382b8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382b4) {
            ctx->pc = 0x2383B4u;
            goto label_2383b4;
        }
    }
    ctx->pc = 0x2382BCu;
    // 0x2382bc: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x2382bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x2382c0: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2382c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2382c4: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x2382c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x2382c8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2382c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2382cc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2382CCu;
    {
        const bool branch_taken_0x2382cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2382D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382CCu;
        // 0x2382d0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382cc) {
            ctx->pc = 0x238308u;
            goto label_238308;
        }
    }
    ctx->pc = 0x2382D4u;
    // 0x2382d4: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2382d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2382d8: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2382D8u;
    {
        const bool branch_taken_0x2382d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2382d8) {
            ctx->pc = 0x2382DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2382D8u;
            // 0x2382dc: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23830Cu;
            goto label_23830c;
        }
    }
    ctx->pc = 0x2382E0u;
    // 0x2382e0: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2382E0u;
    SET_GPR_U32(ctx, 31, 0x2382E8u);
    ctx->pc = 0x2382E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2382E0u;
    // 0x2382e4: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2382E0u, 0x2382E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2382E8u;
label_2382e8:
    // 0x2382e8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2382E8u;
    {
        const bool branch_taken_0x2382e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2382e8) {
            ctx->pc = 0x2382ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2382E8u;
            // 0x2382ec: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23830Cu;
            goto label_23830c;
        }
    }
    ctx->pc = 0x2382F0u;
    // 0x2382f0: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2382f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2382f4: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2382f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2382f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2382F8u;
    {
        const bool branch_taken_0x2382f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2382FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2382F8u;
        // 0x2382fc: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2382f8) {
            ctx->pc = 0x238308u;
            goto label_238308;
        }
    }
    ctx->pc = 0x238300u;
    // 0x238300: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x238300u;
    {
        const bool branch_taken_0x238300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x238300) {
            ctx->pc = 0x23830Cu;
            goto label_23830c;
        }
    }
    ctx->pc = 0x238308u;
label_238308:
    // 0x238308: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x238308u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23830c:
    // 0x23830c: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23830Cu;
    {
        const bool branch_taken_0x23830c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x23830c) {
            ctx->pc = 0x238310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23830Cu;
            // 0x238310: 0x8e250334  lw          $a1, 0x334($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238320u;
            goto label_238320;
        }
    }
    ctx->pc = 0x238314u;
    // 0x238314: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x238314u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x238318: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x238318u;
    {
        const bool branch_taken_0x238318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238318u;
        // 0x23831c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238318) {
            ctx->pc = 0x2383C4u;
            goto label_2383c4;
        }
    }
    ctx->pc = 0x238320u;
label_238320:
    // 0x238320: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x238320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x238324: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238324u;
    {
        const bool branch_taken_0x238324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238324u;
        // 0x238328: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238324) {
            ctx->pc = 0x238334u;
            goto label_238334;
        }
    }
    ctx->pc = 0x23832Cu;
label_23832c:
    // 0x23832c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23832Cu;
    {
        const bool branch_taken_0x23832c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23832Cu;
        // 0x238330: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23832c) {
            ctx->pc = 0x238354u;
            goto label_238354;
        }
    }
    ctx->pc = 0x238334u;
label_238334:
    // 0x238334: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x238334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
label_238338:
    // 0x238338: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x238338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23833c: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23833Cu;
    {
        const bool branch_taken_0x23833c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23833Cu;
        // 0x238340: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23833c) {
            ctx->pc = 0x23832Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23832c;
        }
    }
    ctx->pc = 0x238344u;
    // 0x238344: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x238344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x238348: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x238348u;
    {
        const bool branch_taken_0x238348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238348u;
        // 0x23834c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238348) {
            ctx->pc = 0x238338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_238338;
        }
    }
    ctx->pc = 0x238350u;
    // 0x238350: 0x8cb001e8  lw          $s0, 0x1E8($a1)
    ctx->pc = 0x238350u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_238354:
    // 0x238354: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x238354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238358: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x238358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x23835c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x23835cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x238360: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238364: 0x0  nop
    ctx->pc = 0x238364u;
    // NOP
    // 0x238368: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x238368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23836c: 0x0  nop
    ctx->pc = 0x23836cu;
    // NOP
    // 0x238370: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x238370u;
    {
        const bool branch_taken_0x238370 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x238374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238370u;
        // 0x238374: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238370) {
            ctx->pc = 0x2383ACu;
            goto label_2383ac;
        }
    }
    ctx->pc = 0x238378u;
    // 0x238378: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x238378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x23837c: 0xc06bff0  jal         func_1AFFC0
    ctx->pc = 0x23837Cu;
    SET_GPR_U32(ctx, 31, 0x238384u);
    ctx->pc = 0x238380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23837Cu;
    // 0x238380: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFFC0u, 0x23837Cu, 0x238384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238384u;
label_238384:
    // 0x238384: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x238384u;
    {
        const bool branch_taken_0x238384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238384) {
            ctx->pc = 0x238388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238384u;
            // 0x238388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2383C4u;
            goto label_2383c4;
        }
    }
    ctx->pc = 0x23838Cu;
    // 0x23838c: 0xc06c61a  jal         func_1B1868
    ctx->pc = 0x23838Cu;
    SET_GPR_U32(ctx, 31, 0x238394u);
    ctx->pc = 0x238390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23838Cu;
    // 0x238390: 0x8e240338  lw          $a0, 0x338($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1868u, 0x23838Cu, 0x238394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238394u;
label_238394:
    // 0x238394: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x238394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x238398: 0xc60c001c  lwc1        $f12, 0x1C($s0)
    ctx->pc = 0x238398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23839c: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x23839Cu;
    SET_GPR_U32(ctx, 31, 0x2383A4u);
    ctx->pc = 0x2383A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23839Cu;
    // 0x2383a0: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x23839Cu, 0x2383A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2383A4u;
label_2383a4:
    // 0x2383a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2383A4u;
    {
        const bool branch_taken_0x2383a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2383A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383A4u;
        // 0x2383a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383a4) {
            ctx->pc = 0x2383C4u;
            goto label_2383c4;
        }
    }
    ctx->pc = 0x2383ACu;
label_2383ac:
    // 0x2383ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2383ACu;
    {
        const bool branch_taken_0x2383ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2383B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383ACu;
        // 0x2383b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383ac) {
            ctx->pc = 0x2383C4u;
            goto label_2383c4;
        }
    }
    ctx->pc = 0x2383B4u;
label_2383b4:
    // 0x2383b4: 0x8e240338  lw          $a0, 0x338($s1)
    ctx->pc = 0x2383b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x2383b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2383b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383bc: 0xc06bff0  jal         func_1AFFC0
    ctx->pc = 0x2383BCu;
    SET_GPR_U32(ctx, 31, 0x2383C4u);
    ctx->pc = 0x2383C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383BCu;
    // 0x2383c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFFC0u, 0x2383BCu, 0x2383C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2383C4u;
label_2383c4:
    // 0x2383c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2383c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2383c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2383c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2383cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2383ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2383d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2383d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2383d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2383d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2383d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2383d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2383dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2383DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2383E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383DCu;
        // 0x2383e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2383DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2383E4u;
    // 0x2383e4: 0x0  nop
    ctx->pc = 0x2383e4u;
    // NOP
    ctx->pc = 0x2383e8u;
}
